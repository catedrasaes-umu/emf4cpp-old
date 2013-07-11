// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/DeclarationFactory.hpp
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

#ifndef _XPAND3_DECLARATIONFACTORY_HPP
#define _XPAND3_DECLARATIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/declaration.hpp>

namespace xpand3
{
    namespace declaration
    {

        class DeclarationFactory: public virtual ::ecore::EFactory
        {
        public:

            static DeclarationFactory_ptr _instance();

            virtual AbstractDeclaration_ptr createAbstractDeclaration();
            virtual AbstractNamedDeclaration_ptr
                    createAbstractNamedDeclaration();
            virtual Definition_ptr createDefinition();
            virtual Extension_ptr createExtension();
            virtual AbstractAspect_ptr createAbstractAspect();
            virtual ExtensionAspect_ptr createExtensionAspect();
            virtual DefinitionAspect_ptr createDefinitionAspect();
            virtual Check_ptr createCheck();
            virtual CreateExtension_ptr createCreateExtension();
            virtual JavaExtension_ptr createJavaExtension();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< DeclarationFactory > s_instance;

            DeclarationFactory();

        };

    } // declaration
} // xpand3


#endif // _XPAND3_DECLARATIONFACTORY_HPP
