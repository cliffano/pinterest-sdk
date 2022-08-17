/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AdGroupCommon_tracking_urls.h
 *
 * Third-party tracking URLs.&lt;br&gt; JSON object with the format: {\&quot;&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\&quot;&gt;Tracking event enum&lt;/a&gt;\&quot;:[URL string array],...}&lt;br&gt; For example: {\&quot;impression\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;], \&quot;click\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;, \&quot;URL3\&quot;]}.&lt;br&gt;Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.&lt;br&gt;&lt;br&gt; For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
 */

#ifndef AdGroupCommon_tracking_urls_H_
#define AdGroupCommon_tracking_urls_H_


#include <string>
#include "TrackingUrls.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Third-party tracking URLs.&lt;br&gt; JSON object with the format: {\&quot;&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\&quot;&gt;Tracking event enum&lt;/a&gt;\&quot;:[URL string array],...}&lt;br&gt; For example: {\&quot;impression\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;], \&quot;click\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;, \&quot;URL3\&quot;]}.&lt;br&gt;Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.&lt;br&gt;&lt;br&gt; For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
/// </summary>
class  AdGroupCommon_tracking_urls
{
public:
    AdGroupCommon_tracking_urls();
    virtual ~AdGroupCommon_tracking_urls() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const AdGroupCommon_tracking_urls& rhs) const;
    bool operator!=(const AdGroupCommon_tracking_urls& rhs) const;

    /////////////////////////////////////////////
    /// AdGroupCommon_tracking_urls members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getImpression() const;
    void setImpression(std::vector<std::string> const& value);
    bool impressionIsSet() const;
    void unsetImpression();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getClick() const;
    void setClick(std::vector<std::string> const& value);
    bool clickIsSet() const;
    void unsetClick();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getEngagement() const;
    void setEngagement(std::vector<std::string> const& value);
    bool engagementIsSet() const;
    void unsetEngagement();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getBuyableButton() const;
    void setBuyableButton(std::vector<std::string> const& value);
    bool buyableButtonIsSet() const;
    void unsetBuyable_button();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getAudienceVerification() const;
    void setAudienceVerification(std::vector<std::string> const& value);
    bool audienceVerificationIsSet() const;
    void unsetAudience_verification();

    friend void to_json(nlohmann::json& j, const AdGroupCommon_tracking_urls& o);
    friend void from_json(const nlohmann::json& j, AdGroupCommon_tracking_urls& o);
protected:
    std::vector<std::string> m_Impression;
    bool m_ImpressionIsSet;
    std::vector<std::string> m_Click;
    bool m_ClickIsSet;
    std::vector<std::string> m_Engagement;
    bool m_EngagementIsSet;
    std::vector<std::string> m_Buyable_button;
    bool m_Buyable_buttonIsSet;
    std::vector<std::string> m_Audience_verification;
    bool m_Audience_verificationIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdGroupCommon_tracking_urls_H_ */
