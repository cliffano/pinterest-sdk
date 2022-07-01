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

/**
 * The ImageDetails model module.
 * @module model/ImageDetails
 * @version 5.3.0
 */
class ImageDetails {
    /**
     * @member {Number} width
     * @type {Number}
     */
    width;
    /**
     * @member {Number} height
     * @type {Number}
     */
    height;
    /**
     * @member {String} url
     * @type {String}
     */
    url;

    

    /**
     * Constructs a new <code>ImageDetails</code>.
     * @alias module:model/ImageDetails
     * @param width {Number} 
     * @param height {Number} 
     * @param url {String} 
     */
    constructor(width, height, url) { 
        
        ImageDetails.initialize(this, width, height, url);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, width, height, url) { 
        obj['width'] = width;
        obj['height'] = height;
        obj['url'] = url;
    }

    /**
     * Constructs a <code>ImageDetails</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ImageDetails} obj Optional instance to populate.
     * @return {module:model/ImageDetails} The populated <code>ImageDetails</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ImageDetails();

            if (data.hasOwnProperty('width')) {
                obj['width'] = ApiClient.convertToType(data['width'], 'Number');
            }
            if (data.hasOwnProperty('height')) {
                obj['height'] = ApiClient.convertToType(data['height'], 'Number');
            }
            if (data.hasOwnProperty('url')) {
                obj['url'] = ApiClient.convertToType(data['url'], 'String');
            }
        }
        return obj;
    }
}



export default ImageDetails;

