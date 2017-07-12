#ifndef LIBRE_C_INTTYPES_H
#define LIBRE_C_INTTYPES_H 1

#include "stdint.h"
#include "stddef.h"

struct imaxdiv_t;

#define		PRId8			"d"
/** \ingroup avr_inttypes
    decimal printf format for int_least8_t */
#define		PRIdLEAST8		"d"
/** \ingroup avr_inttypes
    decimal printf format for int_fast8_t */
#define		PRIdFAST8		"d"

/** \ingroup avr_inttypes
    integer printf format for int8_t */
#define		PRIi8			"i"
/** \ingroup avr_inttypes
    integer printf format for int_least8_t */
#define		PRIiLEAST8		"i"
/** \ingroup avr_inttypes
    integer printf format for int_fast8_t */
#define		PRIiFAST8		"i"


/** \ingroup avr_inttypes
    decimal printf format for int16_t */
#define		PRId16			"d"
/** \ingroup avr_inttypes
    decimal printf format for int_least16_t */
#define		PRIdLEAST16		"d"
/** \ingroup avr_inttypes
    decimal printf format for int_fast16_t */
#define		PRIdFAST16		"d"

/** \ingroup avr_inttypes
    integer printf format for int16_t */
#define		PRIi16			"i"
/** \ingroup avr_inttypes
    integer printf format for int_least16_t */
#define		PRIiLEAST16		"i"
/** \ingroup avr_inttypes
    integer printf format for int_fast16_t */
#define		PRIiFAST16		"i"


/** \ingroup avr_inttypes
    decimal printf format for int32_t */
#define		PRId32			"ld"
/** \ingroup avr_inttypes
    decimal printf format for int_least32_t */
#define		PRIdLEAST32		"ld"
/** \ingroup avr_inttypes
    decimal printf format for int_fast32_t */
#define		PRIdFAST32		"ld"

/** \ingroup avr_inttypes
    integer printf format for int32_t */
#define		PRIi32			"li"
/** \ingroup avr_inttypes
    integer printf format for int_least32_t */
#define		PRIiLEAST32		"li"
/** \ingroup avr_inttypes
    integer printf format for int_fast32_t */
#define		PRIiFAST32		"li"

#ifdef __is64__

#define		PRId64			"lld"
#define		PRIdLEAST64		"lld"
#define		PRIdFAST64		"lld"

#define		PRIi64			"lli"
#define		PRIiLEAST64		"lli"
#define		PRIiFAST64		"lli"


#define		PRIdMAX			"lld"
#define		PRIiMAX			"lli"

#endif

/** \ingroup avr_inttypes
    decimal printf format for intptr_t */
#define		PRIdPTR			PRId16
/** \ingroup avr_inttypes
    integer printf format for intptr_t */
#define		PRIiPTR			PRIi16

/** \ingroup avr_inttypes
    octal printf format for uint8_t */
#define		PRIo8			"o"
/** \ingroup avr_inttypes
    octal printf format for uint_least8_t */
#define		PRIoLEAST8		"o"
/** \ingroup avr_inttypes
    octal printf format for uint_fast8_t */
#define		PRIoFAST8		"o"

/** \ingroup avr_inttypes
    decimal printf format for uint8_t */
#define		PRIu8			"u"
/** \ingroup avr_inttypes
    decimal printf format for uint_least8_t */
#define		PRIuLEAST8		"u"
/** \ingroup avr_inttypes
    decimal printf format for uint_fast8_t */
#define		PRIuFAST8		"u"

/** \ingroup avr_inttypes
    hexadecimal printf format for uint8_t */
#define		PRIx8			"x"
/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least8_t */
#define		PRIxLEAST8		"x"
/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast8_t */
#define		PRIxFAST8		"x"

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint8_t */
#define		PRIX8			"X"
/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least8_t */
#define		PRIXLEAST8		"X"
/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast8_t */
#define		PRIXFAST8		"X"


/** \ingroup avr_inttypes
    octal printf format for uint16_t */
#define		PRIo16			"o"
/** \ingroup avr_inttypes
    octal printf format for uint_least16_t */
#define		PRIoLEAST16		"o"
/** \ingroup avr_inttypes
    octal printf format for uint_fast16_t */
#define		PRIoFAST16		"o"

