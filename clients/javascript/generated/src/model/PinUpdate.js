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
import PinUpdateCarouselSlotsInner from './PinUpdateCarouselSlotsInner';

/**
 * The PinUpdate model module.
 * @module model/PinUpdate
 * @version 1.1.1-pre.0
 */
class PinUpdate {
    /**
     * Constructs a new <code>PinUpdate</code>.
     * Pin fields for updates
     * @alias module:model/PinUpdate
     */
    constructor() { 
        
        PinUpdate.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>PinUpdate</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinUpdate} obj Optional instance to populate.
     * @return {module:model/PinUpdate} The populated <code>PinUpdate</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinUpdate();

            if (data.hasOwnProperty('alt_text')) {
                obj['alt_text'] = ApiClient.convertToType(data['alt_text'], 'String');
            }
            if (data.hasOwnProperty('board_id')) {
                obj['board_id'] = ApiClient.convertToType(data['board_id'], 'String');
            }
            if (data.hasOwnProperty('board_section_id')) {
                obj['board_section_id'] = ApiClient.convertToType(data['board_section_id'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('link')) {
                obj['link'] = ApiClient.convertToType(data['link'], 'String');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('carousel_slots')) {
                obj['carousel_slots'] = ApiClient.convertToType(data['carousel_slots'], [PinUpdateCarouselSlotsInner]);
            }
            if (data.hasOwnProperty('note')) {
                obj['note'] = ApiClient.convertToType(data['note'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>PinUpdate</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>PinUpdate</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['alt_text'] && !(typeof data['alt_text'] === 'string' || data['alt_text'] instanceof String)) {
            throw new Error("Expected the field `alt_text` to be a primitive type in the JSON string but got " + data['alt_text']);
        }
        // ensure the json data is a string
        if (data['board_id'] && !(typeof data['board_id'] === 'string' || data['board_id'] instanceof String)) {
            throw new Error("Expected the field `board_id` to be a primitive type in the JSON string but got " + data['board_id']);
        }
        // ensure the json data is a string
        if (data['board_section_id'] && !(typeof data['board_section_id'] === 'string' || data['board_section_id'] instanceof String)) {
            throw new Error("Expected the field `board_section_id` to be a primitive type in the JSON string but got " + data['board_section_id']);
        }
        // ensure the json data is a string
        if (data['description'] && !(typeof data['description'] === 'string' || data['description'] instanceof String)) {
            throw new Error("Expected the field `description` to be a primitive type in the JSON string but got " + data['description']);
        }
        // ensure the json data is a string
        if (data['link'] && !(typeof data['link'] === 'string' || data['link'] instanceof String)) {
            throw new Error("Expected the field `link` to be a primitive type in the JSON string but got " + data['link']);
        }
        // ensure the json data is a string
        if (data['title'] && !(typeof data['title'] === 'string' || data['title'] instanceof String)) {
            throw new Error("Expected the field `title` to be a primitive type in the JSON string but got " + data['title']);
        }
        if (data['carousel_slots']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['carousel_slots'])) {
                throw new Error("Expected the field `carousel_slots` to be an array in the JSON data but got " + data['carousel_slots']);
            }
            // validate the optional field `carousel_slots` (array)
            for (const item of data['carousel_slots']) {
                PinUpdateCarouselSlotsInner.validateJSON(item);
            };
        }
        // ensure the json data is a string
        if (data['note'] && !(typeof data['note'] === 'string' || data['note'] instanceof String)) {
            throw new Error("Expected the field `note` to be a primitive type in the JSON string but got " + data['note']);
        }

        return true;
    }


}



/**
 * Pin's alternative text.
 * @member {String} alt_text
 */
PinUpdate.prototype['alt_text'] = undefined;

/**
 * The id of the board to move the Pin onto.
 * @member {String} board_id
 */
PinUpdate.prototype['board_id'] = undefined;

/**
 * <a href=\"https://help.pinterest.com/en/article/create-a-board-section\">Board section</a> ID.
 * @member {String} board_section_id
 */
PinUpdate.prototype['board_section_id'] = undefined;

/**
 * Pin description - 800 characters maximum.
 * @member {String} description
 */
PinUpdate.prototype['description'] = undefined;

/**
 * URL viewer is taken to when they click pin.
 * @member {String} link
 */
PinUpdate.prototype['link'] = undefined;

/**
 * The native pin title that creators explicitly prefer to display.
 * @member {String} title
 */
PinUpdate.prototype['title'] = undefined;

/**
 * Carousel Pin slots data.
 * @member {Array.<module:model/PinUpdateCarouselSlotsInner>} carousel_slots
 */
PinUpdate.prototype['carousel_slots'] = undefined;

/**
 * Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.
 * @member {String} note
 */
PinUpdate.prototype['note'] = undefined;






export default PinUpdate;

