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

import org.openapitools.model.DetailedError;
import org.openapitools.model.Error;
import org.openapitools.model.IntegrationLogsRequest;
import org.openapitools.model.IntegrationLogsSuccessResponse;
import org.openapitools.model.IntegrationMetadata;
import org.openapitools.model.IntegrationRecord;
import org.openapitools.model.IntegrationRequest;
import org.openapitools.model.IntegrationRequestPatch;
import org.openapitools.model.IntegrationsGetList200Response;
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
 * API tests for IntegrationsApi
 */
public class IntegrationsApiTest {


    private IntegrationsApi api;

    @Before
    public void setup() {
        JacksonJsonProvider provider = new JacksonJsonProvider();
        List providers = new ArrayList();
        providers.add(provider);

        api = JAXRSClientFactory.create("https://api.pinterest.com/v5", IntegrationsApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client);
    }

    
    /**
     * Delete commerce integration
     *
     * Delete commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void integrationsCommerceDelTest() {
        String externalBusinessId = null;
        //api.integrationsCommerceDel(externalBusinessId);
        
        // TODO: test validations


    }
    
    /**
     * Get commerce integration
     *
     * Get commerce integration metadata associated with the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void integrationsCommerceGetTest() {
        String externalBusinessId = null;
        //IntegrationMetadata response = api.integrationsCommerceGet(externalBusinessId);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Update commerce integration
     *
     * Update commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void integrationsCommercePatchTest() {
        String externalBusinessId = null;
        IntegrationRequestPatch integrationRequestPatch = null;
        //IntegrationMetadata response = api.integrationsCommercePatch(externalBusinessId, integrationRequestPatch);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Create commerce integration
     *
     * Create commerce integration metadata to link an external business ID with a Pinterest merchant &amp; ad account. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void integrationsCommercePostTest() {
        IntegrationRequest integrationRequest = null;
        //IntegrationMetadata response = api.integrationsCommercePost(integrationRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get integration metadata
     *
     * Get integration metadata by ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void integrationsGetByIdTest() {
        String id = null;
        //IntegrationRecord response = api.integrationsGetById(id);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Get integration metadata list
     *
     * Get integration metadata list. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void integrationsGetListTest() {
        String bookmark = null;
        Integer pageSize = null;
        //IntegrationsGetList200Response response = api.integrationsGetList(bookmark, pageSize);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * Receives batched logs from integration applications.
     *
     * This endpoint receives batched logs from integration applications on partner platforms. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void integrationsLogsPostTest() {
        IntegrationLogsRequest integrationLogsRequest = null;
        //IntegrationLogsSuccessResponse response = api.integrationsLogsPost(integrationLogsRequest);
        //assertNotNull(response);
        // TODO: test validations


    }
    
}