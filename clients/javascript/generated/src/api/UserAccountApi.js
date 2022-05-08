/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */


import ApiClient from "../ApiClient";
import Account from '../model/Account';
import AnalyticsMetricsResponse from '../model/AnalyticsMetricsResponse';
import Error from '../model/Error';

/**
* UserAccount service.
* @module api/UserAccountApi
* @version 1.0.0-pre.0
*/
export default class UserAccountApi {

    /**
    * Constructs a new UserAccountApi. 
    * @alias module:api/UserAccountApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the userAccountAnalytics operation.
     * @callback module:api/UserAccountApi~userAccountAnalyticsCallback
     * @param {String} error Error message, if any.
     * @param {Object.<String, module:model/{String: AnalyticsMetricsResponse}>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get user account analytics
     * Get analytics for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * @param {Date} startDate Metric report start date (UTC). Format: YYYY-MM-DD
     * @param {Date} endDate Metric report end date (UTC). Format: YYYY-MM-DD
     * @param {Object} opts Optional parameters
     * @param {module:model/String} opts.fromClaimedContent Filter on Pins that match your claimed domain. (default to 'BOTH')
     * @param {module:model/String} opts.pinFormat Pin formats to get data for, default is all. (default to 'ALL')
     * @param {module:model/String} opts.appTypes Apps or devices to get data for, default is all. (default to 'ALL')
     * @param {Array.<module:model/String>} opts.metricTypes Metric types to get data for, default is all. 
     * @param {module:model/String} opts.splitField How to split the data into groups. Not including this param means data won't be split. (default to 'NO_SPLIT')
     * @param {String} opts.adAccountId Unique identifier of an ad account.
     * @param {module:api/UserAccountApi~userAccountAnalyticsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object.<String, module:model/{String: AnalyticsMetricsResponse}>}
     */
    userAccountAnalytics(startDate, endDate, opts, callback) {
      opts = opts || {};
      let postBody = null;
      // verify the required parameter 'startDate' is set
      if (startDate === undefined || startDate === null) {
        throw new Error("Missing the required parameter 'startDate' when calling userAccountAnalytics");
      }
      // verify the required parameter 'endDate' is set
      if (endDate === undefined || endDate === null) {
        throw new Error("Missing the required parameter 'endDate' when calling userAccountAnalytics");
      }

      let pathParams = {
      };
      let queryParams = {
        'start_date': startDate,
        'end_date': endDate,
        'from_claimed_content': opts['fromClaimedContent'],
        'pin_format': opts['pinFormat'],
        'app_types': opts['appTypes'],
        'metric_types': this.apiClient.buildCollectionParam(opts['metricTypes'], 'csv'),
        'split_field': opts['splitField'],
        'ad_account_id': opts['adAccountId']
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['pinterest_oauth2'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = {'String': AnalyticsMetricsResponse};
      return this.apiClient.callApi(
        '/user_account/analytics', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the userAccountGet operation.
     * @callback module:api/UserAccountApi~userAccountGetCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Account} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get user account
     * Get account information for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href='/docs/api/v5/#tag/Understanding-business-access'>Understanding Business Access</a> for more information.
     * @param {Object} opts Optional parameters
     * @param {String} opts.adAccountId Unique identifier of an ad account.
     * @param {module:api/UserAccountApi~userAccountGetCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Account}
     */
    userAccountGet(opts, callback) {
      opts = opts || {};
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
        'ad_account_id': opts['adAccountId']
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['pinterest_oauth2'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = Account;
      return this.apiClient.callApi(
        '/user_account', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}