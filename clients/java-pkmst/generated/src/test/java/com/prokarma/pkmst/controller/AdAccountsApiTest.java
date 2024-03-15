/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.prokarma.pkmst.controller;

import com.fasterxml.jackson.databind.ObjectMapper;
import com.prokarma.pkmst.model.AdAccount;
import com.prokarma.pkmst.model.AdAccountAnalyticsResponseInner;
import com.prokarma.pkmst.model.AdAccountCreateRequest;
import com.prokarma.pkmst.model.AdAccountsList200Response;
import com.prokarma.pkmst.model.AdsAnalyticsCreateAsyncRequest;
import com.prokarma.pkmst.model.AdsAnalyticsCreateAsyncResponse;
import com.prokarma.pkmst.model.AdsAnalyticsGetAsyncResponse;
import com.prokarma.pkmst.model.AdsAnalyticsTargetingType;
import com.prokarma.pkmst.model.ConversionReportAttributionType;
import com.prokarma.pkmst.model.CreateMMMReportRequest;
import com.prokarma.pkmst.model.CreateMMMReportResponse;
import com.prokarma.pkmst.model.Error;
import com.prokarma.pkmst.model.GetMMMReportResponse;
import com.prokarma.pkmst.model.Granularity;
import java.util.List;
import java.time.LocalDate;
import com.prokarma.pkmst.model.MetricsResponse;
import com.prokarma.pkmst.model.TemplatesList200Response;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.http.ResponseEntity;
import org.springframework.web.multipart.MultipartFile;

/**
 * API tests for AdAccountsApi
 */
@Ignore
public class AdAccountsApiTest {

    private final ObjectMapper objectMapper = new ObjectMapper();

    private final AdAccountsApi api = new AdAccountsApiController(objectMapper);

    private final String accept = "application/json";

    
    /**
     * Get ad account analytics
     *
     * Get analytics for the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void adAccountAnalyticsTest() throws Exception {
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;
    ResponseEntity<List<AdAccountAnalyticsResponseInner>> response = api.adAccountAnalytics(adAccountId, startDate, endDate, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime , accept);

        // TODO: test validations
    }
    
    /**
     * Get targeting analytics for an ad account
     *
     * Get targeting analytics for an ad account. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void adAccountTargetingAnalyticsGetTest() throws Exception {
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<AdsAnalyticsTargetingType> targetingTypes = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;
        ConversionReportAttributionType attributionTypes = null;
    ResponseEntity<MetricsResponse> response = api.adAccountTargetingAnalyticsGet(adAccountId, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes , accept);

        // TODO: test validations
    }
    
    /**
     * Create ad account
     *
     * Create a new ad account. Different ad accounts can support different currencies, payment methods, etc. An ad account is needed to create campaigns, ad groups, and ads; other accounts (your employees or partners) can be assigned business access and appropriate roles to access an ad account. &lt;p/&gt; You can set up up to 50 ad accounts per user. (The user must have a business account to create an ad account.) &lt;p/&gt; For more, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/create-an-advertiser-account\&quot;&gt;Create an advertiser account&lt;/a&gt;.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void adAccountsCreateTest() throws Exception {
        AdAccountCreateRequest adAccountCreateRequest = null;
    ResponseEntity<AdAccount> response = api.adAccountsCreate(adAccountCreateRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Get ad account
     *
     * Get an ad account
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void adAccountsGetTest() throws Exception {
        String adAccountId = null;
    ResponseEntity<AdAccount> response = api.adAccountsGet(adAccountId , accept);

        // TODO: test validations
    }
    
    /**
     * List ad accounts
     *
     * Get a list of the ad_accounts that the \&quot;operation user_account\&quot; has access to. - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void adAccountsListTest() throws Exception {
        String bookmark = null;
        Integer pageSize = null;
        Boolean includeSharedAccounts = null;
    ResponseEntity<AdAccountsList200Response> response = api.adAccountsList(bookmark, pageSize, includeSharedAccounts , accept);

        // TODO: test validations
    }
    
    /**
     * Create a request for a Marketing Mix Modeling (MMM) report
     *
     * This creates an asynchronous mmm report based on the given request. It returns a token that you can use to download the report when it is ready. NOTE: An additional limit of 5 queries per minute per advertiser applies to this endpoint while it&#39;s in beta release.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void analyticsCreateMmmReportTest() throws Exception {
        String adAccountId = null;
        CreateMMMReportRequest createMMMReportRequest = null;
    ResponseEntity<CreateMMMReportResponse> response = api.analyticsCreateMmmReport(adAccountId, createMMMReportRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Create async request for an account analytics report
     *
     * This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 914 days before the current date in UTC time and the max time range supported is 186 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days. - If level is PRODUCT_ITEM, the furthest back you can are allowed to pull data is 92 days before the current date in UTC time and the max time range supported is 31 days. - If level is PRODUCT_ITEM, ad_ids and ad_statuses parameters are not allowed. Any columns related to pin promotion and ad is not allowed either.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void analyticsCreateReportTest() throws Exception {
        String adAccountId = null;
        AdsAnalyticsCreateAsyncRequest adsAnalyticsCreateAsyncRequest = null;
    ResponseEntity<AdsAnalyticsCreateAsyncResponse> response = api.analyticsCreateReport(adAccountId, adsAnalyticsCreateAsyncRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Create async request for an analytics report using a template
     *
     * This takes a template ID and an optional custom timeframe and constructs an asynchronous report based on the template. It returns a token that you can use to download the report when it is ready.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void analyticsCreateTemplateReportTest() throws Exception {
        String adAccountId = null;
        String templateId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        Granularity granularity = null;
    ResponseEntity<AdsAnalyticsCreateAsyncResponse> response = api.analyticsCreateTemplateReport(adAccountId, templateId, startDate, endDate, granularity , accept);

        // TODO: test validations
    }
    
    /**
     * Get advertiser Marketing Mix Modeling (MMM) report.
     *
     * Get an mmm report for an ad account. This returns a URL to an mmm metrics report given a token returned from the create mmm report endpoint.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void analyticsGetMmmReportTest() throws Exception {
        String adAccountId = null;
        String token = null;
    ResponseEntity<GetMMMReportResponse> response = api.analyticsGetMmmReport(adAccountId, token , accept);

        // TODO: test validations
    }
    
    /**
     * Get the account analytics report created by the async call
     *
     * This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report. The link is valid for five minutes and the report is valid for one hour. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void analyticsGetReportTest() throws Exception {
        String adAccountId = null;
        String token = null;
    ResponseEntity<AdsAnalyticsGetAsyncResponse> response = api.analyticsGetReport(adAccountId, token , accept);

        // TODO: test validations
    }
    
    /**
     * Delete ads data for ad account in API Sandbox
     *
     * Delete an ad account and all the ads data associated with that account.  A string message is returned indicating the status of the delete operation.  Note: This endpoint is only allowed in the Pinterest API Sandbox (https://api-sandbox.pinterest.com/v5).  Go to https://developers.pinterest.com/docs/dev-tools/sandbox/ for more information.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void sandboxDeleteTest() throws Exception {
        String adAccountId = null;
    ResponseEntity<String> response = api.sandboxDelete(adAccountId , accept);

        // TODO: test validations
    }
    
    /**
     * List templates
     *
     * Gets all Templates associated with an ad account ID.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void templatesListTest() throws Exception {
        String adAccountId = null;
        Integer pageSize = null;
        String order = null;
        String bookmark = null;
    ResponseEntity<TemplatesList200Response> response = api.templatesList(adAccountId, pageSize, order, bookmark , accept);

        // TODO: test validations
    }
    
}
