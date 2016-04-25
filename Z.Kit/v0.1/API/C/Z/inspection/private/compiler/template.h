/* Z Kit C API - inspection/private/compiler/template.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_inspection_private_template_H__
#define __Z_inspection_private_template_H__

#include <Z/keys/compiler.h>
#include <Z/macros/version.h>

/* MARK: - Identification */

/*#define Z_COMPILER*/
/*#define Z_COMPILER_STRING*/
/*#define Z_COMPILER_VERSION*/
/*#define Z_COMPILER_VERSION_STRING*/

/* MARK: - Bit field encoding */

/*#define Z_COMPILER_LITTLE_ENDIAN_8BIT_FIELD_ENCODING*/
/*#define Z_COMPILER_LITTLE_ENDIAN_BIT_FIELD_ENCODING*/
/*#define Z_COMPILER_BIG_ENDIAN_8BIT_FIELD_ENCODING*/
/*#define Z_COMPILER_BIG_ENDIAN_BIT_FIELD_ENCODING*/

/* MARK: - C features */

/*#define Z_COMPILER_C_HAS_ANONYMOUS_STRUCTURE*/
/*#define Z_COMPILER_C_HAS_ANONYMOUS_UNION*/
/*#define Z_COMPILER_C_HAS_ATOMIC_OPERATIONS*/
/*#define Z_COMPILER_C_HAS_CLOSURE*/
/*#define Z_COMPILER_C_HAS_COMPOUND_LITERAL*/
/*#define Z_COMPILER_C_HAS_CPP_STYLE_COMMENT*/
/*#define Z_COMPILER_C_HAS_DESIGNATED_INITIALIZER*/
/*#define Z_COMPILER_C_HAS_DIGRAPH*/
/*#define Z_COMPILER_C_HAS_ENUMERATION*/
/*#define Z_COMPILER_C_HAS_FLEXIBLE_ARRAY_MEMBER*/
/*#define Z_COMPILER_C_HAS_GENERIC_SELECTION*/
/*#define Z_COMPILER_C_HAS_INLINE_FUNCION*/
/*#define Z_COMPILER_C_HAS_INTERMINGLED_DECLARATIONS_AND_CODE*/
/*#define Z_COMPILER_C_HAS_STATIC_ASSERTION*/
/*#define Z_COMPILER_C_HAS_VARIADIC_MACRO*/
/*#define Z_COMPILER_C_HAS_VLA*/

/* MARK: - C types */

/*#define Z_COMPILER_C_HAS_TYPE_LLONG*/
/*#define Z_COMPILER_C_HAS_TYPE_FLOAT*/
/*#define Z_COMPILER_C_HAS_TYPE_DOUBLE*/
/*#define Z_COMPILER_C_HAS_TYPE_LDOUBLE*/

/* MARK: - Type qualifiers */

/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_ATOMIC*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_CONSTANT*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_VOLATILE*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_RESTRICT*/

/* MARK: - Storage classes */

/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_AUTO*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_EXTERN*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_REGISTER*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_STATIC*/
/*#define Z_COMPILER_C_HAS_STORATE_CLASS_THREAD_LOCAL*/

/* MARK: - Specifiers */

/*#define Z_COMPILER_C_HAS_SPECIFIER_ALIGN_AS*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_INLINE*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_NO_RETURN*/

/* MARK: - Operators */

/*#define Z_COMPILER_C_HAS_OPERATOR_ALIGN_OF*/
/*#define Z_COMPILER_C_HAS_OPERATOR_SIZE_OF*/

/* MARK: - C attributes */

/*#define Z_COMPILER_C_ATTRIBUTE_ALIAS*/
/*#define Z_COMPILER_C_ATTRIBUTE_API*/
/*#define Z_COMPILER_C_ATTRIBUTE_API_ALIAS*/
/*#define Z_COMPILER_C_ATTRIBUTE_API_EXPORT*/
/*#define Z_COMPILER_C_ATTRIBUTE_API_EXPORT_ALIAS*/
/*#define Z_COMPILER_C_ATTRIBUTE_API_WEAK_EXPORT*/
/*#define Z_COMPILER_C_ATTRIBUTE_INLINE*/
/*#define Z_COMPILER_C_ATTRIBUTE_NO_RETURN*/
/*#define Z_COMPILER_C_ATTRIBUTE_NULL_TERMINATED*/
/*#define Z_COMPILER_C_ATTRIBUTE_PRIVATE*/
/*#define Z_COMPILER_C_ATTRIBUTE_PUBLIC*/
/*#define Z_COMPILER_C_ATTRIBUTE_STRICT_SIZE_BEGIN*/
/*#define Z_COMPILER_C_ATTRIBUTE_STRICT_SIZE_END*/
/*#define Z_COMPILER_C_ATTRIBUTE_THREAD_LOCAL*/
/*#define Z_COMPILER_C_ATTRIBUTE_WEAK*/

