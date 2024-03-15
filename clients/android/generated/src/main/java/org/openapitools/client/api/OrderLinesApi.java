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
import org.openapitools.client.model.OrderLine;
import org.openapitools.client.model.OrderLinesList200Response;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeoutException;

public class OrderLinesApi {
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
  * Get order line
  * Get a specific existing order line associated with an ad account.
   * @param adAccountId Unique identifier of an ad account.
   * @param orderLineId Unique identifier of an order line.
   * @return OrderLine
  */
  public OrderLine orderLinesGet (String adAccountId, String orderLineId) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;
    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling orderLinesGet",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling orderLinesGet"));
    }
    // verify the required parameter 'orderLineId' is set
    if (orderLineId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'orderLineId' when calling orderLinesGet",
        new ApiException(400, "Missing the required parameter 'orderLineId' when calling orderLinesGet"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/order_lines/{order_line_id}".replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString())).replaceAll("\\{" + "order_line_id" + "\\}", apiInvoker.escapeString(orderLineId.toString()));

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
         return (OrderLine) ApiInvoker.deserialize(localVarResponse, "", OrderLine.class);
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
   * Get order line
   * Get a specific existing order line associated with an ad account.
   * @param adAccountId Unique identifier of an ad account.   * @param orderLineId Unique identifier of an order line.
  */
  public void orderLinesGet (String adAccountId, String orderLineId, final Response.Listener<OrderLine> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling orderLinesGet",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling orderLinesGet"));
    }
    // verify the required parameter 'orderLineId' is set
    if (orderLineId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'orderLineId' when calling orderLinesGet",
        new ApiException(400, "Missing the required parameter 'orderLineId' when calling orderLinesGet"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/order_lines/{order_line_id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString())).replaceAll("\\{" + "order_line_id" + "\\}", apiInvoker.escapeString(orderLineId.toString()));

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
              responseListener.onResponse((OrderLine) ApiInvoker.deserialize(localVarResponse,  "", OrderLine.class));
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
  * Get order lines
  * List existing order lines associated with an ad account.
   * @param adAccountId Unique identifier of an ad account.
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
   * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
   * @param bookmark Cursor used to fetch the next page of items
   * @return OrderLinesList200Response
  */
  public OrderLinesList200Response orderLinesList (String adAccountId, Integer pageSize, String order, String bookmark) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;
    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling orderLinesList",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling orderLinesList"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/order_lines".replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString()));

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
         return (OrderLinesList200Response) ApiInvoker.deserialize(localVarResponse, "", OrderLinesList200Response.class);
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
   * Get order lines
   * List existing order lines associated with an ad account.
   * @param adAccountId Unique identifier of an ad account.   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.   * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.   * @param bookmark Cursor used to fetch the next page of items
  */
  public void orderLinesList (String adAccountId, Integer pageSize, String order, String bookmark, final Response.Listener<OrderLinesList200Response> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling orderLinesList",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling orderLinesList"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/order_lines".replaceAll("\\{format\\}","json").replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString()));

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
              responseListener.onResponse((OrderLinesList200Response) ApiInvoker.deserialize(localVarResponse,  "", OrderLinesList200Response.class));
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
