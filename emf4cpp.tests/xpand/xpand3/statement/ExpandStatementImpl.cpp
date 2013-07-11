// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ExpandStatementImpl.cpp
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

#include "ExpandStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::statement;

/*PROTECTED REGION ID(ExpandStatementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void ExpandStatement::_initialize()
{
    // Supertypes
    ::xpand3::statement::AbstractStatement::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_parameters->size(); i++)
    {
        (*m_parameters)[i]->_initialize();
        (*m_parameters)[i]->_setEContainer(
                this,
                ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__parameters());
    }
    if (m_separator)
    {
        m_separator->_initialize();
        m_separator->_setEContainer(
                this,
                ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__separator());
    }
    if (m_target)
    {
        m_target->_initialize();
        m_target->_setEContainer(
                this,
                ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__target());
    }
    if (m_definition)
    {
        m_definition->_initialize();
        m_definition->_setEContainer(
                this,
                ::xpand3::statement::StatementPackage::_instance()->getExpandStatement__definition());
    }

    /*PROTECTED REGION ID(ExpandStatementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject ExpandStatement::eGet(::ecore::EInt _featureID,
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
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FOREACH:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EBoolean >::toAny(_any,
                m_foreach);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS:
    {
        _any = m_parameters->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR:
    {
        _any = static_cast< ::ecore::EObject* > (m_separator);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET:
    {
        _any = static_cast< ::ecore::EObject* > (m_target);
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION:
    {
        _any = static_cast< ::ecore::EObject* > (m_definition);
    }
        return _any;

    }
    throw "Error";
}

void ExpandStatement::eSet(::ecore::EInt _featureID,
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
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FOREACH:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EBoolean >::fromAny(
                _newValue, m_foreach);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::xpand3::statement::ExpandStatement::getParameters().clear();
        ::xpand3::statement::ExpandStatement::getParameters().insert_all(*_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::expression::AbstractExpression_ptr
                _t1 =
                        dynamic_cast< ::xpand3::expression::AbstractExpression_ptr > (_t0);
        ::xpand3::statement::ExpandStatement::setSeparator(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::expression::AbstractExpression_ptr
                _t1 =
                        dynamic_cast< ::xpand3::expression::AbstractExpression_ptr > (_t0);
        ::xpand3::statement::ExpandStatement::setTarget(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr > (_t0);
        ::xpand3::statement::ExpandStatement::setDefinition(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ExpandStatement::eIsSet(::ecore::EInt _featureID)
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
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FOREACH:
        return ::ecorecpp::mapping::set_traits< ::ecore::EBoolean >::is_set(
                m_foreach);
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS:
        return m_parameters && m_parameters->size();
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR:
        return m_separator;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET:
        return m_target;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION:
        return m_definition;

    }
    throw "Error";
}

void ExpandStatement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ExpandStatement::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::xpand3::statement::StatementPackage_ptr > (::xpand3::statement::StatementPackage::_instance())->getExpandStatement();
    return _eclass;
}

