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

import org.openapitools.model.Error;
import org.openapitools.model.LeadFormResponse;
import org.openapitools.model.LeadFormTestRequest;
import org.openapitools.model.LeadFormTestResponse;
import org.openapitools.model.LeadFormsList200Response;
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
 * API tests for LeadFormsApi.
 */
public class LeadFormsApiTest {

    private LeadFormsApi api;

    @Before
    public void setup() {
        List<?> providers = Arrays.asList(new JacksonJsonProvider(), new JacksonXMLProvider(), new MultipartProvider());

        api = JAXRSClientFactory.create("https://api.pinterest.com/v5", LeadFormsApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client);
    }

    
    /**
     * Get lead form by id
     *
     * Gets a lead form given it&#39;s ID. It must also be associated with the provided ad account ID. Retrieving an advertiser&#39;s lead form will only contain results if you&#39;re a part of the Lead ads beta. If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void leadFormGetTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        String leadFormId = null;

        // TODO: delete this line and uncomment the next
        // LeadFormResponse response = api.leadFormGet(adAccountId, leadFormId);
        // TODO: complete test assertions
    }
    
    /**
     * Create lead form test data
     *
     * Create lead form test data based on the list of answers provided as part of the body. - List of answers should follow the questions creation order.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void leadFormTestCreateTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        String leadFormId = null;
        LeadFormTestRequest leadFormTestRequest = null;

        // TODO: delete this line and uncomment the next
        // LeadFormTestResponse response = api.leadFormTestCreate(adAccountId, leadFormId, leadFormTestRequest);
        // TODO: complete test assertions
    }
    
    /**
     * Get lead forms
     *
     * Gets all Lead Forms associated with an ad account ID. Retrieving an advertiser&#39;s list of lead forms will only contain results if you&#39;re a part of the Lead ads beta.  If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void leadFormsListTest() throws Exception {
        // TODO: assign appropriate parameter values
        String adAccountId = null;
        Integer pageSize = null;
        String order = null;
        String bookmark = null;

        // TODO: delete this line and uncomment the next
        // LeadFormsList200Response response = api.leadFormsList(adAccountId, pageSize, order, bookmark);
        // TODO: complete test assertions
    }
    
}
