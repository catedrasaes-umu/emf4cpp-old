// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Path.hpp
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

#ifndef SVG_PATH_HPP
#define SVG_PATH_HPP

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Shape.hpp>

/*PROTECTED REGION ID(Path_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

    class Path: public virtual ::SVG::Shape
    {
    public:
        Path();

        virtual ~Path();

        virtual void _initialize();

        // Operations


        // Attributes
        ::PrimitiveTypes::Double getPathLength() const;
        void setPathLength(::PrimitiveTypes::Double _pathLength);

        ::PrimitiveTypes::String getD() const;
        void setD(::PrimitiveTypes::String _d);

        ::PrimitiveTypes::String getMarkerEnd() const;
        void setMarkerEnd(::PrimitiveTypes::String _markerEnd);

        ::PrimitiveTypes::String getMarkerStart() const;
        void setMarkerStart(::PrimitiveTypes::String _markerStart);

        // References


        /*PROTECTED REGION ID(Path) START*/
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

        /*PROTECTED REGION ID(PathImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::PrimitiveTypes::Double m_pathLength;

        ::PrimitiveTypes::String m_d;

        ::PrimitiveTypes::String m_markerEnd;

        ::PrimitiveTypes::String m_markerStart;

        // References

    };

} // SVG

#endif // SVG_PATH_HPP
