// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * bintree/BinTreeNodeImpl.cpp
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

#include "BinTreeNode.hpp"
#include <bintree/BintreePackage.hpp>
#include <bintree/BinTreeNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::bintree;

/*PROTECTED REGION ID(BinTreeNodeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void BinTreeNode::_initialize()
{
    // Supertypes

    // Rerefences
    if (m_left)
    {
        m_left->_initialize();
        m_left->_setEContainer(this,
                ::bintree::BintreePackage::_instance()->getBinTreeNode__left());
    }
    if (m_right)
    {
        m_right->_initialize();
        m_right->_setEContainer(this,
                ::bintree::BintreePackage::_instance()->getBinTreeNode__right());
    }

    /*PROTECTED REGION ID(BinTreeNodeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject BinTreeNode::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::bintree::BintreePackage::BINTREENODE__PARENT:
    {
        _any = static_cast< ::ecore::EObject* > (m_parent);
    }
        return _any;
    case ::bintree::BintreePackage::BINTREENODE__LEFT:
    {
        _any = static_cast< ::ecore::EObject* > (m_left);
    }
        return _any;
    case ::bintree::BintreePackage::BINTREENODE__RIGHT:
    {
        _any = static_cast< ::ecore::EObject* > (m_right);
    }
        return _any;
    case ::bintree::BintreePackage::BINTREENODE__DATA:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any, m_data);
    }
        return _any;

    }
    throw "Error";
}

void BinTreeNode::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::bintree::BintreePackage::BINTREENODE__PARENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::bintree::BinTreeNode_ptr _t1 =
                dynamic_cast< ::bintree::BinTreeNode_ptr > (_t0);
        ::bintree::BinTreeNode::setParent(_t1);
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__LEFT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::bintree::BinTreeNode_ptr _t1 =
                dynamic_cast< ::bintree::BinTreeNode_ptr > (_t0);
        ::bintree::BinTreeNode::setLeft(_t1);
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__RIGHT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::bintree::BinTreeNode_ptr _t1 =
                dynamic_cast< ::bintree::BinTreeNode_ptr > (_t0);
        ::bintree::BinTreeNode::setRight(_t1);
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__DATA:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_data);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean BinTreeNode::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::bintree::BintreePackage::BINTREENODE__PARENT:
        return m_parent;
    case ::bintree::BintreePackage::BINTREENODE__LEFT:
        return m_left;
    case ::bintree::BintreePackage::BINTREENODE__RIGHT:
        return m_right;
    case ::bintree::BintreePackage::BINTREENODE__DATA:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_data);

    }
    throw "Error";
}

void BinTreeNode::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr BinTreeNode::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::bintree::BintreePackage_ptr > (::bintree::BintreePackage::_instance())->getBinTreeNode();
    return _eclass;
}

