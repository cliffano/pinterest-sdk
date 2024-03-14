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
 * KeywordsApi.h
 *
 * 
 */

#ifndef KeywordsApi_H_
#define KeywordsApi_H_


#include "ApiBase.h"

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "Error.h"
#include "KeywordUpdateBody.h"
#include "KeywordsMetricsArrayResponse.h"
#include "KeywordsRequest.h"
#include "KeywordsResponse.h"
#include "Keywords_get_200_response.h"
#include "MatchType.h"
#include <string>
#include <vector>

namespace org::openapitools::server::api
{

class  KeywordsApi : public ApiBase {
public:
    explicit KeywordsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~KeywordsApi() override = default;
    void init() override;

    static const std::string base;

private:
    void setupRoutes();

    void country_keywords_metrics_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void keywords_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void keywords_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void keywords_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void keywords_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

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
    /// Get country&#39;s keyword metrics
    /// </summary>
    /// <remarks>
    /// See keyword metrics for a specified country, aggregated across all of Pinterest. (Definitions are available from the \&quot;Get delivery metrics definitions\&quot; &lt;a href&#x3D;\&quot;/docs/api/v5/#operation/delivery_metrics/get\&quot;&gt;API endpoint&lt;/a&gt;).
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="countryCode">Two letter country code (ISO 3166-1 alpha-2)</param>
    /// <param name="keywords">Comma-separated keywords</param>
    virtual void country_keywords_metrics_get(const std::string &adAccountId, const std::optional<std::string> &countryCode, const std::optional<std::vector<std::string>> &keywords, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Create keywords
    /// </summary>
    /// <remarks>
    /// &lt;p&gt;Create keywords for following entity types(advertiser, campaign, ad group or ad).&lt;/p&gt; &lt;p&gt;For more information, see &lt;a target&#x3D;\&quot;_blank\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/keyword-targeting\&quot;&gt;Keyword targeting&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Notes:&lt;/b&gt;&lt;/p&gt; &lt;ul style&#x3D;\&quot;list-style-type: square;\&quot;&gt; &lt;li&gt;Advertisers and campaigns can only be assigned keywords with excluding (&#39;_NEGATIVE&#39;).&lt;/li&gt; &lt;li&gt;All keyword match types are available for ad groups.&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;For more information on match types, see &lt;a href&#x3D;\&quot;/docs/redoc/#section/Match-type-(keyword)\&quot;&gt;match type enums&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Returns:&lt;/b&gt;&lt;/p&gt; &lt;ul style&#x3D;\&quot;list-style-type: square;\&quot;&gt; &lt;li&gt;&lt;p&gt;A successful call returns an object containing an array of new keyword objects and an empty &amp;quot;errors&amp;quot; object array.&lt;/p&gt;&lt;/li&gt; &lt;li&gt;&lt;p&gt;An unsuccessful call returns an empty keywords array, and, instead, inserts the entire object with nulled/negated properties into the &amp;quot;errors&amp;quot; object array:&lt;/p&gt; &lt;pre class&#x3D;\&quot;last literal-block\&quot;&gt; { \&quot;keywords\&quot;: [], \&quot;errors\&quot;: [ { \&quot;data\&quot;: { \&quot;archived\&quot;: null, \&quot;match_type\&quot;: \&quot;EXACT\&quot;, \&quot;parent_type\&quot;: null, \&quot;value\&quot;: \&quot;foobar\&quot;, \&quot;parent_id\&quot;: null, \&quot;type\&quot;: \&quot;keyword\&quot;, \&quot;id\&quot;: null }, \&quot;error_messages\&quot;: [ \&quot;Advertisers and Campaigns only accept excluded targeting attributes.\&quot; ] } } &lt;/pre&gt;&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;b&gt;Rate limit&lt;/b&gt;: &lt;a href&#x3D;\&quot;/docs/redoc/#tag/Rate-Limits\&quot;&gt;WRITE&lt;/a&gt;.&lt;/p&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="keywordsRequest"></param>
    virtual void keywords_create(const std::string &adAccountId, const org::openapitools::server::model::KeywordsRequest &keywordsRequest, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get keywords
    /// </summary>
    /// <remarks>
    /// &lt;p&gt;Get a list of keywords based on the filters provided.&lt;/p&gt;&lt;p&gt;For more information, see &lt;a target&#x3D;\&quot;_blank\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/keyword-targeting\&quot;&gt;Keyword targeting&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Notes:&lt;/b&gt;&lt;/p&gt; &lt;ul style&#x3D;\&quot;list-style-type: square;\&quot;&gt; &lt;li&gt;Advertisers and campaigns can only be assigned keywords with excluding (&#39;_NEGATIVE&#39;).&lt;/li&gt; &lt;li&gt;All keyword match types are available for ad groups.&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;For more information on match types, see &lt;a href&#x3D;\&quot;/docs/redoc/#section/Match-type-(keyword)\&quot;&gt;match type enums&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Returns:&lt;/b&gt;&lt;/p&gt; &lt;ul style&#x3D;\&quot;list-style-type: square;\&quot;&gt; &lt;li&gt;&lt;p&gt;A successful call returns an object containing an array of new keyword objects and an empty &amp;quot;errors&amp;quot; object array.&lt;/p&gt;&lt;/li&gt; &lt;li&gt;&lt;p&gt;An unsuccessful call returns an empty keywords array, and, instead, inserts the entire object with nulled/negated properties into the &amp;quot;errors&amp;quot; object array:&lt;/p&gt; &lt;pre class&#x3D;\&quot;last literal-block\&quot;&gt; { \&quot;keywords\&quot;: [], \&quot;errors\&quot;: [ { \&quot;data\&quot;: { \&quot;archived\&quot;: null, \&quot;match_type\&quot;: \&quot;EXACT\&quot;, \&quot;parent_type\&quot;: null, \&quot;value\&quot;: \&quot;foobar\&quot;, \&quot;parent_id\&quot;: null, \&quot;type\&quot;: \&quot;keyword\&quot;, \&quot;id\&quot;: null }, \&quot;error_messages\&quot;: [ \&quot;Advertisers and Campaigns only accept excluded targeting attributes.\&quot; ] } } &lt;/pre&gt;&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;b&gt;Rate limit&lt;/b&gt;: &lt;a href&#x3D;\&quot;/docs/redoc/#tag/Rate-Limits\&quot;&gt;WRITE&lt;/a&gt;.&lt;/p&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="campaignId">Campaign Id to use to filter the results. (optional, default to &quot;&quot;)</param>
    /// <param name="adGroupId">Ad group Id. (optional, default to &quot;&quot;)</param>
    /// <param name="matchTypes">Keyword &lt;a href&#x3D;\&quot;/docs/redoc/#section/Match-type-(keyword).\&quot;&gt;match type&lt;/a&gt; (optional, default to std::vector&lt;std::shared_ptr&lt;MatchType&gt;&gt;())</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to &quot;&quot;)</param>
    virtual void keywords_get(const std::string &adAccountId, const std::optional<std::string> &campaignId, const std::optional<std::string> &adGroupId, const std::optional<std::vector<org::openapitools::server::model::MatchType>> &matchTypes, const std::optional<int32_t> &pageSize, const std::optional<std::string> &bookmark, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Update keywords
    /// </summary>
    /// <remarks>
    /// &lt;p&gt;Update one or more keywords&#39; bid and archived fields.&lt;/p&gt; &lt;p&gt;Archiving a keyword effectively deletes it - keywords no longer receive metrics and no longer visible within the parent entity&#39;s keywords list.&lt;/p&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="keywordUpdateBody"></param>
    virtual void keywords_update(const std::string &adAccountId, const org::openapitools::server::model::KeywordUpdateBody &keywordUpdateBody, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* KeywordsApi_H_ */

