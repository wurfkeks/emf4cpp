// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Svg.hpp
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

#ifndef SVG_SVG_HPP
#define SVG_SVG_HPP

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/StructuralElement.hpp>

/*PROTECTED REGION ID(Svg_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

    class Svg: public virtual ::SVG::StructuralElement
    {
    public:
        Svg();

        virtual ~Svg();

        virtual void _initialize();

        // Operations


        // Attributes
        ::PrimitiveTypes::String getNamespace() const;
        void setNamespace(::PrimitiveTypes::String _namespace);

        ::PrimitiveTypes::String getVersion() const;
        void setVersion(::PrimitiveTypes::String _version);

        ::PrimitiveTypes::String getBaseProfile() const;
        void setBaseProfile(::PrimitiveTypes::String _baseProfile);

        // References
        ::ecorecpp::mapping::EList< ::SVG::SvgFile >& getOwner_SVG();

        ::ecorecpp::mapping::EList< ::SVG::Element >& getChildren();

        /*PROTECTED REGION ID(Svg) START*/
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

        /*PROTECTED REGION ID(SvgImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::PrimitiveTypes::String m_namespace;

        ::PrimitiveTypes::String m_version;

        ::PrimitiveTypes::String m_baseProfile;

        // References

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList<
                ::SVG::SvgFile > > m_owner_SVG;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList<
                ::SVG::Element > > m_children;

    };

} // SVG

#endif // SVG_SVG_HPP
