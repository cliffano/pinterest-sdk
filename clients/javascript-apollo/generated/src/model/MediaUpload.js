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
import MediaUploadAllOf from './MediaUploadAllOf';
import MediaUploadAllOfUploadParameters from './MediaUploadAllOfUploadParameters';
import MediaUploadType from './MediaUploadType';

/**
 * The MediaUpload model module.
 * @module model/MediaUpload
 * @version 5.3.0
 */
class MediaUpload {
    /**
     * @member {String} media_id
     * @type {String}
     */
    media_id;
    /**
     * @member {MediaUploadType} media_type
     * @type {MediaUploadType}
     */
    media_type;
    /**
     * @member {String} upload_url
     * @type {String}
     */
    upload_url;
    /**
     * @member {MediaUploadAllOfUploadParameters} upload_parameters
     * @type {MediaUploadAllOfUploadParameters}
     */
    upload_parameters;

    /**
     * @member {String} media_id
     * @type {String}
     */
    #media_id;
    /**
     * @member {MediaUploadType} media_type
     * @type {MediaUploadType}
     */
    #media_type;
    /**
     * @member {String} upload_url
     * @type {String}
     */
    #upload_url;
    /**
     * @member {MediaUploadAllOfUploadParameters} upload_parameters
     * @type {MediaUploadAllOfUploadParameters}
     */
    #upload_parameters;
    

    /**
     * Constructs a new <code>MediaUpload</code>.
     * Media upload that has been registered but not uploaded/processed yet.
     * @alias module:model/MediaUpload
     * @implements module:model/MediaUploadAllOf
     */
    constructor() { 
        MediaUploadAllOf.initialize(this);
        MediaUpload.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>MediaUpload</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/MediaUpload} obj Optional instance to populate.
     * @return {module:model/MediaUpload} The populated <code>MediaUpload</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new MediaUpload();
            MediaUploadAllOf.constructFromObject(data, obj);

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



export default MediaUpload;

