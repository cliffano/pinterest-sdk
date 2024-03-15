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

import org.openapitools.client.model.AudienceDefinitionResponse;
import org.openapitools.client.model.AudienceInsightType;
import org.openapitools.client.model.AudienceInsightsResponse;
import org.openapitools.client.model.Error;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeoutException;

public class AudienceInsightsApi {
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
  * Get audience insights
  * Get Audience Insights for an ad account. The response will return insights for 3 types of audiences: the ad account&#39;s engaged audience on Pinterest, the ad account&#39;s total audience on Pinterest and Pinterest&#39;s total audience.&lt;p/&gt; &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-insights\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Learn more about Audience Insights&lt;/a&gt;.
   * @param adAccountId Unique identifier of an ad account.
   * @param audienceInsightType Type of audience insights.
   * @return AudienceInsightsResponse
  */
  public AudienceInsightsResponse audienceInsightsGet (String adAccountId, AudienceInsightType audienceInsightType) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;
    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling audienceInsightsGet",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling audienceInsightsGet"));
    }
    // verify the required parameter 'audienceInsightType' is set
    if (audienceInsightType == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'audienceInsightType' when calling audienceInsightsGet",
        new ApiException(400, "Missing the required parameter 'audienceInsightType' when calling audienceInsightsGet"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/audience_insights".replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();
    queryParams.addAll(ApiInvoker.parameterToPairs("", "audience_insight_type", audienceInsightType));
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
         return (AudienceInsightsResponse) ApiInvoker.deserialize(localVarResponse, "", AudienceInsightsResponse.class);
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
   * Get audience insights
   * Get Audience Insights for an ad account. The response will return insights for 3 types of audiences: the ad account&#39;s engaged audience on Pinterest, the ad account&#39;s total audience on Pinterest and Pinterest&#39;s total audience.&lt;p/&gt; &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-insights\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Learn more about Audience Insights&lt;/a&gt;.
   * @param adAccountId Unique identifier of an ad account.   * @param audienceInsightType Type of audience insights.
  */
  public void audienceInsightsGet (String adAccountId, AudienceInsightType audienceInsightType, final Response.Listener<AudienceInsightsResponse> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling audienceInsightsGet",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling audienceInsightsGet"));
    }
    // verify the required parameter 'audienceInsightType' is set
    if (audienceInsightType == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'audienceInsightType' when calling audienceInsightsGet",
        new ApiException(400, "Missing the required parameter 'audienceInsightType' when calling audienceInsightsGet"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/audience_insights".replaceAll("\\{format\\}","json").replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();

    queryParams.addAll(ApiInvoker.parameterToPairs("", "audience_insight_type", audienceInsightType));


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
              responseListener.onResponse((AudienceInsightsResponse) ApiInvoker.deserialize(localVarResponse,  "", AudienceInsightsResponse.class));
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
  * Get audience insights scope and type
  * Get the scope and type of available audiences, which along with a date, is an audience that has recently had an interaction (referred to here as a type) on pins. Interacted pins can belong to at least the most common **partner** or **Pinterest** scopes. This means that user interactions made on advertiser or partner pins will have the **partner** scope. You can also have user interactions performed in general on Pinterest with the **Pinterest** scope. In that case, you can then use the returned type and scope values together on requests to other endpoints to retrieve insight metrics for a desired audience.
   * @param adAccountId Unique identifier of an ad account.
   * @return AudienceDefinitionResponse
  */
  public AudienceDefinitionResponse audienceInsightsScopeAndTypeGet (String adAccountId) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;
    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling audienceInsightsScopeAndTypeGet",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling audienceInsightsScopeAndTypeGet"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/insights/audiences".replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString()));

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
         return (AudienceDefinitionResponse) ApiInvoker.deserialize(localVarResponse, "", AudienceDefinitionResponse.class);
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
   * Get audience insights scope and type
   * Get the scope and type of available audiences, which along with a date, is an audience that has recently had an interaction (referred to here as a type) on pins. Interacted pins can belong to at least the most common **partner** or **Pinterest** scopes. This means that user interactions made on advertiser or partner pins will have the **partner** scope. You can also have user interactions performed in general on Pinterest with the **Pinterest** scope. In that case, you can then use the returned type and scope values together on requests to other endpoints to retrieve insight metrics for a desired audience.
   * @param adAccountId Unique identifier of an ad account.
  */
  public void audienceInsightsScopeAndTypeGet (String adAccountId, final Response.Listener<AudienceDefinitionResponse> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

    // verify the required parameter 'adAccountId' is set
    if (adAccountId == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'adAccountId' when calling audienceInsightsScopeAndTypeGet",
        new ApiException(400, "Missing the required parameter 'adAccountId' when calling audienceInsightsScopeAndTypeGet"));
    }

    // create path and map variables
    String path = "/ad_accounts/{ad_account_id}/insights/audiences".replaceAll("\\{format\\}","json").replaceAll("\\{" + "ad_account_id" + "\\}", apiInvoker.escapeString(adAccountId.toString()));

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
              responseListener.onResponse((AudienceDefinitionResponse) ApiInvoker.deserialize(localVarResponse,  "", AudienceDefinitionResponse.class));
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
