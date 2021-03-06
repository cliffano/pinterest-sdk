/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import ActionType from './ActionType';

/**
 * The AdGroupResponseAllOf1 model module.
 * @module model/AdGroupResponseAllOf1
 * @version 1.0.1-pre.0
 */
class AdGroupResponseAllOf1 {
    /**
     * Constructs a new <code>AdGroupResponseAllOf1</code>.
     * @alias module:model/AdGroupResponseAllOf1
     */
    constructor() { 
        
        AdGroupResponseAllOf1.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>AdGroupResponseAllOf1</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdGroupResponseAllOf1} obj Optional instance to populate.
     * @return {module:model/AdGroupResponseAllOf1} The populated <code>AdGroupResponseAllOf1</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdGroupResponseAllOf1();

            if (data.hasOwnProperty('campaign_id')) {
                obj['campaign_id'] = ApiClient.convertToType(data['campaign_id'], 'String');
            }
            if (data.hasOwnProperty('billable_event')) {
                obj['billable_event'] = ActionType.constructFromObject(data['billable_event']);
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('ad_account_id')) {
                obj['ad_account_id'] = ApiClient.convertToType(data['ad_account_id'], 'String');
            }
            if (data.hasOwnProperty('created_time')) {
                obj['created_time'] = ApiClient.convertToType(data['created_time'], 'Number');
            }
            if (data.hasOwnProperty('updated_time')) {
                obj['updated_time'] = ApiClient.convertToType(data['updated_time'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * Campaign ID of the ad group.
 * @member {String} campaign_id
 */
AdGroupResponseAllOf1.prototype['campaign_id'] = undefined;

/**
 * @member {module:model/ActionType} billable_event
 */
AdGroupResponseAllOf1.prototype['billable_event'] = undefined;

/**
 * Ad group ID.
 * @member {String} id
 */
AdGroupResponseAllOf1.prototype['id'] = undefined;

/**
 * Always \"adgroup\".
 * @member {String} type
 */
AdGroupResponseAllOf1.prototype['type'] = undefined;

/**
 * Advertiser ID.
 * @member {String} ad_account_id
 */
AdGroupResponseAllOf1.prototype['ad_account_id'] = undefined;

/**
 * Ad group creation time. Unix timestamp in seconds.
 * @member {Number} created_time
 */
AdGroupResponseAllOf1.prototype['created_time'] = undefined;

/**
 * Ad group last update time. Unix timestamp in seconds.
 * @member {Number} updated_time
 */
AdGroupResponseAllOf1.prototype['updated_time'] = undefined;






export default AdGroupResponseAllOf1;

