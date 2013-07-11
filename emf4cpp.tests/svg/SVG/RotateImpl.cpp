// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/RotateImpl.cpp
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

#include "Rotate.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Transform.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::SVG;

/*PROTECTED REGION ID(RotateImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Rotate::_initialize()
{
    // Supertypes
    ::SVG::Transform::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(RotateImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject Rotate::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
    {
        _any = m_attOwner->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::SVG::SVGPackage::ROTATE__ANGLE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::toAny(
                _any, m_angle);
    }
        return _any;
    case ::SVG::SVGPackage::ROTATE__CX:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::toAny(
                _any, m_cx);
    }
        return _any;
    case ::SVG::SVGPackage::ROTATE__CY:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::toAny(
                _any, m_cy);
    }
        return _any;

    }
    throw "Error";
}

void Rotate::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::SVG::Attribute::getAttOwner().clear();
        ::SVG::Attribute::getAttOwner().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::ROTATE__ANGLE:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::fromAny(
                _newValue, m_angle);
    }
        return;
    case ::SVG::SVGPackage::ROTATE__CX:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::fromAny(
                _newValue, m_cx);
    }
        return;
    case ::SVG::SVGPackage::ROTATE__CY:
    {
        ::ecorecpp::mapping::any_traits< ::PrimitiveTypes::Double >::fromAny(
                _newValue, m_cy);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Rotate::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
        return m_attOwner && m_attOwner->size();
    case ::SVG::SVGPackage::ROTATE__ANGLE:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::Double >::is_set(
                m_angle);
    case ::SVG::SVGPackage::ROTATE__CX:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::Double >::is_set(
                m_cx);
    case ::SVG::SVGPackage::ROTATE__CY:
        return ::ecorecpp::mapping::set_traits< ::PrimitiveTypes::Double >::is_set(
                m_cy);

    }
    throw "Error";
}

void Rotate::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Rotate::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::SVG::SVGPackage_ptr > (::SVG::SVGPackage::_instance())->getRotate();
    return _eclass;
}

