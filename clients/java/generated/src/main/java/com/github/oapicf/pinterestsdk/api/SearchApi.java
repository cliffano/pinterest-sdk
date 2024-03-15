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

import com.github.oapicf.pinterestsdk.ApiCallback;
import com.github.oapicf.pinterestsdk.ApiClient;
import com.github.oapicf.pinterestsdk.ApiException;
import com.github.oapicf.pinterestsdk.ApiResponse;
import com.github.oapicf.pinterestsdk.Configuration;
import com.github.oapicf.pinterestsdk.Pair;
import com.github.oapicf.pinterestsdk.ProgressRequestBody;
import com.github.oapicf.pinterestsdk.ProgressResponseBody;

import com.google.gson.reflect.TypeToken;

import java.io.IOException;


import com.github.oapicf.pinterestsdk.model.Error;
import com.github.oapicf.pinterestsdk.model.PinsList200Response;
import com.github.oapicf.pinterestsdk.model.SearchPartnerPins200Response;
import com.github.oapicf.pinterestsdk.model.SearchUserBoardsGet200Response;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class SearchApi {
    private ApiClient localVarApiClient;
    private int localHostIndex;
    private String localCustomBaseUrl;

    public SearchApi() {
        this(Configuration.getDefaultApiClient());
    }

    public SearchApi(ApiClient apiClient) {
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
     * Build call for searchPartnerPins
     * @param term Search term to look up pins. (required)
     * @param countryCode Two letter country code (ISO 3166-1 alpha-2) (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param locale Search locale. (optional)
     * @param limit Max search result size (optional, default to 10)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Invalid pins </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call searchPartnerPinsCall(String term, String countryCode, String bookmark, String locale, Integer limit, final ApiCallback _callback) throws ApiException {
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
        String localVarPath = "/search/partner/pins";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (term != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("term", term));
        }

        if (countryCode != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("country_code", countryCode));
        }

        if (bookmark != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("bookmark", bookmark));
        }

        if (locale != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("locale", locale));
        }

        if (limit != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("limit", limit));
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
    private okhttp3.Call searchPartnerPinsValidateBeforeCall(String term, String countryCode, String bookmark, String locale, Integer limit, final ApiCallback _callback) throws ApiException {
        // verify the required parameter 'term' is set
        if (term == null) {
            throw new ApiException("Missing the required parameter 'term' when calling searchPartnerPins(Async)");
        }

        // verify the required parameter 'countryCode' is set
        if (countryCode == null) {
            throw new ApiException("Missing the required parameter 'countryCode' when calling searchPartnerPins(Async)");
        }

        return searchPartnerPinsCall(term, countryCode, bookmark, locale, limit, _callback);

    }

    /**
     * Search pins by a given search term
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get the top 10 Pins by a given search term.
     * @param term Search term to look up pins. (required)
     * @param countryCode Two letter country code (ISO 3166-1 alpha-2) (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param locale Search locale. (optional)
     * @param limit Max search result size (optional, default to 10)
     * @return SearchPartnerPins200Response
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Invalid pins </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public SearchPartnerPins200Response searchPartnerPins(String term, String countryCode, String bookmark, String locale, Integer limit) throws ApiException {
        ApiResponse<SearchPartnerPins200Response> localVarResp = searchPartnerPinsWithHttpInfo(term, countryCode, bookmark, locale, limit);
        return localVarResp.getData();
    }

    /**
     * Search pins by a given search term
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get the top 10 Pins by a given search term.
     * @param term Search term to look up pins. (required)
     * @param countryCode Two letter country code (ISO 3166-1 alpha-2) (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param locale Search locale. (optional)
     * @param limit Max search result size (optional, default to 10)
     * @return ApiResponse&lt;SearchPartnerPins200Response&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Invalid pins </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<SearchPartnerPins200Response> searchPartnerPinsWithHttpInfo(String term, String countryCode, String bookmark, String locale, Integer limit) throws ApiException {
        okhttp3.Call localVarCall = searchPartnerPinsValidateBeforeCall(term, countryCode, bookmark, locale, limit, null);
        Type localVarReturnType = new TypeToken<SearchPartnerPins200Response>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Search pins by a given search term (asynchronously)
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get the top 10 Pins by a given search term.
     * @param term Search term to look up pins. (required)
     * @param countryCode Two letter country code (ISO 3166-1 alpha-2) (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param locale Search locale. (optional)
     * @param limit Max search result size (optional, default to 10)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Invalid pins </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call searchPartnerPinsAsync(String term, String countryCode, String bookmark, String locale, Integer limit, final ApiCallback<SearchPartnerPins200Response> _callback) throws ApiException {

        okhttp3.Call localVarCall = searchPartnerPinsValidateBeforeCall(term, countryCode, bookmark, locale, limit, _callback);
        Type localVarReturnType = new TypeToken<SearchPartnerPins200Response>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for searchUserBoardsGet
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (optional)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> response </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call searchUserBoardsGetCall(String adAccountId, String bookmark, Integer pageSize, String query, final ApiCallback _callback) throws ApiException {
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
        String localVarPath = "/search/boards";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (adAccountId != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("ad_account_id", adAccountId));
        }

        if (bookmark != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("bookmark", bookmark));
        }

        if (pageSize != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("page_size", pageSize));
        }

        if (query != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("query", query));
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
    private okhttp3.Call searchUserBoardsGetValidateBeforeCall(String adAccountId, String bookmark, Integer pageSize, String query, final ApiCallback _callback) throws ApiException {
        return searchUserBoardsGetCall(adAccountId, bookmark, pageSize, query, _callback);

    }

    /**
     * Search user&#39;s boards
     * Search for boards for the \&quot;operation user_account\&quot;. This includes boards of all board types. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (optional)
     * @return SearchUserBoardsGet200Response
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> response </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public SearchUserBoardsGet200Response searchUserBoardsGet(String adAccountId, String bookmark, Integer pageSize, String query) throws ApiException {
        ApiResponse<SearchUserBoardsGet200Response> localVarResp = searchUserBoardsGetWithHttpInfo(adAccountId, bookmark, pageSize, query);
        return localVarResp.getData();
    }

    /**
     * Search user&#39;s boards
     * Search for boards for the \&quot;operation user_account\&quot;. This includes boards of all board types. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (optional)
     * @return ApiResponse&lt;SearchUserBoardsGet200Response&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> response </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<SearchUserBoardsGet200Response> searchUserBoardsGetWithHttpInfo(String adAccountId, String bookmark, Integer pageSize, String query) throws ApiException {
        okhttp3.Call localVarCall = searchUserBoardsGetValidateBeforeCall(adAccountId, bookmark, pageSize, query, null);
        Type localVarReturnType = new TypeToken<SearchUserBoardsGet200Response>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Search user&#39;s boards (asynchronously)
     * Search for boards for the \&quot;operation user_account\&quot;. This includes boards of all board types. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (optional)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> response </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call searchUserBoardsGetAsync(String adAccountId, String bookmark, Integer pageSize, String query, final ApiCallback<SearchUserBoardsGet200Response> _callback) throws ApiException {

        okhttp3.Call localVarCall = searchUserBoardsGetValidateBeforeCall(adAccountId, bookmark, pageSize, query, _callback);
        Type localVarReturnType = new TypeToken<SearchUserBoardsGet200Response>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for searchUserPinsList
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (required)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> User not found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call searchUserPinsListCall(String query, String adAccountId, String bookmark, final ApiCallback _callback) throws ApiException {
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
        String localVarPath = "/search/pins";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (adAccountId != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("ad_account_id", adAccountId));
        }

        if (query != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("query", query));
        }

        if (bookmark != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("bookmark", bookmark));
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
    private okhttp3.Call searchUserPinsListValidateBeforeCall(String query, String adAccountId, String bookmark, final ApiCallback _callback) throws ApiException {
        // verify the required parameter 'query' is set
        if (query == null) {
            throw new ApiException("Missing the required parameter 'query' when calling searchUserPinsList(Async)");
        }

        return searchUserPinsListCall(query, adAccountId, bookmark, _callback);

    }

    /**
     * Search user&#39;s Pins
     * Search for pins for the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (required)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @return PinsList200Response
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> User not found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public PinsList200Response searchUserPinsList(String query, String adAccountId, String bookmark) throws ApiException {
        ApiResponse<PinsList200Response> localVarResp = searchUserPinsListWithHttpInfo(query, adAccountId, bookmark);
        return localVarResp.getData();
    }

    /**
     * Search user&#39;s Pins
     * Search for pins for the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (required)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @return ApiResponse&lt;PinsList200Response&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> User not found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<PinsList200Response> searchUserPinsListWithHttpInfo(String query, String adAccountId, String bookmark) throws ApiException {
        okhttp3.Call localVarCall = searchUserPinsListValidateBeforeCall(query, adAccountId, bookmark, null);
        Type localVarReturnType = new TypeToken<PinsList200Response>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Search user&#39;s Pins (asynchronously)
     * Search for pins for the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (required)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Success </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> User not found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call searchUserPinsListAsync(String query, String adAccountId, String bookmark, final ApiCallback<PinsList200Response> _callback) throws ApiException {

        okhttp3.Call localVarCall = searchUserPinsListValidateBeforeCall(query, adAccountId, bookmark, _callback);
        Type localVarReturnType = new TypeToken<PinsList200Response>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}