/** \ingroup avr_inttypes
    decimal printf format for uint16_t */
#define		PRIu16			"u"
/** \ingroup avr_inttypes
    decimal printf format for uint_least16_t */
#define		PRIuLEAST16		"u"
/** \ingroup avr_inttypes
    decimal printf format for uint_fast16_t */
#define		PRIuFAST16		"u"

/** \ingroup avr_inttypes
    hexadecimal printf format for uint16_t */
#define		PRIx16			"x"
/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least16_t */
#define		PRIxLEAST16		"x"
/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast16_t */
#define		PRIxFAST16		"x"

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint16_t */
#define		PRIX16			"X"
/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least16_t */
#define		PRIXLEAST16		"X"
/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast16_t */
#define		PRIXFAST16		"X"


/** \ingroup avr_inttypes
    octal printf format for uint32_t */
#define		PRIo32			"lo"
/** \ingroup avr_inttypes
    octal printf format for uint_least32_t */
#define		PRIoLEAST32		"lo"
/** \ingroup avr_inttypes
    octal printf format for uint_fast32_t */
#define		PRIoFAST32		"lo"

/** \ingroup avr_inttypes
    decimal printf format for uint32_t */
#define		PRIu32			"lu"
/** \ingroup avr_inttypes
    decimal printf format for uint_least32_t */
#define		PRIuLEAST32		"lu"
/** \ingroup avr_inttypes
    decimal printf format for uint_fast32_t */
#define		PRIuFAST32		"lu"

/** \ingroup avr_inttypes
    hexadecimal printf format for uint32_t */
#define		PRIx32			"lx"
/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least32_t */
#define		PRIxLEAST32		"lx"
/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast32_t */
#define		PRIxFAST32		"lx"

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint32_t */
#define		PRIX32			"lX"
/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least32_t */
#define		PRIXLEAST32		"lX"
/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast32_t */
#define		PRIXFAST32		"lX"


#ifdef __avr_libc_does_not_implement_long_long_in_printf_or_scanf

#define		PRIo64			"llo"
#define		PRIoLEAST64		"llo"
#define		PRIoFAST64		"llo"

#define		PRIu64			"llu"
#define		PRIuLEAST64		"llu"
#define		PRIuFAST64		"llu"

#define		PRIx64			"llx"
#define		PRIxLEAST64		"llx"
#define		PRIxFAST64		"llx"

#define		PRIX64			"llX"
#define		PRIXLEAST64		"llX"
#define		PRIXFAST64		"llX"

#define		PRIoMAX			"llo"
#define		PRIuMAX			"llu"
#define		PRIxMAX			"llx"
#define		PRIXMAX			"llX"

#endif

/** \ingroup avr_inttypes
    octal printf format for uintptr_t */
#define		PRIoPTR			PRIo16
/** \ingroup avr_inttypes
    decimal printf format for uintptr_t */
#define		PRIuPTR			PRIu16
/** \ingroup avr_inttypes
    hexadecimal printf format for uintptr_t */
#define		PRIxPTR			PRIx16
/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uintptr_t */
#define		PRIXPTR			PRIX16


#ifdef __avr_libc_does_not_implement_hh_in_scanf

#define		SCNd8			"hhd"
#define		SCNdLEAST8		"hhd"
#define		SCNdFAST8		"hhd"

#define		SCNi8			"hhi"
#define		SCNiLEAST8		"hhi"
#define		SCNiFAST8		"hhi"

#endif


/** \ingroup avr_inttypes
    decimal scanf format for int16_t */
#define		SCNd16			"d"
/** \ingroup avr_inttypes
    decimal scanf format for int_least16_t */
#define		SCNdLEAST16		"d"
/** \ingroup avr_inttypes
    decimal scanf format for int_fast16_t */
#define		SCNdFAST16		"d"

/** \ingroup avr_inttypes
    generic-integer scanf format for int16_t */
#define		SCNi16			"i"
/** \ingroup avr_inttypes
    generic-integer scanf format for int_least16_t */
#define		SCNiLEAST16		"i"
/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast16_t */
#define		SCNiFAST16		"i"


/** \ingroup avr_inttypes
    decimal scanf format for int32_t */
#define		SCNd32			"ld"
/** \ingroup avr_inttypes
    decimal scanf format for int_least32_t */