/* MARK: - C++ specifiers */

/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CONSTANT_EXPRESSION*/
/*#define Z_COMPILER_CPP_HAS_SPECIFIER_NO_EXCEPTION*/
/*#define Z_COMPILER_CPP_HAS_VARIADIC_TEMPLATE*/

/* MARK: - C++ operators */

/*#define Z_CPP_HAS_OPERATOR_NO_EXCEPTION*/

/* MARK: - Built-in constants */

/*#define Z_COMPILER_CONSTANT_UCHAR_BITS*/
/*#define Z_COMPILER_CONSTANT_UCHAR_SIZE*/
/*#define Z_COMPILER_CONSTANT_UCHAR_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_USHORT_BITS*/
/*#define Z_COMPILER_CONSTANT_USHORT_SIZE*/
/*#define Z_COMPILER_CONSTANT_USHORT_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_UINT_BITS*/
/*#define Z_COMPILER_CONSTANT_UINT_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINT_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_ULONG_BITS*/
/*#define Z_COMPILER_CONSTANT_ULONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_ULONG_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_ULLONG_BITS*/
/*#define Z_COMPILER_CONSTANT_ULLONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_ULLONG_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_CHAR_BITS*/
/*#define Z_COMPILER_CONSTANT_CHAR_SIZE*/
/*#define Z_COMPILER_CONSTANT_CHAR_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_CHAR_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_SHORT_BITS*/
/*#define Z_COMPILER_CONSTANT_SHORT_SIZE*/
/*#define Z_COMPILER_CONSTANT_SHORT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SHORT_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_INT_BITS*/
/*#define Z_COMPILER_CONSTANT_INT_SIZE*/
/*#define Z_COMPILER_CONSTANT_INT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_INT_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_LONG_BITS*/
/*#define Z_COMPILER_CONSTANT_LONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_LONG_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_LONG_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_LLONG_BITS*/
/*#define Z_COMPILER_CONSTANT_LLONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_LLONG_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_LLONG_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_FLOAT_BITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_SIZE*/
/*#define Z_COMPILER_CONSTANT_FLOAT_BIAS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_EPSILON*/
/*#define Z_COMPILER_CONSTANT_FLOAT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_FLOAT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_FLOAT_DECIMAL_DIGITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_MANTISSA_OFFSET*/
/*#define Z_COMPILER_CONSTANT_FLOAT_MANTISSA_BITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_MANTISSA_DIGITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_EXPONENT_OFFSET*/
/*#define Z_COMPILER_CONSTANT_FLOAT_EXPONENT_BITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_EXPONENT_RADIX*/
/*#define Z_COMPILER_CONSTANT_FLOAT_EXPONENT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_FLOAT_EXPONENT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_FLOAT_EXPONENT_10_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_FLOAT_EXPONENT_10_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_FLOAT_SIGN_OFFSET*/
/*#define Z_COMPILER_CONSTANT_FLOAT_SIGN_BITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT_NAN*/

/*#define Z_COMPILER_CONSTANT_DOUBLE_BITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_SIZE*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_BIAS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_EPSILON*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_DECIMAL_DIGITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_MANTISSA_OFFSET*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_MANTISSA_BITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_MANTISSA_DIGITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_EXPONENT_OFFSET*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_EXPONENT_BITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_EXPONENT_RADIX*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_EXPONENT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_EXPONENT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_EXPONENT_10_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_EXPONENT_10_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_SIGN_OFFSET*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_SIGN_BITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_INFINITY*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_NAN*/

/*#define Z_COMPILER_CONSTANT_LDOUBLE_BITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_SIZE*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_BIAS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_EPSILON*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_DECIMAL_DIGITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_MANTISSA_OFFSET*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_MANTISSA_BITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_MANTISSA_DIGITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_EXPONENT_OFFSET*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_EXPONENT_BITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_EXPONENT_RADIX*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_EXPONENT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_EXPONENT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_EXPONENT_10_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_EXPONENT_10_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_SIGN_OFFSET*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_SIGN_BITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_INFINITY*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_NAN*/

