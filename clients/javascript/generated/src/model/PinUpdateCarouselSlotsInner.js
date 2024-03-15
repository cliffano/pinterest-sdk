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

/**
 * The PinUpdateCarouselSlotsInner model module.
 * @module model/PinUpdateCarouselSlotsInner
 * @version 1.1.1-pre.0
 */
class PinUpdateCarouselSlotsInner {
    /**
     * Constructs a new <code>PinUpdateCarouselSlotsInner</code>.
     * @alias module:model/PinUpdateCarouselSlotsInner
     */
    constructor() { 
        
        PinUpdateCarouselSlotsInner.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>PinUpdateCarouselSlotsInner</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinUpdateCarouselSlotsInner} obj Optional instance to populate.
     * @return {module:model/PinUpdateCarouselSlotsInner} The populated <code>PinUpdateCarouselSlotsInner</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinUpdateCarouselSlotsInner();

            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('link')) {
                obj['link'] = ApiClient.convertToType(data['link'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>PinUpdateCarouselSlotsInner</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>PinUpdateCarouselSlotsInner</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['title'] && !(typeof data['title'] === 'string' || data['title'] instanceof String)) {
            throw new Error("Expected the field `title` to be a primitive type in the JSON string but got " + data['title']);
        }
        // ensure the json data is a string
        if (data['description'] && !(typeof data['description'] === 'string' || data['description'] instanceof String)) {
            throw new Error("Expected the field `description` to be a primitive type in the JSON string but got " + data['description']);
        }
        // ensure the json data is a string
        if (data['link'] && !(typeof data['link'] === 'string' || data['link'] instanceof String)) {
            throw new Error("Expected the field `link` to be a primitive type in the JSON string but got " + data['link']);
        }

        return true;
    }


}



/**
 * Carousel Pin slot title.
 * @member {String} title
 */
PinUpdateCarouselSlotsInner.prototype['title'] = undefined;

/**
 * Carousel Pin slot description.
 * @member {String} description
 */
PinUpdateCarouselSlotsInner.prototype['description'] = undefined;

/**
 * Carousel Pin slot link.
 * @member {String} link
 */
PinUpdateCarouselSlotsInner.prototype['link'] = undefined;






export default PinUpdateCarouselSlotsInner;

