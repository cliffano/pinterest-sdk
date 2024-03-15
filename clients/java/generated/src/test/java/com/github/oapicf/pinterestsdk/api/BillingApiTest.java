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


package com.github.oapicf.pinterestsdk.api;

import com.github.oapicf.pinterestsdk.ApiException;
import com.github.oapicf.pinterestsdk.model.AdsCreditRedeemRequest;
import com.github.oapicf.pinterestsdk.model.AdsCreditRedeemResponse;
import com.github.oapicf.pinterestsdk.model.AdsCreditsDiscountsGet200Response;
import com.github.oapicf.pinterestsdk.model.BillingProfilesGet200Response;
import com.github.oapicf.pinterestsdk.model.Error;
import com.github.oapicf.pinterestsdk.model.SSIOAccountResponse;
import com.github.oapicf.pinterestsdk.model.SSIOCreateInsertionOrderRequest;
import com.github.oapicf.pinterestsdk.model.SSIOCreateInsertionOrderResponse;
import com.github.oapicf.pinterestsdk.model.SSIOEditInsertionOrderRequest;
import com.github.oapicf.pinterestsdk.model.SSIOEditInsertionOrderResponse;
import com.github.oapicf.pinterestsdk.model.SSIOInsertionOrderStatusResponse;
import com.github.oapicf.pinterestsdk.model.SsioInsertionOrdersStatusGetByAdAccount200Response;
import com.github.oapicf.pinterestsdk.model.SsioOrderLinesGetByAdAccount200Response;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for BillingApi
 */
@Disabled
public class BillingApiTest {

    private final BillingApi api = new BillingApi();

    /**
     * Redeem ad credits
     *
     * Redeem ads credit on behalf of the ad account id and apply it towards billing.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void adsCreditRedeemTest() throws ApiException {
        String adAccountId = null;
        AdsCreditRedeemRequest adsCreditRedeemRequest = null;
        AdsCreditRedeemResponse response = api.adsCreditRedeem(adAccountId, adsCreditRedeemRequest);
        // TODO: test validations
    }

    /**
     * Get ads credit discounts
     *
     * Returns the list of discounts applied to the account.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void adsCreditsDiscountsGetTest() throws ApiException {
        String adAccountId = null;
        String bookmark = null;
        Integer pageSize = null;
        AdsCreditsDiscountsGet200Response response = api.adsCreditsDiscountsGet(adAccountId, bookmark, pageSize);
        // TODO: test validations
    }

    /**
     * Get billing profiles
     *
     * Get billing profiles in the advertiser account.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void billingProfilesGetTest() throws ApiException {
        String adAccountId = null;
        Boolean isActive = null;
        String bookmark = null;
        Integer pageSize = null;
        BillingProfilesGet200Response response = api.billingProfilesGet(adAccountId, isActive, bookmark, pageSize);
        // TODO: test validations
    }

    /**
     * Get Salesforce account details including bill-to information.
     *
     * Get Salesforce account details including bill-to information to be used in insertion orders process for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void ssioAccountsGetTest() throws ApiException {
        String adAccountId = null;
        SSIOAccountResponse response = api.ssioAccountsGet(adAccountId);
        // TODO: test validations
    }

    /**
     * Create insertion order through SSIO.
     *
     * Create insertion order through SSIO for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void ssioInsertionOrderCreateTest() throws ApiException {
        String adAccountId = null;
        SSIOCreateInsertionOrderRequest ssIOCreateInsertionOrderRequest = null;
        SSIOCreateInsertionOrderResponse response = api.ssioInsertionOrderCreate(adAccountId, ssIOCreateInsertionOrderRequest);
        // TODO: test validations
    }

    /**
     * Edit insertion order through SSIO.
     *
     * Edit insertion order through SSIO for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void ssioInsertionOrderEditTest() throws ApiException {
        String adAccountId = null;
        SSIOEditInsertionOrderRequest ssIOEditInsertionOrderRequest = null;
        SSIOEditInsertionOrderResponse response = api.ssioInsertionOrderEdit(adAccountId, ssIOEditInsertionOrderRequest);
        // TODO: test validations
    }

    /**
     * Get insertion order status by ad account id.
     *
     * Get insertion order status for account id &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void ssioInsertionOrdersStatusGetByAdAccountTest() throws ApiException {
        String adAccountId = null;
        String bookmark = null;
        Integer pageSize = null;
        SsioInsertionOrdersStatusGetByAdAccount200Response response = api.ssioInsertionOrdersStatusGetByAdAccount(adAccountId, bookmark, pageSize);
        // TODO: test validations
    }

    /**
     * Get insertion order status by pin order id.
     *
     * Get insertion order status for pin order id &lt;code&gt;pin_order_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void ssioInsertionOrdersStatusGetByPinOrderIdTest() throws ApiException {
        String adAccountId = null;
        String pinOrderId = null;
        SSIOInsertionOrderStatusResponse response = api.ssioInsertionOrdersStatusGetByPinOrderId(adAccountId, pinOrderId);
        // TODO: test validations
    }

    /**
     * Get Salesforce order lines by ad account id.
     *
     * Get Salesforce order lines for account id &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void ssioOrderLinesGetByAdAccountTest() throws ApiException {
        String adAccountId = null;
        String bookmark = null;
        Integer pageSize = null;
        String pinOrderId = null;
        SsioOrderLinesGetByAdAccount200Response response = api.ssioOrderLinesGetByAdAccount(adAccountId, bookmark, pageSize, pinOrderId);
        // TODO: test validations
    }

}
