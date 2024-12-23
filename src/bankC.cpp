// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v4.0.2
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// C:\Users\hp\Desktop\yassir\Softwars\libraries\ACE_TAO\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:372


#include "bankC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "cstring"

#if !defined (__ACE_INLINE__)
#include "bankC.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// C:\Users\hp\Desktop\yassir\Softwars\libraries\ACE_TAO\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface\interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for Bank::Transaction.

Bank::Transaction_ptr
TAO::Objref_Traits<Bank::Transaction>::duplicate (Bank::Transaction_ptr p)
{
  return Bank::Transaction::_duplicate (p);
}

void
TAO::Objref_Traits<Bank::Transaction>::release (Bank::Transaction_ptr p)
{
  ::CORBA::release (p);
}

Bank::Transaction_ptr
TAO::Objref_Traits<Bank::Transaction>::nil ()
{
  return Bank::Transaction::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Bank::Transaction>::marshal (const Bank::Transaction_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\hp\Desktop\yassir\Softwars\libraries\ACE_TAO\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation\operation_cs.cpp:87

char *
Bank::Transaction::updateDetails (
  const char * counterId,
  const char * date,
  ::CORBA::Double amountDebit,
  ::CORBA::Double amountCredit,
  const char * accountId)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< char *>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_counterId (counterId);
  TAO::Arg_Traits< char *>::in_arg_val _tao_date (date);
  TAO::Arg_Traits< ::CORBA::Double>::in_arg_val _tao_amountDebit (amountDebit);
  TAO::Arg_Traits< ::CORBA::Double>::in_arg_val _tao_amountCredit (amountCredit);
  TAO::Arg_Traits< char *>::in_arg_val _tao_accountId (accountId);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval),
      std::addressof(_tao_counterId),
      std::addressof(_tao_date),
      std::addressof(_tao_amountDebit),
      std::addressof(_tao_amountCredit),
      std::addressof(_tao_accountId)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      6,
      "updateDetails",
      13,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _invocation_call.invoke (nullptr, 0);

  return _tao_retval.retn ();
}

Bank::Transaction::Transaction ()
{
}
void
Bank::Transaction::_tao_any_destructor (void *_tao_void_pointer)
{
  Transaction *_tao_tmp_pointer =
    static_cast<Transaction *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Bank::Transaction_ptr
Bank::Transaction::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<Transaction>::narrow (_tao_objref, "IDL:Bank/Transaction:1.0");
}

Bank::Transaction_ptr
Bank::Transaction::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<Transaction>::unchecked_narrow (_tao_objref);
}

Bank::Transaction_ptr
Bank::Transaction::_nil ()
{
  return nullptr;
}

Bank::Transaction_ptr
Bank::Transaction::_duplicate (Transaction_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Bank::Transaction::_tao_release (Transaction_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Bank::Transaction::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:Bank/Transaction:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
      )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Bank::Transaction::_interface_repository_id () const
{
  return "IDL:Bank/Transaction:1.0";
}

::CORBA::Boolean
Bank::Transaction::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}
// TAO_IDL - Generated from
// C:\Users\hp\Desktop\yassir\Softwars\libraries\ACE_TAO\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode\objref_typecode.cpp:68

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Bank_Transaction (
    ::CORBA::tk_objref,
    "IDL:Bank/Transaction:1.0",
    "Transaction");
  

namespace Bank
{
  ::CORBA::TypeCode_ptr const _tc_Transaction =
    &_tao_tc_Bank_Transaction;
}
// TAO_IDL - Generated from
// C:\Users\hp\Desktop\yassir\Softwars\libraries\ACE_TAO\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface\any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Bank::Transaction>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  Bank::Transaction_ptr _tao_elem)
{
  Bank::Transaction_ptr _tao_objptr =
    Bank::Transaction::_duplicate (_tao_elem);
  _tao_any <<= std::addressof(_tao_objptr);
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  Bank::Transaction_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Bank::Transaction>::insert (
    _tao_any,
    Bank::Transaction::_tao_any_destructor,
    Bank::_tc_Transaction,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Bank::Transaction_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Bank::Transaction>::extract (
        _tao_any,
        Bank::Transaction::_tao_any_destructor,
        Bank::_tc_Transaction,
        _tao_elem);
}

}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\hp\Desktop\yassir\Softwars\libraries\ACE_TAO\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface\cdr_op_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bank::Transaction_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bank::Transaction_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  // Narrow to the right type.
  _tao_objref = TAO::Narrow_Utils< ::Bank::Transaction>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



