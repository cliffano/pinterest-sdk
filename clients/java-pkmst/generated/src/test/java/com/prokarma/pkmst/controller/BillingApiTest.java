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
import com.prokarma.pkmst.model.AdsCreditRedeemRequest;
import com.prokarma.pkmst.model.AdsCreditRedeemResponse;
import com.prokarma.pkmst.model.AdsCreditsDiscountsGet200Response;
import com.prokarma.pkmst.model.BillingProfilesGet200Response;
import com.prokarma.pkmst.model.Error;
import com.prokarma.pkmst.model.SSIOAccountResponse;
import com.prokarma.pkmst.model.SSIOCreateInsertionOrderRequest;
import com.prokarma.pkmst.model.SSIOCreateInsertionOrderResponse;
import com.prokarma.pkmst.model.SSIOEditInsertionOrderRequest;
import com.prokarma.pkmst.model.SSIOEditInsertionOrderResponse;
import com.prokarma.pkmst.model.SSIOInsertionOrderStatusResponse;
import com.prokarma.pkmst.model.SsioInsertionOrdersStatusGetByAdAccount200Response;
import com.prokarma.pkmst.model.SsioOrderLinesGetByAdAccount200Response;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.http.ResponseEntity;
import org.springframework.web.multipart.MultipartFile;

/**
 * API tests for BillingApi
 */
@Ignore
public class BillingApiTest {

    private final ObjectMapper objectMapper = new ObjectMapper();

    private final BillingApi api = new BillingApiController(objectMapper);

    private final String accept = "application/json";

    
    /**
     * Redeem ad credits
     *
     * Redeem ads credit on behalf of the ad account id and apply it towards billing.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void adsCreditRedeemTest() throws Exception {
        String adAccountId = null;
        AdsCreditRedeemRequest adsCreditRedeemRequest = null;
    ResponseEntity<AdsCreditRedeemResponse> response = api.adsCreditRedeem(adAccountId, adsCreditRedeemRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Get ads credit discounts
     *
     * Returns the list of discounts applied to the account.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void adsCreditsDiscountsGetTest() throws Exception {
        String adAccountId = null;
        String bookmark = null;
        Integer pageSize = null;
    ResponseEntity<AdsCreditsDiscountsGet200Response> response = api.adsCreditsDiscountsGet(adAccountId, bookmark, pageSize , accept);

        // TODO: test validations
    }
    
    /**
     * Get billing profiles
     *
     * Get billing profiles in the advertiser account.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void billingProfilesGetTest() throws Exception {
        String adAccountId = null;
        Boolean isActive = null;
        String bookmark = null;
        Integer pageSize = null;
    ResponseEntity<BillingProfilesGet200Response> response = api.billingProfilesGet(adAccountId, isActive, bookmark, pageSize , accept);

        // TODO: test validations
    }
    
    /**
     * Get Salesforce account details including bill-to information.
     *
     * Get Salesforce account details including bill-to information to be used in insertion orders process for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void ssioAccountsGetTest() throws Exception {
        String adAccountId = null;
    ResponseEntity<SSIOAccountResponse> response = api.ssioAccountsGet(adAccountId , accept);

        // TODO: test validations
    }
    
    /**
     * Create insertion order through SSIO.
     *
     * Create insertion order through SSIO for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void ssioInsertionOrderCreateTest() throws Exception {
        String adAccountId = null;
        SSIOCreateInsertionOrderRequest ssIOCreateInsertionOrderRequest = null;
    ResponseEntity<SSIOCreateInsertionOrderResponse> response = api.ssioInsertionOrderCreate(adAccountId, ssIOCreateInsertionOrderRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Edit insertion order through SSIO.
     *
     * Edit insertion order through SSIO for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void ssioInsertionOrderEditTest() throws Exception {
        String adAccountId = null;
        SSIOEditInsertionOrderRequest ssIOEditInsertionOrderRequest = null;
    ResponseEntity<SSIOEditInsertionOrderResponse> response = api.ssioInsertionOrderEdit(adAccountId, ssIOEditInsertionOrderRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Get insertion order status by ad account id.
     *
     * Get insertion order status for account id &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void ssioInsertionOrdersStatusGetByAdAccountTest() throws Exception {
        String adAccountId = null;
        String bookmark = null;
        Integer pageSize = null;
    ResponseEntity<SsioInsertionOrdersStatusGetByAdAccount200Response> response = api.ssioInsertionOrdersStatusGetByAdAccount(adAccountId, bookmark, pageSize , accept);

        // TODO: test validations
    }
    
    /**
     * Get insertion order status by pin order id.
     *
     * Get insertion order status for pin order id &lt;code&gt;pin_order_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void ssioInsertionOrdersStatusGetByPinOrderIdTest() throws Exception {
        String adAccountId = null;
        String pinOrderId = null;
    ResponseEntity<SSIOInsertionOrderStatusResponse> response = api.ssioInsertionOrdersStatusGetByPinOrderId(adAccountId, pinOrderId , accept);

        // TODO: test validations
    }
    
    /**
     * Get Salesforce order lines by ad account id.
     *
     * Get Salesforce order lines for account id &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void ssioOrderLinesGetByAdAccountTest() throws Exception {
        String adAccountId = null;
        String bookmark = null;
        Integer pageSize = null;
        String pinOrderId = null;
    ResponseEntity<SsioOrderLinesGetByAdAccount200Response> response = api.ssioOrderLinesGetByAdAccount(adAccountId, bookmark, pageSize, pinOrderId , accept);

        // TODO: test validations
    }
    
}