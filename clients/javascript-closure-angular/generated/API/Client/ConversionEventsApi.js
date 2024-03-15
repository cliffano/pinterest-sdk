/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.ConversionEventsApi.
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

goog.provide('API.Client.ConversionEventsApi');

goog.require('API.Client.ConversionApiResponse');
goog.require('API.Client.ConversionEvents');
goog.require('API.Client.DetailedError');
goog.require('API.Client.Error');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.ConversionEventsApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('ConversionEventsApiBasePath') ?
                   /** @type {!string} */ ($injector.get('ConversionEventsApiBasePath')) :
                   'https://api.pinterest.com/v5';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('ConversionEventsApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('ConversionEventsApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.ConversionEventsApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * Send conversions
 * The Pinterest API offers advertisers a way to send Pinterest their conversion information (including web conversions, in-app conversions, or even offline conversions) based on their &lt;code&gt;ad_account_id&lt;/code&gt;. The request body should be a JSON object. - This endpoint requires an &lt;code&gt;access_token&lt;/code&gt; be generated through Ads Manager. Review the &lt;a href&#x3D;\&quot;/docs/conversions/conversions/\&quot;&gt;Conversions Guide&lt;/a&gt; for more details. - The token&#39;s &lt;code&gt;user_account&lt;/code&gt; must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Audience, Campaign. (Note that the token can be used across multiple ad accounts under an user ID.) - This endpoint has a rate limit of 5,000 calls per minute per ad account. - If the merchant is submitting this information using both Pinterest conversion tags and the Pinterest API, Pinterest will remove duplicate information before reporting. (Note that events that took place offline cannot be deduplicated.)
 * @param {!string} adAccountId Unique identifier of an ad account.
 * @param {!ConversionEvents} conversionEvents Conversion events.
 * @param {!boolean=} opt_test Include query param ?test&#x3D;true to mark the request as a test request. The events will not be recorded but the API will still return the same response messages. Use this mode to verify your requests are working and your events are constructed correctly. Warning: If you use this query parameter, be certain that it is off (set to false or deleted) before sending a legitimate (non-testing) request.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ConversionApiResponse>}
 */
API.Client.ConversionEventsApi.prototype.eventsCreate = function(adAccountId, conversionEvents, opt_test, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/ad_accounts/{ad_account_id}/events'
      .replace('{' + 'ad_account_id' + '}', String(adAccountId));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'adAccountId' is set
  if (!adAccountId) {
    throw new Error('Missing required parameter adAccountId when calling eventsCreate');
  }
  // verify required parameter 'conversionEvents' is set
  if (!conversionEvents) {
    throw new Error('Missing required parameter conversionEvents when calling eventsCreate');
  }
  if (opt_test !== undefined) {
    queryParameters['test'] = opt_test;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: conversionEvents,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}