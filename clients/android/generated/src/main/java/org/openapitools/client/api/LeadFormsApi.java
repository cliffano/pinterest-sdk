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

package org.openapitools.client.api;

import org.openapitools.client.ApiInvoker;
import org.openapitools.client.ApiException;
import org.openapitools.client.Pair;

import org.openapitools.client.model.*;

import java.util.*;

import com.android.volley.Response;
import com.android.volley.VolleyError;

import org.openapitools.client.model.Error;
import org.openapitools.client.model.LeadFormResponse;
import org.openapitools.client.model.LeadFormTestRequest;
import org.openapitools.client.model.LeadFormTestResponse;
import org.openapitools.client.model.LeadFormsList200Response;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeoutException;

public class LeadFormsApi {
  String basePath = "https://api.pinterest.com/v5";
  ApiInvoker apiInvoker = ApiInvoker.getInstance();

  public void addHeader(String key, String value) {
    getInvoker().addDefaultHeader(key, value);
  }

  public ApiInvoker getInvoker() {
    return apiInvoker;
  }

  public void setBasePath(String basePath) {
    this.basePath = basePath;
  }

  public String getBasePath() {
    return basePath;
  }

  /**
  * Get lead form by id
  * Gets a lead form given it&#39;s ID. It must also be associated with the provided ad account ID. Retrieving an advertiser&#39;s lead form will only contain results if you&#39;re a part of the Lead ads beta. If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
   * @param adAccountId Unique identifier of an ad account.
   * @param leadFormId Unique identifier of a lead form.
   * @return LeadFormResponse
  */
  public LeadFormResponse leadFormGet (String adAccountId, String leadFormId) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;
    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling leadFormGet",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling leadFormGet"));
    }
    // verify the required parameter 'leadFormId' is set
    if (leadFormId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'leadFormId' when calling leadFormGet",
        new ApiException(400, "Missing the required parameter 'leadFormId' when calling leadFormGet"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/lead_forms/{lead_form_id}".replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString())).replaceAll("\\{" + "lead_form_id" + "\\}", apiInvoker.escapeString(leadFormId.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();
    String[] contentTypes = {
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
    }

    String[] authNames = new String[] { "pinterest_oauth2" };

    try {
      String localVarResponse = apiInvoker.invokeAPI (basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames);
      if (localVarResponse != null) {
         return (LeadFormResponse) ApiInvoker.deserialize(localVarResponse, "", LeadFormResponse.class);
      } else {
         return null;
      }
    } catch (ApiException ex) {
       throw ex;
    } catch (InterruptedException ex) {
       throw ex;
    } catch (ExecutionException ex) {
      if (ex.getCause() instanceof VolleyError) {
        VolleyError volleyError = (VolleyError)ex.getCause();
        if (volleyError.networkResponse != null) {
          throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
        }
      }
      throw ex;
    } catch (TimeoutException ex) {
      throw ex;
    }
  }

      /**
   * Get lead form by id
   * Gets a lead form given it&#39;s ID. It must also be associated with the provided ad account ID. Retrieving an advertiser&#39;s lead form will only contain results if you&#39;re a part of the Lead ads beta. If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
   * @param adAccountId Unique identifier of an ad account.   * @param leadFormId Unique identifier of a lead form.
  */
  public void leadFormGet (String adAccountId, String leadFormId, final Response.Listener<LeadFormResponse> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling leadFormGet",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling leadFormGet"));
    }
    // verify the required parameter 'leadFormId' is set
    if (leadFormId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'leadFormId' when calling leadFormGet",
        new ApiException(400, "Missing the required parameter 'leadFormId' when calling leadFormGet"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/lead_forms/{lead_form_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString())).replaceAll("\\{" + "lead_form_id" + "\\}", apiInvoker.escapeString(leadFormId.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();



    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

    String[] authNames = new String[] { "pinterest_oauth2" };

    try {
      apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
            try {
              responseListener.onResponse((LeadFormResponse) ApiInvoker.deserialize(localVarResponse,  "", LeadFormResponse.class));
            } catch (ApiException exception) {
               errorListener.onErrorResponse(new VolleyError(exception));
            }
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
  /**
  * Create lead form test data
  * Create lead form test data based on the list of answers provided as part of the body. - List of answers should follow the questions creation order.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
   * @param adAccountId Unique identifier of an ad account.
   * @param leadFormId Unique identifier of a lead form.
   * @param leadFormTestRequest Subscription to create.
   * @return LeadFormTestResponse
  */
  public LeadFormTestResponse leadFormTestCreate (String adAccountId, String leadFormId, LeadFormTestRequest leadFormTestRequest) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = leadFormTestRequest;
    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling leadFormTestCreate",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling leadFormTestCreate"));
    }
    // verify the required parameter 'leadFormId' is set
    if (leadFormId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'leadFormId' when calling leadFormTestCreate",
        new ApiException(400, "Missing the required parameter 'leadFormId' when calling leadFormTestCreate"));
    }
    // verify the required parameter 'leadFormTestRequest' is set
    if (leadFormTestRequest == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'leadFormTestRequest' when calling leadFormTestCreate",
        new ApiException(400, "Missing the required parameter 'leadFormTestRequest' when calling leadFormTestCreate"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/lead_forms/{lead_form_id}/test".replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString())).replaceAll("\\{" + "lead_form_id" + "\\}", apiInvoker.escapeString(leadFormId.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();
    String[] contentTypes = {
      "application/json"
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
    }

    String[] authNames = new String[] { "pinterest_oauth2" };

    try {
      String localVarResponse = apiInvoker.invokeAPI (basePath, path, "POST", queryParams, postBody, headerParams, formParams, contentType, authNames);
      if (localVarResponse != null) {
         return (LeadFormTestResponse) ApiInvoker.deserialize(localVarResponse, "", LeadFormTestResponse.class);
      } else {
         return null;
      }
    } catch (ApiException ex) {
       throw ex;
    } catch (InterruptedException ex) {
       throw ex;
    } catch (ExecutionException ex) {
      if (ex.getCause() instanceof VolleyError) {
        VolleyError volleyError = (VolleyError)ex.getCause();
        if (volleyError.networkResponse != null) {
          throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
        }
      }
      throw ex;
    } catch (TimeoutException ex) {
      throw ex;
    }
  }

      /**
   * Create lead form test data
   * Create lead form test data based on the list of answers provided as part of the body. - List of answers should follow the questions creation order.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
   * @param adAccountId Unique identifier of an ad account.   * @param leadFormId Unique identifier of a lead form.   * @param leadFormTestRequest Subscription to create.
  */
  public void leadFormTestCreate (String adAccountId, String leadFormId, LeadFormTestRequest leadFormTestRequest, final Response.Listener<LeadFormTestResponse> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = leadFormTestRequest;

    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling leadFormTestCreate",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling leadFormTestCreate"));
    }
    // verify the required parameter 'leadFormId' is set
    if (leadFormId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'leadFormId' when calling leadFormTestCreate",
        new ApiException(400, "Missing the required parameter 'leadFormId' when calling leadFormTestCreate"));
    }
    // verify the required parameter 'leadFormTestRequest' is set
    if (leadFormTestRequest == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'leadFormTestRequest' when calling leadFormTestCreate",
        new ApiException(400, "Missing the required parameter 'leadFormTestRequest' when calling leadFormTestCreate"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/lead_forms/{lead_form_id}/test".replaceAll("\\{format\\}","json").replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString())).replaceAll("\\{" + "lead_form_id" + "\\}", apiInvoker.escapeString(leadFormId.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();



    String[] contentTypes = {
      "application/json"
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

    String[] authNames = new String[] { "pinterest_oauth2" };

    try {
      apiInvoker.invokeAPI(basePath, path, "POST", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
            try {
              responseListener.onResponse((LeadFormTestResponse) ApiInvoker.deserialize(localVarResponse,  "", LeadFormTestResponse.class));
            } catch (ApiException exception) {
               errorListener.onErrorResponse(new VolleyError(exception));
            }
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
  /**
  * Get lead forms
  * Gets all Lead Forms associated with an ad account ID. Retrieving an advertiser&#39;s list of lead forms will only contain results if you&#39;re a part of the Lead ads beta.  If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
   * @param adAccountId Unique identifier of an ad account.
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
   * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
   * @param bookmark Cursor used to fetch the next page of items
   * @return LeadFormsList200Response
  */
  public LeadFormsList200Response leadFormsList (String adAccountId, Integer pageSize, String order, String bookmark) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;
    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling leadFormsList",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling leadFormsList"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/lead_forms".replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();
    queryParams.addAll(ApiInvoker.parameterToPairs("", "page_size", pageSize));
    queryParams.addAll(ApiInvoker.parameterToPairs("", "order", order));
    queryParams.addAll(ApiInvoker.parameterToPairs("", "bookmark", bookmark));
    String[] contentTypes = {
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
    }

    String[] authNames = new String[] { "pinterest_oauth2" };

    try {
      String localVarResponse = apiInvoker.invokeAPI (basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames);
      if (localVarResponse != null) {
         return (LeadFormsList200Response) ApiInvoker.deserialize(localVarResponse, "", LeadFormsList200Response.class);
      } else {
         return null;
      }
    } catch (ApiException ex) {
       throw ex;
    } catch (InterruptedException ex) {
       throw ex;
    } catch (ExecutionException ex) {
      if (ex.getCause() instanceof VolleyError) {
        VolleyError volleyError = (VolleyError)ex.getCause();
        if (volleyError.networkResponse != null) {
          throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
        }
      }
      throw ex;
    } catch (TimeoutException ex) {
      throw ex;
    }
  }

      /**
   * Get lead forms
   * Gets all Lead Forms associated with an ad account ID. Retrieving an advertiser&#39;s list of lead forms will only contain results if you&#39;re a part of the Lead ads beta.  If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
   * @param adAccountId Unique identifier of an ad account.   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.   * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.   * @param bookmark Cursor used to fetch the next page of items
  */
  public void leadFormsList (String adAccountId, Integer pageSize, String order, String bookmark, final Response.Listener<LeadFormsList200Response> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling leadFormsList",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling leadFormsList"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/lead_forms".replaceAll("\\{format\\}","json").replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();

    queryParams.addAll(ApiInvoker.parameterToPairs("", "page_size", pageSize));
    queryParams.addAll(ApiInvoker.parameterToPairs("", "order", order));
    queryParams.addAll(ApiInvoker.parameterToPairs("", "bookmark", bookmark));


    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

    String[] authNames = new String[] { "pinterest_oauth2" };

    try {
      apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
            try {
              responseListener.onResponse((LeadFormsList200Response) ApiInvoker.deserialize(localVarResponse,  "", LeadFormsList200Response.class));
            } catch (ApiException exception) {
               errorListener.onErrorResponse(new VolleyError(exception));
            }
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
}
