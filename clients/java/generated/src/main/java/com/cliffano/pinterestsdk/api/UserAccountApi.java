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

import com.cliffano.pinterestsdk.ApiCallback;
import com.cliffano.pinterestsdk.ApiClient;
import com.cliffano.pinterestsdk.ApiException;
import com.cliffano.pinterestsdk.ApiResponse;
import com.cliffano.pinterestsdk.Configuration;
import com.cliffano.pinterestsdk.Pair;
import com.cliffano.pinterestsdk.ProgressRequestBody;
import com.cliffano.pinterestsdk.ProgressResponseBody;

import com.google.gson.reflect.TypeToken;

import java.io.IOException;


import com.cliffano.pinterestsdk.model.Account;
import com.cliffano.pinterestsdk.model.AnalyticsMetricsResponse;
import com.cliffano.pinterestsdk.model.Error;
import org.threeten.bp.LocalDate;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class UserAccountApi {
    private ApiClient localVarApiClient;
    private int localHostIndex;
    private String localCustomBaseUrl;

    public UserAccountApi() {
        this(Configuration.getDefaultApiClient());
    }

    public UserAccountApi(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return localVarApiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public int getHostIndex() {
        return localHostIndex;
    }

    public void setHostIndex(int hostIndex) {
        this.localHostIndex = hostIndex;
    }

    public String getCustomBaseUrl() {
        return localCustomBaseUrl;
    }

    public void setCustomBaseUrl(String customBaseUrl) {
        this.localCustomBaseUrl = customBaseUrl;
    }

    /**
     * Build call for userAccountAnalytics
     * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD (required)
     * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD (required)
     * @param fromClaimedContent Filter on Pins that match your claimed domain. (optional, default to BOTH)
     * @param pinFormat Pin formats to get data for, default is all. (optional, default to ALL)
     * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
     * @param metricTypes Metric types to get data for, default is all.  (optional)
     * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 403 </td><td> Not authorized to access the user account analytics. </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call userAccountAnalyticsCall(LocalDate startDate, LocalDate endDate, String fromClaimedContent, String pinFormat, String appTypes, List<String> metricTypes, String splitField, String adAccountId, final ApiCallback _callback) throws ApiException {
        String basePath = null;

        // Operation Servers
        String[] localBasePaths = new String[] {  };

        // Determine Base Path to Use
        if (localCustomBaseUrl != null){
            basePath = localCustomBaseUrl;
        } else if ( localBasePaths.length > 0 ) {
            basePath = localBasePaths[localHostIndex];
        } else {
            basePath = null;
        }

        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/user_account/analytics";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (startDate != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("start_date", startDate));
        }

        if (endDate != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("end_date", endDate));
        }

        if (fromClaimedContent != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("from_claimed_content", fromClaimedContent));
        }

        if (pinFormat != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("pin_format", pinFormat));
        }

        if (appTypes != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("app_types", appTypes));
        }

        if (metricTypes != null) {
            localVarCollectionQueryParams.addAll(localVarApiClient.parameterToPairs("csv", "metric_types", metricTypes));
        }

        if (splitField != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("split_field", splitField));
        }

        if (adAccountId != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("ad_account_id", adAccountId));
        }

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        if (localVarContentType != null) {
            localVarHeaderParams.put("Content-Type", localVarContentType);
        }

        String[] localVarAuthNames = new String[] { "pinterest_oauth2" };
        return localVarApiClient.buildCall(basePath, localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call userAccountAnalyticsValidateBeforeCall(LocalDate startDate, LocalDate endDate, String fromClaimedContent, String pinFormat, String appTypes, List<String> metricTypes, String splitField, String adAccountId, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'startDate' is set
        if (startDate == null) {
            throw new ApiException("Missing the required parameter 'startDate' when calling userAccountAnalytics(Async)");
        }
        
        // verify the required parameter 'endDate' is set
        if (endDate == null) {
            throw new ApiException("Missing the required parameter 'endDate' when calling userAccountAnalytics(Async)");
        }
        

        okhttp3.Call localVarCall = userAccountAnalyticsCall(startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId, _callback);
        return localVarCall;

    }

    /**
     * Get user account analytics
     * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
     * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD (required)
     * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD (required)
     * @param fromClaimedContent Filter on Pins that match your claimed domain. (optional, default to BOTH)
     * @param pinFormat Pin formats to get data for, default is all. (optional, default to ALL)
     * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
     * @param metricTypes Metric types to get data for, default is all.  (optional)
     * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @return Map&lt;String, AnalyticsMetricsResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 403 </td><td> Not authorized to access the user account analytics. </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public Map<String, AnalyticsMetricsResponse> userAccountAnalytics(LocalDate startDate, LocalDate endDate, String fromClaimedContent, String pinFormat, String appTypes, List<String> metricTypes, String splitField, String adAccountId) throws ApiException {
        ApiResponse<Map<String, AnalyticsMetricsResponse>> localVarResp = userAccountAnalyticsWithHttpInfo(startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId);
        return localVarResp.getData();
    }

    /**
     * Get user account analytics
     * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
     * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD (required)
     * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD (required)
     * @param fromClaimedContent Filter on Pins that match your claimed domain. (optional, default to BOTH)
     * @param pinFormat Pin formats to get data for, default is all. (optional, default to ALL)
     * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
     * @param metricTypes Metric types to get data for, default is all.  (optional)
     * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @return ApiResponse&lt;Map&lt;String, AnalyticsMetricsResponse&gt;&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 403 </td><td> Not authorized to access the user account analytics. </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<Map<String, AnalyticsMetricsResponse>> userAccountAnalyticsWithHttpInfo(LocalDate startDate, LocalDate endDate, String fromClaimedContent, String pinFormat, String appTypes, List<String> metricTypes, String splitField, String adAccountId) throws ApiException {
        okhttp3.Call localVarCall = userAccountAnalyticsValidateBeforeCall(startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId, null);
        Type localVarReturnType = new TypeToken<Map<String, AnalyticsMetricsResponse>>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Get user account analytics (asynchronously)
     * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
     * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD (required)
     * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD (required)
     * @param fromClaimedContent Filter on Pins that match your claimed domain. (optional, default to BOTH)
     * @param pinFormat Pin formats to get data for, default is all. (optional, default to ALL)
     * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
     * @param metricTypes Metric types to get data for, default is all.  (optional)
     * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 403 </td><td> Not authorized to access the user account analytics. </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call userAccountAnalyticsAsync(LocalDate startDate, LocalDate endDate, String fromClaimedContent, String pinFormat, String appTypes, List<String> metricTypes, String splitField, String adAccountId, final ApiCallback<Map<String, AnalyticsMetricsResponse>> _callback) throws ApiException {

        okhttp3.Call localVarCall = userAccountAnalyticsValidateBeforeCall(startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId, _callback);
        Type localVarReturnType = new TypeToken<Map<String, AnalyticsMetricsResponse>>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for userAccountGet
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> response </td><td>  -  </td></tr>
        <tr><td> 403 </td><td> Not authorized to access the user account. </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call userAccountGetCall(String adAccountId, final ApiCallback _callback) throws ApiException {
        String basePath = null;

        // Operation Servers
        String[] localBasePaths = new String[] {  };

        // Determine Base Path to Use
        if (localCustomBaseUrl != null){
            basePath = localCustomBaseUrl;
        } else if ( localBasePaths.length > 0 ) {
            basePath = localBasePaths[localHostIndex];
        } else {
            basePath = null;
        }

        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/user_account";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (adAccountId != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("ad_account_id", adAccountId));
        }

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        if (localVarContentType != null) {
            localVarHeaderParams.put("Content-Type", localVarContentType);
        }

        String[] localVarAuthNames = new String[] { "pinterest_oauth2" };
        return localVarApiClient.buildCall(basePath, localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call userAccountGetValidateBeforeCall(String adAccountId, final ApiCallback _callback) throws ApiException {
        

        okhttp3.Call localVarCall = userAccountGetCall(adAccountId, _callback);
        return localVarCall;

    }

    /**
     * Get user account
     * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @return Account
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> response </td><td>  -  </td></tr>
        <tr><td> 403 </td><td> Not authorized to access the user account. </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public Account userAccountGet(String adAccountId) throws ApiException {
        ApiResponse<Account> localVarResp = userAccountGetWithHttpInfo(adAccountId);
        return localVarResp.getData();
    }

    /**
     * Get user account
     * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @return ApiResponse&lt;Account&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> response </td><td>  -  </td></tr>
        <tr><td> 403 </td><td> Not authorized to access the user account. </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<Account> userAccountGetWithHttpInfo(String adAccountId) throws ApiException {
        okhttp3.Call localVarCall = userAccountGetValidateBeforeCall(adAccountId, null);
        Type localVarReturnType = new TypeToken<Account>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Get user account (asynchronously)
     * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> response </td><td>  -  </td></tr>
        <tr><td> 403 </td><td> Not authorized to access the user account. </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call userAccountGetAsync(String adAccountId, final ApiCallback<Account> _callback) throws ApiException {

        okhttp3.Call localVarCall = userAccountGetValidateBeforeCall(adAccountId, _callback);
        Type localVarReturnType = new TypeToken<Account>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}
