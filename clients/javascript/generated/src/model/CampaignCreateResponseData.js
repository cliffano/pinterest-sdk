/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import AdCommonTrackingUrls from './AdCommonTrackingUrls';
import CampaignCreateCommon from './CampaignCreateCommon';
import CampaignResponse from './CampaignResponse';
import CampaignSummaryStatus from './CampaignSummaryStatus';
import EntityStatus from './EntityStatus';
import ObjectiveType from './ObjectiveType';

/**
 * The CampaignCreateResponseData model module.
 * @module model/CampaignCreateResponseData
 * @version 1.1.1-pre.0
 */
class CampaignCreateResponseData {
    /**
     * Constructs a new <code>CampaignCreateResponseData</code>.
     * @alias module:model/CampaignCreateResponseData
     * @implements module:model/CampaignCreateCommon
     * @implements module:model/CampaignResponse
     */
    constructor() { 
        CampaignCreateCommon.initialize(this);CampaignResponse.initialize(this);
        CampaignCreateResponseData.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CampaignCreateResponseData</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CampaignCreateResponseData} obj Optional instance to populate.
     * @return {module:model/CampaignCreateResponseData} The populated <code>CampaignCreateResponseData</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CampaignCreateResponseData();
            CampaignCreateCommon.constructFromObject(data, obj);
            CampaignResponse.constructFromObject(data, obj);

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
                obj['tracking_urls'] = AdCommonTrackingUrls.constructFromObject(data['tracking_urls']);
            }
            if (data.hasOwnProperty('start_time')) {
                obj['start_time'] = ApiClient.convertToType(data['start_time'], 'Number');
            }
            if (data.hasOwnProperty('end_time')) {
                obj['end_time'] = ApiClient.convertToType(data['end_time'], 'Number');
            }
            if (data.hasOwnProperty('summary_status')) {
                obj['summary_status'] = ApiClient.convertToType(data['summary_status'], CampaignSummaryStatus);
            }
            if (data.hasOwnProperty('is_flexible_daily_budgets')) {
                obj['is_flexible_daily_budgets'] = ApiClient.convertToType(data['is_flexible_daily_budgets'], 'Boolean');
            }
            if (data.hasOwnProperty('default_ad_group_budget_in_micro_currency')) {
                obj['default_ad_group_budget_in_micro_currency'] = ApiClient.convertToType(data['default_ad_group_budget_in_micro_currency'], 'Number');
            }
            if (data.hasOwnProperty('is_automated_campaign')) {
                obj['is_automated_campaign'] = ApiClient.convertToType(data['is_automated_campaign'], 'Boolean');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
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
            if (data.hasOwnProperty('is_campaign_budget_optimization')) {
                obj['is_campaign_budget_optimization'] = ApiClient.convertToType(data['is_campaign_budget_optimization'], 'Boolean');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CampaignCreateResponseData</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CampaignCreateResponseData</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['ad_account_id'] && !(typeof data['ad_account_id'] === 'string' || data['ad_account_id'] instanceof String)) {
            throw new Error("Expected the field `ad_account_id` to be a primitive type in the JSON string but got " + data['ad_account_id']);
        }
        // ensure the json data is a string
        if (data['name'] && !(typeof data['name'] === 'string' || data['name'] instanceof String)) {
            throw new Error("Expected the field `name` to be a primitive type in the JSON string but got " + data['name']);
        }
        // ensure the json data is a string
        if (data['order_line_id'] && !(typeof data['order_line_id'] === 'string' || data['order_line_id'] instanceof String)) {
            throw new Error("Expected the field `order_line_id` to be a primitive type in the JSON string but got " + data['order_line_id']);
        }
        // validate the optional field `tracking_urls`
        if (data['tracking_urls']) { // data not null
          AdCommonTrackingUrls.validateJSON(data['tracking_urls']);
        }
        // ensure the json data is a string
        if (data['id'] && !(typeof data['id'] === 'string' || data['id'] instanceof String)) {
            throw new Error("Expected the field `id` to be a primitive type in the JSON string but got " + data['id']);
        }
        // ensure the json data is a string
        if (data['type'] && !(typeof data['type'] === 'string' || data['type'] instanceof String)) {
            throw new Error("Expected the field `type` to be a primitive type in the JSON string but got " + data['type']);
        }

        return true;
    }


}



/**
 * Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
 * @member {String} ad_account_id
 */
CampaignCreateResponseData.prototype['ad_account_id'] = undefined;

/**
 * Campaign name.
 * @member {String} name
 */
CampaignCreateResponseData.prototype['name'] = undefined;

/**
 * @member {module:model/EntityStatus} status
 */
CampaignCreateResponseData.prototype['status'] = undefined;

/**
 * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
 * @member {Number} lifetime_spend_cap
 */
CampaignCreateResponseData.prototype['lifetime_spend_cap'] = undefined;

/**
 * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
 * @member {Number} daily_spend_cap
 */
CampaignCreateResponseData.prototype['daily_spend_cap'] = undefined;

/**
 * Order line ID that appears on the invoice.
 * @member {String} order_line_id
 */
CampaignCreateResponseData.prototype['order_line_id'] = undefined;

/**
 * @member {module:model/AdCommonTrackingUrls} tracking_urls
 */
CampaignCreateResponseData.prototype['tracking_urls'] = undefined;

