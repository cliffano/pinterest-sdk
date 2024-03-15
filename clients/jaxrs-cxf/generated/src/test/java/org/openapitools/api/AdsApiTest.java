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

import org.openapitools.model.AdArrayResponse;
import org.openapitools.model.AdCreateRequest;
import org.openapitools.model.AdPreviewRequest;
import org.openapitools.model.AdPreviewURLResponse;
import org.openapitools.model.AdResponse;
import org.openapitools.model.AdUpdateRequest;
import org.openapitools.model.AdsAnalyticsResponseInner;
import org.openapitools.model.AdsAnalyticsTargetingType;
import org.openapitools.model.AdsList200Response;
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
 * API tests for AdsApi
 */
public class AdsApiTest {


    private AdsApi api;

    @Before
    public void setup() {
        JacksonJsonProvider provider = new JacksonJsonProvider();
        List providers = new ArrayList();
        providers.add(provider);

        api = JAXRSClientFactory.create("https://api.pinterest.com/v5", AdsApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client);
    }

    
    /**
     * Create ad preview with pin or image
     *
     * Create an ad preview given an ad account ID and either an existing organic pin ID or the URL for an image to be used to create the Pin and the ad. &lt;p/&gt; If you are creating a preview from an existing Pin, that Pin must be promotable: that is, it must have a clickthrough link and meet other requirements. (See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/promoted-pins-overview\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Ads Overview&lt;/a&gt;.) &lt;p/&gt; You can view the returned preview URL on a webpage or iframe for 7 days, after which the URL expires.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adPreviewsCreateTest() {
        String adAccountId = null;
        AdPreviewRequest adPreviewRequest = null;
        //AdPreviewURLResponse response = api.adPreviewsCreate(adAccountId, adPreviewRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get targeting analytics for ads
     *
     * Get targeting analytics for one or more ads. For the requested ad(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adTargetingAnalyticsGetTest() {
        String adAccountId = null;
        List<@Pattern(regexp = "^\\d+$")String> adIds = null;
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
        //MetricsResponse response = api.adTargetingAnalyticsGet(adAccountId, adIds, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get ad analytics
     *
     * Get analytics for the specified ads in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adsAnalyticsTest() {
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<@Pattern(regexp = "^\\d+$")String> adIds = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;
        //List<AdsAnalyticsResponseInner> response = api.adsAnalytics(adAccountId, startDate, endDate, adIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Create ads
     *
     * Create multiple new ads. Request must contain ad_group_id, creative_type, and the source Pin pin_id.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adsCreateTest() {
        String adAccountId = null;
        List<AdCreateRequest> adCreateRequest = null;
        //AdArrayResponse response = api.adsCreate(adAccountId, adCreateRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get ad
     *
     * Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the &lt;a href&#x3D;\&quot;https://www.pinterest.com/_/_/policy/advertising-guidelines/\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest advertising standards&lt;/a&gt;.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adsGetTest() {
        String adAccountId = null;
        String adId = null;
        //AdResponse response = api.adsGet(adAccountId, adId);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * List ads
     *
     * List ads that meet the filters provided:   - Listed campaign ids or ad group ids or ad ids   - Listed entity statuses &lt;p/&gt; If no filter is provided, all ads in the ad account are returned. &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt;&lt;p/&gt; Provide only campaign_id or ad_group_id or ad_id. Do not provide more than one type. &lt;p/&gt; Review status is provided for each ad; if review_status is REJECTED, the rejected_reasons field will contain additional information. For more, see &lt;a href&#x3D;\&quot;https://policy.pinterest.com/en/advertising-guidelines\&quot;&gt;Pinterest advertising standards&lt;/a&gt;.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adsListTest() {
        String adAccountId = null;
        List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> campaignIds = null;
        List<@Pattern(regexp = "^\\d+$")String> adGroupIds = null;
        List<@Pattern(regexp = "^\\d+$")String> adIds = null;
        List<String> entityStatuses = null;
        Integer pageSize = null;
        String order = null;
        String bookmark = null;
        //AdsList200Response response = api.adsList(adAccountId, campaignIds, adGroupIds, adIds, entityStatuses, pageSize, order, bookmark);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Update ads
     *
     * Update multiple existing ads
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void adsUpdateTest() {
        String adAccountId = null;
        List<AdUpdateRequest> adUpdateRequest = null;
        //AdArrayResponse response = api.adsUpdate(adAccountId, adUpdateRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
}
