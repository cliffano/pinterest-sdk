/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Country.h
 *
 * Country ID from ISO 3166-1 alpha-2.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Country_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Country_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  Country
    : public ModelBase
{
public:
    Country();
    virtual ~Country();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eCountry
    {
        Country_AD,
        Country_AE,
        Country_AF,
        Country_AG,
        Country_AI,
        Country_AL,
        Country_AM,
        Country_AO,
        Country_AQ,
        Country_AR,
        Country_AS,
        Country_AT,
        Country_AU,
        Country_AW,
        Country_AX,
        Country_AZ,
        Country_BA,
        Country_BB,
        Country_BD,
        Country_BE,
        Country_BF,
        Country_BG,
        Country_BH,
        Country_BI,
        Country_BJ,
        Country_BL,
        Country_BM,
        Country_BN,
        Country_BO,
        Country_BQ,
        Country_BR,
        Country_BS,
        Country_BT,
        Country_BV,
        Country_BW,
        Country_BY,
        Country_BZ,
        Country_CA,
        Country_CC,
        Country_CD,
        Country_CF,
        Country_CG,
        Country_CH,
        Country_CI,
        Country_CK,
        Country_CL,
        Country_CM,
        Country_CO,
        Country_CR,
        Country_CU,
        Country_CV,
        Country_CW,
        Country_CX,
        Country_CY,
        Country_CZ,
        Country_DE,
        Country_DJ,
        Country_DK,
        Country_DM,
        Country_DO,
        Country_DZ,
        Country_EC,
        Country_EE,
        Country_EG,
        Country_EH,
        Country_ER,
        Country_ES,
        Country_ET,
        Country_FI,
        Country_FJ,
        Country_FK,
        Country_FM,
        Country_FO,
        Country_FR,
        Country_GA,
        Country_GB,
        Country_GD,
        Country_GE,
        Country_GF,
        Country_GG,
        Country_GH,
        Country_GI,
        Country_GL,
        Country_GM,
        Country_GN,
        Country_GP,
        Country_GQ,
        Country_GR,
        Country_GS,
        Country_GT,
        Country_GU,
        Country_GW,
        Country_GY,
        Country_HK,
        Country_HM,
        Country_HN,
        Country_HR,
        Country_HT,
        Country_HU,
        Country_ID,
        Country_IE,
        Country_IL,
        Country_IM,
        Country_IN,
        Country_IO,
        Country_IQ,
        Country_IR,
        Country_IS,
        Country_IT,
        Country_JE,
        Country_JM,
        Country_JO,
        Country_JP,
        Country_KE,
        Country_KG,
        Country_KH,
        Country_KI,
        Country_KM,
        Country_KN,
        Country_KR,
        Country_KW,
        Country_KY,
        Country_KZ,
        Country_LA,
        Country_LB,
        Country_LC,
        Country_LI,
        Country_LK,
        Country_LR,
        Country_LS,
        Country_LT,
        Country_LU,
        Country_LV,
        Country_LY,
        Country_MA,
        Country_MC,
        Country_MD,
        Country_ME,
        Country_MF,
        Country_MG,
        Country_MH,
        Country_MK,
        Country_ML,
        Country_MM,
        Country_MN,
        Country_MO,
        Country_MP,
        Country_MQ,
        Country_MR,
        Country_MS,
        Country_MT,
        Country_MU,
        Country_MV,
        Country_MW,
        Country_MX,
        Country_MY,
        Country_MZ,
        Country_NA,
        Country_NC,
        Country_NE,
        Country_NF,
        Country_NG,
        Country_NI,
        Country_NL,
        Country_NO,
        Country_NP,
        Country_NR,
        Country_NU,
        Country_NZ,
        Country_OM,
        Country_PA,
        Country_PE,
        Country_PF,
        Country_PG,
        Country_PH,
        Country_PK,
        Country_PL,
        Country_PM,
        Country_PN,
        Country_PR,
        Country_PS,
        Country_PT,
        Country_PW,
        Country_PY,
        Country_QA,
        Country_RE,
        Country_RO,
        Country_RS,
        Country_RU,
        Country_RW,
        Country_SA,
        Country_SB,
        Country_SC,
        Country_SD,
        Country_SE,
        Country_SG,
        Country_SH,
        Country_SI,
        Country_SJ,
        Country_SK,
        Country_SL,
        Country_SM,
        Country_SN,
        Country_SO,
        Country_SR,
        Country_SS,
        Country_ST,
        Country_SV,
        Country_SX,
        Country_SY,
        Country_SZ,
        Country_TC,
        Country_TD,
        Country_TF,
        Country_TG,
        Country_TH,
        Country_TJ,
        Country_TK,
        Country_TL,
        Country_TM,
        Country_TN,
        Country_TO,
        Country_TR,
        Country_TT,
        Country_TV,
        Country_TW,
        Country_TZ,
        Country_UA,
        Country_UG,
        Country_UM,
        Country_US,
        Country_UY,
        Country_UZ,
        Country_VA,
        Country_VC,
        Country_VE,
        Country_VG,
        Country_VI,
        Country_VN,
        Country_VU,
        Country_WF,
        Country_WS,
        Country_YE,
        Country_YT,
        Country_ZA,
        Country_ZM,
        Country_ZW,
    };

    eCountry getValue() const;
    void setValue(eCountry const value);

    protected:
        eCountry m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Country_H_ */