/**
 * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @member {Number} start_time
 */
CampaignCreateResponseData.prototype['start_time'] = undefined;

/**
 * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @member {Number} end_time
 */
CampaignCreateResponseData.prototype['end_time'] = undefined;

/**
 * @member {module:model/CampaignSummaryStatus} summary_status
 */
CampaignCreateResponseData.prototype['summary_status'] = undefined;

/**
 * Determines if a campaign has flexible daily budgets setup.
 * @member {Boolean} is_flexible_daily_budgets
 */
CampaignCreateResponseData.prototype['is_flexible_daily_budgets'] = undefined;

/**
 * When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
 * @member {Number} default_ad_group_budget_in_micro_currency
 */
CampaignCreateResponseData.prototype['default_ad_group_budget_in_micro_currency'] = undefined;

/**
 * Specifies whether the campaign was created in the automated campaign flow
 * @member {Boolean} is_automated_campaign
 * @default false
 */
CampaignCreateResponseData.prototype['is_automated_campaign'] = false;

/**
 * Campaign ID.
 * @member {String} id
 */
CampaignCreateResponseData.prototype['id'] = undefined;

/**
 * @member {module:model/ObjectiveType} objective_type
 */
CampaignCreateResponseData.prototype['objective_type'] = undefined;

/**
 * Campaign creation time. Unix timestamp in seconds.
 * @member {Number} created_time
 */
CampaignCreateResponseData.prototype['created_time'] = undefined;

/**
 * UTC timestamp. Last update time.
 * @member {Number} updated_time
 */
CampaignCreateResponseData.prototype['updated_time'] = undefined;

/**
 * Always \"campaign\".
 * @member {String} type
 */
CampaignCreateResponseData.prototype['type'] = undefined;

/**
 * Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
 * @member {Boolean} is_campaign_budget_optimization
 */
CampaignCreateResponseData.prototype['is_campaign_budget_optimization'] = undefined;


// Implement CampaignCreateCommon interface:
/**
 * Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
 * @member {String} ad_account_id
 */
CampaignCreateCommon.prototype['ad_account_id'] = undefined;
/**
 * Campaign name.
 * @member {String} name
 */
CampaignCreateCommon.prototype['name'] = undefined;
/**
 * @member {module:model/EntityStatus} status
 * @default 'ACTIVE'
 */
CampaignCreateCommon.prototype['status'] = 'ACTIVE';
/**
 * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
 * @member {Number} lifetime_spend_cap
 */
CampaignCreateCommon.prototype['lifetime_spend_cap'] = undefined;
/**
 * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
 * @member {Number} daily_spend_cap
 */
CampaignCreateCommon.prototype['daily_spend_cap'] = undefined;
/**
 * Order line ID that appears on the invoice.
 * @member {String} order_line_id
 */
CampaignCreateCommon.prototype['order_line_id'] = undefined;
/**
 * @member {module:model/AdCommonTrackingUrls} tracking_urls
 */
CampaignCreateCommon.prototype['tracking_urls'] = undefined;
/**
 * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @member {Number} start_time
 */
CampaignCreateCommon.prototype['start_time'] = undefined;
/**
 * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @member {Number} end_time
 */
CampaignCreateCommon.prototype['end_time'] = undefined;
/**
 * @member {module:model/CampaignSummaryStatus} summary_status
 */
CampaignCreateCommon.prototype['summary_status'] = undefined;
/**
 * Determine if a campaign has flexible daily budgets setup.
 * @member {Boolean} is_flexible_daily_budgets
 * @default false
 */
CampaignCreateCommon.prototype['is_flexible_daily_budgets'] = false;
/**
 * When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
 * @member {Number} default_ad_group_budget_in_micro_currency
 */
CampaignCreateCommon.prototype['default_ad_group_budget_in_micro_currency'] = undefined;
/**
 * Specifies whether the campaign was created in the automated campaign flow
 * @member {Boolean} is_automated_campaign
 * @default false
 */
CampaignCreateCommon.prototype['is_automated_campaign'] = false;
// Implement CampaignResponse interface:
/**
 * Campaign ID.
 * @member {String} id
 */
CampaignResponse.prototype['id'] = undefined;
/**
 * Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
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
 */
CampaignResponse.prototype['status'] = undefined;
/**
 * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
 * @member {Number} lifetime_spend_cap
 */
CampaignResponse.prototype['lifetime_spend_cap'] = undefined;
/**
 * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
 * @member {Number} daily_spend_cap
 */
CampaignResponse.prototype['daily_spend_cap'] = undefined;
/**
 * Order line ID that appears on the invoice.
 * @member {String} order_line_id
 */
CampaignResponse.prototype['order_line_id'] = undefined;
/**
 * @member {module:model/AdCommonTrackingUrls} tracking_urls
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
 * @member {module:model/CampaignSummaryStatus} summary_status
 */
CampaignResponse.prototype['summary_status'] = undefined;
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
/**
 * Determines if a campaign has flexible daily budgets setup.
 * @member {Boolean} is_flexible_daily_budgets
 */
CampaignResponse.prototype['is_flexible_daily_budgets'] = undefined;
/**
 * Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
 * @member {Boolean} is_campaign_budget_optimization
 */
CampaignResponse.prototype['is_campaign_budget_optimization'] = undefined;




export default CampaignCreateResponseData;

