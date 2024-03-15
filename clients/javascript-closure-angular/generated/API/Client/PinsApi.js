/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.PinsApi.
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

goog.provide('API.Client.PinsApi');

goog.require('API.Client.Error');
goog.require('API.Client.Pin');
goog.require('API.Client.PinAnalyticsMetricsResponse');
goog.require('API.Client.PinCreate');
goog.require('API.Client.PinUpdate');
goog.require('API.Client.PinsSaveRequest');
goog.require('API.Client.date');
goog.require('API.Client.pins_analytics_metric_types_parameter_inner');
goog.require('API.Client.pins_list_200_response');
goog.require('API.Client.pins_save_request');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.PinsApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('PinsApiBasePath') ?
                   /** @type {!string} */ ($injector.get('PinsApiBasePath')) :
                   'https://api.pinterest.com/v5';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('PinsApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('PinsApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.PinsApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * Get Pin analytics
 * Get analytics for a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\&quot;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.  If Pin was created before &lt;code&gt;2023-03-20&lt;/code&gt; lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.
 * @param {!string} pinId Unique identifier of a Pin.
 * @param {!API.Client.date} startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.
 * @param {!API.Client.date} endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.
 * @param {!Array<!API.Client.pins_analytics_metric_types_parameter_inner>} metricTypes Pin metric types to get data for, default is all.
 * @param {!string=} opt_appTypes Apps or devices to get data for, default is all.
 * @param {!string=} opt_splitField How to split the data into groups. Not including this param means data won&#39;t be split.
 * @param {!string=} opt_adAccountId Unique identifier of an ad account.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!Object<!string, API.Client.PinAnalyticsMetricsResponse>>}
 */
