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
import com.prokarma.pkmst.model.Error;
import com.prokarma.pkmst.model.LeadFormResponse;
import com.prokarma.pkmst.model.LeadFormTestRequest;
import com.prokarma.pkmst.model.LeadFormTestResponse;
import com.prokarma.pkmst.model.LeadFormsList200Response;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.http.ResponseEntity;
import org.springframework.web.multipart.MultipartFile;

/**
 * API tests for LeadFormsApi
 */
@Ignore
public class LeadFormsApiTest {

    private final ObjectMapper objectMapper = new ObjectMapper();

    private final LeadFormsApi api = new LeadFormsApiController(objectMapper);

    private final String accept = "application/json";

    
    /**
     * Get lead form by id
     *
     * Gets a lead form given it&#39;s ID. It must also be associated with the provided ad account ID. Retrieving an advertiser&#39;s lead form will only contain results if you&#39;re a part of the Lead ads beta. If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void leadFormGetTest() throws Exception {
        String adAccountId = null;
        String leadFormId = null;
    ResponseEntity<LeadFormResponse> response = api.leadFormGet(adAccountId, leadFormId , accept);

        // TODO: test validations
    }
    
    /**
     * Create lead form test data
     *
     * Create lead form test data based on the list of answers provided as part of the body. - List of answers should follow the questions creation order.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void leadFormTestCreateTest() throws Exception {
        String adAccountId = null;
        String leadFormId = null;
        LeadFormTestRequest leadFormTestRequest = null;
    ResponseEntity<LeadFormTestResponse> response = api.leadFormTestCreate(adAccountId, leadFormId, leadFormTestRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Get lead forms
     *
     * Gets all Lead Forms associated with an ad account ID. Retrieving an advertiser&#39;s list of lead forms will only contain results if you&#39;re a part of the Lead ads beta.  If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void leadFormsListTest() throws Exception {
        String adAccountId = null;
        Integer pageSize = null;
        String order = null;
        String bookmark = null;
    ResponseEntity<LeadFormsList200Response> response = api.leadFormsList(adAccountId, pageSize, order, bookmark , accept);

        // TODO: test validations
    }
    
}