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
import EntityStatus from './EntityStatus';
import TrackingUrls from './TrackingUrls';

/**
 * The CampaignCommon model module.
 * @module model/CampaignCommon
 * @version 1.0.1-pre.0
 */
class CampaignCommon {
    /**
     * Constructs a new <code>CampaignCommon</code>.
     * Campaign Data
     * @alias module:model/CampaignCommon
     * @param adAccountId {String} Campaign's Advertiser ID.
     */
    constructor(adAccountId) { 
        
        CampaignCommon.initialize(this, adAccountId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, adAccountId) { 
        obj['ad_account_id'] = adAccountId;
    }

    /**
     * Constructs a <code>CampaignCommon</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CampaignCommon} obj Optional instance to populate.
     * @return {module:model/CampaignCommon} The populated <code>CampaignCommon</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CampaignCommon();

            if (data.hasOwnProperty('ad_account_id')) {
                obj['ad_account_id'] = ApiClient.convertToType(data['ad_account_id'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], EntityStatus);
            }
            if (data.hasOwnProperty('lifetime_spend_cap')) {
                obj['lifetime_spend_cap'] = ApiClient.convertToType(data['lifetime_spend_cap'], 'Number');
            }
            if (data.hasOwnProperty('daily_spend_cap')) {
                obj['daily_spend_cap'] = ApiClient.convertToType(data['daily_spend_cap'], 'Number');
            }
            if (data.hasOwnProperty('order_line_id')) {
                obj['order_line_id'] = ApiClient.convertToType(data['order_line_id'], 'String');
            }
            if (data.hasOwnProperty('tracking_urls')) {
                obj['tracking_urls'] = ApiClient.convertToType(data['tracking_urls'], TrackingUrls);
            }
            if (data.hasOwnProperty('start_time')) {
                obj['start_time'] = ApiClient.convertToType(data['start_time'], 'Number');
            }
            if (data.hasOwnProperty('end_time')) {
                obj['end_time'] = ApiClient.convertToType(data['end_time'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * Campaign's Advertiser ID.
 * @member {String} ad_account_id
 */
CampaignCommon.prototype['ad_account_id'] = undefined;

/**
 * Campaign name.
 * @member {String} name
 */
CampaignCommon.prototype['name'] = undefined;

/**
 * @member {module:model/EntityStatus} status
 * @default 'ACTIVE'
 */
CampaignCommon.prototype['status'] = 'ACTIVE';

/**
 * Campaign total spending cap.
 * @member {Number} lifetime_spend_cap
 */
CampaignCommon.prototype['lifetime_spend_cap'] = undefined;

/**
 * Campaign daily spending cap.
 * @member {Number} daily_spend_cap
 */
CampaignCommon.prototype['daily_spend_cap'] = undefined;

/**
 * Order line ID that appears on the invoice.
 * @member {String} order_line_id
 */
CampaignCommon.prototype['order_line_id'] = undefined;

/**
 * @member {module:model/TrackingUrls} tracking_urls
 */
CampaignCommon.prototype['tracking_urls'] = undefined;

/**
 * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @member {Number} start_time
 */
CampaignCommon.prototype['start_time'] = undefined;

/**
 * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @member {Number} end_time
 */
CampaignCommon.prototype['end_time'] = undefined;






export default CampaignCommon;

