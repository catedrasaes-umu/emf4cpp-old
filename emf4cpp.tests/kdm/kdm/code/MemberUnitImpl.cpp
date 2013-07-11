// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/MemberUnitImpl.cpp
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

#include "MemberUnit.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::code;

/*PROTECTED REGION ID(MemberUnitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void MemberUnit::_initialize()
{
    // Supertypes
    ::kdm::code::DataElement::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(MemberUnitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject MemberUnit::eGet(::ecore::EInt _featureID,
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
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::String >::toAny(_any,
                m_name);
    }
        return _any;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE:
    {
        _any = m_source->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT:
    {
        _any = m_comment->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION:
    {
        _any = m_codeRelation->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::code::CodePackage::DATAELEMENT__TYPE:
    {
        _any = static_cast< ::ecore::EObject* > (m_type);
    }
        return _any;
    case ::kdm::code::CodePackage::DATAELEMENT__EXT:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::String >::toAny(_any,
                m_ext);
    }
        return _any;
    case ::kdm::code::CodePackage::DATAELEMENT__SIZE:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::Integer >::toAny(_any,
                m_size);
    }
        return _any;
    case ::kdm::code::CodePackage::DATAELEMENT__CODEELEMENT:
    {
        _any = m_codeElement->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__EXPORT:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::code::ExportKind >::toAny(_any,
                m_export);
    }
        return _any;

    }
    throw "Error";
}

void MemberUnit::eSet(::ecore::EInt _featureID,
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
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::String >::fromAny(
                _newValue, m_name);
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::code::AbstractCodeElement::getSource().clear();
        ::kdm::code::AbstractCodeElement::getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::code::AbstractCodeElement::getComment().clear();
        ::kdm::code::AbstractCodeElement::getComment().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::code::AbstractCodeElement::getCodeRelation().clear();
        ::kdm::code::AbstractCodeElement::getCodeRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::DATAELEMENT__TYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::kdm::code::Datatype_ptr _t1 =
                dynamic_cast< ::kdm::code::Datatype_ptr > (_t0);
        ::kdm::code::DataElement::setType(_t1);
    }
        return;
    case ::kdm::code::CodePackage::DATAELEMENT__EXT:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::String >::fromAny(
                _newValue, m_ext);
    }
        return;
    case ::kdm::code::CodePackage::DATAELEMENT__SIZE:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::core::Integer >::fromAny(
                _newValue, m_size);
    }
        return;
    case ::kdm::code::CodePackage::DATAELEMENT__CODEELEMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::code::DataElement::getCodeElement().clear();
        ::kdm::code::DataElement::getCodeElement().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__EXPORT:
    {
        ::ecorecpp::mapping::any_traits< ::kdm::code::ExportKind >::fromAny(
                _newValue, m_export);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean MemberUnit::eIsSet(::ecore::EInt _featureID)
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
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
        return ::ecorecpp::mapping::set_traits< ::kdm::core::String >::is_set(
                m_name);
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE:
        return m_source && m_source->size();
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT:
        return m_comment && m_comment->size();
    case ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION:
        return m_codeRelation && m_codeRelation->size();
    case ::kdm::code::CodePackage::DATAELEMENT__TYPE:
        return m_type;
    case ::kdm::code::CodePackage::DATAELEMENT__EXT:
        return ::ecorecpp::mapping::set_traits< ::kdm::core::String >::is_set(
                m_ext);
    case ::kdm::code::CodePackage::DATAELEMENT__SIZE:
        return ::ecorecpp::mapping::set_traits< ::kdm::core::Integer >::is_set(
                m_size);
    case ::kdm::code::CodePackage::DATAELEMENT__CODEELEMENT:
        return m_codeElement && m_codeElement->size();
    case ::kdm::code::CodePackage::MEMBERUNIT__EXPORT:
        return ::ecorecpp::mapping::set_traits< ::kdm::code::ExportKind >::is_set(
                m_export);

    }
    throw "Error";
}

void MemberUnit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr MemberUnit::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::kdm::code::CodePackage_ptr > (::kdm::code::CodePackage::_instance())->getMemberUnit();
    return _eclass;
}

