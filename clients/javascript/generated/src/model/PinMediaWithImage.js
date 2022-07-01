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
import ImageDetails from './ImageDetails';
import PinMedia from './PinMedia';
import PinMediaWithImageAllOf from './PinMediaWithImageAllOf';

/**
 * The PinMediaWithImage model module.
 * @module model/PinMediaWithImage
 * @version 1.0.1-pre.0
 */
class PinMediaWithImage {
    /**
     * Constructs a new <code>PinMediaWithImage</code>.
     * Pin with image.
     * @alias module:model/PinMediaWithImage
     * @extends module:model/PinMedia
     * @implements module:model/PinMediaWithImageAllOf
     * @implements module:model/PinMedia
     */
    constructor() { 
        PinMediaWithImageAllOf.initialize(this);PinMedia.initialize(this);
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
            PinMediaWithImageAllOf.constructFromObject(data, obj);
            PinMedia.constructFromObject(data, obj);

            if (data.hasOwnProperty('images')) {
                obj['images'] = ApiClient.convertToType(data['images'], {'String': ImageDetails});
            }
        }
        return obj;
    }


}

/**
 * @member {Object.<String, module:model/ImageDetails>} images
 */
PinMediaWithImage.prototype['images'] = undefined;


// Implement PinMediaWithImageAllOf interface:
/**
 * @member {Object.<String, module:model/ImageDetails>} images
 */
PinMediaWithImageAllOf.prototype['images'] = undefined;
// Implement PinMedia interface:
/**
 * @member {String} media_type
 */
PinMedia.prototype['media_type'] = undefined;




export default PinMediaWithImage;

