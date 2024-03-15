/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.BillingApi.
 * Do not edit this file by hand or your changes will be lost next time it is
 * generated.
 *
 * Pinterest&#39;s REST API
 * Version: 5.12.0
* Generator version: 7.4.0
 * Generated by: org.openapitools.codegen.languages.JavascriptClosureAngularClientCodegen
 */
/**
 * @license MIT
 * https://spdx.org/licenses/MIT
 */

goog.provide('API.Client.BillingApi');

goog.require('API.Client.AdsCreditRedeemRequest');
goog.require('API.Client.AdsCreditRedeemResponse');
goog.require('API.Client.Error');
goog.require('API.Client.SSIOAccountResponse');
goog.require('API.Client.SSIOCreateInsertionOrderRequest');
goog.require('API.Client.SSIOCreateInsertionOrderResponse');
goog.require('API.Client.SSIOEditInsertionOrderRequest');
goog.require('API.Client.SSIOEditInsertionOrderResponse');
goog.require('API.Client.SSIOInsertionOrderStatusResponse');
goog.require('API.Client.ads_credits_discounts_get_200_response');
goog.require('API.Client.billing_profiles_get_200_response');
goog.require('API.Client.ssio_insertion_orders_status_get_by_ad_account_200_response');
goog.require('API.Client.ssio_order_lines_get_by_ad_account_200_response');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.BillingApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('BillingApiBasePath') ?
                   /** @type {!string} */ ($injector.get('BillingApiBasePath')) :
                   'https://api.pinterest.com/v5';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('BillingApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('BillingApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.BillingApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * Redeem ad credits
 * Redeem ads credit on behalf of the ad account id and apply it towards billing.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!AdsCreditRedeemRequest} adsCreditRedeemRequest Redeem ad credits request.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.AdsCreditRedeemResponse>}
 */
API.Client.BillingApi.prototype.adsCreditRedeem = function(adAccountId, adsCreditRedeemRequest, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/ads_credit/redeem'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling adsCreditRedeem');
  }
  // verify required parameter 'adsCreditRedeemRequest' is set
  if (!adsCreditRedeemRequest) {
    throw new Error('Missing required parameter adsCreditRedeemRequest when calling adsCreditRedeem');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: adsCreditRedeemRequest,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Get ads credit discounts
 * Returns the list of discounts applied to the account.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!string=} opt_bookmark Cursor used to fetch the next page of items
 * @param {!number=} opt_pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ads_credits_discounts_get_200_response>}
 */
API.Client.BillingApi.prototype.adsCreditsDiscountsGet = function(adAccountId, opt_bookmark, opt_pageSize, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/ads_credit/discounts'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling adsCreditsDiscountsGet');
  }
  if (opt_bookmark !== undefined) {
    queryParameters['bookmark'] = opt_bookmark;
  }

  if (opt_pageSize !== undefined) {
    queryParameters['page_size'] = opt_pageSize;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Get billing profiles
 * Get billing profiles in the advertiser account.  &lt;strong&gt;This endpoint might not be available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!boolean} isActive Return active billing profiles, if false return all billing profiles.
 * @param {!string=} opt_bookmark Cursor used to fetch the next page of items
 * @param {!number=} opt_pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.billing_profiles_get_200_response>}
 */
API.Client.BillingApi.prototype.billingProfilesGet = function(adAccountId, isActive, opt_bookmark, opt_pageSize, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/billing_profiles'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling billingProfilesGet');
  }
  // verify required parameter 'isActive' is set
  if (!isActive) {
    throw new Error('Missing required parameter isActive when calling billingProfilesGet');
  }
  if (isActive !== undefined) {
    queryParameters['is_active'] = isActive;
  }

  if (opt_bookmark !== undefined) {
    queryParameters['bookmark'] = opt_bookmark;
  }

  if (opt_pageSize !== undefined) {
    queryParameters['page_size'] = opt_pageSize;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Get Salesforce account details including bill-to information.
 * Get Salesforce account details including bill-to information to be used in insertion orders process for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.SSIOAccountResponse>}
 */
