/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "NullableCurrency.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

NullableCurrency::eNullableCurrency toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("AED")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_AED;
    if (val == utility::conversions::to_string_t(U("AFN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_AFN;
    if (val == utility::conversions::to_string_t(U("ALL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ALL;
    if (val == utility::conversions::to_string_t(U("AMD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_AMD;
    if (val == utility::conversions::to_string_t(U("ANG")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ANG;
    if (val == utility::conversions::to_string_t(U("AOA")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_AOA;
    if (val == utility::conversions::to_string_t(U("ARS")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ARS;
    if (val == utility::conversions::to_string_t(U("AUD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_AUD;
    if (val == utility::conversions::to_string_t(U("AWG")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_AWG;
    if (val == utility::conversions::to_string_t(U("AZN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_AZN;
    if (val == utility::conversions::to_string_t(U("BAM")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BAM;
    if (val == utility::conversions::to_string_t(U("BBD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BBD;
    if (val == utility::conversions::to_string_t(U("BDT")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BDT;
    if (val == utility::conversions::to_string_t(U("BGN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BGN;
    if (val == utility::conversions::to_string_t(U("BHD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BHD;
    if (val == utility::conversions::to_string_t(U("BIF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BIF;
    if (val == utility::conversions::to_string_t(U("BMD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BMD;
    if (val == utility::conversions::to_string_t(U("BND")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BND;
    if (val == utility::conversions::to_string_t(U("BOB")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BOB;
    if (val == utility::conversions::to_string_t(U("BRL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BRL;
    if (val == utility::conversions::to_string_t(U("BSD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BSD;
    if (val == utility::conversions::to_string_t(U("BTN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BTN;
    if (val == utility::conversions::to_string_t(U("BWP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BWP;
    if (val == utility::conversions::to_string_t(U("BYN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BYN;
    if (val == utility::conversions::to_string_t(U("BYR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BYR;
    if (val == utility::conversions::to_string_t(U("BZD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_BZD;
    if (val == utility::conversions::to_string_t(U("CAD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CAD;
    if (val == utility::conversions::to_string_t(U("CDF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CDF;
    if (val == utility::conversions::to_string_t(U("CHF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CHF;
    if (val == utility::conversions::to_string_t(U("CLP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CLP;
    if (val == utility::conversions::to_string_t(U("CNY")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CNY;
    if (val == utility::conversions::to_string_t(U("COP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_COP;
    if (val == utility::conversions::to_string_t(U("CRC")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CRC;
    if (val == utility::conversions::to_string_t(U("CUC")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CUC;
    if (val == utility::conversions::to_string_t(U("CUP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CUP;
    if (val == utility::conversions::to_string_t(U("CVE")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CVE;
    if (val == utility::conversions::to_string_t(U("CZK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_CZK;
    if (val == utility::conversions::to_string_t(U("DJF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_DJF;
    if (val == utility::conversions::to_string_t(U("DKK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_DKK;
    if (val == utility::conversions::to_string_t(U("DOP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_DOP;
    if (val == utility::conversions::to_string_t(U("DZD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_DZD;
    if (val == utility::conversions::to_string_t(U("EGP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_EGP;
    if (val == utility::conversions::to_string_t(U("ERN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ERN;
    if (val == utility::conversions::to_string_t(U("ETB")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ETB;
    if (val == utility::conversions::to_string_t(U("EUR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_EUR;
    if (val == utility::conversions::to_string_t(U("FJD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_FJD;
    if (val == utility::conversions::to_string_t(U("FKP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_FKP;
    if (val == utility::conversions::to_string_t(U("GBP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GBP;
    if (val == utility::conversions::to_string_t(U("GEL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GEL;
    if (val == utility::conversions::to_string_t(U("GGP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GGP;
    if (val == utility::conversions::to_string_t(U("GHS")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GHS;
    if (val == utility::conversions::to_string_t(U("GIP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GIP;
    if (val == utility::conversions::to_string_t(U("GMD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GMD;
    if (val == utility::conversions::to_string_t(U("GNF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GNF;
    if (val == utility::conversions::to_string_t(U("GTQ")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GTQ;
    if (val == utility::conversions::to_string_t(U("GYD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_GYD;
    if (val == utility::conversions::to_string_t(U("HKD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_HKD;
    if (val == utility::conversions::to_string_t(U("HNL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_HNL;
    if (val == utility::conversions::to_string_t(U("HRK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_HRK;
    if (val == utility::conversions::to_string_t(U("HTG")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_HTG;
    if (val == utility::conversions::to_string_t(U("HUF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_HUF;
    if (val == utility::conversions::to_string_t(U("IDR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_IDR;
    if (val == utility::conversions::to_string_t(U("ILS")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ILS;
    if (val == utility::conversions::to_string_t(U("IMP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_IMP;
    if (val == utility::conversions::to_string_t(U("INR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_INR;
    if (val == utility::conversions::to_string_t(U("IQD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_IQD;
    if (val == utility::conversions::to_string_t(U("IRR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_IRR;
    if (val == utility::conversions::to_string_t(U("ISK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ISK;
    if (val == utility::conversions::to_string_t(U("JEP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_JEP;
    if (val == utility::conversions::to_string_t(U("JMD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_JMD;
    if (val == utility::conversions::to_string_t(U("JOD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_JOD;
    if (val == utility::conversions::to_string_t(U("JPY")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_JPY;
    if (val == utility::conversions::to_string_t(U("KES")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KES;
    if (val == utility::conversions::to_string_t(U("KGS")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KGS;
    if (val == utility::conversions::to_string_t(U("KHR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KHR;
    if (val == utility::conversions::to_string_t(U("KMF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KMF;
    if (val == utility::conversions::to_string_t(U("KPW")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KPW;
    if (val == utility::conversions::to_string_t(U("KRW")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KRW;
    if (val == utility::conversions::to_string_t(U("KWD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KWD;
    if (val == utility::conversions::to_string_t(U("KYD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KYD;
    if (val == utility::conversions::to_string_t(U("KZT")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_KZT;
    if (val == utility::conversions::to_string_t(U("LAK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_LAK;
    if (val == utility::conversions::to_string_t(U("LBP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_LBP;
    if (val == utility::conversions::to_string_t(U("LKR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_LKR;
    if (val == utility::conversions::to_string_t(U("LRD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_LRD;
    if (val == utility::conversions::to_string_t(U("LSL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_LSL;
    if (val == utility::conversions::to_string_t(U("LYD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_LYD;
    if (val == utility::conversions::to_string_t(U("MAD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MAD;
    if (val == utility::conversions::to_string_t(U("MDL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MDL;
    if (val == utility::conversions::to_string_t(U("MGA")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MGA;
    if (val == utility::conversions::to_string_t(U("MKD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MKD;
    if (val == utility::conversions::to_string_t(U("MMK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MMK;
    if (val == utility::conversions::to_string_t(U("MNT")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MNT;
    if (val == utility::conversions::to_string_t(U("MOP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MOP;
    if (val == utility::conversions::to_string_t(U("MRO")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MRO;
    if (val == utility::conversions::to_string_t(U("MUR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MUR;
    if (val == utility::conversions::to_string_t(U("MVR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MVR;
    if (val == utility::conversions::to_string_t(U("MWK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MWK;
    if (val == utility::conversions::to_string_t(U("MXN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MXN;
    if (val == utility::conversions::to_string_t(U("MYR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MYR;
    if (val == utility::conversions::to_string_t(U("MZN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_MZN;
    if (val == utility::conversions::to_string_t(U("NAD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_NAD;
    if (val == utility::conversions::to_string_t(U("NGN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_NGN;
    if (val == utility::conversions::to_string_t(U("NIO")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_NIO;
    if (val == utility::conversions::to_string_t(U("NOK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_NOK;
    if (val == utility::conversions::to_string_t(U("NPR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_NPR;
    if (val == utility::conversions::to_string_t(U("NZD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_NZD;
    if (val == utility::conversions::to_string_t(U("OMR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_OMR;
    if (val == utility::conversions::to_string_t(U("PAB")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_PAB;
    if (val == utility::conversions::to_string_t(U("PEN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_PEN;
    if (val == utility::conversions::to_string_t(U("PGK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_PGK;
    if (val == utility::conversions::to_string_t(U("PHP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_PHP;
    if (val == utility::conversions::to_string_t(U("PKR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_PKR;
    if (val == utility::conversions::to_string_t(U("PLN")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_PLN;
    if (val == utility::conversions::to_string_t(U("PYG")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_PYG;
    if (val == utility::conversions::to_string_t(U("QAR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_QAR;
    if (val == utility::conversions::to_string_t(U("RON")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_RON;
    if (val == utility::conversions::to_string_t(U("RSD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_RSD;
    if (val == utility::conversions::to_string_t(U("RUB")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_RUB;
    if (val == utility::conversions::to_string_t(U("RWF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_RWF;
    if (val == utility::conversions::to_string_t(U("SAR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SAR;
    if (val == utility::conversions::to_string_t(U("SBD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SBD;
    if (val == utility::conversions::to_string_t(U("SCR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SCR;
    if (val == utility::conversions::to_string_t(U("SDG")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SDG;
    if (val == utility::conversions::to_string_t(U("SEK")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SEK;
    if (val == utility::conversions::to_string_t(U("SGD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SGD;
    if (val == utility::conversions::to_string_t(U("SHP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SHP;
    if (val == utility::conversions::to_string_t(U("SLL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SLL;
    if (val == utility::conversions::to_string_t(U("SOS")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SOS;
    if (val == utility::conversions::to_string_t(U("SPL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SPL;
    if (val == utility::conversions::to_string_t(U("SRD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SRD;
    if (val == utility::conversions::to_string_t(U("STD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_STD;
    if (val == utility::conversions::to_string_t(U("SVC")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SVC;
    if (val == utility::conversions::to_string_t(U("SYP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SYP;
    if (val == utility::conversions::to_string_t(U("SZL")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_SZL;
    if (val == utility::conversions::to_string_t(U("THB")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_THB;
    if (val == utility::conversions::to_string_t(U("TJS")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TJS;
    if (val == utility::conversions::to_string_t(U("TMT")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TMT;
    if (val == utility::conversions::to_string_t(U("TND")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TND;
    if (val == utility::conversions::to_string_t(U("TOP")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TOP;
    if (val == utility::conversions::to_string_t(U("TRY")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TRY;
    if (val == utility::conversions::to_string_t(U("TTD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TTD;
    if (val == utility::conversions::to_string_t(U("TVD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TVD;
    if (val == utility::conversions::to_string_t(U("TWD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TWD;
    if (val == utility::conversions::to_string_t(U("TZS")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_TZS;
    if (val == utility::conversions::to_string_t(U("UAH")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_UAH;
    if (val == utility::conversions::to_string_t(U("UGX")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_UGX;
    if (val == utility::conversions::to_string_t(U("USD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_USD;
    if (val == utility::conversions::to_string_t(U("UYU")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_UYU;
    if (val == utility::conversions::to_string_t(U("UZS")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_UZS;
    if (val == utility::conversions::to_string_t(U("VEF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_VEF;
    if (val == utility::conversions::to_string_t(U("VND")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_VND;
    if (val == utility::conversions::to_string_t(U("VUV")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_VUV;
    if (val == utility::conversions::to_string_t(U("WST")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_WST;
    if (val == utility::conversions::to_string_t(U("XAF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_XAF;
    if (val == utility::conversions::to_string_t(U("XCD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_XCD;
    if (val == utility::conversions::to_string_t(U("XDR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_XDR;
    if (val == utility::conversions::to_string_t(U("XOF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_XOF;
    if (val == utility::conversions::to_string_t(U("XPF")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_XPF;
    if (val == utility::conversions::to_string_t(U("YER")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_YER;
    if (val == utility::conversions::to_string_t(U("ZAR")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ZAR;
    if (val == utility::conversions::to_string_t(U("ZMW")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ZMW;
    if (val == utility::conversions::to_string_t(U("ZWD")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_ZWD;
    if (val == utility::conversions::to_string_t(U("null")))
        return NullableCurrency::eNullableCurrency::NullableCurrency_NULL;
    return {};
}

EnumUnderlyingType fromEnum(NullableCurrency::eNullableCurrency e)
{
    switch (e)
    {
    case NullableCurrency::eNullableCurrency::NullableCurrency_AED:
        return U("AED");
    case NullableCurrency::eNullableCurrency::NullableCurrency_AFN:
        return U("AFN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ALL:
        return U("ALL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_AMD:
        return U("AMD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ANG:
        return U("ANG");
    case NullableCurrency::eNullableCurrency::NullableCurrency_AOA:
        return U("AOA");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ARS:
        return U("ARS");
    case NullableCurrency::eNullableCurrency::NullableCurrency_AUD:
        return U("AUD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_AWG:
        return U("AWG");
    case NullableCurrency::eNullableCurrency::NullableCurrency_AZN:
        return U("AZN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BAM:
        return U("BAM");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BBD:
        return U("BBD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BDT:
        return U("BDT");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BGN:
        return U("BGN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BHD:
        return U("BHD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BIF:
        return U("BIF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BMD:
        return U("BMD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BND:
        return U("BND");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BOB:
        return U("BOB");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BRL:
        return U("BRL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BSD:
        return U("BSD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BTN:
        return U("BTN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BWP:
        return U("BWP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BYN:
        return U("BYN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BYR:
        return U("BYR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_BZD:
        return U("BZD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CAD:
        return U("CAD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CDF:
        return U("CDF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CHF:
        return U("CHF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CLP:
        return U("CLP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CNY:
        return U("CNY");
    case NullableCurrency::eNullableCurrency::NullableCurrency_COP:
        return U("COP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CRC:
        return U("CRC");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CUC:
        return U("CUC");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CUP:
        return U("CUP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CVE:
        return U("CVE");
    case NullableCurrency::eNullableCurrency::NullableCurrency_CZK:
        return U("CZK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_DJF:
        return U("DJF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_DKK:
        return U("DKK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_DOP:
        return U("DOP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_DZD:
        return U("DZD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_EGP:
        return U("EGP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ERN:
        return U("ERN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ETB:
        return U("ETB");
    case NullableCurrency::eNullableCurrency::NullableCurrency_EUR:
        return U("EUR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_FJD:
        return U("FJD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_FKP:
        return U("FKP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GBP:
        return U("GBP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GEL:
        return U("GEL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GGP:
        return U("GGP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GHS:
        return U("GHS");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GIP:
        return U("GIP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GMD:
        return U("GMD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GNF:
        return U("GNF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GTQ:
        return U("GTQ");
    case NullableCurrency::eNullableCurrency::NullableCurrency_GYD:
        return U("GYD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_HKD:
        return U("HKD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_HNL:
        return U("HNL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_HRK:
        return U("HRK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_HTG:
        return U("HTG");
    case NullableCurrency::eNullableCurrency::NullableCurrency_HUF:
        return U("HUF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_IDR:
        return U("IDR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ILS:
        return U("ILS");
    case NullableCurrency::eNullableCurrency::NullableCurrency_IMP:
        return U("IMP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_INR:
        return U("INR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_IQD:
        return U("IQD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_IRR:
        return U("IRR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ISK:
        return U("ISK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_JEP:
        return U("JEP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_JMD:
        return U("JMD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_JOD:
        return U("JOD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_JPY:
        return U("JPY");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KES:
        return U("KES");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KGS:
        return U("KGS");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KHR:
        return U("KHR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KMF:
        return U("KMF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KPW:
        return U("KPW");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KRW:
        return U("KRW");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KWD:
        return U("KWD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KYD:
        return U("KYD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_KZT:
        return U("KZT");
    case NullableCurrency::eNullableCurrency::NullableCurrency_LAK:
        return U("LAK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_LBP:
        return U("LBP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_LKR:
        return U("LKR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_LRD:
        return U("LRD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_LSL:
        return U("LSL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_LYD:
        return U("LYD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MAD:
        return U("MAD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MDL:
        return U("MDL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MGA:
        return U("MGA");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MKD:
        return U("MKD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MMK:
        return U("MMK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MNT:
        return U("MNT");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MOP:
        return U("MOP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MRO:
        return U("MRO");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MUR:
        return U("MUR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MVR:
        return U("MVR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MWK:
        return U("MWK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MXN:
        return U("MXN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MYR:
        return U("MYR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_MZN:
        return U("MZN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_NAD:
        return U("NAD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_NGN:
        return U("NGN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_NIO:
        return U("NIO");
    case NullableCurrency::eNullableCurrency::NullableCurrency_NOK:
        return U("NOK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_NPR:
        return U("NPR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_NZD:
        return U("NZD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_OMR:
        return U("OMR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_PAB:
        return U("PAB");
    case NullableCurrency::eNullableCurrency::NullableCurrency_PEN:
        return U("PEN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_PGK:
        return U("PGK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_PHP:
        return U("PHP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_PKR:
        return U("PKR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_PLN:
        return U("PLN");
    case NullableCurrency::eNullableCurrency::NullableCurrency_PYG:
        return U("PYG");
    case NullableCurrency::eNullableCurrency::NullableCurrency_QAR:
        return U("QAR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_RON:
        return U("RON");
    case NullableCurrency::eNullableCurrency::NullableCurrency_RSD:
        return U("RSD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_RUB:
        return U("RUB");
    case NullableCurrency::eNullableCurrency::NullableCurrency_RWF:
        return U("RWF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SAR:
        return U("SAR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SBD:
        return U("SBD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SCR:
        return U("SCR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SDG:
        return U("SDG");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SEK:
        return U("SEK");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SGD:
        return U("SGD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SHP:
        return U("SHP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SLL:
        return U("SLL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SOS:
        return U("SOS");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SPL:
        return U("SPL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SRD:
        return U("SRD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_STD:
        return U("STD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SVC:
        return U("SVC");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SYP:
        return U("SYP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_SZL:
        return U("SZL");
    case NullableCurrency::eNullableCurrency::NullableCurrency_THB:
        return U("THB");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TJS:
        return U("TJS");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TMT:
        return U("TMT");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TND:
        return U("TND");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TOP:
        return U("TOP");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TRY:
        return U("TRY");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TTD:
        return U("TTD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TVD:
        return U("TVD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TWD:
        return U("TWD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_TZS:
        return U("TZS");
    case NullableCurrency::eNullableCurrency::NullableCurrency_UAH:
        return U("UAH");
    case NullableCurrency::eNullableCurrency::NullableCurrency_UGX:
        return U("UGX");
    case NullableCurrency::eNullableCurrency::NullableCurrency_USD:
        return U("USD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_UYU:
        return U("UYU");
    case NullableCurrency::eNullableCurrency::NullableCurrency_UZS:
        return U("UZS");
    case NullableCurrency::eNullableCurrency::NullableCurrency_VEF:
        return U("VEF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_VND:
        return U("VND");
    case NullableCurrency::eNullableCurrency::NullableCurrency_VUV:
        return U("VUV");
    case NullableCurrency::eNullableCurrency::NullableCurrency_WST:
        return U("WST");
    case NullableCurrency::eNullableCurrency::NullableCurrency_XAF:
        return U("XAF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_XCD:
        return U("XCD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_XDR:
        return U("XDR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_XOF:
        return U("XOF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_XPF:
        return U("XPF");
    case NullableCurrency::eNullableCurrency::NullableCurrency_YER:
        return U("YER");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ZAR:
        return U("ZAR");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ZMW:
        return U("ZMW");
    case NullableCurrency::eNullableCurrency::NullableCurrency_ZWD:
        return U("ZWD");
    case NullableCurrency::eNullableCurrency::NullableCurrency_NULL:
        return U("null");
    default:
        break;
    }
    return {};
}
}

NullableCurrency::NullableCurrency()
{
}

NullableCurrency::~NullableCurrency()
{
}

void NullableCurrency::validate()
{
    // TODO: implement validation
}

web::json::value NullableCurrency::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool NullableCurrency::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void NullableCurrency::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool NullableCurrency::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

NullableCurrency::eNullableCurrency NullableCurrency::getValue() const
{
   return m_value;
}

void NullableCurrency::setValue(NullableCurrency::eNullableCurrency const value)
{
   m_value = value;
}


}
}
}
}


