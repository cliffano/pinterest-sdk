/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.cliffano.pinterestsdk.api;

import com.cliffano.pinterestsdk.ApiException;
import com.cliffano.pinterestsdk.model.Error;
import com.cliffano.pinterestsdk.model.OauthAccessTokenResponse;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for OauthApi
 */
@Ignore
public class OauthApiTest {

    private final OauthApi api = new OauthApi();

    
    /**
     * Generate OAuth access token
     *
     * Generate an OAuth access token by using an authorization code or a refresh token.  See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Authentication&#39;&gt;Authentication&lt;/a&gt; for more.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void oauthTokenTest() throws ApiException {
        String grantType = null;
                OauthAccessTokenResponse response = api.oauthToken(grantType);
        // TODO: test validations
    }
    
}
