// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Element.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Element.hpp"
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::SVG;

// Default constructor
Element::Element() :
    m_position(0), m_size(0), m_root(0), m_group(0), m_drawsMarker(0)
{

    m_owner.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::SvgFile, -1,
                    false, true >(this, NULL));
    m_target.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Use, -1, false,
                    true >(this, NULL));
    m_attribute.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Attribute, -1,
                    false, true >(this, NULL));

    /*PROTECTED REGION ID(ElementImpl__ElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Element::~Element()
{
    if (m_position)
    {
        delete m_position;
    }
    if (m_size)
    {
        delete m_size;
    }
}

/*PROTECTED REGION ID(Element.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

::PrimitiveTypes::String Element::getFill() const
{
    return m_fill;
}

void Element::setFill(::PrimitiveTypes::String _fill)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_fill = m_fill;
#endif
    m_fill = _fill;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getElement__fill(),
                _old_fill,
                m_fill
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Element::getViewBox() const
{
    return m_viewBox;
}

void Element::setViewBox(::PrimitiveTypes::String _viewBox)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_viewBox = m_viewBox;
#endif
    m_viewBox = _viewBox;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getElement__viewBox(),
                _old_viewBox,
                m_viewBox
        );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Element::getIdentifier() const
{
    return m_identifier;
}

void Element::setIdentifier(::PrimitiveTypes::String _identifier)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_identifier = m_identifier;
#endif
    m_identifier = _identifier;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getElement__identifier(),
                _old_identifier,
                m_identifier
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::SVG::SvgFile >& Element::getOwner()
{
    return *m_owner;
}

::ecorecpp::mapping::EList< ::SVG::Use >& Element::getTarget()
{
    return *m_target;
}

::ecorecpp::mapping::EList< ::SVG::Attribute >& Element::getAttribute()
{
    return *m_attribute;
}

::SVG::Coordinates_ptr Element::getPosition()
{
    return m_position;
}

void Element::setPosition(::SVG::Coordinates_ptr _position)
{
    ::SVG::Coordinates_ptr _old_position = m_position;

    m_position = _position;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getElement__position(),
                _old_position,
                m_position
        );
        eNotify(&notification);
    }
#endif

    delete _old_position;
}

::SVG::Dimension_ptr Element::getSize()
{
    return m_size;
}

void Element::setSize(::SVG::Dimension_ptr _size)
{
    ::SVG::Dimension_ptr _old_size = m_size;

    m_size = _size;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getElement__size(),
                _old_size,
                m_size
        );
        eNotify(&notification);
    }
#endif

    delete _old_size;
}

::SVG::Svg_ptr Element::getRoot()
{
    return m_root;
}

void Element::setRoot(::SVG::Svg_ptr _root)
{
    ::SVG::Svg_ptr _old_root = m_root;

    m_root = _root;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getElement__root(),
                _old_root,
                m_root
        );
        eNotify(&notification);
    }
#endif

}

::SVG::GroupingElement_ptr Element::getGroup()
{
    return m_group;
}

void Element::setGroup(::SVG::GroupingElement_ptr _group)
{
    ::SVG::GroupingElement_ptr _old_group = m_group;

    m_group = _group;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getElement__group(),
                _old_group,
                m_group
        );
        eNotify(&notification);
    }
#endif

}

::SVG::Marker_ptr Element::getDrawsMarker()
{
    return m_drawsMarker;
}

void Element::setDrawsMarker(::SVG::Marker_ptr _drawsMarker)
{
    ::SVG::Marker_ptr _old_drawsMarker = m_drawsMarker;

    m_drawsMarker = _drawsMarker;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::SVG::SVGPackage::_instance()->getElement__drawsMarker(),
                _old_drawsMarker,
                m_drawsMarker
        );
        eNotify(&notification);
    }
#endif

}

