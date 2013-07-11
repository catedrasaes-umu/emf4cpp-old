// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/AbstractDeclaration.cpp
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

#include "AbstractDeclaration.hpp"
#include <xpand3/SyntaxElement.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/declaration/DeclarationPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3::declaration;

// Default constructor
AbstractDeclaration::AbstractDeclaration() :
    m_owner(0), m_guard(0)
{

    m_params.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::xpand3::DeclaredParameter, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(AbstractDeclarationImpl__AbstractDeclarationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractDeclaration::~AbstractDeclaration()
{
    if (m_owner)
    {
        delete m_owner;
    }
    if (m_guard)
    {
        delete m_guard;
    }
}

/*PROTECTED REGION ID(AbstractDeclaration.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

::ecore::EBoolean AbstractDeclaration::isIsPrivate() const
{
    return m_isPrivate;
}

void AbstractDeclaration::setIsPrivate(::ecore::EBoolean _isPrivate)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_isPrivate = m_isPrivate;
#endif
    m_isPrivate = _isPrivate;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractDeclaration__isPrivate(),
                _old_isPrivate,
                m_isPrivate
        );
        eNotify(&notification);
    }
#endif
}

// References
::xpand3::File_ptr AbstractDeclaration::getOwner()
{
    return m_owner;
}

void AbstractDeclaration::setOwner(::xpand3::File_ptr _owner)
{
    ::xpand3::File_ptr _old_owner = m_owner;

    m_owner = _owner;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractDeclaration__owner(),
                _old_owner,
                m_owner
        );
        eNotify(&notification);
    }
#endif

    delete _old_owner;
}

::ecorecpp::mapping::EList< ::xpand3::DeclaredParameter >& AbstractDeclaration::getParams()
{
    return *m_params;
}

::xpand3::expression::AbstractExpression_ptr AbstractDeclaration::getGuard()
{
    return m_guard;
}

void AbstractDeclaration::setGuard(
        ::xpand3::expression::AbstractExpression_ptr _guard)
{
    ::xpand3::expression::AbstractExpression_ptr _old_guard = m_guard;

    m_guard = _guard;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractDeclaration__guard(),
                _old_guard,
                m_guard
        );
        eNotify(&notification);
    }
#endif

    delete _old_guard;
}

