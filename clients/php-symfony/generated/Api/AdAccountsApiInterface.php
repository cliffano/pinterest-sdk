<?php
/**
 * AdAccountsApiInterface
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
use OpenAPI\Server\Model\AdAccount;
use OpenAPI\Server\Model\AdAccountAnalyticsResponseInner;
use OpenAPI\Server\Model\AdAccountCreateRequest;
use OpenAPI\Server\Model\AdAccountsList200Response;
use OpenAPI\Server\Model\AdsAnalyticsCreateAsyncRequest;
use OpenAPI\Server\Model\AdsAnalyticsCreateAsyncResponse;
use OpenAPI\Server\Model\AdsAnalyticsGetAsyncResponse;
use OpenAPI\Server\Model\AdsAnalyticsTargetingType;
use OpenAPI\Server\Model\ConversionReportAttributionType;
use OpenAPI\Server\Model\CreateMMMReportRequest;
use OpenAPI\Server\Model\CreateMMMReportResponse;
use OpenAPI\Server\Model\Date;
use OpenAPI\Server\Model\Error;
use OpenAPI\Server\Model\GetMMMReportResponse;
use OpenAPI\Server\Model\Granularity;
use OpenAPI\Server\Model\MetricsResponse;
use OpenAPI\Server\Model\TemplatesList200Response;

/**
 * AdAccountsApiInterface Interface Doc Comment
 *
 * @category Interface
 * @package  OpenAPI\Server\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
interface AdAccountsApiInterface
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
     * Operation adAccountAnalytics
     *
     * Get ad account analytics
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  \DateTime $startDate  Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. (required)
     * @param  \DateTime $endDate  Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. (required)
     * @param  array $columns  Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned (required)
     * @param  \OpenAPI\Server\Model\Granularity $granularity  TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly (required)
     * @param  int $clickWindowDays  Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)
     * @param  int $engagementWindowDays  Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)
     * @param  int $viewWindowDays  Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1)
     * @param  string $conversionReportTime  The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to 'TIME_OF_AD_ACTION')
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function adAccountAnalytics(
        string $adAccountId,
        \DateTime $startDate,
        \DateTime $endDate,
        array $columns,
        \OpenAPI\Server\Model\Granularity $granularity,
        int $clickWindowDays,
        int $engagementWindowDays,
        int $viewWindowDays,
        string $conversionReportTime,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation adAccountTargetingAnalyticsGet
     *
     * Get targeting analytics for an ad account
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  \DateTime $startDate  Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. (required)
     * @param  \DateTime $endDate  Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. (required)
     * @param  array $targetingTypes  Targeting type breakdowns for the report. The reporting per targeting type &lt;br&gt; is independent from each other. (required)
     * @param  array $columns  Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned (required)
     * @param  \OpenAPI\Server\Model\Granularity $granularity  TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly (required)
     * @param  int $clickWindowDays  Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)
     * @param  int $engagementWindowDays  Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)
     * @param  int $viewWindowDays  Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1)
     * @param  string $conversionReportTime  The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to 'TIME_OF_AD_ACTION')
     * @param  \OpenAPI\Server\Model\ConversionReportAttributionType|null $attributionTypes  List of types of attribution for the conversion report (optional)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function adAccountTargetingAnalyticsGet(
        string $adAccountId,
        \DateTime $startDate,
        \DateTime $endDate,
        array $targetingTypes,
        array $columns,
        \OpenAPI\Server\Model\Granularity $granularity,
        int $clickWindowDays,
        int $engagementWindowDays,
        int $viewWindowDays,
        string $conversionReportTime,
        ?\OpenAPI\Server\Model\ConversionReportAttributionType $attributionTypes,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation adAccountsCreate
     *
     * Create ad account
     *
     * @param  AdAccountCreateRequest $adAccountCreateRequest  Ad account to create. (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function adAccountsCreate(
        AdAccountCreateRequest $adAccountCreateRequest,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation adAccountsGet
     *
     * Get ad account
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function adAccountsGet(
        string $adAccountId,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation adAccountsList
     *
     * List ad accounts
     *
     * @param  string|null $bookmark  Cursor used to fetch the next page of items (optional)
     * @param  int $pageSize  Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param  bool $includeSharedAccounts  Include shared ad accounts (optional, default to true)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function adAccountsList(
        ?string $bookmark,
        int $pageSize,
        bool $includeSharedAccounts,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation analyticsCreateMmmReport
     *
     * Create a request for a Marketing Mix Modeling (MMM) report
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  CreateMMMReportRequest $createMMMReportRequest   (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function analyticsCreateMmmReport(
        string $adAccountId,
        CreateMMMReportRequest $createMMMReportRequest,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation analyticsCreateReport
     *
     * Create async request for an account analytics report
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  AdsAnalyticsCreateAsyncRequest $adsAnalyticsCreateAsyncRequest   (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function analyticsCreateReport(
        string $adAccountId,
        AdsAnalyticsCreateAsyncRequest $adsAnalyticsCreateAsyncRequest,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation analyticsCreateTemplateReport
     *
     * Create async request for an analytics report using a template
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  string $templateId  Unique identifier of a template. (required)
     * @param  \DateTime|null $startDate  Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 2.5 years back from today. (optional)
     * @param  \DateTime|null $endDate  Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 2.5 years past start date. (optional)
     * @param  \OpenAPI\Server\Model\Granularity|null $granularity  TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly (optional)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function analyticsCreateTemplateReport(
        string $adAccountId,
        string $templateId,
        ?\DateTime $startDate,
        ?\DateTime $endDate,
        ?\OpenAPI\Server\Model\Granularity $granularity,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation analyticsGetMmmReport
     *
     * Get advertiser Marketing Mix Modeling (MMM) report.
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  string $token  Token returned from the post request creation call (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function analyticsGetMmmReport(
        string $adAccountId,
        string $token,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation analyticsGetReport
     *
     * Get the account analytics report created by the async call
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  string $token  Token returned from the post request creation call (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function analyticsGetReport(
        string $adAccountId,
        string $token,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation sandboxDelete
     *
     * Delete ads data for ad account in API Sandbox
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function sandboxDelete(
        string $adAccountId,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;

    /**
     * Operation templatesList
     *
     * List templates
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  int $pageSize  Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param  string|null $order  The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)
     * @param  string|null $bookmark  Cursor used to fetch the next page of items (optional)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function templatesList(
        string $adAccountId,
        int $pageSize,
        ?string $order,
        ?string $bookmark,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;
}