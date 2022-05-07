/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import MediaUploadAllOfUploadParameters from './MediaUploadAllOfUploadParameters';
import MediaUploadType from './MediaUploadType';

/**
 * The MediaUploadAllOf model module.
 * @module model/MediaUploadAllOf
 * @version 1.0.0-pre.0
 */
class MediaUploadAllOf {
    /**
     * Constructs a new <code>MediaUploadAllOf</code>.
     * @alias module:model/MediaUploadAllOf
     */
    constructor() { 
        
        MediaUploadAllOf.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>MediaUploadAllOf</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/MediaUploadAllOf} obj Optional instance to populate.
     * @return {module:model/MediaUploadAllOf} The populated <code>MediaUploadAllOf</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new MediaUploadAllOf();

            if (data.hasOwnProperty('media_id')) {
                obj['media_id'] = ApiClient.convertToType(data['media_id'], 'String');
            }
            if (data.hasOwnProperty('media_type')) {
                obj['media_type'] = ApiClient.convertToType(data['media_type'], MediaUploadType);
            }
            if (data.hasOwnProperty('upload_url')) {
                obj['upload_url'] = ApiClient.convertToType(data['upload_url'], 'String');
            }
            if (data.hasOwnProperty('upload_parameters')) {
                obj['upload_parameters'] = MediaUploadAllOfUploadParameters.constructFromObject(data['upload_parameters']);
            }
        }
        return obj;
    }


}

/**
 * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
 * @member {String} media_id
 */
MediaUploadAllOf.prototype['media_id'] = undefined;

/**
 * @member {module:model/MediaUploadType} media_type
 */
MediaUploadAllOf.prototype['media_type'] = undefined;

/**
 * The URL where you will POST your media file.
 * @member {String} upload_url
 */
MediaUploadAllOf.prototype['upload_url'] = undefined;

/**
 * @member {module:model/MediaUploadAllOfUploadParameters} upload_parameters
 */
MediaUploadAllOf.prototype['upload_parameters'] = undefined;






export default MediaUploadAllOf;

