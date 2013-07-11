// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/LinksTo.hpp
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

#ifndef KDM_BUILD_LINKSTO_HPP
#define KDM_BUILD_LINKSTO_HPP

#include <kdm/build_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>

/*PROTECTED REGION ID(LinksTo_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace build
    {

        class LinksTo: public virtual ::kdm::build::AbstractBuildRelationship
        {
        public:
            LinksTo();

            virtual ~LinksTo();

            virtual void _initialize();

            // Operations


            // Attributes

            // References
            ::kdm::build::AbstractBuildElement_ptr getTo();
            void setTo(::kdm::build::AbstractBuildElement_ptr _to);

            ::kdm::build::SymbolicLink_ptr getFrom();
            void setFrom(::kdm::build::SymbolicLink_ptr _from);

            /*PROTECTED REGION ID(LinksTo) START*/
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

            /*PROTECTED REGION ID(LinksToImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes


            // References

            ::kdm::build::AbstractBuildElement_ptr m_to;

            ::kdm::build::SymbolicLink_ptr m_from;

        };

    } // build
} // kdm

#endif // KDM_BUILD_LINKSTO_HPP
