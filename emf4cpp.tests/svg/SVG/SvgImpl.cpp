// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SvgImpl.cpp
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

#include "Svg.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/StructuralElement.hpp>
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::SVG;

/*PROTECTED REGION ID(SvgImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Svg::_initialize()
{
    // Supertypes
    ::SVG::StructuralElement::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_children->size(); i++)
    {
        (*m_children)[i]->_initialize();
        (*m_children)[i]->_setEContainer(this,
                ::SVG::SVGPackage::_instance()->getSvg__children());
    }

    /*PROTECTED REGION ID(SvgImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject Svg::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
    {
        _any = m_owner->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__TARGET:
    {
        _any = m_target->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__POSITION:
    {
        _any = static_cast< ::ecore::EObject* > (m_position);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
    {
        _any = static_cast< ::ecore::EObject* > (m_size);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
    {
        _any = static_cast< ::ecore::EObject* > (m_root);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__FILL:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_fill);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_viewBox);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__GROUP:
    {
        _any = static_cast< ::ecore::EObject* > (m_group);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_identifier);
    }
        return _any;
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
    {
        _any = static_cast< ::ecore::EObject* > (m_drawsMarker);
    }
        return _any;
    case ::SVG::SVGPackage::SVG__OWNER_SVG:
    {
        _any = m_owner_SVG->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::SVG__CHILDREN:
    {
        _any = m_children->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::SVG__NAMESPACE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_namespace);
    }
        return _any;
    case ::SVG::SVGPackage::SVG__VERSION:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_version);
    }
        return _any;
    case ::SVG::SVGPackage::SVG__BASEPROFILE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::toAny(
                _any, m_baseProfile);
    }
        return _any;

    }
    throw "Error";
}

void Svg::eSet(::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Element::getOwner().clear();
        ::SVG::Element::getOwner().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__TARGET:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Element::getTarget().clear();
        ::SVG::Element::getTarget().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Element::getAttribute().clear();
        ::SVG::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__POSITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::Coordinates_ptr _t1 =
                dynamic_cast< ::SVG::Coordinates_ptr > (_t0);
        ::SVG::Element::setPosition(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::Dimension_ptr _t1 = dynamic_cast< ::SVG::Dimension_ptr > (_t0);
        ::SVG::Element::setSize(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::Svg_ptr _t1 = dynamic_cast< ::SVG::Svg_ptr > (_t0);
        ::SVG::Element::setRoot(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__FILL:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_fill);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_viewBox);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__GROUP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::GroupingElement_ptr _t1 =
                dynamic_cast< ::SVG::GroupingElement_ptr > (_t0);
        ::SVG::Element::setGroup(_t1);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_identifier);
    }
        return;
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::SVG::Marker_ptr _t1 = dynamic_cast< ::SVG::Marker_ptr > (_t0);
        ::SVG::Element::setDrawsMarker(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVG__OWNER_SVG:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Svg::getOwner_SVG().clear();
        ::SVG::Svg::getOwner_SVG().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::SVG__CHILDREN:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Svg::getChildren().clear();
        ::SVG::Svg::getChildren().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::SVG__NAMESPACE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_namespace);
    }
        return;
    case ::SVG::SVGPackage::SVG__VERSION:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_version);
    }
        return;
    case ::SVG::SVGPackage::SVG__BASEPROFILE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::String >::fromAny(
                _newValue, m_baseProfile);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Svg::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ELEMENT__OWNER:
        return m_owner && m_owner->size();
    case ::SVG::SVGPackage::ELEMENT__TARGET:
        return m_target && m_target->size();
    case ::SVG::SVGPackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::SVG::SVGPackage::ELEMENT__POSITION:
        return m_position;
    case ::SVG::SVGPackage::ELEMENT__SIZE:
        return m_size;
    case ::SVG::SVGPackage::ELEMENT__ROOT:
        return m_root;
    case ::SVG::SVGPackage::ELEMENT__FILL:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_fill);
    case ::SVG::SVGPackage::ELEMENT__VIEWBOX:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_viewBox);
    case ::SVG::SVGPackage::ELEMENT__GROUP:
        return m_group;
    case ::SVG::SVGPackage::ELEMENT__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_identifier);
    case ::SVG::SVGPackage::ELEMENT__DRAWSMARKER:
        return m_drawsMarker;
    case ::SVG::SVGPackage::SVG__OWNER_SVG:
        return m_owner_SVG && m_owner_SVG->size();
    case ::SVG::SVGPackage::SVG__CHILDREN:
        return m_children && m_children->size();
    case ::SVG::SVGPackage::SVG__NAMESPACE:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_namespace);
    case ::SVG::SVGPackage::SVG__VERSION:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_version);
    case ::SVG::SVGPackage::SVG__BASEPROFILE:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::String >::is_set(
                m_baseProfile);

    }
    throw "Error";
}

void Svg::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Svg::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::SVG::SVGPackage_ptr > (::SVG::SVGPackage::_instance())->getSvg();
    return _eclass;
}

