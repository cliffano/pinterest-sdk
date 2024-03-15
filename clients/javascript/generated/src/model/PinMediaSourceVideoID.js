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
 * The PinMediaSourceVideoID model module.
 * @module model/PinMediaSourceVideoID
 * @version 1.1.1-pre.0
 */
class PinMediaSourceVideoID {
    /**
     * Constructs a new <code>PinMediaSourceVideoID</code>.
     * Video ID-based media source
     * @alias module:model/PinMediaSourceVideoID
     * @param sourceType {module:model/PinMediaSourceVideoID.SourceTypeEnum} 
     * @param mediaId {String} 
     */
    constructor(sourceType, mediaId) { 
        
        PinMediaSourceVideoID.initialize(this, sourceType, mediaId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, sourceType, mediaId) { 
        obj['source_type'] = sourceType;
        obj['media_id'] = mediaId;
    }

    /**
     * Constructs a <code>PinMediaSourceVideoID</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinMediaSourceVideoID} obj Optional instance to populate.
     * @return {module:model/PinMediaSourceVideoID} The populated <code>PinMediaSourceVideoID</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinMediaSourceVideoID();

            if (data.hasOwnProperty('source_type')) {
                obj['source_type'] = ApiClient.convertToType(data['source_type'], 'String');
            }
            if (data.hasOwnProperty('cover_image_url')) {
                obj['cover_image_url'] = ApiClient.convertToType(data['cover_image_url'], 'String');
            }
            if (data.hasOwnProperty('cover_image_content_type')) {
                obj['cover_image_content_type'] = ApiClient.convertToType(data['cover_image_content_type'], 'String');
            }
            if (data.hasOwnProperty('cover_image_data')) {
                obj['cover_image_data'] = ApiClient.convertToType(data['cover_image_data'], 'String');
            }
            if (data.hasOwnProperty('media_id')) {
                obj['media_id'] = ApiClient.convertToType(data['media_id'], 'String');
            }
            if (data.hasOwnProperty('is_standard')) {
                obj['is_standard'] = ApiClient.convertToType(data['is_standard'], 'Boolean');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>PinMediaSourceVideoID</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>PinMediaSourceVideoID</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of PinMediaSourceVideoID.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['source_type'] && !(typeof data['source_type'] === 'string' || data['source_type'] instanceof String)) {
            throw new Error("Expected the field `source_type` to be a primitive type in the JSON string but got " + data['source_type']);
        }
        // ensure the json data is a string
        if (data['cover_image_url'] && !(typeof data['cover_image_url'] === 'string' || data['cover_image_url'] instanceof String)) {
            throw new Error("Expected the field `cover_image_url` to be a primitive type in the JSON string but got " + data['cover_image_url']);
        }
        // ensure the json data is a string
        if (data['cover_image_content_type'] && !(typeof data['cover_image_content_type'] === 'string' || data['cover_image_content_type'] instanceof String)) {
            throw new Error("Expected the field `cover_image_content_type` to be a primitive type in the JSON string but got " + data['cover_image_content_type']);
        }
        // ensure the json data is a string
        if (data['cover_image_data'] && !(typeof data['cover_image_data'] === 'string' || data['cover_image_data'] instanceof String)) {
            throw new Error("Expected the field `cover_image_data` to be a primitive type in the JSON string but got " + data['cover_image_data']);
        }
        // ensure the json data is a string
        if (data['media_id'] && !(typeof data['media_id'] === 'string' || data['media_id'] instanceof String)) {
            throw new Error("Expected the field `media_id` to be a primitive type in the JSON string but got " + data['media_id']);
        }

        return true;
    }


}

PinMediaSourceVideoID.RequiredProperties = ["source_type", "media_id"];

/**
 * @member {module:model/PinMediaSourceVideoID.SourceTypeEnum} source_type
 */
PinMediaSourceVideoID.prototype['source_type'] = undefined;

/**
 * Cover image url.
 * @member {String} cover_image_url
 */
PinMediaSourceVideoID.prototype['cover_image_url'] = undefined;

/**
 * Content type for cover image Base64.
 * @member {module:model/PinMediaSourceVideoID.CoverImageContentTypeEnum} cover_image_content_type
 */
PinMediaSourceVideoID.prototype['cover_image_content_type'] = undefined;

/**
 * Cover image Base64.
 * @member {String} cover_image_data
 */
PinMediaSourceVideoID.prototype['cover_image_data'] = undefined;

/**
 * @member {String} media_id
 */
PinMediaSourceVideoID.prototype['media_id'] = undefined;

/**
 * Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.
 * @member {Boolean} is_standard
 * @default true
 */
PinMediaSourceVideoID.prototype['is_standard'] = true;





/**
 * Allowed values for the <code>source_type</code> property.
 * @enum {String}
 * @readonly
 */
PinMediaSourceVideoID['SourceTypeEnum'] = {

    /**
     * value: "video_id"
     * @const
     */
    "video_id": "video_id"
};


/**
 * Allowed values for the <code>cover_image_content_type</code> property.
 * @enum {String}
 * @readonly
 */
PinMediaSourceVideoID['CoverImageContentTypeEnum'] = {

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



export default PinMediaSourceVideoID;
