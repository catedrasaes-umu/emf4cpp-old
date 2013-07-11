// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/AggregatedRelationshipImpl.cpp
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

#include "AggregatedRelationship.hpp"
#include <kdm/core/CorePackage.hpp>
#include <kdm/core/ModelElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::core;

/*PROTECTED REGION ID(AggregatedRelationshipImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void AggregatedRelationship::_initialize()
{
    // Supertypes
    ::kdm::core::ModelElement::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(AggregatedRelationshipImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject AggregatedRelationship::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        _any = m_annotation->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        _any = m_stereotype->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        _any = m_taggedValue->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM:
    {
        _any = static_cast< ::ecore::EObject* > (m_from);
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO:
    {
        _any = static_cast< ::ecore::EObject* > (m_to);
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION:
    {
        _any = m_relation->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__DENSITY:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::Integer >::toAny(_any,
                m_density);
    }
        return _any;

    }
    throw "Error";
}

void AggregatedRelationship::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::core::Element::getAttribute().clear();
        ::kdm::core::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::core::Element::getAnnotation().clear();
        ::kdm::core::Element::getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::core::ModelElement::getStereotype().clear();
        ::kdm::core::ModelElement::getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::core::ModelElement::getTaggedValue().clear();
        ::kdm::core::ModelElement::getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::kdm::core::KDMEntity_ptr _t1 =
                dynamic_cast< ::kdm::core::KDMEntity_ptr > (_t0);
        ::kdm::core::AggregatedRelationship::setFrom(_t1);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::kdm::core::KDMEntity_ptr _t1 =
                dynamic_cast< ::kdm::core::KDMEntity_ptr > (_t0);
        ::kdm::core::AggregatedRelationship::setTo(_t1);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::core::AggregatedRelationship::getRelation().clear();
        ::kdm::core::AggregatedRelationship::getRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__DENSITY:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::Integer >::fromAny(
                _newValue, m_density);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AggregatedRelationship::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return m_annotation && m_annotation->size();
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
        return m_stereotype && m_stereotype->size();
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
        return m_taggedValue && m_taggedValue->size();
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM:
        return m_from;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO:
        return m_to;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION:
        return m_relation && m_relation->size();
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__DENSITY:
        return ::ecorecpp::mapping::set_traits< ::kdm::core::Integer >::is_set(
                m_density);

    }
    throw "Error";
}

void AggregatedRelationship::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AggregatedRelationship::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::kdm::core::CorePackage_ptr > (::kdm::core::CorePackage::_instance())->getAggregatedRelationship();
    return _eclass;
}

