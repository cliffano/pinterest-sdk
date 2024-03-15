/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.apis

import java.io.IOException
import okhttp3.OkHttpClient
import okhttp3.HttpUrl

import org.openapitools.client.models.ConversionEventResponse
import org.openapitools.client.models.ConversionTagCreate
import org.openapitools.client.models.ConversionTagListResponse
import org.openapitools.client.models.ConversionTagResponse
import org.openapitools.client.models.Error
import org.openapitools.client.models.PageVisitConversionTagsGet200Response

import com.squareup.moshi.Json

import org.openapitools.client.infrastructure.ApiClient
import org.openapitools.client.infrastructure.ApiResponse
import org.openapitools.client.infrastructure.ClientException
import org.openapitools.client.infrastructure.ClientError
import org.openapitools.client.infrastructure.ServerException
import org.openapitools.client.infrastructure.ServerError
import org.openapitools.client.infrastructure.MultiValueMap
import org.openapitools.client.infrastructure.PartConfig
import org.openapitools.client.infrastructure.RequestConfig
import org.openapitools.client.infrastructure.RequestMethod
import org.openapitools.client.infrastructure.ResponseType
import org.openapitools.client.infrastructure.Success
import org.openapitools.client.infrastructure.toMultiValue

class ConversionTagsApi(basePath: kotlin.String = defaultBasePath, client: OkHttpClient = ApiClient.defaultClient) : ApiClient(basePath, client) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty(ApiClient.baseUrlKey, "https://api.pinterest.com/v5")
        }
    }

    /**
     * Create conversion tag
     * Create a conversion tag, also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest tag&lt;/a&gt;, with the option to enable enhanced match.&lt;p/&gt; The Pinterest Tag tracks actions people take on the ad account’s website after they view the ad account&#39;s ad on Pinterest. The advertiser needs to customize this tag to track conversions.&lt;p/&gt; For more information, see:&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag\&quot;&gt;Set up the Pinterest tag&lt;/a&gt;&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://developers.pinterest.com/docs/conversions/pinterest-tag/\&quot;&gt;Pinterest Tag&lt;/a&gt;&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://developers.pinterest.com/docs/conversions/enhanced-match/\&quot;&gt;Enhanced match&lt;/a&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param conversionTagCreate Conversion Tag to create
     * @return ConversionTagResponse
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun conversionTagsCreate(adAccountId: kotlin.String, conversionTagCreate: ConversionTagCreate) : ConversionTagResponse {
        val localVarResponse = conversionTagsCreateWithHttpInfo(adAccountId = adAccountId, conversionTagCreate = conversionTagCreate)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as ConversionTagResponse
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()} ${localVarError.body}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
     * Create conversion tag
     * Create a conversion tag, also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest tag&lt;/a&gt;, with the option to enable enhanced match.&lt;p/&gt; The Pinterest Tag tracks actions people take on the ad account’s website after they view the ad account&#39;s ad on Pinterest. The advertiser needs to customize this tag to track conversions.&lt;p/&gt; For more information, see:&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag\&quot;&gt;Set up the Pinterest tag&lt;/a&gt;&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://developers.pinterest.com/docs/conversions/pinterest-tag/\&quot;&gt;Pinterest Tag&lt;/a&gt;&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://developers.pinterest.com/docs/conversions/enhanced-match/\&quot;&gt;Enhanced match&lt;/a&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param conversionTagCreate Conversion Tag to create
     * @return ApiResponse<ConversionTagResponse?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun conversionTagsCreateWithHttpInfo(adAccountId: kotlin.String, conversionTagCreate: ConversionTagCreate) : ApiResponse<ConversionTagResponse?> {
        val localVariableConfig = conversionTagsCreateRequestConfig(adAccountId = adAccountId, conversionTagCreate = conversionTagCreate)

        return request<ConversionTagCreate, ConversionTagResponse>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation conversionTagsCreate
     *
     * @param adAccountId Unique identifier of an ad account.
     * @param conversionTagCreate Conversion Tag to create
     * @return RequestConfig
     */
    fun conversionTagsCreateRequestConfig(adAccountId: kotlin.String, conversionTagCreate: ConversionTagCreate) : RequestConfig<ConversionTagCreate> {
        val localVariableBody = conversionTagCreate
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Content-Type"] = "application/json"
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/ad_accounts/{ad_account_id}/conversion_tags".replace("{"+"ad_account_id"+"}", encodeURIComponent(adAccountId.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * Get conversion tag
     * Get information about an existing conversion tag.
     * @param adAccountId Unique identifier of an ad account.
     * @param conversionTagId Id of the conversion tag.
     * @return ConversionTagResponse
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun conversionTagsGet(adAccountId: kotlin.String, conversionTagId: kotlin.String) : ConversionTagResponse {
        val localVarResponse = conversionTagsGetWithHttpInfo(adAccountId = adAccountId, conversionTagId = conversionTagId)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as ConversionTagResponse
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()} ${localVarError.body}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
     * Get conversion tag
     * Get information about an existing conversion tag.
     * @param adAccountId Unique identifier of an ad account.
     * @param conversionTagId Id of the conversion tag.
     * @return ApiResponse<ConversionTagResponse?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun conversionTagsGetWithHttpInfo(adAccountId: kotlin.String, conversionTagId: kotlin.String) : ApiResponse<ConversionTagResponse?> {
        val localVariableConfig = conversionTagsGetRequestConfig(adAccountId = adAccountId, conversionTagId = conversionTagId)

        return request<Unit, ConversionTagResponse>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation conversionTagsGet
     *
     * @param adAccountId Unique identifier of an ad account.
     * @param conversionTagId Id of the conversion tag.
     * @return RequestConfig
     */
    fun conversionTagsGetRequestConfig(adAccountId: kotlin.String, conversionTagId: kotlin.String) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/ad_accounts/{ad_account_id}/conversion_tags/{conversion_tag_id}".replace("{"+"ad_account_id"+"}", encodeURIComponent(adAccountId.toString())).replace("{"+"conversion_tag_id"+"}", encodeURIComponent(conversionTagId.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * Get conversion tags
     * List conversion tags associated with an ad account.
     * @param adAccountId Unique identifier of an ad account.
     * @param filterDeleted Filter out deleted tags. (optional, default to false)
     * @return ConversionTagListResponse
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun conversionTagsList(adAccountId: kotlin.String, filterDeleted: kotlin.Boolean? = false) : ConversionTagListResponse {
        val localVarResponse = conversionTagsListWithHttpInfo(adAccountId = adAccountId, filterDeleted = filterDeleted)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as ConversionTagListResponse
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()} ${localVarError.body}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
     * Get conversion tags
     * List conversion tags associated with an ad account.
     * @param adAccountId Unique identifier of an ad account.
     * @param filterDeleted Filter out deleted tags. (optional, default to false)
     * @return ApiResponse<ConversionTagListResponse?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun conversionTagsListWithHttpInfo(adAccountId: kotlin.String, filterDeleted: kotlin.Boolean?) : ApiResponse<ConversionTagListResponse?> {
        val localVariableConfig = conversionTagsListRequestConfig(adAccountId = adAccountId, filterDeleted = filterDeleted)

        return request<Unit, ConversionTagListResponse>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation conversionTagsList
     *
     * @param adAccountId Unique identifier of an ad account.
     * @param filterDeleted Filter out deleted tags. (optional, default to false)
     * @return RequestConfig
     */
    fun conversionTagsListRequestConfig(adAccountId: kotlin.String, filterDeleted: kotlin.Boolean?) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                if (filterDeleted != null) {
                    put("filter_deleted", listOf(filterDeleted.toString()))
                }
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/ad_accounts/{ad_account_id}/conversion_tags".replace("{"+"ad_account_id"+"}", encodeURIComponent(adAccountId.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * Get Ocpm eligible conversion tags
     * Get Ocpm eligible conversion tag events for an ad account.
     * @param adAccountId Unique identifier of an ad account.
     * @return kotlin.collections.Map<kotlin.String, kotlin.collections.List<ConversionEventResponse>>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun ocpmEligibleConversionTagsGet(adAccountId: kotlin.String) : kotlin.collections.Map<kotlin.String, kotlin.collections.List<ConversionEventResponse>> {
        val localVarResponse = ocpmEligibleConversionTagsGetWithHttpInfo(adAccountId = adAccountId)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.Map<kotlin.String, kotlin.collections.List<ConversionEventResponse>>
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()} ${localVarError.body}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
     * Get Ocpm eligible conversion tags
     * Get Ocpm eligible conversion tag events for an ad account.
     * @param adAccountId Unique identifier of an ad account.
     * @return ApiResponse<kotlin.collections.Map<kotlin.String, kotlin.collections.List<ConversionEventResponse>>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun ocpmEligibleConversionTagsGetWithHttpInfo(adAccountId: kotlin.String) : ApiResponse<kotlin.collections.Map<kotlin.String, kotlin.collections.List<ConversionEventResponse>>?> {
        val localVariableConfig = ocpmEligibleConversionTagsGetRequestConfig(adAccountId = adAccountId)

        return request<Unit, kotlin.collections.Map<kotlin.String, kotlin.collections.List<ConversionEventResponse>>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation ocpmEligibleConversionTagsGet
     *
     * @param adAccountId Unique identifier of an ad account.
     * @return RequestConfig
     */
    fun ocpmEligibleConversionTagsGetRequestConfig(adAccountId: kotlin.String) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/ad_accounts/{ad_account_id}/conversion_tags/ocpm_eligible".replace("{"+"ad_account_id"+"}", encodeURIComponent(adAccountId.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * enum for parameter order
     */
     enum class OrderPageVisitConversionTagsGet(val value: kotlin.String) {
         @Json(name = "ASCENDING") ASCENDING("ASCENDING"),
         @Json(name = "DESCENDING") DESCENDING("DESCENDING")
     }

    /**
     * Get page visit conversion tags
     * Get all page visit conversion tag events for an ad account.
     * @param adAccountId Unique identifier of an ad account.
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @return PageVisitConversionTagsGet200Response
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun pageVisitConversionTagsGet(adAccountId: kotlin.String, pageSize: kotlin.Int? = 25, order: OrderPageVisitConversionTagsGet? = null, bookmark: kotlin.String? = null) : PageVisitConversionTagsGet200Response {
        val localVarResponse = pageVisitConversionTagsGetWithHttpInfo(adAccountId = adAccountId, pageSize = pageSize, order = order, bookmark = bookmark)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as PageVisitConversionTagsGet200Response
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()} ${localVarError.body}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
     * Get page visit conversion tags
     * Get all page visit conversion tag events for an ad account.
     * @param adAccountId Unique identifier of an ad account.
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @return ApiResponse<PageVisitConversionTagsGet200Response?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun pageVisitConversionTagsGetWithHttpInfo(adAccountId: kotlin.String, pageSize: kotlin.Int?, order: OrderPageVisitConversionTagsGet?, bookmark: kotlin.String?) : ApiResponse<PageVisitConversionTagsGet200Response?> {
        val localVariableConfig = pageVisitConversionTagsGetRequestConfig(adAccountId = adAccountId, pageSize = pageSize, order = order, bookmark = bookmark)

        return request<Unit, PageVisitConversionTagsGet200Response>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation pageVisitConversionTagsGet
     *
     * @param adAccountId Unique identifier of an ad account.
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @return RequestConfig
     */
    fun pageVisitConversionTagsGetRequestConfig(adAccountId: kotlin.String, pageSize: kotlin.Int?, order: OrderPageVisitConversionTagsGet?, bookmark: kotlin.String?) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                if (pageSize != null) {
                    put("page_size", listOf(pageSize.toString()))
                }
                if (order != null) {
                    put("order", listOf(order.value))
                }
                if (bookmark != null) {
                    put("bookmark", listOf(bookmark.toString()))
                }
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/ad_accounts/{ad_account_id}/conversion_tags/page_visit".replace("{"+"ad_account_id"+"}", encodeURIComponent(adAccountId.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }


    private fun encodeURIComponent(uriComponent: kotlin.String): kotlin.String =
        HttpUrl.Builder().scheme("http").host("localhost").addPathSegment(uriComponent).build().encodedPathSegments[0]
}