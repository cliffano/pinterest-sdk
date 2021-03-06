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
import PinPromotionSummaryStatus from './PinPromotionSummaryStatus';

/**
 * The AdResponseAllOf1 model module.
 * @module model/AdResponseAllOf1
 * @version 1.0.1-pre.0
 */
class AdResponseAllOf1 {
    /**
     * Constructs a new <code>AdResponseAllOf1</code>.
     * @alias module:model/AdResponseAllOf1
     */
    constructor() { 
        
        AdResponseAllOf1.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>AdResponseAllOf1</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdResponseAllOf1} obj Optional instance to populate.
     * @return {module:model/AdResponseAllOf1} The populated <code>AdResponseAllOf1</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdResponseAllOf1();

            if (data.hasOwnProperty('ad_account_id')) {
                obj['ad_account_id'] = ApiClient.convertToType(data['ad_account_id'], 'String');
            }
            if (data.hasOwnProperty('campaign_id')) {
                obj['campaign_id'] = ApiClient.convertToType(data['campaign_id'], 'String');
            }
            if (data.hasOwnProperty('collection_items_destination_url_template')) {
                obj['collection_items_destination_url_template'] = ApiClient.convertToType(data['collection_items_destination_url_template'], 'String');
            }
            if (data.hasOwnProperty('created_time')) {
                obj['created_time'] = ApiClient.convertToType(data['created_time'], 'Number');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('rejected_reasons')) {
                obj['rejected_reasons'] = ApiClient.convertToType(data['rejected_reasons'], ['String']);
            }
            if (data.hasOwnProperty('rejection_labels')) {
                obj['rejection_labels'] = ApiClient.convertToType(data['rejection_labels'], ['String']);
            }
            if (data.hasOwnProperty('review_status')) {
                obj['review_status'] = ApiClient.convertToType(data['review_status'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('updated_time')) {
                obj['updated_time'] = ApiClient.convertToType(data['updated_time'], 'Number');
            }
            if (data.hasOwnProperty('summary_status')) {
                obj['summary_status'] = ApiClient.convertToType(data['summary_status'], PinPromotionSummaryStatus);
            }
        }
        return obj;
    }


}

/**
 * The ID of the advertiser that this ad belongs to.
 * @member {String} ad_account_id
 */
AdResponseAllOf1.prototype['ad_account_id'] = undefined;

/**
 * ID of the ad campaign that contains this ad.
 * @member {String} campaign_id
 */
AdResponseAllOf1.prototype['campaign_id'] = undefined;

/**
 * Destination URL template for all items within a collections drawer.
 * @member {String} collection_items_destination_url_template
 */
AdResponseAllOf1.prototype['collection_items_destination_url_template'] = undefined;

/**
 * Pin creation time. Unix timestamp in seconds.
 * @member {Number} created_time
 */
AdResponseAllOf1.prototype['created_time'] = undefined;

/**
 * The ID of this ad.
 * @member {String} id
 */
AdResponseAllOf1.prototype['id'] = undefined;

/**
 * Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
 * @member {Array.<module:model/AdResponseAllOf1.RejectedReasonsEnum>} rejected_reasons
 */
AdResponseAllOf1.prototype['rejected_reasons'] = undefined;

/**
 * Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
 * @member {Array.<String>} rejection_labels
 */
AdResponseAllOf1.prototype['rejection_labels'] = undefined;

/**
 * Ad review status
 * @member {module:model/AdResponseAllOf1.ReviewStatusEnum} review_status
 */
AdResponseAllOf1.prototype['review_status'] = undefined;

/**
 * Always \"ad\".
 * @member {String} type
 */
AdResponseAllOf1.prototype['type'] = undefined;

/**
 * Last update time. Unix timestamp in seconds.
 * @member {Number} updated_time
 */
AdResponseAllOf1.prototype['updated_time'] = undefined;

/**
 * Ad summary status
 * @member {module:model/PinPromotionSummaryStatus} summary_status
 */
