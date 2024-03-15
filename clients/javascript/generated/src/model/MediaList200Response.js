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
import MediaUploadDetails from './MediaUploadDetails';
import Paginated from './Paginated';

/**
 * The MediaList200Response model module.
 * @module model/MediaList200Response
 * @version 1.1.1-pre.0
 */
class MediaList200Response {
    /**
     * Constructs a new <code>MediaList200Response</code>.
     * @alias module:model/MediaList200Response
     * @implements module:model/Paginated
     * @param items {Array.<module:model/MediaUploadDetails>} Media
     */
    constructor(items) { 
        Paginated.initialize(this, items);
        MediaList200Response.initialize(this, items);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, items) { 
        obj['items'] = items;
    }

    /**
     * Constructs a <code>MediaList200Response</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/MediaList200Response} obj Optional instance to populate.
     * @return {module:model/MediaList200Response} The populated <code>MediaList200Response</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new MediaList200Response();
            Paginated.constructFromObject(data, obj);

            if (data.hasOwnProperty('items')) {
                obj['items'] = ApiClient.convertToType(data['items'], [MediaUploadDetails]);
            }
            if (data.hasOwnProperty('bookmark')) {
                obj['bookmark'] = ApiClient.convertToType(data['bookmark'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>MediaList200Response</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>MediaList200Response</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of MediaList200Response.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        if (data['items']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['items'])) {
                throw new Error("Expected the field `items` to be an array in the JSON data but got " + data['items']);
            }
            // validate the optional field `items` (array)
            for (const item of data['items']) {
                MediaUploadDetails.validateJSON(item);
            };
        }
        // ensure the json data is a string
        if (data['bookmark'] && !(typeof data['bookmark'] === 'string' || data['bookmark'] instanceof String)) {
            throw new Error("Expected the field `bookmark` to be a primitive type in the JSON string but got " + data['bookmark']);
        }

        return true;
    }


}

MediaList200Response.RequiredProperties = ["items"];

/**
 * Media
 * @member {Array.<module:model/MediaUploadDetails>} items
 */
MediaList200Response.prototype['items'] = undefined;

/**
 * @member {String} bookmark
 */
MediaList200Response.prototype['bookmark'] = undefined;


// Implement Paginated interface:
/**
 * @member {Array.<Object>} items
 */
Paginated.prototype['items'] = undefined;
/**
 * @member {String} bookmark
 */
Paginated.prototype['bookmark'] = undefined;




export default MediaList200Response;

