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
 * The PinMediaSourceImagesURLItemsInner model module.
 * @module model/PinMediaSourceImagesURLItemsInner
 * @version 1.1.1-pre.0
 */
class PinMediaSourceImagesURLItemsInner {
    /**
     * Constructs a new <code>PinMediaSourceImagesURLItemsInner</code>.
     * @alias module:model/PinMediaSourceImagesURLItemsInner
     * @param url {String} URL of image to upload.
     */
    constructor(url) { 
        
        PinMediaSourceImagesURLItemsInner.initialize(this, url);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, url) { 
        obj['url'] = url;
    }

    /**
     * Constructs a <code>PinMediaSourceImagesURLItemsInner</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinMediaSourceImagesURLItemsInner} obj Optional instance to populate.
     * @return {module:model/PinMediaSourceImagesURLItemsInner} The populated <code>PinMediaSourceImagesURLItemsInner</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinMediaSourceImagesURLItemsInner();

            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('link')) {
                obj['link'] = ApiClient.convertToType(data['link'], 'String');
            }
            if (data.hasOwnProperty('url')) {
                obj['url'] = ApiClient.convertToType(data['url'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>PinMediaSourceImagesURLItemsInner</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>PinMediaSourceImagesURLItemsInner</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of PinMediaSourceImagesURLItemsInner.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
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
        // ensure the json data is a string
        if (data['url'] && !(typeof data['url'] === 'string' || data['url'] instanceof String)) {
            throw new Error("Expected the field `url` to be a primitive type in the JSON string but got " + data['url']);
        }

        return true;
    }


}

PinMediaSourceImagesURLItemsInner.RequiredProperties = ["url"];

/**
 * @member {String} title
 */
PinMediaSourceImagesURLItemsInner.prototype['title'] = undefined;

/**
 * @member {String} description
 */
PinMediaSourceImagesURLItemsInner.prototype['description'] = undefined;

/**
 * Destination link for the image.
 * @member {String} link
 */
PinMediaSourceImagesURLItemsInner.prototype['link'] = undefined;

/**
 * URL of image to upload.
 * @member {String} url
 */
PinMediaSourceImagesURLItemsInner.prototype['url'] = undefined;






export default PinMediaSourceImagesURLItemsInner;

