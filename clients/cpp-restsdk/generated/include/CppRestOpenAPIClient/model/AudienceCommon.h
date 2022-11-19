/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AudienceCommon.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AudienceCommon_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AudienceCommon_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/AudienceRule.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class AudienceRule;

/// <summary>
/// 
/// </summary>
class  AudienceCommon
    : public ModelBase
{
public:
    AudienceCommon();
    virtual ~AudienceCommon();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AudienceCommon members

    /// <summary>
    /// Ad account ID.
    /// </summary>
    utility::string_t getAdAccountId() const;
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();

    void setAdAccountId(const utility::string_t& value);

    /// <summary>
    /// Audience name.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AudienceRule> getRule() const;
    bool ruleIsSet() const;
    void unsetRule();

    void setRule(const std::shared_ptr<AudienceRule>& value);


protected:
    utility::string_t m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<AudienceRule> m_Rule;
    bool m_RuleIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AudienceCommon_H_ */
