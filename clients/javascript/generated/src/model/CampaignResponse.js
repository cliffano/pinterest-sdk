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

import ApiClient from '../ApiClient';
import CampaignCommon from './CampaignCommon';
import CampaignResponseAllOf from './CampaignResponseAllOf';
import CampaignResponseAllOf1 from './CampaignResponseAllOf1';
import EntityStatus from './EntityStatus';
import ObjectiveType from './ObjectiveType';
import TrackingUrls from './TrackingUrls';

/**
 * The CampaignResponse model module.
 * @module model/CampaignResponse
 * @version 1.0.0-pre.0
 */
class CampaignResponse {
    /**
     * Constructs a new <code>CampaignResponse</code>.
     * @alias module:model/CampaignResponse
     * @implements module:model/CampaignResponseAllOf
     * @implements module:model/CampaignCommon
     * @implements module:model/CampaignResponseAllOf1
     * @param id {String} Campaign ID.
     * @param adAccountId {String} Campaign's Advertiser ID.
     */
    constructor(id, adAccountId) { 
        CampaignResponseAllOf.initialize(this, id);CampaignCommon.initialize(this, adAccountId);CampaignResponseAllOf1.initialize(this);
        CampaignResponse.initialize(this, id, adAccountId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id, adAccountId) { 
        obj['id'] = id;
        obj['ad_account_id'] = adAccountId;
    }

    /**
     * Constructs a <code>CampaignResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CampaignResponse} obj Optional instance to populate.
     * @return {module:model/CampaignResponse} The populated <code>CampaignResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CampaignResponse();
            CampaignResponseAllOf.constructFromObject(data, obj);
            CampaignCommon.constructFromObject(data, obj);
            CampaignResponseAllOf1.constructFromObject(data, obj);

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
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
            if (data.hasOwnProperty('objective_type')) {
                obj['objective_type'] = ObjectiveType.constructFromObject(data['objective_type']);
            }
            if (data.hasOwnProperty('created_time')) {
                obj['created_time'] = ApiClient.convertToType(data['created_time'], 'Number');
            }
            if (data.hasOwnProperty('updated_time')) {
                obj['updated_time'] = ApiClient.convertToType(data['updated_time'], 'Number');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
        }
        return obj;
    }


}

/**
 * Campaign ID.
 * @member {String} id
 */
CampaignResponse.prototype['id'] = undefined;

/**
 * Campaign's Advertiser ID.
 * @member {String} ad_account_id
 */
CampaignResponse.prototype['ad_account_id'] = undefined;

/**
 * Campaign name.
 * @member {String} name
 */
CampaignResponse.prototype['name'] = undefined;

/**
 * @member {module:model/EntityStatus} status
 * @default 'ACTIVE'
 */
CampaignResponse.prototype['status'] = 'ACTIVE';

/**
 * Campaign total spending cap.
 * @member {Number} lifetime_spend_cap
 */
CampaignResponse.prototype['lifetime_spend_cap'] = undefined;

/**
 * Campaign daily spending cap.
 * @member {Number} daily_spend_cap
 */
CampaignResponse.prototype['daily_spend_cap'] = undefined;

/**
 * Order line ID that appears on the invoice.
 * @member {String} order_line_id
 */
CampaignResponse.prototype['order_line_id'] = undefined;

/**
 * @member {module:model/TrackingUrls} tracking_urls
 */
CampaignResponse.prototype['tracking_urls'] = undefined;

/**
 * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @member {Number} start_time
 */
CampaignResponse.prototype['start_time'] = undefined;

/**
 * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @member {Number} end_time
 */
CampaignResponse.prototype['end_time'] = undefined;

/**
 * @member {module:model/ObjectiveType} objective_type
 */
CampaignResponse.prototype['objective_type'] = undefined;

/**
 * Campaign creation time. Unix timestamp in seconds.
 * @member {Number} created_time
 */
CampaignResponse.prototype['created_time'] = undefined;

/**
 * UTC timestamp. Last update time.
 * @member {Number} updated_time
 */
CampaignResponse.prototype['updated_time'] = undefined;

/**
 * Always \"campaign\".
 * @member {String} type
 */
CampaignResponse.prototype['type'] = undefined;


// Implement CampaignResponseAllOf interface:
/**
 * Campaign ID.
 * @member {String} id
 */
CampaignResponseAllOf.prototype['id'] = undefined;
// Implement CampaignCommon interface:
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
// Implement CampaignResponseAllOf1 interface:
/**
 * @member {module:model/ObjectiveType} objective_type
 */
CampaignResponseAllOf1.prototype['objective_type'] = undefined;
/**
 * Campaign creation time. Unix timestamp in seconds.
 * @member {Number} created_time
 */
CampaignResponseAllOf1.prototype['created_time'] = undefined;
/**
 * UTC timestamp. Last update time.
 * @member {Number} updated_time
 */
CampaignResponseAllOf1.prototype['updated_time'] = undefined;
/**
 * Always \"campaign\".
 * @member {String} type
 */
CampaignResponseAllOf1.prototype['type'] = undefined;




export default CampaignResponse;

