// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UIModelImpl.cpp
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

#include "UIModel.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/ui/AbstractUIElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::ui;

/*PROTECTED REGION ID(UIModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void UIModel::_initialize()
{
    // Supertypes
    ::kdm::kdm::KDMModel::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_UIElement->size(); i++)
    {
        (*m_UIElement)[i]->_initialize();
        (*m_UIElement)[i]->_setEContainer(this,
                ::kdm::ui::UiPackage::_instance()->getUIModel__UIElement());
    }

    /*PROTECTED REGION ID(UIModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject UIModel::eGet(::ecore::EInt _featureID,
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
    case ::kdm::ui::UiPackage::UIMODEL__UIELEMENT:
    {
        _any = m_UIElement->asEListOf< ::ecore::EObject > ();
    }
        return _any;

    }
    throw "Error";
}

void UIModel::eSet(::ecore::EInt _featureID,
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
    case ::kdm::ui::UiPackage::UIMODEL__UIELEMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::kdm::ui::UIModel::getUIElement().clear();
        ::kdm::ui::UIModel::getUIElement().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean UIModel::eIsSet(::ecore::EInt _featureID)
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
    case ::kdm::ui::UiPackage::UIMODEL__UIELEMENT:
        return m_UIElement && m_UIElement->size();

    }
    throw "Error";
}

void UIModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr UIModel::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::kdm::ui::UiPackage_ptr > (::kdm::ui::UiPackage::_instance())->getUIModel();
    return _eclass;
}

