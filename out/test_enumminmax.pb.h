/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8 */

#ifndef PB_TEST_ENUMMINMAX_PB_H_INCLUDED
#define PB_TEST_ENUMMINMAX_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _Language {
    Language_UNKNOWN = 0,
    Language_ENGLISH_EN_GB = 12,
    Language_ENGLISH_EN_US = 1,
    Language_FRENCH_FR_FR = 2,
    Language_ITALIAN_IT_IT = 3,
    Language_GERMAN_DE_DE = 4,
    Language_SPANISH_ES_AR = 13,
    Language_SPANISH_ES_ES = 5,
    Language_SPANISH_ES_MX = 14,
    Language_SWEDISH_SV_SE = 6,
    Language_DUTCH_NL_NL = 7,
    Language_KOREAN_KO_KR = 8,
    Language_JAPANESE_JA_JP = 9,
    Language_CHINESE_SIMPLIFIED_ZH_CN = 10,
    Language_CHINESE_TRADITIONAL_ZH_TW = 11
} Language;

#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _Language_MIN Language_UNKNOWN
#define _Language_MAX Language_SPANISH_ES_MX
#define _Language_ARRAYSIZE ((Language)(Language_SPANISH_ES_MX+1))


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
