/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ConversionEventsApi.h
 *
 * 
 */

#ifndef ConversionEventsApi_H_
#define ConversionEventsApi_H_


#include "ApiBase.h"

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "ConversionApiResponse.h"
#include "ConversionEvents.h"
#include "Error.h"
#include <string>

namespace org::openapitools::server::api
{

class  ConversionEventsApi : public ApiBase {
public:
    explicit ConversionEventsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~ConversionEventsApi() override = default;
    void init() override;

    static const std::string base;

private:
    void setupRoutes();

    void events_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void conversion_events_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Send conversion events to the Pinterest API for Conversions
    /// </summary>
    /// <remarks>
    /// The Pinterest API offers advertisers a way to send Pinterest their conversion information (including web conversions, in-app conversions, or even offline conversions) based on their &lt;code&gt;ad_account_id&lt;/code&gt;. The request body should be a JSON object. - This endpoint requires an &lt;code&gt;access_token&lt;/code&gt; be generated through Ads Manager. Review the &lt;a href&#x3D;\&quot;/docs/conversions/conversion-management/#Authenticating%20for%20the%20Conversion%20Tracking%20endpoint\&quot;&gt;Conversions Guide&lt;/a&gt; for more details. - The token&#39;s &lt;code&gt;user_account&lt;/code&gt; must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Audience, Campaign. - If the merchant is submitting this information using both Pinterest conversion tags and the Pinterest API, Pinterest will remove duplicate information before reporting. (Note that events that took place offline cannot be deduplicated.)
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="conversionEvents">Conversion events.</param>
    /// <param name="test">Include query param ?test&#x3D;true to mark the request as a test request. The events will not be recorded but the API will still return the same response messages. Use this mode to verify your requests are working and your events are constructed correctly. Warning: If you use this query parameter, be certain that it is off (set to false or deleted) before sending a legitimate (non-testing) request. (optional, default to false)</param>
    virtual void events_create(const std::string &adAccountId, const org::openapitools::server::model::ConversionEvents &conversionEvents, const std::optional<bool> &test, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* ConversionEventsApi_H_ */
