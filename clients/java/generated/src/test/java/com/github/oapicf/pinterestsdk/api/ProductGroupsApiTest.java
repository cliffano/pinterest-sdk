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
import com.github.oapicf.pinterestsdk.model.AdAccountsCatalogsProductGroupsList200Response;
import com.github.oapicf.pinterestsdk.model.Error;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for ProductGroupsApi
 */
@Disabled
public class ProductGroupsApiTest {

    private final ProductGroupsApi api = new ProductGroupsApi();

    /**
     * Get catalog product groups
     *
     * This endpoint is completely deprecated. Please use &lt;a href&#x3D;&#39;/docs/api/v5/#operation/catalogs_product_groups/list&#39;&gt;List product groups&lt;/a&gt; from Catalogs API instead.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void adAccountsCatalogsProductGroupsListTest() throws ApiException {
        String adAccountId = null;
        String feedProfileId = null;
        AdAccountsCatalogsProductGroupsList200Response response = api.adAccountsCatalogsProductGroupsList(adAccountId, feedProfileId);
        // TODO: test validations
    }

}
