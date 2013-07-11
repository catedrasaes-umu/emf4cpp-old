// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EPackage.cpp
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

#include "EPackage.hpp"
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EFactory.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::ecore;

// Default constructor
EPackage::EPackage() :
    m_eFactoryInstance(0), m_eSuperPackage(0)
{

    m_eClassifiers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EClassifier,
                    -1, true, true >(this, NULL));
    m_eSubpackages.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EPackage, -1,
                    true, true >(this, NULL));

    /*PROTECTED REGION ID(EPackageImpl__EPackageImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EPackage::~EPackage()
{
}

/*PROTECTED REGION ID(EPackage.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

::ecore::EString const& EPackage::getNsURI() const
{
    return m_nsURI;
}

void EPackage::setNsURI(::ecore::EString const& _nsURI)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_nsURI = m_nsURI;
#endif
    m_nsURI = _nsURI;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEPackage__nsURI(),
                _old_nsURI,
                m_nsURI
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& EPackage::getNsPrefix() const
{
    return m_nsPrefix;
}

void EPackage::setNsPrefix(::ecore::EString const& _nsPrefix)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_nsPrefix = m_nsPrefix;
#endif
    m_nsPrefix = _nsPrefix;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEPackage__nsPrefix(),
                _old_nsPrefix,
                m_nsPrefix
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecore::EFactory_ptr EPackage::getEFactoryInstance()
{
    return m_eFactoryInstance;
}

void EPackage::setEFactoryInstance(::ecore::EFactory_ptr _eFactoryInstance)
{
    ::ecore::EFactory_ptr _old_eFactoryInstance = m_eFactoryInstance;

    m_eFactoryInstance = _eFactoryInstance;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEPackage__eFactoryInstance(),
                _old_eFactoryInstance,
                m_eFactoryInstance
        );
        eNotify(&notification);
    }
#endif

}

::ecorecpp::mapping::EList< ::ecore::EClassifier >& EPackage::getEClassifiers()
{
    return *m_eClassifiers;
}

::ecorecpp::mapping::EList< ::ecore::EPackage >& EPackage::getESubpackages()
{
    return *m_eSubpackages;
}

::ecore::EPackage_ptr EPackage::getESuperPackage()
{
    return m_eSuperPackage;
}

void EPackage::setESuperPackage(::ecore::EPackage_ptr _eSuperPackage)
{
    ::ecore::EPackage_ptr _old_eSuperPackage = m_eSuperPackage;

    m_eSuperPackage = _eSuperPackage;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEPackage__eSuperPackage(),
                _old_eSuperPackage,
                m_eSuperPackage
        );
        eNotify(&notification);
    }
#endif

}

