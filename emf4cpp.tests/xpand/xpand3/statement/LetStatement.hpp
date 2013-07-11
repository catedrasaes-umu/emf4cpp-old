// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/LetStatement.hpp
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

#ifndef XPAND3_STATEMENT_LETSTATEMENT_HPP
#define XPAND3_STATEMENT_LETSTATEMENT_HPP

#include <xpand3/statement_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

/*PROTECTED REGION ID(LetStatement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace statement
    {

        class LetStatement: public virtual ::xpand3::statement::AbstractStatementWithBody
        {
        public:
            LetStatement();

            virtual ~LetStatement();

            virtual void _initialize();

            // Operations


            // Attributes

            // References
            ::xpand3::Identifier_ptr getVarName();
            void setVarName(::xpand3::Identifier_ptr _varName);

            ::xpand3::expression::AbstractExpression_ptr getVarValue();
            void setVarValue(
                    ::xpand3::expression::AbstractExpression_ptr _varValue);

            /*PROTECTED REGION ID(LetStatement) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

            // EObjectImpl
            virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                    ::ecore::EBoolean _resolve);
            virtual void eSet(::ecore::EInt _featureID,
                    ::ecore::EJavaObject const& _newValue);
            virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
            virtual void eUnset(::ecore::EInt _featureID);
            virtual ::ecore::EClass_ptr _eClass();

            /*PROTECTED REGION ID(LetStatementImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes


            // References

            ::xpand3::Identifier_ptr m_varName;

            ::xpand3::expression::AbstractExpression_ptr m_varValue;

        };

    } // statement
} // xpand3

#endif // XPAND3_STATEMENT_LETSTATEMENT_HPP
