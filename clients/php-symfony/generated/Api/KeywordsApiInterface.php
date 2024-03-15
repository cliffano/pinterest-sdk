<?php
/**
 * KeywordsApiInterface
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Api;

use Symfony\Component\HttpFoundation\File\UploadedFile;
use OpenAPI\Server\Model\Error;
use OpenAPI\Server\Model\KeywordUpdateBody;
use OpenAPI\Server\Model\KeywordsGet200Response;
use OpenAPI\Server\Model\KeywordsMetricsArrayResponse;
use OpenAPI\Server\Model\KeywordsRequest;
use OpenAPI\Server\Model\KeywordsResponse;
use OpenAPI\Server\Model\MatchType;
use OpenAPI\Server\Model\TrendType;
use OpenAPI\Server\Model\TrendingKeywordsResponse;
use OpenAPI\Server\Model\TrendsSupportedRegion;

/**
 * KeywordsApiInterface Interface Doc Comment
 *
 * @category Interface
 * @package  OpenAPI\Server\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
interface KeywordsApiInterface
{

    /**
     * Sets authentication method pinterest_oauth2
     *
     * @param string|null $value Value of the pinterest_oauth2 authentication method.
     *
     * @return void
     */
    public function setpinterest_oauth2(?string $value): void;

    /**
     * Operation countryKeywordsMetricsGet
     *
     * Get country's keyword metrics
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  string $countryCode  Two letter country code (ISO 3166-1 alpha-2) (required)
     * @param  array $keywords  Comma-separated keywords (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function countryKeywordsMetricsGet(
        string $adAccountId,
        string $countryCode,
        array $keywords,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation keywordsCreate
     *
     * Create keywords
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  KeywordsRequest $keywordsRequest   (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function keywordsCreate(
        string $adAccountId,
        KeywordsRequest $keywordsRequest,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation keywordsGet
     *
     * Get keywords
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  string|null $campaignId  Campaign Id to use to filter the results. (optional)
     * @param  string|null $adGroupId  Ad group Id. (optional)
     * @param  array|null $matchTypes  Keyword &lt;a target&#x3D;\&quot;_blank\&quot; href&#x3D;\&quot;/docs/ads/targeting/#Match%20type%20and%20targeting%20level\&quot;&gt;match type&lt;/a&gt; (optional)
     * @param  int $pageSize  Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param  string|null $bookmark  Cursor used to fetch the next page of items (optional)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function keywordsGet(
        string $adAccountId,
        ?string $campaignId,
        ?string $adGroupId,
        ?array $matchTypes,
        int $pageSize,
        ?string $bookmark,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation keywordsUpdate
     *
     * Update keywords
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  KeywordUpdateBody $keywordUpdateBody   (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function keywordsUpdate(
        string $adAccountId,
        KeywordUpdateBody $keywordUpdateBody,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation trendingKeywordsList
     *
     * List trending keywords
     *
     * @param  \OpenAPI\Server\Model\TrendsSupportedRegion $region  The geographic region of interest. Only top trends within the specified region will be returned.&lt;br /&gt; The &#x60;region&#x60; parameter is formatted as ISO 3166-2 country codes delimited by &#x60;+&#x60;, corresponding to the following geographic areas: - &#x60;US&#x60; - United States - &#x60;CA&#x60; - Canada - &#x60;DE&#x60; - Germany - &#x60;FR&#x60; - France - &#x60;ES&#x60; - Spain - &#x60;IT&#x60; - Italy - &#x60;DE+AT+CH&#x60; - Germanic countries - &#x60;GB+IE&#x60; - Great Britain &amp; Ireland - &#x60;IT+ES+PT+GR+MT&#x60; - Southern Europe - &#x60;PL+RO+HU+SK+CZ&#x60; - Eastern Europe - &#x60;SE+DK+FI+NO&#x60; - Nordic countries - &#x60;NL+BE+LU&#x60; - Benelux - &#x60;AR&#x60; - Argentina - &#x60;BR&#x60; - Brazil - &#x60;CO&#x60; - Colombia - &#x60;MX&#x60; - Mexico - &#x60;MX+AR+CO+CL&#x60; - Hispanic LatAm - &#x60;AU+NZ&#x60; - Australasia (required)
     * @param  \OpenAPI\Server\Model\TrendType $trendType  The methodology used to rank how trendy a keyword is. - &#x60;growing&#x60; trends have high upward growth in search volume over the last quarter - &#x60;monthly&#x60; trends have high search volume in the last month - &#x60;yearly&#x60; trends have high search volume in the last year - &#x60;seasonal&#x60; trends have high upward growth in search volume over the last month and exhibit a seasonal recurring pattern (typically annual) (required)
     * @param  array|null $interests  If set, filters the results to trends associated with the specified interests.&lt;br /&gt; If unset, trends for all interests will be returned.&lt;br /&gt; The list of supported interests is: - &#x60;animals&#x60; - Animals - &#x60;architecture&#x60; - Architecture - &#x60;art&#x60; - Art - &#x60;beauty&#x60; - Beauty - &#x60;childrens_fashion&#x60; - Children&#39;s Fashion - &#x60;design&#x60; - Design - &#x60;diy_and_crafts&#x60; - DIY &amp; Crafts - &#x60;education&#x60; - Education - &#x60;electronics&#x60; - Electronics - &#x60;entertainment&#x60; - Entertainment - &#x60;event_planning&#x60; - Event Planning - &#x60;finance&#x60; - Finance - &#x60;food_and_drinks&#x60; - Food &amp; Drink - &#x60;gardening&#x60; - Gardening - &#x60;health&#x60; - Health - &#x60;home_decor&#x60; - Home Decor - &#x60;mens_fashion&#x60; - Men&#39;s Fashion - &#x60;parenting&#x60; - Parenting - &#x60;quotes&#x60; - Quotes - &#x60;sport&#x60; - Sports - &#x60;travel&#x60; - Travel - &#x60;vehicles&#x60; - Vehicles - &#x60;wedding&#x60; - Wedding - &#x60;womens_fashion&#x60; - Women&#39;s Fashion (optional)
     * @param  array|null $genders  If set, filters the results to trends among users who identify with the specified gender(s).&lt;br /&gt; If unset, trends among all genders will be returned.&lt;br /&gt; The &#x60;unknown&#x60; group includes users with unspecified or customized gender profile settings. (optional)
     * @param  array|null $ages  If set, filters the results to trends among users in the specified age range(s).&lt;br /&gt; If unset, trends among all age groups will be returned. (optional)
     * @param  bool $normalizeAgainstGroup  Governs how the resulting time series data will be normalized to a [0-100] scale.&lt;br /&gt; By default (&#x60;false&#x60;), the data will be normalized independently for each keyword.  The peak search volume observation in *each* keyword&#39;s time series will be represented by the value 100.  This is ideal for analyzing when an individual keyword is expected to peak in interest.&lt;br /&gt; If set to &#x60;true&#x60;, the data will be normalized as a group.  The peak search volume observation across *all* keywords in the response will be represented by the value 100, and all other values scaled accordingly.  Use this option when you wish to compare relative search volume between multiple keywords. (optional, default to false)
     * @param  int $limit  The maximum number of trending keywords that will be returned. Keywords are returned in trend-ranked order, so a &#x60;limit&#x60; of 50 will return the top 50 trends. (optional, default to 50)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function trendingKeywordsList(
        \OpenAPI\Server\Model\TrendsSupportedRegion $region,
        \OpenAPI\Server\Model\TrendType $trendType,
        ?array $interests,
        ?array $genders,
        ?array $ages,
        bool $normalizeAgainstGroup,
        int $limit,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;
}