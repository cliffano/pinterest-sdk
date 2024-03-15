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
import AdCommon from './AdCommon';
import AdCommonQuizPinData from './AdCommonQuizPinData';
import AdCommonTrackingUrls from './AdCommonTrackingUrls';
import CreativeType from './CreativeType';
import EntityStatus from './EntityStatus';
import GridClickType from './GridClickType';

/**
 * The AdUpdateRequest model module.
 * @module model/AdUpdateRequest
 * @version 1.1.1-pre.0
 */
class AdUpdateRequest {
    /**
     * Constructs a new <code>AdUpdateRequest</code>.
     * @alias module:model/AdUpdateRequest
     * @implements module:model/AdCommon
     * @param id {String} The ID of this ad.
     */
    constructor(id) { 
        AdCommon.initialize(this);
        AdUpdateRequest.initialize(this, id);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id) { 
        obj['id'] = id;
    }

    /**
     * Constructs a <code>AdUpdateRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdUpdateRequest} obj Optional instance to populate.
     * @return {module:model/AdUpdateRequest} The populated <code>AdUpdateRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdUpdateRequest();
            AdCommon.constructFromObject(data, obj);

            if (data.hasOwnProperty('ad_group_id')) {
                obj['ad_group_id'] = ApiClient.convertToType(data['ad_group_id'], 'String');
            }
            if (data.hasOwnProperty('android_deep_link')) {
                obj['android_deep_link'] = ApiClient.convertToType(data['android_deep_link'], 'String');
            }
            if (data.hasOwnProperty('carousel_android_deep_links')) {
                obj['carousel_android_deep_links'] = ApiClient.convertToType(data['carousel_android_deep_links'], ['String']);
            }
            if (data.hasOwnProperty('carousel_destination_urls')) {
                obj['carousel_destination_urls'] = ApiClient.convertToType(data['carousel_destination_urls'], ['String']);
            }
            if (data.hasOwnProperty('carousel_ios_deep_links')) {
                obj['carousel_ios_deep_links'] = ApiClient.convertToType(data['carousel_ios_deep_links'], ['String']);
            }
            if (data.hasOwnProperty('click_tracking_url')) {
                obj['click_tracking_url'] = ApiClient.convertToType(data['click_tracking_url'], 'String');
            }
            if (data.hasOwnProperty('creative_type')) {
                obj['creative_type'] = CreativeType.constructFromObject(data['creative_type']);
            }
            if (data.hasOwnProperty('destination_url')) {
                obj['destination_url'] = ApiClient.convertToType(data['destination_url'], 'String');
            }
            if (data.hasOwnProperty('ios_deep_link')) {
                obj['ios_deep_link'] = ApiClient.convertToType(data['ios_deep_link'], 'String');
            }
            if (data.hasOwnProperty('is_pin_deleted')) {
                obj['is_pin_deleted'] = ApiClient.convertToType(data['is_pin_deleted'], 'Boolean');
            }
            if (data.hasOwnProperty('is_removable')) {
                obj['is_removable'] = ApiClient.convertToType(data['is_removable'], 'Boolean');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = EntityStatus.constructFromObject(data['status']);
            }
            if (data.hasOwnProperty('tracking_urls')) {
                obj['tracking_urls'] = AdCommonTrackingUrls.constructFromObject(data['tracking_urls']);
            }
            if (data.hasOwnProperty('view_tracking_url')) {
                obj['view_tracking_url'] = ApiClient.convertToType(data['view_tracking_url'], 'String');
            }
            if (data.hasOwnProperty('lead_form_id')) {
                obj['lead_form_id'] = ApiClient.convertToType(data['lead_form_id'], 'String');
            }
            if (data.hasOwnProperty('grid_click_type')) {
                obj['grid_click_type'] = GridClickType.constructFromObject(data['grid_click_type']);
            }
            if (data.hasOwnProperty('customizable_cta_type')) {
                obj['customizable_cta_type'] = ApiClient.convertToType(data['customizable_cta_type'], 'String');
            }
            if (data.hasOwnProperty('quiz_pin_data')) {
                obj['quiz_pin_data'] = AdCommonQuizPinData.constructFromObject(data['quiz_pin_data']);
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('pin_id')) {
                obj['pin_id'] = ApiClient.convertToType(data['pin_id'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>AdUpdateRequest</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>AdUpdateRequest</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of AdUpdateRequest.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['ad_group_id'] && !(typeof data['ad_group_id'] === 'string' || data['ad_group_id'] instanceof String)) {
            throw new Error("Expected the field `ad_group_id` to be a primitive type in the JSON string but got " + data['ad_group_id']);
        }
        // ensure the json data is a string
        if (data['android_deep_link'] && !(typeof data['android_deep_link'] === 'string' || data['android_deep_link'] instanceof String)) {
            throw new Error("Expected the field `android_deep_link` to be a primitive type in the JSON string but got " + data['android_deep_link']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['carousel_android_deep_links'])) {
            throw new Error("Expected the field `carousel_android_deep_links` to be an array in the JSON data but got " + data['carousel_android_deep_links']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['carousel_destination_urls'])) {
            throw new Error("Expected the field `carousel_destination_urls` to be an array in the JSON data but got " + data['carousel_destination_urls']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['carousel_ios_deep_links'])) {
            throw new Error("Expected the field `carousel_ios_deep_links` to be an array in the JSON data but got " + data['carousel_ios_deep_links']);
        }
        // ensure the json data is a string
        if (data['click_tracking_url'] && !(typeof data['click_tracking_url'] === 'string' || data['click_tracking_url'] instanceof String)) {
            throw new Error("Expected the field `click_tracking_url` to be a primitive type in the JSON string but got " + data['click_tracking_url']);
        }
        // ensure the json data is a string
        if (data['destination_url'] && !(typeof data['destination_url'] === 'string' || data['destination_url'] instanceof String)) {
            throw new Error("Expected the field `destination_url` to be a primitive type in the JSON string but got " + data['destination_url']);
        }
        // ensure the json data is a string
        if (data['ios_deep_link'] && !(typeof data['ios_deep_link'] === 'string' || data['ios_deep_link'] instanceof String)) {
            throw new Error("Expected the field `ios_deep_link` to be a primitive type in the JSON string but got " + data['ios_deep_link']);
        }
        // ensure the json data is a string
        if (data['name'] && !(typeof data['name'] === 'string' || data['name'] instanceof String)) {
            throw new Error("Expected the field `name` to be a primitive type in the JSON string but got " + data['name']);
        }
        // validate the optional field `tracking_urls`
        if (data['tracking_urls']) { // data not null
          AdCommonTrackingUrls.validateJSON(data['tracking_urls']);
        }
        // ensure the json data is a string
        if (data['view_tracking_url'] && !(typeof data['view_tracking_url'] === 'string' || data['view_tracking_url'] instanceof String)) {
            throw new Error("Expected the field `view_tracking_url` to be a primitive type in the JSON string but got " + data['view_tracking_url']);
        }
        // ensure the json data is a string
        if (data['lead_form_id'] && !(typeof data['lead_form_id'] === 'string' || data['lead_form_id'] instanceof String)) {
            throw new Error("Expected the field `lead_form_id` to be a primitive type in the JSON string but got " + data['lead_form_id']);
        }
        // ensure the json data is a string
        if (data['customizable_cta_type'] && !(typeof data['customizable_cta_type'] === 'string' || data['customizable_cta_type'] instanceof String)) {
            throw new Error("Expected the field `customizable_cta_type` to be a primitive type in the JSON string but got " + data['customizable_cta_type']);
        }
        // validate the optional field `quiz_pin_data`
        if (data['quiz_pin_data']) { // data not null
          AdCommonQuizPinData.validateJSON(data['quiz_pin_data']);
        }
        // ensure the json data is a string
        if (data['id'] && !(typeof data['id'] === 'string' || data['id'] instanceof String)) {
            throw new Error("Expected the field `id` to be a primitive type in the JSON string but got " + data['id']);
        }
        // ensure the json data is a string
        if (data['pin_id'] && !(typeof data['pin_id'] === 'string' || data['pin_id'] instanceof String)) {
            throw new Error("Expected the field `pin_id` to be a primitive type in the JSON string but got " + data['pin_id']);
        }

        return true;
    }


}

AdUpdateRequest.RequiredProperties = ["id"];

/**
 * ID of the ad group that contains the ad.
 * @member {String} ad_group_id
 */
AdUpdateRequest.prototype['ad_group_id'] = undefined;

/**
 * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
 * @member {String} android_deep_link
 */
AdUpdateRequest.prototype['android_deep_link'] = undefined;

/**
 * Comma-separated deep links for the carousel pin on Android.
 * @member {Array.<String>} carousel_android_deep_links
 */
AdUpdateRequest.prototype['carousel_android_deep_links'] = undefined;

/**
 * Comma-separated destination URLs for the carousel pin to promote.
 * @member {Array.<String>} carousel_destination_urls
 */
AdUpdateRequest.prototype['carousel_destination_urls'] = undefined;

/**
 * Comma-separated deep links for the carousel pin on iOS.
 * @member {Array.<String>} carousel_ios_deep_links
 */
AdUpdateRequest.prototype['carousel_ios_deep_links'] = undefined;

/**
 * Tracking url for the ad clicks.
 * @member {String} click_tracking_url
 */
AdUpdateRequest.prototype['click_tracking_url'] = undefined;

/**
 * @member {module:model/CreativeType} creative_type
 */
AdUpdateRequest.prototype['creative_type'] = undefined;

/**
 * Destination URL.
 * @member {String} destination_url
 */
AdUpdateRequest.prototype['destination_url'] = undefined;

/**
 * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
 * @member {String} ios_deep_link
 */
AdUpdateRequest.prototype['ios_deep_link'] = undefined;

/**
 * Is original pin deleted?
 * @member {Boolean} is_pin_deleted
 */
AdUpdateRequest.prototype['is_pin_deleted'] = undefined;

/**
 * Is pin repinnable?
 * @member {Boolean} is_removable
 */
AdUpdateRequest.prototype['is_removable'] = undefined;

/**
 * Name of the ad - 255 chars max.
 * @member {String} name
 */
AdUpdateRequest.prototype['name'] = undefined;

/**
 * @member {module:model/EntityStatus} status
 */
AdUpdateRequest.prototype['status'] = undefined;

/**
 * @member {module:model/AdCommonTrackingUrls} tracking_urls
 */
AdUpdateRequest.prototype['tracking_urls'] = undefined;

/**
 * Tracking URL for ad impressions.
 * @member {String} view_tracking_url
 */
AdUpdateRequest.prototype['view_tracking_url'] = undefined;

/**
 * Lead form ID for lead ad generation.
 * @member {String} lead_form_id
 */
AdUpdateRequest.prototype['lead_form_id'] = undefined;

/**
 * @member {module:model/GridClickType} grid_click_type
 */
AdUpdateRequest.prototype['grid_click_type'] = undefined;

/**
 * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
 * @member {module:model/AdUpdateRequest.CustomizableCtaTypeEnum} customizable_cta_type
 */
AdUpdateRequest.prototype['customizable_cta_type'] = undefined;

/**
 * @member {module:model/AdCommonQuizPinData} quiz_pin_data
 */
AdUpdateRequest.prototype['quiz_pin_data'] = undefined;

/**
 * The ID of this ad.
 * @member {String} id
 */
AdUpdateRequest.prototype['id'] = undefined;

/**
 * Pin ID. This field may only be updated for draft ads.
 * @member {String} pin_id
 */
AdUpdateRequest.prototype['pin_id'] = undefined;


// Implement AdCommon interface:
/**
 * ID of the ad group that contains the ad.
 * @member {String} ad_group_id
 */
AdCommon.prototype['ad_group_id'] = undefined;
/**
 * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
 * @member {String} android_deep_link
 */
AdCommon.prototype['android_deep_link'] = undefined;
/**
 * Comma-separated deep links for the carousel pin on Android.
 * @member {Array.<String>} carousel_android_deep_links
 */
AdCommon.prototype['carousel_android_deep_links'] = undefined;
/**
 * Comma-separated destination URLs for the carousel pin to promote.
 * @member {Array.<String>} carousel_destination_urls
 */
AdCommon.prototype['carousel_destination_urls'] = undefined;
/**
 * Comma-separated deep links for the carousel pin on iOS.
 * @member {Array.<String>} carousel_ios_deep_links
 */
AdCommon.prototype['carousel_ios_deep_links'] = undefined;
/**
 * Tracking url for the ad clicks.
 * @member {String} click_tracking_url
 */
AdCommon.prototype['click_tracking_url'] = undefined;
/**
 * @member {module:model/CreativeType} creative_type
 */
AdCommon.prototype['creative_type'] = undefined;
/**
 * Destination URL.
 * @member {String} destination_url
 */
AdCommon.prototype['destination_url'] = undefined;
/**
 * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
 * @member {String} ios_deep_link
 */
AdCommon.prototype['ios_deep_link'] = undefined;
/**
 * Is original pin deleted?
 * @member {Boolean} is_pin_deleted
 */
AdCommon.prototype['is_pin_deleted'] = undefined;
/**
 * Is pin repinnable?
 * @member {Boolean} is_removable
 */
AdCommon.prototype['is_removable'] = undefined;
/**
 * Name of the ad - 255 chars max.
 * @member {String} name
 */
AdCommon.prototype['name'] = undefined;
/**
 * @member {module:model/EntityStatus} status
 */
AdCommon.prototype['status'] = undefined;
/**
 * @member {module:model/AdCommonTrackingUrls} tracking_urls
 */
AdCommon.prototype['tracking_urls'] = undefined;
/**
 * Tracking URL for ad impressions.
 * @member {String} view_tracking_url
 */
AdCommon.prototype['view_tracking_url'] = undefined;
/**
 * Lead form ID for lead ad generation.
 * @member {String} lead_form_id
 */
AdCommon.prototype['lead_form_id'] = undefined;
/**
 * @member {module:model/GridClickType} grid_click_type
 */
AdCommon.prototype['grid_click_type'] = undefined;
/**
 * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
 * @member {module:model/AdCommon.CustomizableCtaTypeEnum} customizable_cta_type
 */
AdCommon.prototype['customizable_cta_type'] = undefined;
/**
 * @member {module:model/AdCommonQuizPinData} quiz_pin_data
 */
AdCommon.prototype['quiz_pin_data'] = undefined;



/**
 * Allowed values for the <code>customizable_cta_type</code> property.
 * @enum {String}
 * @readonly
 */
AdUpdateRequest['CustomizableCtaTypeEnum'] = {

    /**
     * value: "GET_OFFER"
     * @const
     */
    "GET_OFFER": "GET_OFFER",

    /**
     * value: "LEARN_MORE"
     * @const
     */
    "LEARN_MORE": "LEARN_MORE",

    /**
     * value: "ORDER_NOW"
     * @const
     */
    "ORDER_NOW": "ORDER_NOW",

    /**
     * value: "SHOP_NOW"
     * @const
     */
    "SHOP_NOW": "SHOP_NOW",

    /**
     * value: "SIGN_UP"
     * @const
     */
    "SIGN_UP": "SIGN_UP",

    /**
     * value: "SUBSCRIBE"
     * @const
     */
    "SUBSCRIBE": "SUBSCRIBE",

    /**
     * value: "BUY_NOW"
     * @const
     */
    "BUY_NOW": "BUY_NOW",

    /**
     * value: "CONTACT_US"
     * @const
     */
    "CONTACT_US": "CONTACT_US",

    /**
     * value: "GET_QUOTE"
     * @const
     */
    "GET_QUOTE": "GET_QUOTE",

    /**
     * value: "VISIT_WEBSITE"
     * @const
     */
    "VISIT_WEBSITE": "VISIT_WEBSITE",

    /**
     * value: "APPLY_NOW"
     * @const
     */
    "APPLY_NOW": "APPLY_NOW",

    /**
     * value: "BOOK_NOW"
     * @const
     */
    "BOOK_NOW": "BOOK_NOW",

    /**
     * value: "REQUEST_DEMO"
     * @const
     */
    "REQUEST_DEMO": "REQUEST_DEMO",

    /**
     * value: "REGISTER_NOW"
     * @const
     */
    "REGISTER_NOW": "REGISTER_NOW",

    /**
     * value: "FIND_A_DEALER"
     * @const
     */
    "FIND_A_DEALER": "FIND_A_DEALER",

    /**
     * value: "ADD_TO_CART"
     * @const
     */
    "ADD_TO_CART": "ADD_TO_CART",

    /**
     * value: "WATCH_NOW"
     * @const
     */
    "WATCH_NOW": "WATCH_NOW",

    /**
     * value: "READ_MORE"
     * @const
     */
    "READ_MORE": "READ_MORE",

    /**
     * value: "null"
     * @const
     */
    "null": "null"
};



export default AdUpdateRequest;