#define		SCNdLEAST32		"ld"
/** \ingroup avr_inttypes
    decimal scanf format for int_fast32_t */
#define		SCNdFAST32		"ld"

/** \ingroup avr_inttypes
    generic-integer scanf format for int32_t */
#define		SCNi32			"li"
/** \ingroup avr_inttypes
    generic-integer scanf format for int_least32_t */
#define		SCNiLEAST32		"li"
/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast32_t */
#define		SCNiFAST32		"li"


#ifdef __avr_libc_does_not_implement_long_long_in_printf_or_scanf

#define		SCNd64			"lld"
#define		SCNdLEAST64		"lld"
#define		SCNdFAST64		"lld"

#define		SCNi64			"lli"
#define		SCNiLEAST64		"lli"
#define		SCNiFAST64		"lli"

#define		SCNdMAX			"lld"
#define		SCNiMAX			"lli"

#endif

/** \ingroup avr_inttypes
    decimal scanf format for intptr_t */
#define		SCNdPTR			SCNd16
/** \ingroup avr_inttypes
    generic-integer scanf format for intptr_t */
#define		SCNiPTR			SCNi16

#ifdef __avr_libc_does_not_implement_hh_in_scanf

#define		SCNo8			"hho"
#define		SCNoLEAST8		"hho"
#define		SCNoFAST8		"hho"

#define		SCNu8			"hhu"
#define		SCNuLEAST8		"hhu"
#define		SCNuFAST8		"hhu"

#define		SCNx8			"hhx"
#define		SCNxLEAST8		"hhx"
#define		SCNxFAST8		"hhx"

#endif

/** \ingroup avr_inttypes
    octal scanf format for uint16_t */
#define		SCNo16			"o"
/** \ingroup avr_inttypes
    octal scanf format for uint_least16_t */
#define		SCNoLEAST16		"o"
/** \ingroup avr_inttypes
    octal scanf format for uint_fast16_t */
#define		SCNoFAST16		"o"

/** \ingroup avr_inttypes
    decimal scanf format for uint16_t */
#define		SCNu16			"u"
/** \ingroup avr_inttypes
    decimal scanf format for uint_least16_t */
#define		SCNuLEAST16		"u"
/** \ingroup avr_inttypes
    decimal scanf format for uint_fast16_t */
#define		SCNuFAST16		"u"

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint16_t */
#define		SCNx16			"x"
/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least16_t */
#define		SCNxLEAST16		"x"
/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast16_t */
#define		SCNxFAST16		"x"


/** \ingroup avr_inttypes
    octal scanf format for uint32_t */
#define		SCNo32			"lo"
/** \ingroup avr_inttypes
    octal scanf format for uint_least32_t */
#define		SCNoLEAST32		"lo"
/** \ingroup avr_inttypes
    octal scanf format for uint_fast32_t */
#define		SCNoFAST32		"lo"

/** \ingroup avr_inttypes
    decimal scanf format for uint32_t */
#define		SCNu32			"lu"
/** \ingroup avr_inttypes
    decimal scanf format for uint_least32_t */
#define		SCNuLEAST32		"lu"
/** \ingroup avr_inttypes
    decimal scanf format for uint_fast32_t */
#define		SCNuFAST32		"lu"

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint32_t */
#define		SCNx32			"lx"
/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least32_t */
#define		SCNxLEAST32		"lx"
/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast32_t */
#define		SCNxFAST32		"lx"


#ifdef __is64__

#define		SCNo64			"llo"
#define		SCNoLEAST64		"llo"
#define		SCNoFAST64		"llo"

#define		SCNu64			"llu"
#define		SCNuLEAST64		"llu"
#define		SCNuFAST64		"llu"

#define		SCNx64			"llx"
#define		SCNxLEAST64		"llx"
#define		SCNxFAST64		"llx"

#define		SCNoMAX			"llo"
#define		SCNuMAX			"llu"
#define		SCNxMAX			"llx"

#endif

/** \ingroup avr_inttypes
    octal scanf format for uintptr_t */
#define		SCNoPTR			SCNo16
/** \ingroup avr_inttypes
    decimal scanf format for uintptr_t */
#define		SCNuPTR			SCNu16
/** \ingroup avr_inttypes
    hexadecimal scanf format for uintptr_t */
#define		SCNxPTR			SCNx16

#endif
