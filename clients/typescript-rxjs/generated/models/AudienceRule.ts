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

import type {
    ObjectiveType,
    PinterestTagEventData,
} from './';

/**
 * JSON object defining targeted audience users. Example rule formats per audience type:<br>CUSTOMER_LIST: { \"customer_list_id\": \"&lt;customer list ID&gt;\"}<br>ACTALIKE: { \"seed_id\": [\"&lt;audience ID&gt;\"], \"country\": \"US\", \"percentage\": \"10\" }<br>(Valid countries include: \"US\", \"CA\", and \"GB\". Percentage should be 1-10.<br>The targeted audience should be this % size across Pinterest.)<br>VISITOR: { \"visitor_source_id\": [\"&lt;conversion tag ID&gt;\"], \"retention_days\": \"180\", \"event_source\": {\"=\": [\"web\", \"mobile\"]}, \"ingestion_source\": {\"=\": [\"tag\"]}}<br>(Retention days should be 1-540. Retention applies to specific customers.)<br>ENGAGEMENT: {\"engagement_domain\": [\"www.entomi.com\"], \"engager_type\": 1}<br>For more details on engagement audiences, see <a href=\"https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\" target=\"_blank\">November 2021 changelog</a>.
 * @export
 * @interface AudienceRule
 */
export interface AudienceRule {
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
    customer_list_id?: string;
    /**
     * The audience account\'s verified domain. **Required** for ENGAGEMENT `audience_type`.
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    engagement_domain?: Array<string>;
    /**
     * Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set. 
     * @type {string}
     * @memberof AudienceRule
     */
    engagement_type?: string;
    /**
     * A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event.
     * @type {string}
     * @memberof AudienceRule
     */
    event?: string;
    /**
     * @type {PinterestTagEventData}
     * @memberof AudienceRule
     */
    event_data?: PinterestTagEventData;
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
    pin_id?: Array<string>;
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
    retention_days?: number;
    /**
     * Audience ID(s). For ACTALIKE `audience_type`. 
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    seed_id?: Array<string>;
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
    visitor_source_id?: string;
    /**
     * Optional for VISITOR. You can use it as a {\'=\': [value]}. Supported values are: web, mobile, offline
     * @type {object}
     * @memberof AudienceRule
     */
    event_source?: object;
    /**
     * Optional for VISITOR. You can use it as a {\'=\': [value]}. Supported values are: tag, mmp, file_upload, conversions_api
     * @type {object}
     * @memberof AudienceRule
     */
    ingestion_source?: object;
    /**
     * Optional for ENGAGEMENT. Engager type value should be 1-2.
     * @type {number}
     * @memberof AudienceRule
     */
    engager_type?: number;
    /**
     * Campaign ID for engagement audience filter.
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    campaign_id?: Array<string>;
    /**
     * Ad ID for engagement audience filter.
     * @type {Array<string>}
     * @memberof AudienceRule
     */
    ad_id?: Array<string>;
    /**
     * Objective for engagement audience filter.
     * @type {Array<ObjectiveType>}
     * @memberof AudienceRule
     */
    objective_type?: Array<ObjectiveType>;
    /**
     * Ad account ID.
     * @type {string}
     * @memberof AudienceRule
     */
    ad_account_id?: string;
}