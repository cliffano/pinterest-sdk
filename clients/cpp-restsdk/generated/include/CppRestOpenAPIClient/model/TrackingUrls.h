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
 * TrackingUrls.h
 *
 * Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TrackingUrls_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TrackingUrls_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
/// </summary>
class  TrackingUrls
    : public ModelBase
{
public:
    TrackingUrls();
    virtual ~TrackingUrls();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TrackingUrls members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getImpression();
    bool impressionIsSet() const;
    void unsetImpression();

    void setImpression(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getClick();
    bool clickIsSet() const;
    void unsetClick();

    void setClick(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getEngagement();
    bool engagementIsSet() const;
    void unsetEngagement();

    void setEngagement(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getBuyableButton();
    bool buyableButtonIsSet() const;
    void unsetBuyable_button();

    void setBuyableButton(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getAudienceVerification();
    bool audienceVerificationIsSet() const;
    void unsetAudience_verification();

    void setAudienceVerification(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Impression;
    bool m_ImpressionIsSet;
    std::vector<utility::string_t> m_Click;
    bool m_ClickIsSet;
    std::vector<utility::string_t> m_Engagement;
    bool m_EngagementIsSet;
    std::vector<utility::string_t> m_Buyable_button;
    bool m_Buyable_buttonIsSet;
    std::vector<utility::string_t> m_Audience_verification;
    bool m_Audience_verificationIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TrackingUrls_H_ */
