// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/SuppliedBy.hpp
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

#ifndef KDM_BUILD_SUPPLIEDBY_HPP
#define KDM_BUILD_SUPPLIEDBY_HPP

#include <kdm/build_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>

/*PROTECTED REGION ID(SuppliedBy_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace build
    {

        class SuppliedBy: public virtual ::kdm::build::AbstractBuildRelationship
        {
        public:
            SuppliedBy();

            virtual ~SuppliedBy();

            virtual void _initialize();

            // Operations


            // Attributes

            // References
            ::kdm::build::Supplier_ptr getTo();
            void setTo(::kdm::build::Supplier_ptr _to);

            ::kdm::build::AbstractBuildElement_ptr getFrom();
            void setFrom(::kdm::build::AbstractBuildElement_ptr _from);

            /*PROTECTED REGION ID(SuppliedBy) START*/
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

            /*PROTECTED REGION ID(SuppliedByImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes


            // References

            ::kdm::build::Supplier_ptr m_to;

            ::kdm::build::AbstractBuildElement_ptr m_from;

        };

    } // build
} // kdm

#endif // KDM_BUILD_SUPPLIEDBY_HPP
