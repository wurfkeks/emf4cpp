// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/UnaryOperation.hpp
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

#ifndef XPAND3_EXPRESSION_UNARYOPERATION_HPP
#define XPAND3_EXPRESSION_UNARYOPERATION_HPP

#include <xpand3/expression_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

/*PROTECTED REGION ID(UnaryOperation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace expression
    {

        class UnaryOperation: public virtual ::xpand3::expression::AbstractExpression
        {
        public:
            UnaryOperation();

            virtual ~UnaryOperation();

            virtual void _initialize();

            // Operations


            // Attributes

            // References
            ::xpand3::Identifier_ptr getOperator();
            void setOperator(::xpand3::Identifier_ptr _operator);

            ::xpand3::expression::AbstractExpression_ptr getOperand();
            void setOperand(
                    ::xpand3::expression::AbstractExpression_ptr _operand);

            /*PROTECTED REGION ID(UnaryOperation) START*/
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

            /*PROTECTED REGION ID(UnaryOperationImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes


            // References

            ::xpand3::Identifier_ptr m_operator;

            ::xpand3::expression::AbstractExpression_ptr m_operand;

        };

    } // expression
} // xpand3

#endif // XPAND3_EXPRESSION_UNARYOPERATION_HPP
