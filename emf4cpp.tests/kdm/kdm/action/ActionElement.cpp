// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionElement.cpp
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

#include "ActionElement.hpp"
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/action/ActionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::action;

// Default constructor
ActionElement::ActionElement()
{

    m_codeElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::code::AbstractCodeElement, -1, true, false >(this,
                    NULL));
    m_actionRelation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::action::AbstractActionRelationship, -1, true, false >(
                    this, NULL));

    /*PROTECTED REGION ID(ActionElementImpl__ActionElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ActionElement::~ActionElement()
{
}

/*PROTECTED REGION ID(ActionElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

::kdm::core::String ActionElement::getKind() const
{
    return m_kind;
}

void ActionElement::setKind(::kdm::core::String _kind)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_kind = m_kind;
#endif
    m_kind = _kind;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::action::ActionPackage::_instance()->getActionElement__kind(),
                _old_kind,
                m_kind
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement >& ActionElement::getCodeElement()
{
    return *m_codeElement;
}

::ecorecpp::mapping::EList< ::kdm::action::AbstractActionRelationship >& ActionElement::getActionRelation()
{
    return *m_actionRelation;
}

