/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * NonNullableCatalogsCurrency.h
 *
 * Currency Codes from ISO 4217.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_NonNullableCatalogsCurrency_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_NonNullableCatalogsCurrency_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  NonNullableCatalogsCurrency
    : public ModelBase
{
public:
    NonNullableCatalogsCurrency();
    virtual ~NonNullableCatalogsCurrency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eNonNullableCatalogsCurrency
    {
        NonNullableCatalogsCurrency_AED,
        NonNullableCatalogsCurrency_AFN,
        NonNullableCatalogsCurrency_ALL,
        NonNullableCatalogsCurrency_AMD,
        NonNullableCatalogsCurrency_ANG,
        NonNullableCatalogsCurrency_AOA,
        NonNullableCatalogsCurrency_ARS,
        NonNullableCatalogsCurrency_AUD,
        NonNullableCatalogsCurrency_AWG,
        NonNullableCatalogsCurrency_AZN,
        NonNullableCatalogsCurrency_BAM,
        NonNullableCatalogsCurrency_BBD,
        NonNullableCatalogsCurrency_BDT,
        NonNullableCatalogsCurrency_BGN,
        NonNullableCatalogsCurrency_BHD,
        NonNullableCatalogsCurrency_BIF,
        NonNullableCatalogsCurrency_BMD,
        NonNullableCatalogsCurrency_BND,
        NonNullableCatalogsCurrency_BOB,
        NonNullableCatalogsCurrency_BRL,
        NonNullableCatalogsCurrency_BSD,
        NonNullableCatalogsCurrency_BTN,
        NonNullableCatalogsCurrency_BWP,
        NonNullableCatalogsCurrency_BYN,
        NonNullableCatalogsCurrency_BYR,
        NonNullableCatalogsCurrency_BZD,
        NonNullableCatalogsCurrency_CAD,
        NonNullableCatalogsCurrency_CDF,
        NonNullableCatalogsCurrency_CHF,
        NonNullableCatalogsCurrency_CLP,
        NonNullableCatalogsCurrency_CNY,
        NonNullableCatalogsCurrency_COP,
        NonNullableCatalogsCurrency_CRC,
        NonNullableCatalogsCurrency_CUC,
        NonNullableCatalogsCurrency_CUP,
        NonNullableCatalogsCurrency_CVE,
        NonNullableCatalogsCurrency_CZK,
        NonNullableCatalogsCurrency_DJF,
        NonNullableCatalogsCurrency_DKK,
        NonNullableCatalogsCurrency_DOP,
        NonNullableCatalogsCurrency_DZD,
        NonNullableCatalogsCurrency_EGP,
        NonNullableCatalogsCurrency_ERN,
        NonNullableCatalogsCurrency_ETB,
        NonNullableCatalogsCurrency_EUR,
        NonNullableCatalogsCurrency_FJD,
        NonNullableCatalogsCurrency_FKP,
        NonNullableCatalogsCurrency_GBP,
        NonNullableCatalogsCurrency_GEL,
        NonNullableCatalogsCurrency_GGP,
        NonNullableCatalogsCurrency_GHS,
        NonNullableCatalogsCurrency_GIP,
        NonNullableCatalogsCurrency_GMD,
        NonNullableCatalogsCurrency_GNF,
        NonNullableCatalogsCurrency_GTQ,
        NonNullableCatalogsCurrency_GYD,
        NonNullableCatalogsCurrency_HKD,
        NonNullableCatalogsCurrency_HNL,
        NonNullableCatalogsCurrency_HRK,
        NonNullableCatalogsCurrency_HTG,
        NonNullableCatalogsCurrency_HUF,
        NonNullableCatalogsCurrency_IDR,
        NonNullableCatalogsCurrency_ILS,
        NonNullableCatalogsCurrency_IMP,
        NonNullableCatalogsCurrency_INR,
        NonNullableCatalogsCurrency_IQD,
        NonNullableCatalogsCurrency_IRR,
        NonNullableCatalogsCurrency_ISK,
        NonNullableCatalogsCurrency_JEP,
        NonNullableCatalogsCurrency_JMD,
        NonNullableCatalogsCurrency_JOD,
        NonNullableCatalogsCurrency_JPY,
        NonNullableCatalogsCurrency_KES,
        NonNullableCatalogsCurrency_KGS,
        NonNullableCatalogsCurrency_KHR,
        NonNullableCatalogsCurrency_KMF,
        NonNullableCatalogsCurrency_KPW,
        NonNullableCatalogsCurrency_KRW,
        NonNullableCatalogsCurrency_KWD,
        NonNullableCatalogsCurrency_KYD,
        NonNullableCatalogsCurrency_KZT,
        NonNullableCatalogsCurrency_LAK,
        NonNullableCatalogsCurrency_LBP,
        NonNullableCatalogsCurrency_LKR,
        NonNullableCatalogsCurrency_LRD,
        NonNullableCatalogsCurrency_LSL,
        NonNullableCatalogsCurrency_LYD,
        NonNullableCatalogsCurrency_MAD,
        NonNullableCatalogsCurrency_MDL,
        NonNullableCatalogsCurrency_MGA,
        NonNullableCatalogsCurrency_MKD,
        NonNullableCatalogsCurrency_MMK,
        NonNullableCatalogsCurrency_MNT,
        NonNullableCatalogsCurrency_MOP,
        NonNullableCatalogsCurrency_MRO,
        NonNullableCatalogsCurrency_MUR,
        NonNullableCatalogsCurrency_MVR,
        NonNullableCatalogsCurrency_MWK,
        NonNullableCatalogsCurrency_MXN,
        NonNullableCatalogsCurrency_MYR,
        NonNullableCatalogsCurrency_MZN,
        NonNullableCatalogsCurrency_NAD,
        NonNullableCatalogsCurrency_NGN,
        NonNullableCatalogsCurrency_NIO,
        NonNullableCatalogsCurrency_NOK,
        NonNullableCatalogsCurrency_NPR,
        NonNullableCatalogsCurrency_NZD,
        NonNullableCatalogsCurrency_OMR,
        NonNullableCatalogsCurrency_PAB,
        NonNullableCatalogsCurrency_PEN,
        NonNullableCatalogsCurrency_PGK,
        NonNullableCatalogsCurrency_PHP,
        NonNullableCatalogsCurrency_PKR,
        NonNullableCatalogsCurrency_PLN,
        NonNullableCatalogsCurrency_PYG,
        NonNullableCatalogsCurrency_QAR,
        NonNullableCatalogsCurrency_RON,
        NonNullableCatalogsCurrency_RSD,
        NonNullableCatalogsCurrency_RUB,
        NonNullableCatalogsCurrency_RWF,
        NonNullableCatalogsCurrency_SAR,
        NonNullableCatalogsCurrency_SBD,
        NonNullableCatalogsCurrency_SCR,
        NonNullableCatalogsCurrency_SDG,
        NonNullableCatalogsCurrency_SEK,
        NonNullableCatalogsCurrency_SGD,
        NonNullableCatalogsCurrency_SHP,
        NonNullableCatalogsCurrency_SLL,
        NonNullableCatalogsCurrency_SOS,
        NonNullableCatalogsCurrency_SPL,
        NonNullableCatalogsCurrency_SRD,
        NonNullableCatalogsCurrency_STD,
        NonNullableCatalogsCurrency_SVC,
        NonNullableCatalogsCurrency_SYP,
        NonNullableCatalogsCurrency_SZL,
        NonNullableCatalogsCurrency_THB,
        NonNullableCatalogsCurrency_TJS,
        NonNullableCatalogsCurrency_TMT,
        NonNullableCatalogsCurrency_TND,
        NonNullableCatalogsCurrency_TOP,
        NonNullableCatalogsCurrency_TRY,
        NonNullableCatalogsCurrency_TTD,
        NonNullableCatalogsCurrency_TVD,
        NonNullableCatalogsCurrency_TWD,
        NonNullableCatalogsCurrency_TZS,
        NonNullableCatalogsCurrency_UAH,
        NonNullableCatalogsCurrency_UGX,
        NonNullableCatalogsCurrency_USD,
        NonNullableCatalogsCurrency_UYU,
        NonNullableCatalogsCurrency_UZS,
        NonNullableCatalogsCurrency_VEF,
        NonNullableCatalogsCurrency_VND,
        NonNullableCatalogsCurrency_VUV,
        NonNullableCatalogsCurrency_WST,
        NonNullableCatalogsCurrency_XAF,
        NonNullableCatalogsCurrency_XCD,
        NonNullableCatalogsCurrency_XDR,
        NonNullableCatalogsCurrency_XOF,
        NonNullableCatalogsCurrency_XPF,
        NonNullableCatalogsCurrency_YER,
        NonNullableCatalogsCurrency_ZAR,
        NonNullableCatalogsCurrency_ZMW,
        NonNullableCatalogsCurrency_ZWD,
    };

    eNonNullableCatalogsCurrency getValue() const;
    void setValue(eNonNullableCatalogsCurrency const value);

    protected:
        eNonNullableCatalogsCurrency m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_NonNullableCatalogsCurrency_H_ */
