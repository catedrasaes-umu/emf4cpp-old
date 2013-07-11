// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/CollectionExpressionImpl.cpp
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

#include "CollectionExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/FeatureCall.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::expression;

/*PROTECTED REGION ID(CollectionExpressionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void CollectionExpression::_initialize()
{
    // Supertypes
    ::xpand3::expression::FeatureCall::_initialize();

    // Rerefences
    if (m_closure)
    {
        m_closure->_initialize();
        m_closure->_setEContainer(
                this,
                ::xpand3::expression::ExpressionPackage::_instance()->getCollectionExpression__closure());
    }
    if (m_eleName)
    {
        m_eleName->_initialize();
        m_eleName->_setEContainer(
                this,
                ::xpand3::expression::ExpressionPackage::_instance()->getCollectionExpression__eleName());
    }

    /*PROTECTED REGION ID(CollectionExpressionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject CollectionExpression::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::toAny(_any, m_line);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::toAny(_any, m_start);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::toAny(_any, m_end);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_fileName);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET:
    {
        _any = static_cast< ::ecore::EObject* > (m_target);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME:
    {
        _any = static_cast< ::ecore::EObject* > (m_name);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE:
    {
        _any = static_cast< ::ecore::EObject* > (m_closure);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME:
    {
        _any = static_cast< ::ecore::EObject* > (m_eleName);
    }
        return _any;

    }
    throw "Error";
}

void CollectionExpression::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::fromAny(_newValue,
                m_line);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::fromAny(_newValue,
                m_start);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EInt >::fromAny(_newValue,
                m_end);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_fileName);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::expression::AbstractExpression_ptr
                _t1 =
                        dynamic_cast< ::xpand3::expression::AbstractExpression_ptr > (_t0);
        ::xpand3::expression::FeatureCall::setTarget(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr > (_t0);
        ::xpand3::expression::FeatureCall::setName(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::expression::AbstractExpression_ptr
                _t1 =
                        dynamic_cast< ::xpand3::expression::AbstractExpression_ptr > (_t0);
        ::xpand3::expression::CollectionExpression::setClosure(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr > (_t0);
        ::xpand3::expression::CollectionExpression::setEleName(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CollectionExpression::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EInt >::is_set(m_line);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
        return ::ecorecpp::mapping::set_traits< ::ecore::EInt >::is_set(m_start);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
        return ::ecorecpp::mapping::set_traits< ::ecore::EInt >::is_set(m_end);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_fileName);
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET:
        return m_target;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME:
        return m_name;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE:
        return m_closure;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME:
        return m_eleName;

    }
    throw "Error";
}

void CollectionExpression::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CollectionExpression::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::xpand3::expression::ExpressionPackage_ptr > (::xpand3::expression::ExpressionPackage::_instance())->getCollectionExpression();
    return _eclass;
}

