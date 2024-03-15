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
import PinMedia from './PinMedia';

/**
 * The PinMediaWithImage model module.
 * @module model/PinMediaWithImage
 * @version 1.1.1-pre.0
 */
class PinMediaWithImage {
    /**
     * Constructs a new <code>PinMediaWithImage</code>.
     * Pin with image.
     * @alias module:model/PinMediaWithImage
     * @extends module:model/PinMedia
     * @implements module:model/PinMedia
     */
    constructor() { 
        PinMedia.initialize(this);
        PinMediaWithImage.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>PinMediaWithImage</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinMediaWithImage} obj Optional instance to populate.
     * @return {module:model/PinMediaWithImage} The populated <code>PinMediaWithImage</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinMediaWithImage();
            PinMedia.constructFromObject(data, obj);
            PinMedia.constructFromObject(data, obj);

            if (data.hasOwnProperty('images')) {
                obj['images'] = ImageMetadataImages.constructFromObject(data['images']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>PinMediaWithImage</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>PinMediaWithImage</code>.
     */
    static validateJSON(data) {
        // validate the optional field `images`
        if (data['images']) { // data not null
          ImageMetadataImages.validateJSON(data['images']);
        }

        return true;
    }


}



/**
 * @member {module:model/ImageMetadataImages} images
 */
PinMediaWithImage.prototype['images'] = undefined;


// Implement PinMedia interface:
/**
 * @member {String} media_type
 */
PinMedia.prototype['media_type'] = undefined;




export default PinMediaWithImage;
