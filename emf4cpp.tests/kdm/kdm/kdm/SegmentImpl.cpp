// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/SegmentImpl.cpp
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

#include "Segment.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/KDMFramework.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/kdm/Segment.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::kdm;

/*PROTECTED REGION ID(SegmentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Segment::_initialize()
{
    // Supertypes
    ::kdm::kdm::KDMFramework::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_segment->size(); i++)
    {
        (*m_segment)[i]->_initialize();
        (*m_segment)[i]->_setEContainer(this,
                ::kdm::kdm::KdmPackage::_instance()->getSegment__segment());
    }
    for (size_t i = 0; i < m_model->size(); i++)
    {
        (*m_model)[i]->_initialize();
        (*m_model)[i]->_setEContainer(this,
                ::kdm::kdm::KdmPackage::_instance()->getSegment__model());
    }

    /*PROTECTED REGION ID(SegmentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject Segment::eGet(::ecore::EInt _featureID,
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
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
    {
        _any = m_audit->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
    {
        _any = m_extensionFamily->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::String >::toAny(_any,
                m_name);
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__SEGMENT:
    {
        _any = m_segment->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__MODEL:
    {
        _any = m_model->asEListOf< ::ecore::EObject > ();
    }
        return _any;

    }
    throw "Error";
}

void Segment::eSet(::ecore::EInt _featureID,
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
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::kdm::KDMFramework::getAudit().clear();
        ::kdm::kdm::KDMFramework::getAudit().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::kdm::KDMFramework::getExtensionFamily().clear();
        ::kdm::kdm::KDMFramework::getExtensionFamily().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::String >::fromAny(
                _newValue, m_name);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__SEGMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::kdm::Segment::getSegment().clear();
        ::kdm::kdm::Segment::getSegment().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__MODEL:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::kdm::Segment::getModel().clear();
        ::kdm::kdm::Segment::getModel().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Segment::eIsSet(::ecore::EInt _featureID)
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
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
        return m_audit && m_audit->size();
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
        return m_extensionFamily && m_extensionFamily->size();
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
        return ::ecorecpp::mapping::set_traits< ::kdm::core::String >::is_set(
                m_name);
    case ::kdm::kdm::KdmPackage::SEGMENT__SEGMENT:
        return m_segment && m_segment->size();
    case ::kdm::kdm::KdmPackage::SEGMENT__MODEL:
        return m_model && m_model->size();

    }
    throw "Error";
}

void Segment::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Segment::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::kdm::kdm::KdmPackage_ptr > (::kdm::kdm::KdmPackage::_instance())->getSegment();
    return _eclass;
}