API.Client.PinsApi.prototype.pinsAnalytics = function(pinId, startDate, endDate, metricTypes, opt_appTypes, opt_splitField, opt_adAccountId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/pins/{pin_id}/analytics'
      .replace('{' + 'pin_id' + '}', String(pinId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'pinId' is set
  if (!pinId) {
    throw new Error('Missing required parameter pinId when calling pinsAnalytics');
  }
  // verify required parameter 'startDate' is set
  if (!startDate) {
    throw new Error('Missing required parameter startDate when calling pinsAnalytics');
  }
  // verify required parameter 'endDate' is set
  if (!endDate) {
    throw new Error('Missing required parameter endDate when calling pinsAnalytics');
  }
  // verify required parameter 'metricTypes' is set
  if (!metricTypes) {
    throw new Error('Missing required parameter metricTypes when calling pinsAnalytics');
  }
  if (startDate !== undefined) {
    queryParameters['start_date'] = startDate;
  }

  if (endDate !== undefined) {
    queryParameters['end_date'] = endDate;
  }

  if (opt_appTypes !== undefined) {
    queryParameters['app_types'] = opt_appTypes;
  }

  if (metricTypes !== undefined) {
    queryParameters['metric_types'] = metricTypes;
  }

  if (opt_splitField !== undefined) {
    queryParameters['split_field'] = opt_splitField;
  }

  if (opt_adAccountId !== undefined) {
    queryParameters['ad_account_id'] = opt_adAccountId;
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
 * Create Pin
 * Create a Pin on a board or board section owned by the \&quot;operation user_account\&quot;.  Note: If the current \&quot;operation user_account\&quot; (defined by the access token) has access to another user&#39;s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account&#39;s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id&#x3D;12345&amp;...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called &#39;curated content&#39;, please use our &lt;a href&#x3D;&#39;/docs/add-ons/save-button&#39;&gt;Save button&lt;/a&gt; instead. For more tips on creating fresh content for Pinterest, review our &lt;a href&#x3D;&#39;/docs/content/content-creation/&#39;&gt;Content App Solutions Guide&lt;/a&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/content/content-creation/#Creating%20video%20Pins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
 * @param {!PinCreate} pinCreate Create a new Pin.
 * @param {!string=} opt_adAccountId Unique identifier of an ad account.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Pin>}
 */
API.Client.PinsApi.prototype.pinsCreate = function(pinCreate, opt_adAccountId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/pins';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'pinCreate' is set
  if (!pinCreate) {
    throw new Error('Missing required parameter pinCreate when calling pinsCreate');
  }
  if (opt_adAccountId !== undefined) {
    queryParameters['ad_account_id'] = opt_adAccountId;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: pinCreate,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Delete Pin
 * Delete a Pins owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
 * @param {!string} pinId Unique identifier of a Pin.
 * @param {!string=} opt_adAccountId Unique identifier of an ad account.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise}
 */
API.Client.PinsApi.prototype.pinsDelete = function(pinId, opt_adAccountId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/pins/{pin_id}'
      .replace('{' + 'pin_id' + '}', String(pinId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'pinId' is set
  if (!pinId) {
    throw new Error('Missing required parameter pinId when calling pinsDelete');
  }
  if (opt_adAccountId !== undefined) {
    queryParameters['ad_account_id'] = opt_adAccountId;
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
 * Get Pin
 * Get a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
 * @param {!string} pinId Unique identifier of a Pin.
 * @param {!boolean=} opt_pinMetrics Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before &lt;code&gt;2023-03-20&lt;/code&gt; lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.
 * @param {!string=} opt_adAccountId Unique identifier of an ad account.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Pin>}
 */
API.Client.PinsApi.prototype.pinsGet = function(pinId, opt_pinMetrics, opt_adAccountId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/pins/{pin_id}'
      .replace('{' + 'pin_id' + '}', String(pinId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'pinId' is set
  if (!pinId) {
    throw new Error('Missing required parameter pinId when calling pinsGet');
  }
  if (opt_pinMetrics !== undefined) {
    queryParameters['pin_metrics'] = opt_pinMetrics;
  }

  if (opt_adAccountId !== undefined) {
    queryParameters['ad_account_id'] = opt_adAccountId;
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
 * List Pins
 * Get a list of the Pins owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account. - All Pins owned by the \&quot;operation user_account\&quot; are included, regardless of who owns the board they are on. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
 * @param {!string=} opt_bookmark Cursor used to fetch the next page of items
 * @param {!number=} opt_pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
 * @param {!string=} opt_pinFilter Pin filter.
 * @param {!boolean=} opt_includeProtectedPins Specify if return pins from protected boards
 * @param {!string=} opt_pinType The type of pins to return, currently only enabled for private pins
 * @param {!Array<!string>=} opt_creativeTypes Pin creative types filter. &lt;/p&gt;&lt;strong&gt;Note:&lt;/strong&gt; SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
 * @param {!string=} opt_adAccountId Unique identifier of an ad account.
 * @param {!boolean=} opt_pinMetrics Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before &lt;code&gt;2023-03-20&lt;/code&gt; lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.pins_list_200_response>}
 */
API.Client.PinsApi.prototype.pinsList = function(opt_bookmark, opt_pageSize, opt_pinFilter, opt_includeProtectedPins, opt_pinType, opt_creativeTypes, opt_adAccountId, opt_pinMetrics, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/pins';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  if (opt_bookmark !== undefined) {
    queryParameters['bookmark'] = opt_bookmark;
  }

  if (opt_pageSize !== undefined) {
    queryParameters['page_size'] = opt_pageSize;
  }

  if (opt_pinFilter !== undefined) {
    queryParameters['pin_filter'] = opt_pinFilter;
  }

  if (opt_includeProtectedPins !== undefined) {
    queryParameters['include_protected_pins'] = opt_includeProtectedPins;
  }

  if (opt_pinType !== undefined) {
    queryParameters['pin_type'] = opt_pinType;
  }

  if (opt_creativeTypes !== undefined) {
    queryParameters['creative_types'] = opt_creativeTypes;
  }

  if (opt_adAccountId !== undefined) {
    queryParameters['ad_account_id'] = opt_adAccountId;
  }

  if (opt_pinMetrics !== undefined) {
    queryParameters['pin_metrics'] = opt_pinMetrics;
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
 * Save Pin
 * Save a Pin on a board or board section owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account. Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.  - Any Pin type can be saved: image Pin, video Pin, Idea Pin, product Pin, etc. - Any public Pin can be saved given a pin ID.
 * @param {!string} pinId Unique identifier of a Pin.
 * @param {!PinsSaveRequest} pinsSaveRequest Request object used to save an existing pin
 * @param {!string=} opt_adAccountId Unique identifier of an ad account.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Pin>}
 */
API.Client.PinsApi.prototype.pinsSave = function(pinId, pinsSaveRequest, opt_adAccountId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/pins/{pin_id}/save'
      .replace('{' + 'pin_id' + '}', String(pinId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'pinId' is set
  if (!pinId) {
    throw new Error('Missing required parameter pinId when calling pinsSave');
  }
  // verify required parameter 'pinsSaveRequest' is set
  if (!pinsSaveRequest) {
    throw new Error('Missing required parameter pinsSaveRequest when calling pinsSave');
  }
  if (opt_adAccountId !== undefined) {
    queryParameters['ad_account_id'] = opt_adAccountId;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: pinsSaveRequest,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * Update Pin
 * Update a pin owned by the \&quot;operating user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
 * @param {!string} pinId Unique identifier of a Pin.
 * @param {!PinUpdate} pinUpdate 
 * @param {!string=} opt_adAccountId Unique identifier of an ad account.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Pin>}
 */
API.Client.PinsApi.prototype.pinsUpdate = function(pinId, pinUpdate, opt_adAccountId, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/pins/{pin_id}'
      .replace('{' + 'pin_id' + '}', String(pinId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'pinId' is set
  if (!pinId) {
    throw new Error('Missing required parameter pinId when calling pinsUpdate');
  }
  // verify required parameter 'pinUpdate' is set
  if (!pinUpdate) {
    throw new Error('Missing required parameter pinUpdate when calling pinsUpdate');
  }
  if (opt_adAccountId !== undefined) {
    queryParameters['ad_account_id'] = opt_adAccountId;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'PATCH',
    url: path,
    json: true,
    data: pinUpdate,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}
