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
import AnalyticsMetricsResponse from '../model/AnalyticsMetricsResponse';
import Error from '../model/Error';
import Pin from '../model/Pin';

/**
* Pins service.
* @module api/PinsApi
* @version 5.3.0
*/
export default class PinsApi extends ApiClient {

    /**
    * Constructs a new PinsApi. 
    * @alias module:api/PinsApi
    * @class
    */
    constructor() {
      super();
      this.baseURL = null;
    }


    /**
     * Get Pin analytics
     * Get analytics for a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\"https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\">List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
     * @param {String} pinId Unique identifier of a Pin.
     * @param {Date} startDate Metric report start date (UTC). Format: YYYY-MM-DD
     * @param {Date} endDate Metric report end date (UTC). Format: YYYY-MM-DD
     * @param {Array.<String>} metricTypes Pin metric types to get data for, default is all.
     * @param {Object} opts Optional parameters
     * @param {String} opts.appTypes Apps or devices to get data for, default is all. (default to 'ALL')
     * @param {String} opts.splitField How to split the data into groups. Not including this param means data won't be split. (default to 'NO_SPLIT')
     * @param {String} opts.adAccountId Unique identifier of an ad account.
     * @return {Promise<Object.<String, {String: AnalyticsMetricsResponse}>>}
     */
    async pinsAnalytics(pinId, startDate, endDate, metricTypes, opts) {
      opts = opts || {};
      let postBody = null;
      // verify the required parameter 'pinId' is set
      if (pinId === undefined || pinId === null) {
        throw new Error("Missing the required parameter 'pinId' when calling pinsAnalytics");
      }
      // verify the required parameter 'startDate' is set
      if (startDate === undefined || startDate === null) {
        throw new Error("Missing the required parameter 'startDate' when calling pinsAnalytics");
      }
      // verify the required parameter 'endDate' is set
      if (endDate === undefined || endDate === null) {
        throw new Error("Missing the required parameter 'endDate' when calling pinsAnalytics");
      }
      // verify the required parameter 'metricTypes' is set
      if (metricTypes === undefined || metricTypes === null) {
        throw new Error("Missing the required parameter 'metricTypes' when calling pinsAnalytics");
      }

      let pathParams = {
        'pin_id': pinId
      };
      let queryParams = {
        'start_date': startDate,
        'end_date': endDate,
        'app_types': opts['appTypes'],
        'metric_types': this.buildCollectionParam(metricTypes, 'csv'),
        'split_field': opts['splitField'],
        'ad_account_id': opts['adAccountId']
      };
      let headerParams = {
        'User-Agent': 'OpenAPI-Generator/5.3.0/Javascript',
      };
      let formParams = {
      };

      let authNames = ['pinterest_oauth2'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = {'String': AnalyticsMetricsResponse};

      return this.callApi(
        '/pins/{pin_id}/analytics', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType
      );
    }

    /**
     * Create Pin
     * Create a Pin on a board or board section owned by the \"operation user_account\".  Note: If the current \"operation user_account\" (defined by the access token) has access to another user's Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account's permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id=12345&...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called 'curated content', please use our <a href='/docs/add-ons/save-button'>Save button</a> instead. For more tips on creating fresh content for Pinterest, review our <a href='/docs/solutions/content-apps'>Content App Solutions Guide</a>.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
     * @param {Pin} pin Create a new Pin.
     * @return {Promise<Pin>}
     */
    async pinsCreate(pin) {
      let postBody = pin;
      // verify the required parameter 'pin' is set
      if (pin === undefined || pin === null) {
        throw new Error("Missing the required parameter 'pin' when calling pinsCreate");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
        'User-Agent': 'OpenAPI-Generator/5.3.0/Javascript',
      };
      let formParams = {
      };

      let authNames = ['pinterest_oauth2'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = Pin;

      return this.callApi(
        '/pins', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType
      );
    }

    /**
     * Delete Pin
     * Delete a Pins owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @param {String} pinId Unique identifier of a Pin.
     * @return {Promise}
     */
    async pinsDelete(pinId) {
      let postBody = null;
      // verify the required parameter 'pinId' is set
      if (pinId === undefined || pinId === null) {
        throw new Error("Missing the required parameter 'pinId' when calling pinsDelete");
      }

      let pathParams = {
        'pin_id': pinId
      };
      let queryParams = {
      };
      let headerParams = {
        'User-Agent': 'OpenAPI-Generator/5.3.0/Javascript',
      };
      let formParams = {
      };

      let authNames = ['pinterest_oauth2'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = null;

      return this.callApi(
        '/pins/{pin_id}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType
      );
    }

    /**
     * Get Pin
     * Get a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
     * @param {String} pinId Unique identifier of a Pin.
     * @param {Object} opts Optional parameters
     * @param {String} opts.adAccountId Unique identifier of an ad account.
     * @return {Promise<Pin>}
     */
    async pinsGet(pinId, opts) {
      opts = opts || {};
      let postBody = null;
      // verify the required parameter 'pinId' is set
      if (pinId === undefined || pinId === null) {
        throw new Error("Missing the required parameter 'pinId' when calling pinsGet");
      }

      let pathParams = {
        'pin_id': pinId
      };
      let queryParams = {
        'ad_account_id': opts['adAccountId']
      };
      let headerParams = {
        'User-Agent': 'OpenAPI-Generator/5.3.0/Javascript',
      };
      let formParams = {
      };

      let authNames = ['pinterest_oauth2'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = Pin;

      return this.callApi(
        '/pins/{pin_id}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType
      );
    }


}