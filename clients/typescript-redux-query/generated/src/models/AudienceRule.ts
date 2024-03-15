// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
import {
    ObjectiveType,
    ObjectiveTypeFromJSON,
    ObjectiveTypeToJSON,
    PinterestTagEventData,
    PinterestTagEventDataFromJSON,
    PinterestTagEventDataToJSON,
} from './';

/**
 * JSON object defining targeted audience users. Example rule formats per audience type:<br>CUSTOMER_LIST: { \"customer_list_id\": \"&lt;customer list ID&gt;\"}<br>ACTALIKE: { \"seed_id\": [\"&lt;audience ID&gt;\"], \"country\": \"US\", \"percentage\": \"10\" }<br>(Valid countries include: \"US\", \"CA\", and \"GB\". Percentage should be 1-10.<br>The targeted audience should be this % size across Pinterest.)<br>VISITOR: { \"visitor_source_id\": [\"&lt;conversion tag ID&gt;\"], \"retention_days\": \"180\", \"event_source\": {\"=\": [\"web\", \"mobile\"]}, \"ingestion_source\": {\"=\": [\"tag\"]}}<br>(Retention days should be 1-540. Retention applies to specific customers.)<br>ENGAGEMENT: {\"engagement_domain\": [\"www.entomi.com\"], \"engager_type\": 1}<br>For more details on engagement audiences, see <a href=\"https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\" target=\"_blank\">November 2021 changelog</a>.
 * @export
 * @interface AudienceRule
 */
export interface AudienceRule  {
    /**
     * Valid countries include: \"US\", \"CA\", and \"GB\".
     * @type {string}
     * @memberof AudienceRule
     */
    country?: string;
    /**
     * Customer list ID. For CUSTOMER_LIST `audience_type`.
     * @type {string}
     * @memberof AudienceRule
     */
    customerListId?: string;
    /**
     * The audience account\'s verified domain. **Required** for ENGAGEMENT `audience_type`.
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    engagementDomain?: Array<string>;
    /**
     * Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set. 
     * @type {string}
     * @memberof AudienceRule
     */
    engagementType?: string;
    /**
     * A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event.
     * @type {string}
     * @memberof AudienceRule
     */
    event?: string;
    /**
     * 
     * @type {PinterestTagEventData}
     * @memberof AudienceRule
     */
    eventData?: PinterestTagEventData;
    /**
     * Percentage should be 1-10. The targeted audience should be this % size across Pinterest.
     * @type {number}
     * @memberof AudienceRule
     */
    percentage?: number;
    /**
     * IDs of engaged organic pins. Optional for ENGAGEMENT `audience_type`. For example, \"pin_id:\": [\"34567\"]
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    pinId?: Array<string>;
    /**
     * Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`.
     * @type {boolean}
     * @memberof AudienceRule
     */
    prefill?: boolean;
    /**
     * Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified.
     * @type {number}
     * @memberof AudienceRule
     */
    retentionDays?: number;
    /**
     * Audience ID(s). For ACTALIKE `audience_type`. 
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    seedId?: Array<string>;
    /**
     * Optional for ENGAGEMENT or VISITOR `audience_type`. For ENGAGEMENT, it is the engaged pin\'s URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ =, !=, contains, not_contains].<br>Example 1:  \"url\": \"http://www.myonlinestore123.com/view_item/shoe\"<br>Example 2: \"url\": {\"contains\": \"/view_item/shoe\"}
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    url?: Array<string>;
    /**
     * The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`.
     * @type {string}
     * @memberof AudienceRule
     */
    visitorSourceId?: string;
    /**
     * Optional for VISITOR. You can use it as a {\'=\': [value]}. Supported values are: web, mobile, offline
     * @type {object}
     * @memberof AudienceRule
     */
    eventSource?: object;
    /**
     * Optional for VISITOR. You can use it as a {\'=\': [value]}. Supported values are: tag, mmp, file_upload, conversions_api
     * @type {object}
     * @memberof AudienceRule
     */
    ingestionSource?: object;
    /**
     * Optional for ENGAGEMENT. Engager type value should be 1-2.
     * @type {number}
     * @memberof AudienceRule
     */
    engagerType?: number;
    /**
     * Campaign ID for engagement audience filter.
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    campaignId?: Array<string>;
    /**
     * Ad ID for engagement audience filter.
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    adId?: Array<string>;
    /**
     * Objective for engagement audience filter.
     * @type {Array<ObjectiveType>}
     * @memberof AudienceRule
     */
    objectiveType?: Array<ObjectiveType>;
    /**
     * Ad account ID.
     * @type {string}
     * @memberof AudienceRule
     */
    adAccountId?: string;
}

export function AudienceRuleFromJSON(json: any): AudienceRule {
    return {
        'country': !exists(json, 'country') ? undefined : json['country'],
        'customerListId': !exists(json, 'customer_list_id') ? undefined : json['customer_list_id'],
        'engagementDomain': !exists(json, 'engagement_domain') ? undefined : json['engagement_domain'],
        'engagementType': !exists(json, 'engagement_type') ? undefined : json['engagement_type'],
        'event': !exists(json, 'event') ? undefined : json['event'],
        'eventData': !exists(json, 'event_data') ? undefined : PinterestTagEventDataFromJSON(json['event_data']),
        'percentage': !exists(json, 'percentage') ? undefined : json['percentage'],
        'pinId': !exists(json, 'pin_id') ? undefined : json['pin_id'],
        'prefill': !exists(json, 'prefill') ? undefined : json['prefill'],
        'retentionDays': !exists(json, 'retention_days') ? undefined : json['retention_days'],
        'seedId': !exists(json, 'seed_id') ? undefined : json['seed_id'],
        'url': !exists(json, 'url') ? undefined : json['url'],
        'visitorSourceId': !exists(json, 'visitor_source_id') ? undefined : json['visitor_source_id'],
        'eventSource': !exists(json, 'event_source') ? undefined : json['event_source'],
        'ingestionSource': !exists(json, 'ingestion_source') ? undefined : json['ingestion_source'],
        'engagerType': !exists(json, 'engager_type') ? undefined : json['engager_type'],
        'campaignId': !exists(json, 'campaign_id') ? undefined : json['campaign_id'],
        'adId': !exists(json, 'ad_id') ? undefined : json['ad_id'],
        'objectiveType': !exists(json, 'objective_type') ? undefined : (json['objective_type'] as Array<any>).map(ObjectiveTypeFromJSON),
        'adAccountId': !exists(json, 'ad_account_id') ? undefined : json['ad_account_id'],
    };
}

export function AudienceRuleToJSON(value?: AudienceRule): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'country': value.country,
        'customer_list_id': value.customerListId,
        'engagement_domain': value.engagementDomain,
        'engagement_type': value.engagementType,
        'event': value.event,
        'event_data': PinterestTagEventDataToJSON(value.eventData),
        'percentage': value.percentage,
        'pin_id': value.pinId,
        'prefill': value.prefill,
        'retention_days': value.retentionDays,
        'seed_id': value.seedId,
        'url': value.url,
        'visitor_source_id': value.visitorSourceId,
        'event_source': value.eventSource,
        'ingestion_source': value.ingestionSource,
        'engager_type': value.engagerType,
        'campaign_id': value.campaignId,
        'ad_id': value.adId,
        'objective_type': value.objectiveType === undefined ? undefined : (value.objectiveType as Array<any>).map(ObjectiveTypeToJSON),
        'ad_account_id': value.adAccountId,
    };
}


