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
import com.prokarma.pkmst.model.AdAccountsCountryResponse;
import com.prokarma.pkmst.model.BookClosedResponse;
import com.prokarma.pkmst.model.DeliveryMetricsResponse;
import com.prokarma.pkmst.model.Error;
import java.util.List;
import com.prokarma.pkmst.model.SingleInterestTargetingOptionResponse;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.http.ResponseEntity;
import org.springframework.web.multipart.MultipartFile;

/**
 * API tests for ResourcesApi
 */
@Ignore
public class ResourcesApiTest {

    private final ObjectMapper objectMapper = new ObjectMapper();

    private final ResourcesApi api = new ResourcesApiController(objectMapper);

    private final String accept = "application/json";

    
    /**
     * Get ad accounts countries
     *
     * Get Ad Accounts countries
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void adAccountCountriesGetTest() throws Exception {
    ResponseEntity<AdAccountsCountryResponse> response = api.adAccountCountriesGet(  accept);

        // TODO: test validations
    }
    
    /**
     * Get available metrics&#39; definitions
     *
     * Get the definitions for ads and organic metrics available across both synchronous and asynchronous report endpoints. The &#x60;display_name&#x60; attribute will match how the metric is named in our native tools like Ads Manager. See &lt;a href&#x3D;&#39;/docs/content/analytics/&#39;&gt;Organic Analytics&lt;/a&gt; and &lt;a href&#x3D;&#39;/docs/ads/ad-analytics-reporting/&#39;&gt;Ads Analytics&lt;/a&gt; for more information.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void deliveryMetricsGetTest() throws Exception {
        String reportType = null;
    ResponseEntity<DeliveryMetricsResponse> response = api.deliveryMetricsGet(reportType , accept);

        // TODO: test validations
    }
    
    /**
     * Get interest details
     *
     * &lt;p&gt;Get details of a specific interest given interest ID.&lt;/p&gt; &lt;p&gt;Click &lt;a href&#x3D;\&quot;https://docs.google.com/spreadsheets/d/1HxL-0Z3p2fgxis9YBP2HWC3tvPrs1hAuHDRtH-NJTIM/edit#gid&#x3D;118370875\&quot; target&#x3D;\&quot;_blank\&quot;&gt;here&lt;/a&gt; for a spreadsheet listing interests and their IDs.&lt;/p&gt;
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void interestTargetingOptionsGetTest() throws Exception {
        String interestId = null;
    ResponseEntity<SingleInterestTargetingOptionResponse> response = api.interestTargetingOptionsGet(interestId , accept);

        // TODO: test validations
    }
    
    /**
     * Get lead form questions
     *
     * Get a list of all lead form question type names. Some questions might not be used.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void leadFormQuestionsGetTest() throws Exception {
    ResponseEntity<Void> response = api.leadFormQuestionsGet(  accept);

        // TODO: test validations
    }
    
    /**
     * Get metrics ready state
     *
     * Learn whether conversion or non-conversion metrics are finalized and ready to query.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void metricsReadyStateGetTest() throws Exception {
        String date = null;
    ResponseEntity<BookClosedResponse> response = api.metricsReadyStateGet(date , accept);

        // TODO: test validations
    }
    
    /**
     * Get targeting options
     *
     * &lt;p&gt;You can use targeting values in ads placement to define your intended audience. &lt;/p&gt; &lt;p&gt;Targeting metrics are organized around targeting specifications.&lt;/p&gt; &lt;p&gt;For more information on ads targeting, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audience targeting&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Sample return:&lt;/b&gt;&lt;/p&gt; &lt;pre class&#x3D;\&quot;literal-block\&quot;&gt; [{&amp;quot;36313&amp;quot;: &amp;quot;Australia: Moreton Bay - North&amp;quot;, &amp;quot;124735&amp;quot;: &amp;quot;Canada: North Battleford&amp;quot;, &amp;quot;36109&amp;quot;: &amp;quot;Australia: Murray&amp;quot;, &amp;quot;36108&amp;quot;: &amp;quot;Australia: Mid North Coast&amp;quot;, &amp;quot;36101&amp;quot;: &amp;quot;Australia: Capital Region&amp;quot;, &amp;quot;811&amp;quot;: &amp;quot;U.S.: Reno&amp;quot;, &amp;quot;36103&amp;quot;: &amp;quot;Australia: Central West&amp;quot;, &amp;quot;36102&amp;quot;: &amp;quot;Australia: Central Coast&amp;quot;, &amp;quot;36105&amp;quot;: &amp;quot;Australia: Far West and Orana&amp;quot;, &amp;quot;36104&amp;quot;: &amp;quot;Australia: Coffs Harbour - Grafton&amp;quot;, &amp;quot;36107&amp;quot;: &amp;quot;Australia: Illawarra&amp;quot;, &amp;quot;36106&amp;quot;: &amp;quot;Australia: Hunter Valley Exc Newcastle&amp;quot;, &amp;quot;554017&amp;quot;: &amp;quot;New Zealand: Wanganui&amp;quot;, &amp;quot;554016&amp;quot;: &amp;quot;New Zealand: Marlborough&amp;quot;, &amp;quot;554015&amp;quot;: &amp;quot;New Zealand: Gisborne&amp;quot;, &amp;quot;554014&amp;quot;: &amp;quot;New Zealand: Tararua&amp;quot;, &amp;quot;554013&amp;quot;: &amp;quot;New Zealand: Invercargill&amp;quot;, &amp;quot;GR&amp;quot;: &amp;quot;Greece&amp;quot;, &amp;quot;554011&amp;quot;: &amp;quot;New Zealand: Whangarei&amp;quot;, &amp;quot;554010&amp;quot;: &amp;quot;New Zealand: Far North&amp;quot;, &amp;quot;717&amp;quot;: &amp;quot;U.S.: Quincy-Hannibal-Keokuk&amp;quot;, &amp;quot;716&amp;quot;: &amp;quot;U.S.: Baton Rouge&amp;quot;,...}] &lt;/pre&gt;
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void targetingOptionsGetTest() throws Exception {
        String targetingType = null;
        String clientId = null;
        String oauthSignature = null;
        String timestamp = null;
    ResponseEntity<List<Object>> response = api.targetingOptionsGet(targetingType, clientId, oauthSignature, timestamp , accept);

        // TODO: test validations
    }
    
}
