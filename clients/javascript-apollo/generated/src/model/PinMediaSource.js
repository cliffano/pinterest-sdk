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
import PinMediaSourceImageBase64 from './PinMediaSourceImageBase64';
import PinMediaSourceImageURL from './PinMediaSourceImageURL';
import PinMediaSourceVideoID from './PinMediaSourceVideoID';

/**
 * The PinMediaSource model module.
 * @module model/PinMediaSource
 * @version 5.3.0
 */
class PinMediaSource {
    /**
     * @member {PinMediaSource.SourceTypeEnum} source_type
     * @type {PinMediaSource.SourceTypeEnum}
     */
    source_type;
    /**
     * @member {PinMediaSource.ContentTypeEnum} content_type
     * @type {PinMediaSource.ContentTypeEnum}
     */
    content_type;
    /**
     * @member {String} data
     * @type {String}
     */
    data;
    /**
     * @member {String} url
     * @type {String}
     */
    url;
    /**
     * @member {String} cover_image_url
     * @type {String}
     */
    cover_image_url;
    /**
     * @member {String} media_id
     * @type {String}
     */
    media_id;

    /**
     * @member {PinMediaSourceImageBase64.SourceTypeEnum} source_type
     * @type {PinMediaSourceImageBase64.SourceTypeEnum}
     */
    #source_type;
    /**
     * @member {PinMediaSourceImageBase64.ContentTypeEnum} content_type
     * @type {PinMediaSourceImageBase64.ContentTypeEnum}
     */
    #content_type;
    /**
     * @member {String} data
     * @type {String}
     */
    #data;
    /**
     * @member {PinMediaSourceImageURL.SourceTypeEnum} source_type
     * @type {PinMediaSourceImageURL.SourceTypeEnum}
     */
    #source_type;
    /**
     * @member {String} url
     * @type {String}
     */
    #url;
    /**
     * @member {PinMediaSourceVideoID.SourceTypeEnum} source_type
     * @type {PinMediaSourceVideoID.SourceTypeEnum}
     */
    #source_type;
    /**
     * @member {String} cover_image_url
     * @type {String}
     */
    #cover_image_url;
    /**
     * @member {String} media_id
     * @type {String}
     */
    #media_id;
    

    /**
     * Constructs a new <code>PinMediaSource</code>.
     * Pin media source.
     * @alias module:model/PinMediaSource
     * @implements module:model/PinMediaSourceImageBase64
     * @implements module:model/PinMediaSourceImageURL
     * @implements module:model/PinMediaSourceVideoID
     * @param sourceType {PinMediaSource.SourceTypeEnum} 
     * @param contentType {PinMediaSource.ContentTypeEnum} 
     * @param data {String} 
     * @param url {String} 
     * @param coverImageUrl {String} 
     * @param mediaId {String} 
     */
    constructor(sourceType, contentType, data, url, coverImageUrl, mediaId) { 
        PinMediaSourceImageBase64.initialize(this, sourceType, contentType, data);PinMediaSourceImageURL.initialize(this, sourceType, url);PinMediaSourceVideoID.initialize(this, sourceType, coverImageUrl, mediaId);
        PinMediaSource.initialize(this, sourceType, contentType, data, url, coverImageUrl, mediaId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, sourceType, contentType, data, url, coverImageUrl, mediaId) { 
        obj['source_type'] = sourceType;
        obj['content_type'] = contentType;
        obj['data'] = data;
        obj['url'] = url;
        obj['cover_image_url'] = coverImageUrl;
        obj['media_id'] = mediaId;
    }

    /**
     * Constructs a <code>PinMediaSource</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinMediaSource} obj Optional instance to populate.
     * @return {module:model/PinMediaSource} The populated <code>PinMediaSource</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinMediaSource();
            PinMediaSourceImageBase64.constructFromObject(data, obj);
            PinMediaSourceImageURL.constructFromObject(data, obj);
            PinMediaSourceVideoID.constructFromObject(data, obj);

            if (data.hasOwnProperty('source_type')) {
                obj['source_type'] = ApiClient.convertToType(data['source_type'], 'String');
            }
            if (data.hasOwnProperty('content_type')) {
                obj['content_type'] = ApiClient.convertToType(data['content_type'], 'String');
            }
            if (data.hasOwnProperty('data')) {
                obj['data'] = ApiClient.convertToType(data['data'], 'String');
            }
            if (data.hasOwnProperty('url')) {
                obj['url'] = ApiClient.convertToType(data['url'], 'String');
            }
            if (data.hasOwnProperty('cover_image_url')) {
                obj['cover_image_url'] = ApiClient.convertToType(data['cover_image_url'], 'String');
            }
            if (data.hasOwnProperty('media_id')) {
                obj['media_id'] = ApiClient.convertToType(data['media_id'], 'String');
            }
        }
        return obj;
    }
}


/**
 * Allowed values for the <code>source_type</code> property.
 * @enum {String}
 * @readonly
 */
PinMediaSource['SourceTypeEnum'] = {

    /**
     * value: "video_id"
     * @const
     */
    "video_id": "video_id"
};


/**
 * Allowed values for the <code>content_type</code> property.
 * @enum {String}
 * @readonly
 */
PinMediaSource['ContentTypeEnum'] = {

    /**
     * value: "image/jpeg"
     * @const
     */
    "jpeg": "image/jpeg",

    /**
     * value: "image/png"
     * @const
     */
    "png": "image/png"
};



export default PinMediaSource;