AdResponseAllOf1.prototype['summary_status'] = undefined;





/**
 * Allowed values for the <code>rejectedReasons</code> property.
 * @enum {String}
 * @readonly
 */
AdResponseAllOf1['RejectedReasonsEnum'] = {

    /**
     * value: "HASHTAGS"
     * @const
     */
    "HASHTAGS": "HASHTAGS",

    /**
     * value: "PROMOTIONS_AND_PRICES"
     * @const
     */
    "PROMOTIONS_AND_PRICES": "PROMOTIONS_AND_PRICES",

    /**
     * value: "TARGETING"
     * @const
     */
    "TARGETING": "TARGETING",

    /**
     * value: "LANDING_PAGE"
     * @const
     */
    "LANDING_PAGE": "LANDING_PAGE",

    /**
     * value: "CAPS_AND_SYMBOLS"
     * @const
     */
    "CAPS_AND_SYMBOLS": "CAPS_AND_SYMBOLS",

    /**
     * value: "SHOCKING"
     * @const
     */
    "SHOCKING": "SHOCKING",

    /**
     * value: "WEIGHT_LOSS"
     * @const
     */
    "WEIGHT_LOSS": "WEIGHT_LOSS",

    /**
     * value: "PROHIBITED_PRODUCT"
     * @const
     */
    "PROHIBITED_PRODUCT": "PROHIBITED_PRODUCT",

    /**
     * value: "AUTHENTICITY"
     * @const
     */
    "AUTHENTICITY": "AUTHENTICITY",

    /**
     * value: "NUDITY"
     * @const
     */
    "NUDITY": "NUDITY",

    /**
     * value: "CONFUSING_DESIGN"
     * @const
     */
    "CONFUSING_DESIGN": "CONFUSING_DESIGN",

    /**
     * value: "URGENCY"
     * @const
     */
    "URGENCY": "URGENCY",

    /**
     * value: "RATINGS"
     * @const
     */
    "RATINGS": "RATINGS",

    /**
     * value: "APP"
     * @const
     */
    "APP": "APP",

    /**
     * value: "ALCOHOL"
     * @const
     */
    "ALCOHOL": "ALCOHOL",

    /**
     * value: "CONTESTS"
     * @const
     */
    "CONTESTS": "CONTESTS",

    /**
     * value: "POLITICAL"
     * @const
     */
    "POLITICAL": "POLITICAL",

    /**
     * value: "OTHER"
     * @const
     */
    "OTHER": "OTHER",

    /**
     * value: "IMAGE"
     * @const
     */
    "IMAGE": "IMAGE",

    /**
     * value: "NAR"
     * @const
     */
    "NAR": "NAR",

    /**
     * value: "INCONSISTENT"
     * @const
     */
    "INCONSISTENT": "INCONSISTENT",

    /**
     * value: "CLICKBAIT"
     * @const
     */
    "CLICKBAIT": "CLICKBAIT",

    /**
     * value: "NO_DESCRIPTION"
     * @const
     */
    "NO_DESCRIPTION": "NO_DESCRIPTION",

    /**
     * value: "LOW_QUALITY"
     * @const
     */
    "LOW_QUALITY": "LOW_QUALITY",

    /**
     * value: "EXAGGERATED_CLAIMS"
     * @const
     */
    "EXAGGERATED_CLAIMS": "EXAGGERATED_CLAIMS",

    /**
     * value: "PINTEREST_BRAND"
     * @const
     */
    "PINTEREST_BRAND": "PINTEREST_BRAND",

    /**
     * value: "ALCOHOL_NO_SALE"
     * @const
     */
    "ALCOHOL_NO_SALE": "ALCOHOL_NO_SALE",

    /**
     * value: "LANDING_PAGE_SPEED"
     * @const
     */
    "LANDING_PAGE_SPEED": "LANDING_PAGE_SPEED",

    /**
     * value: "LANDING_PAGE_HARDWALL"
     * @const
     */
    "LANDING_PAGE_HARDWALL": "LANDING_PAGE_HARDWALL",

    /**
     * value: "LANDING_PAGE_BROKEN"
     * @const
     */
    "LANDING_PAGE_BROKEN": "LANDING_PAGE_BROKEN",

    /**
     * value: "LANDING_PAGE_QUALITY"
     * @const
     */
    "LANDING_PAGE_QUALITY": "LANDING_PAGE_QUALITY",

    /**
     * value: "OUT_OF_STOCK"
     * @const
     */
    "OUT_OF_STOCK": "OUT_OF_STOCK",

    /**
     * value: "IMAGE_LOW_QUALITY"
     * @const
     */
    "IMAGE_LOW_QUALITY": "IMAGE_LOW_QUALITY",

    /**
     * value: "IMAGE_BUSY"
     * @const
     */
    "IMAGE_BUSY": "IMAGE_BUSY",

    /**
     * value: "IMAGE_POORLY_EDITED"
     * @const
     */
    "IMAGE_POORLY_EDITED": "IMAGE_POORLY_EDITED",

    /**
     * value: "IMAGE_BEFORE_AFTER"
     * @const
     */
    "IMAGE_BEFORE_AFTER": "IMAGE_BEFORE_AFTER",

    /**
     * value: "UGC"
     * @const
     */
    "UGC": "UGC",

    /**
     * value: "FAKE_BUTTONS"
     * @const
     */
    "FAKE_BUTTONS": "FAKE_BUTTONS",

    /**
     * value: "WEAPONS"
     * @const
     */
    "WEAPONS": "WEAPONS",

    /**
     * value: "SENSITIVE"
     * @const
     */
    "SENSITIVE": "SENSITIVE",

    /**
     * value: "UNACCEPTABLE_BUSINESS"
     * @const
     */
    "UNACCEPTABLE_BUSINESS": "UNACCEPTABLE_BUSINESS",

    /**
     * value: "SUSPICIOUS_CLAIMS"
     * @const
     */
    "SUSPICIOUS_CLAIMS": "SUSPICIOUS_CLAIMS",

    /**
     * value: "PHARMA"
     * @const
     */
    "PHARMA": "PHARMA",

    /**
     * value: "SUSPICIOUS_SUPPLEMENTS"
     * @const
     */
    "SUSPICIOUS_SUPPLEMENTS": "SUSPICIOUS_SUPPLEMENTS",

    /**
     * value: "ILLEGAL_RECREATIONAL_DRUG"
     * @const
     */
    "ILLEGAL_RECREATIONAL_DRUG": "ILLEGAL_RECREATIONAL_DRUG",

    /**
     * value: "LOW_QUALITY_LANDING_PAGE"
     * @const
     */
    "LOW_QUALITY_LANDING_PAGE": "LOW_QUALITY_LANDING_PAGE",

    /**
     * value: "RESTRICTED_HEALTHCARE"
     * @const
     */
    "RESTRICTED_HEALTHCARE": "RESTRICTED_HEALTHCARE",

    /**
     * value: "INCONSISTENT_LANG_FR"
     * @const
     */
    "INCONSISTENT_LANG_FR": "INCONSISTENT_LANG_FR"
};


/**
 * Allowed values for the <code>review_status</code> property.
 * @enum {String}
 * @readonly
 */
AdResponseAllOf1['ReviewStatusEnum'] = {

    /**
     * value: "OTHER"
     * @const
     */
    "OTHER": "OTHER",

    /**
     * value: "PENDING"
     * @const
     */
    "PENDING": "PENDING",

    /**
     * value: "REJECTED"
     * @const
     */
    "REJECTED": "REJECTED",

    /**
     * value: "APPROVED"
     * @const
     */
    "APPROVED": "APPROVED"
};



export default AdResponseAllOf1;

