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
import BoardOwner from './BoardOwner';
import PinMedia from './PinMedia';
import PinMediaSource from './PinMediaSource';

/**
 * The Pin model module.
 * @module model/Pin
 * @version 5.3.0
 */
class Pin {
    /**
     * @member {String} id
     * @type {String}
     */
    id;
    /**
     * @member {Date} created_at
     * @type {Date}
     */
    created_at;
    /**
     * @member {String} link
     * @type {String}
     */
    link;
    /**
     * @member {String} title
     * @type {String}
     */
    title;
    /**
     * @member {String} description
     * @type {String}
     */
    description;
    /**
     * @member {String} alt_text
     * @type {String}
     */
    alt_text;
    /**
     * @member {String} board_id
     * @type {String}
     */
    board_id;
    /**
     * @member {String} board_section_id
     * @type {String}
     */
    board_section_id;
    /**
     * @member {BoardOwner} board_owner
     * @type {BoardOwner}
     */
    board_owner;
    /**
     * @member {PinMedia} media
     * @type {PinMedia}
     */
    media;
    /**
     * @member {PinMediaSource} media_source
     * @type {PinMediaSource}
     */
    media_source;

    

    /**
     * Constructs a new <code>Pin</code>.
     * Pin
     * @alias module:model/Pin
     */
    constructor() { 
        
        Pin.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Pin</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Pin} obj Optional instance to populate.
     * @return {module:model/Pin} The populated <code>Pin</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Pin();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('created_at')) {
                obj['created_at'] = ApiClient.convertToType(data['created_at'], 'Date');
            }
            if (data.hasOwnProperty('link')) {
                obj['link'] = ApiClient.convertToType(data['link'], 'String');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('alt_text')) {
                obj['alt_text'] = ApiClient.convertToType(data['alt_text'], 'String');
            }
            if (data.hasOwnProperty('board_id')) {
                obj['board_id'] = ApiClient.convertToType(data['board_id'], 'String');
            }
            if (data.hasOwnProperty('board_section_id')) {
                obj['board_section_id'] = ApiClient.convertToType(data['board_section_id'], 'String');
            }
            if (data.hasOwnProperty('board_owner')) {
                obj['board_owner'] = ApiClient.convertToType(data['board_owner'], BoardOwner);
            }
            if (data.hasOwnProperty('media')) {
                obj['media'] = ApiClient.convertToType(data['media'], PinMedia);
            }
            if (data.hasOwnProperty('media_source')) {
                obj['media_source'] = ApiClient.convertToType(data['media_source'], PinMediaSource);
            }
        }
        return obj;
    }
}



export default Pin;

