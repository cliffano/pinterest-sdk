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
 * The CatalogsHotelAttributesAllOfMainImage model module.
 * @module model/CatalogsHotelAttributesAllOfMainImage
 * @version 1.1.1-pre.0
 */
class CatalogsHotelAttributesAllOfMainImage {
    /**
     * Constructs a new <code>CatalogsHotelAttributesAllOfMainImage</code>.
     * The main hotel image
     * @alias module:model/CatalogsHotelAttributesAllOfMainImage
     */
    constructor() { 
        
        CatalogsHotelAttributesAllOfMainImage.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CatalogsHotelAttributesAllOfMainImage</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsHotelAttributesAllOfMainImage} obj Optional instance to populate.
     * @return {module:model/CatalogsHotelAttributesAllOfMainImage} The populated <code>CatalogsHotelAttributesAllOfMainImage</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsHotelAttributesAllOfMainImage();

            if (data.hasOwnProperty('link')) {
                obj['link'] = ApiClient.convertToType(data['link'], 'String');
            }
            if (data.hasOwnProperty('tag')) {
                obj['tag'] = ApiClient.convertToType(data['tag'], ['String']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CatalogsHotelAttributesAllOfMainImage</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CatalogsHotelAttributesAllOfMainImage</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['link'] && !(typeof data['link'] === 'string' || data['link'] instanceof String)) {
            throw new Error("Expected the field `link` to be a primitive type in the JSON string but got " + data['link']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['tag'])) {
            throw new Error("Expected the field `tag` to be an array in the JSON data but got " + data['tag']);
        }

        return true;
    }


}



/**
 * <p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p>
 * @member {String} link
 */
CatalogsHotelAttributesAllOfMainImage.prototype['link'] = undefined;

/**
 * Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image
 * @member {Array.<String>} tag
 */
CatalogsHotelAttributesAllOfMainImage.prototype['tag'] = undefined;






export default CatalogsHotelAttributesAllOfMainImage;

