/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Net;
using System.Net.Mime;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Client.Auth;
using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Api
{

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IOrderLinesApiSync : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Get order line
        /// </summary>
        /// <remarks>
        /// Get a specific existing order line associated with an ad account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="orderLineId">Unique identifier of an order line.</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <returns>OrderLine</returns>
        OrderLine OrderLinesGet(string adAccountId, string orderLineId, int operationIndex = 0);

        /// <summary>
        /// Get order line
        /// </summary>
        /// <remarks>
        /// Get a specific existing order line associated with an ad account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="orderLineId">Unique identifier of an order line.</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <returns>ApiResponse of OrderLine</returns>
        ApiResponse<OrderLine> OrderLinesGetWithHttpInfo(string adAccountId, string orderLineId, int operationIndex = 0);
        /// <summary>
        /// Get order lines
        /// </summary>
        /// <remarks>
        /// List existing order lines associated with an ad account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items (optional)</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <returns>OrderLinesList200Response</returns>
        OrderLinesList200Response OrderLinesList(string adAccountId, int? pageSize = default(int?), string? order = default(string?), string? bookmark = default(string?), int operationIndex = 0);

        /// <summary>
        /// Get order lines
        /// </summary>
        /// <remarks>
        /// List existing order lines associated with an ad account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items (optional)</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <returns>ApiResponse of OrderLinesList200Response</returns>
        ApiResponse<OrderLinesList200Response> OrderLinesListWithHttpInfo(string adAccountId, int? pageSize = default(int?), string? order = default(string?), string? bookmark = default(string?), int operationIndex = 0);
        #endregion Synchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IOrderLinesApiAsync : IApiAccessor
    {
        #region Asynchronous Operations
        /// <summary>
        /// Get order line
        /// </summary>
        /// <remarks>
        /// Get a specific existing order line associated with an ad account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="orderLineId">Unique identifier of an order line.</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns>Task of OrderLine</returns>
        System.Threading.Tasks.Task<OrderLine> OrderLinesGetAsync(string adAccountId, string orderLineId, int operationIndex = 0, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));

        /// <summary>
        /// Get order line
        /// </summary>
        /// <remarks>
        /// Get a specific existing order line associated with an ad account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="orderLineId">Unique identifier of an order line.</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns>Task of ApiResponse (OrderLine)</returns>
        System.Threading.Tasks.Task<ApiResponse<OrderLine>> OrderLinesGetWithHttpInfoAsync(string adAccountId, string orderLineId, int operationIndex = 0, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));
        /// <summary>
        /// Get order lines
        /// </summary>
        /// <remarks>
        /// List existing order lines associated with an ad account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items (optional)</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns>Task of OrderLinesList200Response</returns>
        System.Threading.Tasks.Task<OrderLinesList200Response> OrderLinesListAsync(string adAccountId, int? pageSize = default(int?), string? order = default(string?), string? bookmark = default(string?), int operationIndex = 0, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));

        /// <summary>
        /// Get order lines
        /// </summary>
        /// <remarks>
        /// List existing order lines associated with an ad account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items (optional)</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns>Task of ApiResponse (OrderLinesList200Response)</returns>
        System.Threading.Tasks.Task<ApiResponse<OrderLinesList200Response>> OrderLinesListWithHttpInfoAsync(string adAccountId, int? pageSize = default(int?), string? order = default(string?), string? bookmark = default(string?), int operationIndex = 0, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IOrderLinesApi : IOrderLinesApiSync, IOrderLinesApiAsync
    {

    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class OrderLinesApi : IOrderLinesApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="OrderLinesApi"/> class.
        /// </summary>
        /// <returns></returns>
        public OrderLinesApi() : this((string)null)
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="OrderLinesApi"/> class.
        /// </summary>
        /// <returns></returns>
        public OrderLinesApi(string basePath)
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.MergeConfigurations(
                Org.OpenAPITools.Client.GlobalConfiguration.Instance,
                new Org.OpenAPITools.Client.Configuration { BasePath = basePath }
            );
            this.Client = new Org.OpenAPITools.Client.ApiClient(this.Configuration.BasePath);
            this.AsynchronousClient = new Org.OpenAPITools.Client.ApiClient(this.Configuration.BasePath);
            this.ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="OrderLinesApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public OrderLinesApi(Org.OpenAPITools.Client.Configuration configuration)
        {
            if (configuration == null) throw new ArgumentNullException("configuration");

            this.Configuration = Org.OpenAPITools.Client.Configuration.MergeConfigurations(
                Org.OpenAPITools.Client.GlobalConfiguration.Instance,
                configuration
            );
            this.Client = new Org.OpenAPITools.Client.ApiClient(this.Configuration.BasePath);
            this.AsynchronousClient = new Org.OpenAPITools.Client.ApiClient(this.Configuration.BasePath);
            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="OrderLinesApi"/> class
        /// using a Configuration object and client instance.
        /// </summary>
        /// <param name="client">The client interface for synchronous API access.</param>
        /// <param name="asyncClient">The client interface for asynchronous API access.</param>
        /// <param name="configuration">The configuration object.</param>
        public OrderLinesApi(Org.OpenAPITools.Client.ISynchronousClient client, Org.OpenAPITools.Client.IAsynchronousClient asyncClient, Org.OpenAPITools.Client.IReadableConfiguration configuration)
        {
            if (client == null) throw new ArgumentNullException("client");
            if (asyncClient == null) throw new ArgumentNullException("asyncClient");
            if (configuration == null) throw new ArgumentNullException("configuration");

            this.Client = client;
            this.AsynchronousClient = asyncClient;
            this.Configuration = configuration;
            this.ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// The client for accessing this underlying API asynchronously.
        /// </summary>
        public Org.OpenAPITools.Client.IAsynchronousClient AsynchronousClient { get; set; }

        /// <summary>
        /// The client for accessing this underlying API synchronously.
        /// </summary>
        public Org.OpenAPITools.Client.ISynchronousClient Client { get; set; }

        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public string GetBasePath()
        {
            return this.Configuration.BasePath;
        }

        /// <summary>
        /// Gets or sets the configuration object
        /// </summary>
        /// <value>An instance of the Configuration</value>
        public Org.OpenAPITools.Client.IReadableConfiguration Configuration { get; set; }

        /// <summary>
        /// Provides a factory method hook for the creation of exceptions.
        /// </summary>
        public Org.OpenAPITools.Client.ExceptionFactory ExceptionFactory
        {
            get
            {
                if (_exceptionFactory != null && _exceptionFactory.GetInvocationList().Length > 1)
                {
                    throw new InvalidOperationException("Multicast delegate for ExceptionFactory is unsupported.");
                }
                return _exceptionFactory;
            }
            set { _exceptionFactory = value; }
        }

        /// <summary>
        /// Get order line Get a specific existing order line associated with an ad account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="orderLineId">Unique identifier of an order line.</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <returns>OrderLine</returns>
        public OrderLine OrderLinesGet(string adAccountId, string orderLineId, int operationIndex = 0)
        {
            Org.OpenAPITools.Client.ApiResponse<OrderLine> localVarResponse = OrderLinesGetWithHttpInfo(adAccountId, orderLineId);
            return localVarResponse.Data;
        }

        /// <summary>
        /// Get order line Get a specific existing order line associated with an ad account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="orderLineId">Unique identifier of an order line.</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <returns>ApiResponse of OrderLine</returns>
        public Org.OpenAPITools.Client.ApiResponse<OrderLine> OrderLinesGetWithHttpInfo(string adAccountId, string orderLineId, int operationIndex = 0)
        {
            // verify the required parameter 'adAccountId' is set
            if (adAccountId == null)
            {
                throw new Org.OpenAPITools.Client.ApiException(400, "Missing required parameter 'adAccountId' when calling OrderLinesApi->OrderLinesGet");
            }

            // verify the required parameter 'orderLineId' is set
            if (orderLineId == null)
            {
                throw new Org.OpenAPITools.Client.ApiException(400, "Missing required parameter 'orderLineId' when calling OrderLinesApi->OrderLinesGet");
            }

            Org.OpenAPITools.Client.RequestOptions localVarRequestOptions = new Org.OpenAPITools.Client.RequestOptions();

            string[] _contentTypes = new string[] {
            };

            // to determine the Accept header
            string[] _accepts = new string[] {
                "application/json"
            };

            var localVarContentType = Org.OpenAPITools.Client.ClientUtils.SelectHeaderContentType(_contentTypes);
            if (localVarContentType != null)
            {
                localVarRequestOptions.HeaderParameters.Add("Content-Type", localVarContentType);
            }

            var localVarAccept = Org.OpenAPITools.Client.ClientUtils.SelectHeaderAccept(_accepts);
            if (localVarAccept != null)
            {
                localVarRequestOptions.HeaderParameters.Add("Accept", localVarAccept);
            }

            localVarRequestOptions.PathParameters.Add("ad_account_id", Org.OpenAPITools.Client.ClientUtils.ParameterToString(adAccountId)); // path parameter
            localVarRequestOptions.PathParameters.Add("order_line_id", Org.OpenAPITools.Client.ClientUtils.ParameterToString(orderLineId)); // path parameter

            localVarRequestOptions.Operation = "OrderLinesApi.OrderLinesGet";
            localVarRequestOptions.OperationIndex = operationIndex;

            // authentication (pinterest_oauth2) required
            // oauth required
            if (!localVarRequestOptions.HeaderParameters.ContainsKey("Authorization"))
            {
                if (!string.IsNullOrEmpty(this.Configuration.AccessToken))
                {
                    localVarRequestOptions.HeaderParameters.Add("Authorization", "Bearer " + this.Configuration.AccessToken);
                }
                else if (!string.IsNullOrEmpty(this.Configuration.OAuthTokenUrl) &&
                         !string.IsNullOrEmpty(this.Configuration.OAuthClientId) &&
                         !string.IsNullOrEmpty(this.Configuration.OAuthClientSecret) &&
                         this.Configuration.OAuthFlow != null)
                {
                    localVarRequestOptions.OAuth = true;
                }
            }

            // make the HTTP request
            var localVarResponse = this.Client.Get<OrderLine>("/ad_accounts/{ad_account_id}/order_lines/{order_line_id}", localVarRequestOptions, this.Configuration);
            if (this.ExceptionFactory != null)
            {
                Exception _exception = this.ExceptionFactory("OrderLinesGet", localVarResponse);
                if (_exception != null)
                {
                    throw _exception;
                }
            }

            return localVarResponse;
        }

        /// <summary>
        /// Get order line Get a specific existing order line associated with an ad account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="orderLineId">Unique identifier of an order line.</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns>Task of OrderLine</returns>
        public async System.Threading.Tasks.Task<OrderLine> OrderLinesGetAsync(string adAccountId, string orderLineId, int operationIndex = 0, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken))
        {
            Org.OpenAPITools.Client.ApiResponse<OrderLine> localVarResponse = await OrderLinesGetWithHttpInfoAsync(adAccountId, orderLineId, operationIndex, cancellationToken).ConfigureAwait(false);
            return localVarResponse.Data;
        }

        /// <summary>
        /// Get order line Get a specific existing order line associated with an ad account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="orderLineId">Unique identifier of an order line.</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns>Task of ApiResponse (OrderLine)</returns>
        public async System.Threading.Tasks.Task<Org.OpenAPITools.Client.ApiResponse<OrderLine>> OrderLinesGetWithHttpInfoAsync(string adAccountId, string orderLineId, int operationIndex = 0, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken))
        {
            // verify the required parameter 'adAccountId' is set
            if (adAccountId == null)
            {
                throw new Org.OpenAPITools.Client.ApiException(400, "Missing required parameter 'adAccountId' when calling OrderLinesApi->OrderLinesGet");
            }

            // verify the required parameter 'orderLineId' is set
            if (orderLineId == null)
            {
                throw new Org.OpenAPITools.Client.ApiException(400, "Missing required parameter 'orderLineId' when calling OrderLinesApi->OrderLinesGet");
            }


            Org.OpenAPITools.Client.RequestOptions localVarRequestOptions = new Org.OpenAPITools.Client.RequestOptions();

            string[] _contentTypes = new string[] {
            };

            // to determine the Accept header
            string[] _accepts = new string[] {
                "application/json"
            };

            var localVarContentType = Org.OpenAPITools.Client.ClientUtils.SelectHeaderContentType(_contentTypes);
            if (localVarContentType != null)
            {
                localVarRequestOptions.HeaderParameters.Add("Content-Type", localVarContentType);
            }

            var localVarAccept = Org.OpenAPITools.Client.ClientUtils.SelectHeaderAccept(_accepts);
            if (localVarAccept != null)
            {
                localVarRequestOptions.HeaderParameters.Add("Accept", localVarAccept);
            }

            localVarRequestOptions.PathParameters.Add("ad_account_id", Org.OpenAPITools.Client.ClientUtils.ParameterToString(adAccountId)); // path parameter
            localVarRequestOptions.PathParameters.Add("order_line_id", Org.OpenAPITools.Client.ClientUtils.ParameterToString(orderLineId)); // path parameter

            localVarRequestOptions.Operation = "OrderLinesApi.OrderLinesGet";
            localVarRequestOptions.OperationIndex = operationIndex;

            // authentication (pinterest_oauth2) required
            // oauth required
            if (!localVarRequestOptions.HeaderParameters.ContainsKey("Authorization"))
            {
                if (!string.IsNullOrEmpty(this.Configuration.AccessToken))
                {
                    localVarRequestOptions.HeaderParameters.Add("Authorization", "Bearer " + this.Configuration.AccessToken);
                }
                else if (!string.IsNullOrEmpty(this.Configuration.OAuthTokenUrl) &&
                         !string.IsNullOrEmpty(this.Configuration.OAuthClientId) &&
                         !string.IsNullOrEmpty(this.Configuration.OAuthClientSecret) &&
                         this.Configuration.OAuthFlow != null)
                {
                    localVarRequestOptions.OAuth = true;
                }
            }

            // make the HTTP request
            var localVarResponse = await this.AsynchronousClient.GetAsync<OrderLine>("/ad_accounts/{ad_account_id}/order_lines/{order_line_id}", localVarRequestOptions, this.Configuration, cancellationToken).ConfigureAwait(false);

            if (this.ExceptionFactory != null)
            {
                Exception _exception = this.ExceptionFactory("OrderLinesGet", localVarResponse);
                if (_exception != null)
                {
                    throw _exception;
                }
            }

            return localVarResponse;
        }

        /// <summary>
        /// Get order lines List existing order lines associated with an ad account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items (optional)</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <returns>OrderLinesList200Response</returns>
        public OrderLinesList200Response OrderLinesList(string adAccountId, int? pageSize = default(int?), string? order = default(string?), string? bookmark = default(string?), int operationIndex = 0)
        {
            Org.OpenAPITools.Client.ApiResponse<OrderLinesList200Response> localVarResponse = OrderLinesListWithHttpInfo(adAccountId, pageSize, order, bookmark);
            return localVarResponse.Data;
        }

        /// <summary>
        /// Get order lines List existing order lines associated with an ad account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items (optional)</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <returns>ApiResponse of OrderLinesList200Response</returns>
        public Org.OpenAPITools.Client.ApiResponse<OrderLinesList200Response> OrderLinesListWithHttpInfo(string adAccountId, int? pageSize = default(int?), string? order = default(string?), string? bookmark = default(string?), int operationIndex = 0)
        {
            // verify the required parameter 'adAccountId' is set
            if (adAccountId == null)
            {
                throw new Org.OpenAPITools.Client.ApiException(400, "Missing required parameter 'adAccountId' when calling OrderLinesApi->OrderLinesList");
            }

            Org.OpenAPITools.Client.RequestOptions localVarRequestOptions = new Org.OpenAPITools.Client.RequestOptions();

            string[] _contentTypes = new string[] {
            };

            // to determine the Accept header
            string[] _accepts = new string[] {
                "application/json"
            };

            var localVarContentType = Org.OpenAPITools.Client.ClientUtils.SelectHeaderContentType(_contentTypes);
            if (localVarContentType != null)
            {
                localVarRequestOptions.HeaderParameters.Add("Content-Type", localVarContentType);
            }

            var localVarAccept = Org.OpenAPITools.Client.ClientUtils.SelectHeaderAccept(_accepts);
            if (localVarAccept != null)
            {
                localVarRequestOptions.HeaderParameters.Add("Accept", localVarAccept);
            }

            localVarRequestOptions.PathParameters.Add("ad_account_id", Org.OpenAPITools.Client.ClientUtils.ParameterToString(adAccountId)); // path parameter
            if (pageSize != null)
            {
                localVarRequestOptions.QueryParameters.Add(Org.OpenAPITools.Client.ClientUtils.ParameterToMultiMap("", "page_size", pageSize));
            }
            if (order != null)
            {
                localVarRequestOptions.QueryParameters.Add(Org.OpenAPITools.Client.ClientUtils.ParameterToMultiMap("", "order", order));
            }
            if (bookmark != null)
            {
                localVarRequestOptions.QueryParameters.Add(Org.OpenAPITools.Client.ClientUtils.ParameterToMultiMap("", "bookmark", bookmark));
            }

            localVarRequestOptions.Operation = "OrderLinesApi.OrderLinesList";
            localVarRequestOptions.OperationIndex = operationIndex;

            // authentication (pinterest_oauth2) required
            // oauth required
            if (!localVarRequestOptions.HeaderParameters.ContainsKey("Authorization"))
            {
                if (!string.IsNullOrEmpty(this.Configuration.AccessToken))
                {
                    localVarRequestOptions.HeaderParameters.Add("Authorization", "Bearer " + this.Configuration.AccessToken);
                }
                else if (!string.IsNullOrEmpty(this.Configuration.OAuthTokenUrl) &&
                         !string.IsNullOrEmpty(this.Configuration.OAuthClientId) &&
                         !string.IsNullOrEmpty(this.Configuration.OAuthClientSecret) &&
                         this.Configuration.OAuthFlow != null)
                {
                    localVarRequestOptions.OAuth = true;
                }
            }

            // make the HTTP request
            var localVarResponse = this.Client.Get<OrderLinesList200Response>("/ad_accounts/{ad_account_id}/order_lines", localVarRequestOptions, this.Configuration);
            if (this.ExceptionFactory != null)
            {
                Exception _exception = this.ExceptionFactory("OrderLinesList", localVarResponse);
                if (_exception != null)
                {
                    throw _exception;
                }
            }

            return localVarResponse;
        }

        /// <summary>
        /// Get order lines List existing order lines associated with an ad account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items (optional)</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns>Task of OrderLinesList200Response</returns>
        public async System.Threading.Tasks.Task<OrderLinesList200Response> OrderLinesListAsync(string adAccountId, int? pageSize = default(int?), string? order = default(string?), string? bookmark = default(string?), int operationIndex = 0, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken))
        {
            Org.OpenAPITools.Client.ApiResponse<OrderLinesList200Response> localVarResponse = await OrderLinesListWithHttpInfoAsync(adAccountId, pageSize, order, bookmark, operationIndex, cancellationToken).ConfigureAwait(false);
            return localVarResponse.Data;
        }

        /// <summary>
        /// Get order lines List existing order lines associated with an ad account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items (optional)</param>
        /// <param name="operationIndex">Index associated with the operation.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns>Task of ApiResponse (OrderLinesList200Response)</returns>
        public async System.Threading.Tasks.Task<Org.OpenAPITools.Client.ApiResponse<OrderLinesList200Response>> OrderLinesListWithHttpInfoAsync(string adAccountId, int? pageSize = default(int?), string? order = default(string?), string? bookmark = default(string?), int operationIndex = 0, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken))
        {
            // verify the required parameter 'adAccountId' is set
            if (adAccountId == null)
            {
                throw new Org.OpenAPITools.Client.ApiException(400, "Missing required parameter 'adAccountId' when calling OrderLinesApi->OrderLinesList");
            }


            Org.OpenAPITools.Client.RequestOptions localVarRequestOptions = new Org.OpenAPITools.Client.RequestOptions();

            string[] _contentTypes = new string[] {
            };

            // to determine the Accept header
            string[] _accepts = new string[] {
                "application/json"
            };

            var localVarContentType = Org.OpenAPITools.Client.ClientUtils.SelectHeaderContentType(_contentTypes);
            if (localVarContentType != null)
            {
                localVarRequestOptions.HeaderParameters.Add("Content-Type", localVarContentType);
            }

            var localVarAccept = Org.OpenAPITools.Client.ClientUtils.SelectHeaderAccept(_accepts);
            if (localVarAccept != null)
            {
                localVarRequestOptions.HeaderParameters.Add("Accept", localVarAccept);
            }

            localVarRequestOptions.PathParameters.Add("ad_account_id", Org.OpenAPITools.Client.ClientUtils.ParameterToString(adAccountId)); // path parameter
            if (pageSize != null)
            {
                localVarRequestOptions.QueryParameters.Add(Org.OpenAPITools.Client.ClientUtils.ParameterToMultiMap("", "page_size", pageSize));
            }
            if (order != null)
            {
                localVarRequestOptions.QueryParameters.Add(Org.OpenAPITools.Client.ClientUtils.ParameterToMultiMap("", "order", order));
            }
            if (bookmark != null)
            {
                localVarRequestOptions.QueryParameters.Add(Org.OpenAPITools.Client.ClientUtils.ParameterToMultiMap("", "bookmark", bookmark));
            }

            localVarRequestOptions.Operation = "OrderLinesApi.OrderLinesList";
            localVarRequestOptions.OperationIndex = operationIndex;

            // authentication (pinterest_oauth2) required
            // oauth required
            if (!localVarRequestOptions.HeaderParameters.ContainsKey("Authorization"))
            {
                if (!string.IsNullOrEmpty(this.Configuration.AccessToken))
                {
                    localVarRequestOptions.HeaderParameters.Add("Authorization", "Bearer " + this.Configuration.AccessToken);
                }
                else if (!string.IsNullOrEmpty(this.Configuration.OAuthTokenUrl) &&
                         !string.IsNullOrEmpty(this.Configuration.OAuthClientId) &&
                         !string.IsNullOrEmpty(this.Configuration.OAuthClientSecret) &&
                         this.Configuration.OAuthFlow != null)
                {
                    localVarRequestOptions.OAuth = true;
                }
            }

            // make the HTTP request
            var localVarResponse = await this.AsynchronousClient.GetAsync<OrderLinesList200Response>("/ad_accounts/{ad_account_id}/order_lines", localVarRequestOptions, this.Configuration, cancellationToken).ConfigureAwait(false);

            if (this.ExceptionFactory != null)
            {
                Exception _exception = this.ExceptionFactory("OrderLinesList", localVarResponse);
                if (_exception != null)
                {
                    throw _exception;
                }
            }

            return localVarResponse;
        }

    }
}