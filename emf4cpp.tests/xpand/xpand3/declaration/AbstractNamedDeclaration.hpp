// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/AbstractNamedDeclaration.hpp
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

#ifndef XPAND3_DECLARATION_ABSTRACTNAMEDDECLARATION_HPP
#define XPAND3_DECLARATION_ABSTRACTNAMEDDECLARATION_HPP

#include <xpand3/declaration_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

/*PROTECTED REGION ID(AbstractNamedDeclaration_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace declaration
    {

        class AbstractNamedDeclaration: public virtual ::xpand3::declaration::AbstractDeclaration
        {
        public:
            AbstractNamedDeclaration();

            virtual ~AbstractNamedDeclaration();

            virtual void _initialize();

            // Operations


            // Attributes

            // References
            ::xpand3::Identifier_ptr getName();
            void setName(::xpand3::Identifier_ptr _name);

            /*PROTECTED REGION ID(AbstractNamedDeclaration) START*/
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

            /*PROTECTED REGION ID(AbstractNamedDeclarationImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes


            // References

            ::xpand3::Identifier_ptr m_name;

        };

    } // declaration
} // xpand3

#endif // XPAND3_DECLARATION_ABSTRACTNAMEDDECLARATION_HPP