/*#define Z_COMPILER_CONSTANT_SIZE_BITS*/
/*#define Z_COMPILER_CONSTANT_SIZE_SIZE*/
/*#define Z_COMPILER_CONSTANT_SIZE_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_UINTMIN_BITS*/
/*#define Z_COMPILER_CONSTANT_UINTMIN_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINTMIN_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_UINTMAX_BITS*/
/*#define Z_COMPILER_CONSTANT_UINTMAX_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINTMAX_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_UINTPTR_BITS*/
/*#define Z_COMPILER_CONSTANT_UINTPTR_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINTPTR_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_UINTTOP_BITS*/
/*#define Z_COMPILER_CONSTANT_UINTTOP_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINTTOP_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_SSIZE_BITS*/
/*#define Z_COMPILER_CONSTANT_SSIZE_SIZE*/
/*#define Z_COMPILER_CONSTANT_SSIZE_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SSIZE_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_INTMIN_BITS*/
/*#define Z_COMPILER_CONSTANT_INTMIN_SIZE*/
/*#define Z_COMPILER_CONSTANT_INTMIN_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_INTMIN_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_INTMAX_BITS*/
/*#define Z_COMPILER_CONSTANT_INTMAX_SIZE*/
/*#define Z_COMPILER_CONSTANT_INTMAX_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_INTMAX_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_INTPTR_BITS*/
/*#define Z_COMPILER_CONSTANT_INTPTR_SIZE*/
/*#define Z_COMPILER_CONSTANT_INTPTR_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_INTPTR_MAXIMUM*/

/*#define Z_COMPILER_CONSTANT_INTTOP_BITS*/
/*#define Z_COMPILER_CONSTANT_INTTOP_SIZE*/
/*#define Z_COMPILER_CONSTANT_INTTOP_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_INTTOP_MAXIMUM*/

/* MARK: - Built-in types */

/*#define Z_COMPILER_TYPE_UINT8*/
/*#define Z_COMPILER_TYPE_UINT16*/
/*#define Z_COMPILER_TYPE_UINT32*/
/*#define Z_COMPILER_TYPE_UINT64*/
/*#define Z_COMPILER_TYPE_UINT128*/
/*#define Z_COMPILER_TYPE_INT8*/
/*#define Z_COMPILER_TYPE_INT16*/
/*#define Z_COMPILER_TYPE_INT32*/
/*#define Z_COMPILER_TYPE_INT128*/
/*#define Z_COMPILER_TYPE_SIZE*/
/*#define Z_COMPILER_TYPE_UINTMIN*/
/*#define Z_COMPILER_TYPE_UINTMAX*/
/*#define Z_COMPILER_TYPE_UINTPTR*/
/*#define Z_COMPILER_TYPE_UINTTOP*/
/*#define Z_COMPILER_TYPE_SSIZE*/
/*#define Z_COMPILER_TYPE_INTMIN*/
/*#define Z_COMPILER_TYPE_INTMAX*/
/*#define Z_COMPILER_TYPE_INTPTR*/
/*#define Z_COMPILER_TYPE_INTTOP*/
/*#define Z_COMPILER_TYPE_VAL*/

/* MARK: - Built-in macros: Struture */

/*#define Z_COMPILER_FUNCTION_OFFSETOF*/

/* MARK: - Built-in macros: VAL */

/*#define Z_COMPILER_FUNCTION_VAL_INITIALIZE*/
/*#define Z_COMPILER_FUNCTION_VAL_FINALIZE*/
/*#define Z_COMPILER_FUNCTION_VAL_READ*/
/*#define Z_COMPILER_FUNCTION_VAL_COPY*/

/* MARK: - Built-in functions: Atomic operations */

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_SET_IF_EZUAL*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_SET_IF_EZUAL*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_SET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_INCREMENT*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_ADD*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_DECREMENT*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_SUBTRACT*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_AND*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_OR*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_XOR*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_NAND*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_NOT*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_INCREMENT_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_ADD_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_DECREMENT_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_SUBTRACT_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_AND_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_OR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_XOR_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_NAND_THEN_GET*/

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT8_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT16_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT32_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT64_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_INT128_ATOMIC_NOT_THEN_GET*/

#endif /* __Z_inspection_private_template_H__ */
