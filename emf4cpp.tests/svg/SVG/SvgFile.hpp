// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SvgFile.hpp
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

#ifndef SVG_SVGFILE_HPP
#define SVG_SVGFILE_HPP

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/ReferencedFile.hpp>

/*PROTECTED REGION ID(SvgFile_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

    class SvgFile: public virtual ::SVG::ReferencedFile
    {
    public:
        SvgFile();

        virtual ~SvgFile();

        virtual void _initialize();

        // Operations


        // Attributes

        // References
        ::SVG::Svg_ptr getTag();
        void setTag(::SVG::Svg_ptr _tag);

        ::ecorecpp::mapping::EList< ::SVG::Element >& getElements();

        /*PROTECTED REGION ID(SvgFile) START*/
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

        /*PROTECTED REGION ID(SvgFileImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes


        // References

        ::SVG::Svg_ptr m_tag;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList<
                ::SVG::Element > > m_elements;

    };

} // SVG

#endif // SVG_SVGFILE_HPP