API.Client.BillingApi.prototype.ssioAccountsGet = function(adAccountId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/ssio/accounts'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling ssioAccountsGet');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Create insertion order through SSIO.
 * Create insertion order through SSIO for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!SSIOCreateInsertionOrderRequest} sSIOCreateInsertionOrderRequest Order line to create.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.SSIOCreateInsertionOrderResponse>}
 */
API.Client.BillingApi.prototype.ssioInsertionOrderCreate = function(adAccountId, sSIOCreateInsertionOrderRequest, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/ssio/insertion_orders'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling ssioInsertionOrderCreate');
  }
  // verify required parameter 'sSIOCreateInsertionOrderRequest' is set
  if (!sSIOCreateInsertionOrderRequest) {
    throw new Error('Missing required parameter sSIOCreateInsertionOrderRequest when calling ssioInsertionOrderCreate');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: sSIOCreateInsertionOrderRequest,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Edit insertion order through SSIO.
 * Edit insertion order through SSIO for &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!SSIOEditInsertionOrderRequest} sSIOEditInsertionOrderRequest Order line to create.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.SSIOEditInsertionOrderResponse>}
 */
API.Client.BillingApi.prototype.ssioInsertionOrderEdit = function(adAccountId, sSIOEditInsertionOrderRequest, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/ssio/insertion_orders'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling ssioInsertionOrderEdit');
  }
  // verify required parameter 'sSIOEditInsertionOrderRequest' is set
  if (!sSIOEditInsertionOrderRequest) {
    throw new Error('Missing required parameter sSIOEditInsertionOrderRequest when calling ssioInsertionOrderEdit');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'PATCH',
    url: path,
    json: true,
    data: sSIOEditInsertionOrderRequest,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Get insertion order status by ad account id.
 * Get insertion order status for account id &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!string=} opt_bookmark Cursor used to fetch the next page of items
 * @param {!number=} opt_pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ssio_insertion_orders_status_get_by_ad_account_200_response>}
 */
API.Client.BillingApi.prototype.ssioInsertionOrdersStatusGetByAdAccount = function(adAccountId, opt_bookmark, opt_pageSize, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/ssio/insertion_orders/status'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling ssioInsertionOrdersStatusGetByAdAccount');
  }
  if (opt_bookmark !== undefined) {
    queryParameters['bookmark'] = opt_bookmark;
  }

  if (opt_pageSize !== undefined) {
    queryParameters['page_size'] = opt_pageSize;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Get insertion order status by pin order id.
 * Get insertion order status for pin order id &lt;code&gt;pin_order_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!string} pinOrderId The pin order id associated with the ssio insertion order
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.SSIOInsertionOrderStatusResponse>}
 */
API.Client.BillingApi.prototype.ssioInsertionOrdersStatusGetByPinOrderId = function(adAccountId, pinOrderId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/ssio/insertion_orders/{pin_order_id}/status'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId))
      .replace('{' + 'pin_order_id' + '}', String(pinOrderId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling ssioInsertionOrdersStatusGetByPinOrderId');
  }
  // verify required parameter 'pinOrderId' is set
  if (!pinOrderId) {
    throw new Error('Missing required parameter pinOrderId when calling ssioInsertionOrdersStatusGetByPinOrderId');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Get Salesforce order lines by ad account id.
 * Get Salesforce order lines for account id &lt;code&gt;ad_account_id&lt;/code&gt;. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Finance, Campaign.
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!string=} opt_bookmark Cursor used to fetch the next page of items
 * @param {!number=} opt_pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
 * @param {!string=} opt_pinOrderId The pin order id associated with the ssio insertino order
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ssio_order_lines_get_by_ad_account_200_response>}
 */
API.Client.BillingApi.prototype.ssioOrderLinesGetByAdAccount = function(adAccountId, opt_bookmark, opt_pageSize, opt_pinOrderId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/ssio/order_lines'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling ssioOrderLinesGetByAdAccount');
  }
  if (opt_bookmark !== undefined) {
    queryParameters['bookmark'] = opt_bookmark;
  }

  if (opt_pageSize !== undefined) {
    queryParameters['page_size'] = opt_pageSize;
  }

  if (opt_pinOrderId !== undefined) {
    queryParameters['pin_order_id'] = opt_pinOrderId;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}
