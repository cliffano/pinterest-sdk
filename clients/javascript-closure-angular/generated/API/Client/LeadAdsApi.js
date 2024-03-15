/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.LeadAdsApi.
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

goog.provide('API.Client.LeadAdsApi');

goog.require('API.Client.AdAccountCreateSubscriptionRequest');
goog.require('API.Client.AdAccountCreateSubscriptionResponse');
goog.require('API.Client.AdAccountGetSubscriptionResponse');
goog.require('API.Client.Error');
goog.require('API.Client.ad_accounts_subscriptions_get_list_200_response');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.LeadAdsApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('LeadAdsApiBasePath') ?
                   /** @type {!string} */ ($injector.get('LeadAdsApiBasePath')) :
                   'https://api.pinterest.com/v5';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('LeadAdsApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('LeadAdsApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.LeadAdsApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * Delete lead ads subscription
 * Delete an existing lead ads webhook subscription by ID. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!string} subscriptionId Unique identifier of a subscription.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise}
 */
API.Client.LeadAdsApi.prototype.adAccountsSubscriptionsDelById = function(adAccountId, subscriptionId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/leads/subscriptions/{subscription_id}'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId))
      .replace('{' + 'subscription_id' + '}', String(subscriptionId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling adAccountsSubscriptionsDelById');
  }
  // verify required parameter 'subscriptionId' is set
  if (!subscriptionId) {
    throw new Error('Missing required parameter subscriptionId when calling adAccountsSubscriptionsDelById');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'DELETE',
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
 * Get lead ads subscription
 * Get a specific lead ads subscription record. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!string} subscriptionId Unique identifier of a subscription.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.AdAccountGetSubscriptionResponse>}
 */
API.Client.LeadAdsApi.prototype.adAccountsSubscriptionsGetById = function(adAccountId, subscriptionId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/leads/subscriptions/{subscription_id}'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId))
      .replace('{' + 'subscription_id' + '}', String(subscriptionId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling adAccountsSubscriptionsGetById');
  }
  // verify required parameter 'subscriptionId' is set
  if (!subscriptionId) {
    throw new Error('Missing required parameter subscriptionId when calling adAccountsSubscriptionsGetById');
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
 * Get lead ads subscriptions
 * Get the advertiser&#39;s list of lead ads subscriptions. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!number=} opt_pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
 * @param {!string=} opt_bookmark Cursor used to fetch the next page of items
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ad_accounts_subscriptions_get_list_200_response>}
 */
API.Client.LeadAdsApi.prototype.adAccountsSubscriptionsGetList = function(adAccountId, opt_pageSize, opt_bookmark, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/leads/subscriptions'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling adAccountsSubscriptionsGetList');
  }
  if (opt_pageSize !== undefined) {
    queryParameters['page_size'] = opt_pageSize;
  }

  if (opt_bookmark !== undefined) {
    queryParameters['bookmark'] = opt_bookmark;
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
 * Create lead ads subscription
 * Create a lead ads webhook subscription. - Only requests for the OWNER or ADMIN of the ad_account will be allowed. - Advertisers can set up multiple integrations using ad_account_id + lead_form_id but only one integration per unique records.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!AdAccountCreateSubscriptionRequest} adAccountCreateSubscriptionRequest Subscription to create.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.AdAccountCreateSubscriptionResponse>}
 */
API.Client.LeadAdsApi.prototype.adAccountsSubscriptionsPost = function(adAccountId, adAccountCreateSubscriptionRequest, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/leads/subscriptions'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling adAccountsSubscriptionsPost');
  }
  // verify required parameter 'adAccountCreateSubscriptionRequest' is set
  if (!adAccountCreateSubscriptionRequest) {
    throw new Error('Missing required parameter adAccountCreateSubscriptionRequest when calling adAccountsSubscriptionsPost');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: adAccountCreateSubscriptionRequest,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}
