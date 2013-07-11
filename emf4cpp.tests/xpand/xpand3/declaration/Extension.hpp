// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/Extension.hpp
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

#ifndef XPAND3_DECLARATION_EXTENSION_HPP
#define XPAND3_DECLARATION_EXTENSION_HPP

#include <xpand3/declaration_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>

/*PROTECTED REGION ID(Extension_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace declaration
    {

        class Extension: public virtual ::xpand3::declaration::AbstractNamedDeclaration
        {
        public:
            Extension();

            virtual ~Extension();

            virtual void _initialize();

            // Operations


            // Attributes
            ::ecore::EBoolean isCached() const;
            void setCached(::ecore::EBoolean _cached);

            // References
            ::xpand3::expression::AbstractExpression_ptr getBody();
            void setBody(::xpand3::expression::AbstractExpression_ptr _body);

            ::xpand3::Identifier_ptr getReturnType();
            void setReturnType(::xpand3::Identifier_ptr _returnType);

            /*PROTECTED REGION ID(Extension) START*/
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

            /*PROTECTED REGION ID(ExtensionImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            ::ecore::EBoolean m_cached;

            // References

            ::xpand3::expression::AbstractExpression_ptr m_body;

            ::xpand3::Identifier_ptr m_returnType;

        };

    } // declaration
} // xpand3

#endif // XPAND3_DECLARATION_EXTENSION_HPP
