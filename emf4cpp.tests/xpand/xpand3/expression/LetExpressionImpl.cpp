// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/LetExpressionImpl.cpp
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

#include "LetExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::expression;

/*PROTECTED REGION ID(LetExpressionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void LetExpression::_initialize()
{
    // Supertypes
    ::xpand3::expression::AbstractExpression::_initialize();

    // Rerefences
    if (m_varExpression)
    {
        m_varExpression->_initialize();
        m_varExpression->_setEContainer(
                this,
                ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__varExpression());
    }
    if (m_targetExpression)
    {
        m_targetExpression->_initialize();
        m_targetExpression->_setEContainer(
                this,
                ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__targetExpression());
    }
    if (m_varName)
    {
        m_varName->_initialize();
        m_varName->_setEContainer(
                this,
                ::xpand3::expression::ExpressionPackage::_instance()->getLetExpression__varName());
    }

    /*PROTECTED REGION ID(LetExpressionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject LetExpression::eGet(::ecore::EInt _featureID,
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
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VAREXPRESSION:
    {
        _any = static_cast< ::ecore::EObject* > (m_varExpression);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__TARGETEXPRESSION:
    {
        _any = static_cast< ::ecore::EObject* > (m_targetExpression);
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VARNAME:
    {
        _any = static_cast< ::ecore::EObject* > (m_varName);
    }
        return _any;

    }
    throw "Error";
}

void LetExpression::eSet(::ecore::EInt _featureID,
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
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VAREXPRESSION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::expression::AbstractExpression_ptr
                _t1 =
                        dynamic_cast< ::xpand3::expression::AbstractExpression_ptr > (_t0);
        ::xpand3::expression::LetExpression::setVarExpression(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__TARGETEXPRESSION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::expression::AbstractExpression_ptr
                _t1 =
                        dynamic_cast< ::xpand3::expression::AbstractExpression_ptr > (_t0);
        ::xpand3::expression::LetExpression::setTargetExpression(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VARNAME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr > (_t0);
        ::xpand3::expression::LetExpression::setVarName(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean LetExpression::eIsSet(::ecore::EInt _featureID)
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
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VAREXPRESSION:
        return m_varExpression;
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__TARGETEXPRESSION:
        return m_targetExpression;
    case ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VARNAME:
        return m_varName;

    }
    throw "Error";
}

void LetExpression::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr LetExpression::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::xpand3::expression::ExpressionPackage_ptr > (::xpand3::expression::ExpressionPackage::_instance())->getLetExpression();
    return _eclass;
}

