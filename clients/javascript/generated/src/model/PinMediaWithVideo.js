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
 * The PinMediaWithVideo model module.
 * @module model/PinMediaWithVideo
 * @version 1.1.1-pre.0
 */
class PinMediaWithVideo {
    /**
     * Constructs a new <code>PinMediaWithVideo</code>.
     * Pin with video.
     * @alias module:model/PinMediaWithVideo
     * @extends module:model/PinMedia
     * @implements module:model/PinMedia
     */
    constructor() { 
        PinMedia.initialize(this);
        PinMediaWithVideo.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>PinMediaWithVideo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinMediaWithVideo} obj Optional instance to populate.
     * @return {module:model/PinMediaWithVideo} The populated <code>PinMediaWithVideo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinMediaWithVideo();
            PinMedia.constructFromObject(data, obj);
            PinMedia.constructFromObject(data, obj);

            if (data.hasOwnProperty('images')) {
                obj['images'] = ImageMetadataImages.constructFromObject(data['images']);
            }
            if (data.hasOwnProperty('cover_image_url')) {
                obj['cover_image_url'] = ApiClient.convertToType(data['cover_image_url'], 'String');
            }
            if (data.hasOwnProperty('video_url')) {
                obj['video_url'] = ApiClient.convertToType(data['video_url'], 'String');
            }
            if (data.hasOwnProperty('duration')) {
                obj['duration'] = ApiClient.convertToType(data['duration'], 'Number');
            }
            if (data.hasOwnProperty('height')) {
                obj['height'] = ApiClient.convertToType(data['height'], 'Number');
            }
            if (data.hasOwnProperty('width')) {
                obj['width'] = ApiClient.convertToType(data['width'], 'Number');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>PinMediaWithVideo</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>PinMediaWithVideo</code>.
     */
    static validateJSON(data) {
        // validate the optional field `images`
        if (data['images']) { // data not null
          ImageMetadataImages.validateJSON(data['images']);
        }
        // ensure the json data is a string
        if (data['cover_image_url'] && !(typeof data['cover_image_url'] === 'string' || data['cover_image_url'] instanceof String)) {
            throw new Error("Expected the field `cover_image_url` to be a primitive type in the JSON string but got " + data['cover_image_url']);
        }
        // ensure the json data is a string
        if (data['video_url'] && !(typeof data['video_url'] === 'string' || data['video_url'] instanceof String)) {
            throw new Error("Expected the field `video_url` to be a primitive type in the JSON string but got " + data['video_url']);
        }

        return true;
    }


}



/**
 * @member {module:model/ImageMetadataImages} images
 */
PinMediaWithVideo.prototype['images'] = undefined;

/**
 * @member {String} cover_image_url
 */
PinMediaWithVideo.prototype['cover_image_url'] = undefined;

/**
 * Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
 * @member {String} video_url
 */
PinMediaWithVideo.prototype['video_url'] = undefined;

/**
 * Duration (in milliseconds)
 * @member {Number} duration
 */
PinMediaWithVideo.prototype['duration'] = undefined;

/**
 * Height (in pixels)
 * @member {Number} height
 */
PinMediaWithVideo.prototype['height'] = undefined;

/**
 * Width (in pixels)
 * @member {Number} width
 */
PinMediaWithVideo.prototype['width'] = undefined;


// Implement PinMedia interface:
/**
 * @member {String} media_type
 */
PinMedia.prototype['media_type'] = undefined;




export default PinMediaWithVideo;
