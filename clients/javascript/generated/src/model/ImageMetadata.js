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
import ImageMetadataImages from './ImageMetadataImages';

/**
 * The ImageMetadata model module.
 * @module model/ImageMetadata
 * @version 1.1.1-pre.0
 */
class ImageMetadata {
    /**
     * Constructs a new <code>ImageMetadata</code>.
     * @alias module:model/ImageMetadata
     */
    constructor() { 
        
        ImageMetadata.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ImageMetadata</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ImageMetadata} obj Optional instance to populate.
     * @return {module:model/ImageMetadata} The populated <code>ImageMetadata</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ImageMetadata();

            if (data.hasOwnProperty('item_type')) {
                obj['item_type'] = ApiClient.convertToType(data['item_type'], 'String');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('link')) {
                obj['link'] = ApiClient.convertToType(data['link'], 'String');
            }
            if (data.hasOwnProperty('images')) {
                obj['images'] = ImageMetadataImages.constructFromObject(data['images']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>ImageMetadata</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>ImageMetadata</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['item_type'] && !(typeof data['item_type'] === 'string' || data['item_type'] instanceof String)) {
            throw new Error("Expected the field `item_type` to be a primitive type in the JSON string but got " + data['item_type']);
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
        // validate the optional field `images`
        if (data['images']) { // data not null
          ImageMetadataImages.validateJSON(data['images']);
        }

        return true;
    }


}



/**
 * @member {String} item_type
 */
ImageMetadata.prototype['item_type'] = undefined;

/**
 * @member {String} title
 */
ImageMetadata.prototype['title'] = undefined;

/**
 * @member {String} description
 */
ImageMetadata.prototype['description'] = undefined;

/**
 * @member {String} link
 */
ImageMetadata.prototype['link'] = undefined;

/**
 * @member {module:model/ImageMetadataImages} images
 */
ImageMetadata.prototype['images'] = undefined;






export default ImageMetadata;

