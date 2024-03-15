/**
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


package org.openapitools.api;

import org.openapitools.model.AdGroupArrayResponse;
import org.openapitools.model.AdGroupAudienceSizingRequest;
import org.openapitools.model.AdGroupAudienceSizingResponse;
import org.openapitools.model.AdGroupCreateRequest;
import org.openapitools.model.AdGroupResponse;
import org.openapitools.model.AdGroupUpdateRequest;
import org.openapitools.model.AdGroupsAnalyticsResponseInner;
import org.openapitools.model.AdGroupsList200Response;
import org.openapitools.model.AdsAnalyticsTargetingType;
import org.openapitools.model.BidFloor;
import org.openapitools.model.BidFloorRequest;
import org.openapitools.model.ConversionReportAttributionType;
import org.openapitools.model.Error;
import org.openapitools.model.Granularity;
import org.joda.time.LocalDate;
import org.openapitools.model.MetricsResponse;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.client.JAXRSClientFactory;
import org.apache.cxf.jaxrs.client.ClientConfiguration;
import org.apache.cxf.jaxrs.client.WebClient;


import com.fasterxml.jackson.jaxrs.json.JacksonJsonProvider;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;




/**
 * Pinterest REST API
 *
 * <p>Pinterest's REST API
 *
 * API tests for AdGroupsApi
 */
public class AdGroupsApiTest {


    private AdGroupsApi api;

    @Before
    public void setup() {
        JacksonJsonProvider provider = new JacksonJsonProvider();
        List providers = new ArrayList();
        providers.add(provider);

        api = JAXRSClientFactory.create("https://api.pinterest.com/v5", AdGroupsApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client);
    }

    
    /**
     * Get ad group analytics
     *
     * Get analytics for the specified ad groups in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adGroupsAnalyticsTest() {
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> adGroupIds = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;
        //List<AdGroupsAnalyticsResponseInner> response = api.adGroupsAnalytics(adAccountId, startDate, endDate, adGroupIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get audience sizing
     *
     * Get potential audience size for an ad group with given targeting criteria.  Potential audience size estimates the number of people you may be able to reach per month with your campaign.  It is based on historical advertising data and the targeting criteria you select. It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adGroupsAudienceSizingTest() {
        String adAccountId = null;
        AdGroupAudienceSizingRequest adGroupAudienceSizingRequest = null;
        //AdGroupAudienceSizingResponse response = api.adGroupsAudienceSizing(adAccountId, adGroupAudienceSizingRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get bid floors
     *
     * List bid floors for your campaign configuration. Bid floors are given in microcurrency values based on the currency in the bid floor specification. &lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt; For more on bid floors see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-your-bid\&quot;&gt; Set your bid&lt;/a&gt;.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adGroupsBidFloorGetTest() {
        String adAccountId = null;
        BidFloorRequest bidFloorRequest = null;
        //BidFloor response = api.adGroupsBidFloorGet(adAccountId, bidFloorRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Create ad groups
     *
     * Create multiple new ad groups. All ads in a given ad group will have the same budget, bid, run dates, targeting, and placement (search, browse, other). For more information, &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/campaign-structure\&quot; target&#x3D;\&quot;_blank\&quot;&gt; click here&lt;/a&gt;.&lt;/p&gt; &lt;strong&gt;Note:&lt;/strong&gt; - &#39;bid_in_micro_currency&#39; and &#39;budget_in_micro_currency&#39; should be expressed in microcurrency amounts based on the currency field set in the advertiser&#39;s profile.&lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt; - Ad groups belong to ad campaigns. Some types of campaigns (e.g. budget optimization) have limits on the number of ad groups they can hold. If you exceed those limits, you will get an error message. - Start and end time cannot be set for ad groups that belong to CBO campaigns. Currently, campaigns with the following objective types: TRAFFIC, AWARENESS, WEB_CONVERSIONS, and CATALOG_SALES will default to CBO.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adGroupsCreateTest() {
        String adAccountId = null;
        List<AdGroupCreateRequest> adGroupCreateRequest = null;
        //AdGroupArrayResponse response = api.adGroupsCreate(adAccountId, adGroupCreateRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get ad group
     *
     * Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the &lt;a href&#x3D;\&quot;https://www.pinterest.com/_/_/policy/advertising-guidelines/\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest advertising standards&lt;/a&gt;.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adGroupsGetTest() {
        String adAccountId = null;
        String adGroupId = null;
        //AdGroupResponse response = api.adGroupsGet(adAccountId, adGroupId);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * List ad groups
     *
     * List ad groups based on provided campaign IDs or ad group IDs.(campaign_ids or ad_group_ids). &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt;&lt;p/&gt; Provide only campaign_id or ad_group_id. Do not provide both.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adGroupsListTest() {
        String adAccountId = null;
        List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> campaignIds = null;
        List<@Pattern(regexp = "^\\d+$")String> adGroupIds = null;
        List<String> entityStatuses = null;
        Integer pageSize = null;
        String order = null;
        String bookmark = null;
        Boolean translateInterestsToNames = null;
        //AdGroupsList200Response response = api.adGroupsList(adAccountId, campaignIds, adGroupIds, entityStatuses, pageSize, order, bookmark, translateInterestsToNames);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get targeting analytics for ad groups
     *
     * Get targeting analytics for one or more ad groups. For the requested ad group(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adGroupsTargetingAnalyticsGetTest() {
        String adAccountId = null;
        List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> adGroupIds = null;
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
        //MetricsResponse response = api.adGroupsTargetingAnalyticsGet(adAccountId, adGroupIds, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Update ad groups
     *
     * Update multiple existing ad groups.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adGroupsUpdateTest() {
        String adAccountId = null;
        List<AdGroupUpdateRequest> adGroupUpdateRequest = null;
        //AdGroupArrayResponse response = api.adGroupsUpdate(adAccountId, adGroupUpdateRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
}
