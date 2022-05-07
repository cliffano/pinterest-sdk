/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.api;

import org.openapitools.model.AdsAnalyticsCreateAsyncRequest;
import org.openapitools.model.AdsAnalyticsCreateAsyncResponse;
import org.openapitools.model.AdsAnalyticsGetAsyncResponse;
import org.openapitools.model.Error;
import org.openapitools.model.Granularity;
import org.joda.time.LocalDate;
import org.openapitools.model.Paginated;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.client.JAXRSClientFactory;
import org.apache.cxf.jaxrs.client.ClientConfiguration;
import org.apache.cxf.jaxrs.client.WebClient;
import org.apache.cxf.jaxrs.ext.multipart.Attachment;


import com.fasterxml.jackson.jaxrs.json.JacksonJsonProvider;
import com.fasterxml.jackson.jaxrs.xml.JacksonXMLProvider;
import org.apache.cxf.jaxrs.provider.MultipartProvider;

import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;


/**
 * Pinterest REST API
 *
 * <p>Pinterest's REST API
 *
 * API tests for AdAccountsApi.
 */
public class AdAccountsApiTest {

    private AdAccountsApi api;

    @Before
    public void setup() {
        List<?> providers = Arrays.asList(new JacksonJsonProvider(), new JacksonXMLProvider(), new MultipartProvider());

        api = JAXRSClientFactory.create("https://api.pinterest.com/v5", AdAccountsApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client);
    }

    
    /**
     * Get ad account analytics
     *
     * Get analytics for the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void adAccountAnalyticsTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;

        // TODO: delete this line and uncomment the next
        // List<Map<String, Object>> response = api.adAccountAnalytics(adAccountId, startDate, endDate, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
        // TODO: complete test assertions
    }
    
    /**
     * List ad accounts
     *
     * Get a list of the ad_accounts that the \&quot;operation user_account\&quot; has access to. - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void adAccountsListTest() throws Exception {
        // TODO: assign appropriate parameter values
        String bookmark = null;
        Integer pageSize = null;
        Boolean includeSharedAccounts = null;

        // TODO: delete this line and uncomment the next
        // Paginated response = api.adAccountsList(bookmark, pageSize, includeSharedAccounts);
        // TODO: complete test assertions
    }
    
    /**
     * Get ad group analytics
     *
     * Get analytics for the specified ad groups in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void adGroupsAnalyticsTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<String> adGroupIds = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;

        // TODO: delete this line and uncomment the next
        // List<Map<String, Object>> response = api.adGroupsAnalytics(adAccountId, startDate, endDate, adGroupIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
        // TODO: complete test assertions
    }
    
    /**
     * List ad groups
     *
     * Get a list of the ad groups in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void adGroupsListTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        List<String> campaignIds = null;
        List<String> adGroupIds = null;
        List<String> entityStatuses = null;
        Integer pageSize = null;
        String order = null;
        String bookmark = null;
        Boolean translateInterestsToNames = null;

        // TODO: delete this line and uncomment the next
        // Paginated response = api.adGroupsList(adAccountId, campaignIds, adGroupIds, entityStatuses, pageSize, order, bookmark, translateInterestsToNames);
        // TODO: complete test assertions
    }
    
    /**
     * Get ad analytics
     *
     * Get analytics for the specified ads in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void adsAnalyticsTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<String> adIds = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;

        // TODO: delete this line and uncomment the next
        // List<Map<String, Object>> response = api.adsAnalytics(adAccountId, startDate, endDate, adIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
        // TODO: complete test assertions
    }
    
    /**
     * List ads
     *
     * Get a list of the ads in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void adsListTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        List<String> campaignIds = null;
        List<String> adGroupIds = null;
        List<String> adIds = null;
        List<String> entityStatuses = null;
        Integer pageSize = null;
        String order = null;
        String bookmark = null;

        // TODO: delete this line and uncomment the next
        // Paginated response = api.adsList(adAccountId, campaignIds, adGroupIds, adIds, entityStatuses, pageSize, order, bookmark);
        // TODO: complete test assertions
    }
    
    /**
     * Create async request for an account analytics report
     *
     * This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void analyticsCreateReportTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        AdsAnalyticsCreateAsyncRequest adsAnalyticsCreateAsyncRequest = null;

        // TODO: delete this line and uncomment the next
        // AdsAnalyticsCreateAsyncResponse response = api.analyticsCreateReport(adAccountId, adsAnalyticsCreateAsyncRequest);
        // TODO: complete test assertions
    }
    
    /**
     * Get the account analytics report created by the async call
     *
     * This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report and it&#39;s valid for an hour. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void analyticsGetReportTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        String token = null;

        // TODO: delete this line and uncomment the next
        // AdsAnalyticsGetAsyncResponse response = api.analyticsGetReport(adAccountId, token);
        // TODO: complete test assertions
    }
    
    /**
     * Get campaign analytics
     *
     * Get analytics for the specified campaigns in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void campaignsAnalyticsTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<String> campaignIds = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;

        // TODO: delete this line and uncomment the next
        // List<Map<String, Object>> response = api.campaignsAnalytics(adAccountId, startDate, endDate, campaignIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
        // TODO: complete test assertions
    }
    
    /**
     * List campaigns
     *
     * Get a list of the campaigns in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void campaignsListTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        List<String> campaignIds = null;
        List<String> entityStatuses = null;
        Integer pageSize = null;
        String order = null;
        String bookmark = null;

        // TODO: delete this line and uncomment the next
        // Paginated response = api.campaignsList(adAccountId, campaignIds, entityStatuses, pageSize, order, bookmark);
        // TODO: complete test assertions
    }
    
    /**
     * Get product group analytics
     *
     * Get analytics for the specified product groups in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void productGroupsAnalyticsTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        LocalDate startDate = null;
        LocalDate endDate = null;
        List<String> productGroupIds = null;
        List<String> columns = null;
        Granularity granularity = null;
        Integer clickWindowDays = null;
        Integer engagementWindowDays = null;
        Integer viewWindowDays = null;
        String conversionReportTime = null;

        // TODO: delete this line and uncomment the next
        // List<Map<String, Object>> response = api.productGroupsAnalytics(adAccountId, startDate, endDate, productGroupIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
        // TODO: complete test assertions
    }
    
}
