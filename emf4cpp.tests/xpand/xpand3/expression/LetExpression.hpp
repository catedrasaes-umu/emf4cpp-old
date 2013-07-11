// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/LetExpression.hpp
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

#ifndef XPAND3_EXPRESSION_LETEXPRESSION_HPP
#define XPAND3_EXPRESSION_LETEXPRESSION_HPP

#include <xpand3/expression_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

/*PROTECTED REGION ID(LetExpression_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace expression
    {

        class LetExpression: public virtual ::xpand3::expression::AbstractExpression
        {
        public:
            LetExpression();

            virtual ~LetExpression();

            virtual void _initialize();

            // Operations


            // Attributes

            // References
            ::xpand3::expression::AbstractExpression_ptr getVarExpression();
            void
                    setVarExpression(
                            ::xpand3::expression::AbstractExpression_ptr _varExpression);

            ::xpand3::expression::AbstractExpression_ptr getTargetExpression();
            void
                    setTargetExpression(
                            ::xpand3::expression::AbstractExpression_ptr _targetExpression);

            ::xpand3::Identifier_ptr getVarName();
            void setVarName(::xpand3::Identifier_ptr _varName);

            /*PROTECTED REGION ID(LetExpression) START*/
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

            /*PROTECTED REGION ID(LetExpressionImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes


            // References

            ::xpand3::expression::AbstractExpression_ptr m_varExpression;

            ::xpand3::expression::AbstractExpression_ptr m_targetExpression;

            ::xpand3::Identifier_ptr m_varName;

        };

    } // expression
} // xpand3

#endif // XPAND3_EXPRESSION_LETEXPRESSION_HPP
