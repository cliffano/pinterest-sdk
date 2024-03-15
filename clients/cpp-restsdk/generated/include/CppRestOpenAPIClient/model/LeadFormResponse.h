/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * LeadFormResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_LeadFormResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_LeadFormResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/LeadFormQuestion.h"
#include "CppRestOpenAPIClient/model/LeadFormStatus.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class LeadFormQuestion;

/// <summary>
/// 
/// </summary>
class  LeadFormResponse
    : public ModelBase
{
public:
    LeadFormResponse();
    virtual ~LeadFormResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LeadFormResponse members

    /// <summary>
    /// Internal name of the lead form.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// A link to the advertiser&#39;s privacy policy. This will be included in the lead form&#39;s disclosure language.
    /// </summary>
    utility::string_t getPrivacyPolicyLink() const;
    bool privacyPolicyLinkIsSet() const;
    void unsetPrivacy_policy_link();

    void setPrivacyPolicyLink(const utility::string_t& value);

    /// <summary>
    /// Whether the advertiser has accepted Pinterest&#39;s terms of service for creating a lead ad.
    /// </summary>
    bool isHasAcceptedTerms() const;
    bool hasAcceptedTermsIsSet() const;
    void unsetHas_accepted_terms();

    void setHasAcceptedTerms(bool value);

    /// <summary>
    /// A message for people who complete the form to let them know what happens next.
    /// </summary>
    utility::string_t getCompletionMessage() const;
    bool completionMessageIsSet() const;
    void unsetCompletion_message();

    void setCompletionMessage(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<LeadFormStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<LeadFormStatus>& value);

    /// <summary>
    /// Additional disclosure language to be included in the lead form.
    /// </summary>
    utility::string_t getDisclosureLanguage() const;
    bool disclosureLanguageIsSet() const;
    void unsetDisclosure_language();

    void setDisclosureLanguage(const utility::string_t& value);

    /// <summary>
    /// List of questions to be displayed on the lead form.
    /// </summary>
    std::vector<std::shared_ptr<LeadFormQuestion>>& getQuestions();
    bool questionsIsSet() const;
    void unsetQuestions();

    void setQuestions(const std::vector<std::shared_ptr<LeadFormQuestion>>& value);

    /// <summary>
    /// The ID of this lead form
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// The Ad Account ID that this lead form belongs to.
    /// </summary>
    utility::string_t getAdAccountId() const;
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();

    void setAdAccountId(const utility::string_t& value);

    /// <summary>
    /// Lead form creation time. Unix timestamp in seconds.
    /// </summary>
    int32_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetCreated_time();

    void setCreatedTime(int32_t value);

    /// <summary>
    /// Last update time. Unix timestamp in seconds.
    /// </summary>
    int32_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetUpdated_time();

    void setUpdatedTime(int32_t value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Privacy_policy_link;
    bool m_Privacy_policy_linkIsSet;
    bool m_Has_accepted_terms;
    bool m_Has_accepted_termsIsSet;
    utility::string_t m_Completion_message;
    bool m_Completion_messageIsSet;
    std::shared_ptr<LeadFormStatus> m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Disclosure_language;
    bool m_Disclosure_languageIsSet;
    std::vector<std::shared_ptr<LeadFormQuestion>> m_Questions;
    bool m_QuestionsIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    int32_t m_Updated_time;
    bool m_Updated_timeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_LeadFormResponse_H_ */
