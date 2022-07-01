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
import MediaUploadType from './MediaUploadType';

/**
 * The MediaUploadRequest model module.
 * @module model/MediaUploadRequest
 * @version 1.0.1-pre.0
 */
class MediaUploadRequest {
    /**
     * Constructs a new <code>MediaUploadRequest</code>.
     * Media upload request
     * @alias module:model/MediaUploadRequest
     * @param mediaType {module:model/MediaUploadType} 
     */
    constructor(mediaType) { 
        
        MediaUploadRequest.initialize(this, mediaType);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, mediaType) { 
        obj['media_type'] = mediaType;
    }

    /**
     * Constructs a <code>MediaUploadRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/MediaUploadRequest} obj Optional instance to populate.
     * @return {module:model/MediaUploadRequest} The populated <code>MediaUploadRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new MediaUploadRequest();

            if (data.hasOwnProperty('media_type')) {
                obj['media_type'] = ApiClient.convertToType(data['media_type'], MediaUploadType);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/MediaUploadType} media_type
 */
MediaUploadRequest.prototype['media_type'] = undefined;






export default MediaUploadRequest;

