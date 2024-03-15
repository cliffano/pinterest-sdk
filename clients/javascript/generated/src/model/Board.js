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
import BoardMedia from './BoardMedia';
import BoardOwner from './BoardOwner';

/**
 * The Board model module.
 * @module model/Board
 * @version 1.1.1-pre.0
 */
class Board {
    /**
     * Constructs a new <code>Board</code>.
     * Board
     * @alias module:model/Board
     * @param name {String} 
     */
    constructor(name) { 
        
        Board.initialize(this, name);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, name) { 
        obj['name'] = name;
    }

    /**
     * Constructs a <code>Board</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Board} obj Optional instance to populate.
     * @return {module:model/Board} The populated <code>Board</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Board();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('created_at')) {
                obj['created_at'] = ApiClient.convertToType(data['created_at'], 'Date');
            }
            if (data.hasOwnProperty('board_pins_modified_at')) {
                obj['board_pins_modified_at'] = ApiClient.convertToType(data['board_pins_modified_at'], 'Date');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('collaborator_count')) {
                obj['collaborator_count'] = ApiClient.convertToType(data['collaborator_count'], 'Number');
            }
            if (data.hasOwnProperty('pin_count')) {
                obj['pin_count'] = ApiClient.convertToType(data['pin_count'], 'Number');
            }
            if (data.hasOwnProperty('follower_count')) {
                obj['follower_count'] = ApiClient.convertToType(data['follower_count'], 'Number');
            }
            if (data.hasOwnProperty('media')) {
                obj['media'] = BoardMedia.constructFromObject(data['media']);
            }
            if (data.hasOwnProperty('owner')) {
                obj['owner'] = BoardOwner.constructFromObject(data['owner']);
            }
            if (data.hasOwnProperty('privacy')) {
                obj['privacy'] = ApiClient.convertToType(data['privacy'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>Board</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>Board</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of Board.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['id'] && !(typeof data['id'] === 'string' || data['id'] instanceof String)) {
            throw new Error("Expected the field `id` to be a primitive type in the JSON string but got " + data['id']);
        }
        // ensure the json data is a string
        if (data['name'] && !(typeof data['name'] === 'string' || data['name'] instanceof String)) {
            throw new Error("Expected the field `name` to be a primitive type in the JSON string but got " + data['name']);
        }
        // ensure the json data is a string
        if (data['description'] && !(typeof data['description'] === 'string' || data['description'] instanceof String)) {
            throw new Error("Expected the field `description` to be a primitive type in the JSON string but got " + data['description']);
        }
        // validate the optional field `media`
        if (data['media']) { // data not null
          BoardMedia.validateJSON(data['media']);
        }
        // validate the optional field `owner`
        if (data['owner']) { // data not null
          BoardOwner.validateJSON(data['owner']);
        }
        // ensure the json data is a string
        if (data['privacy'] && !(typeof data['privacy'] === 'string' || data['privacy'] instanceof String)) {
            throw new Error("Expected the field `privacy` to be a primitive type in the JSON string but got " + data['privacy']);
        }

        return true;
    }


}

Board.RequiredProperties = ["name"];

/**
 * @member {String} id
 */
Board.prototype['id'] = undefined;

/**
 * Date and time of board creation.
 * @member {Date} created_at
 */
Board.prototype['created_at'] = undefined;

/**
 * Date and time of last board pins modified.
 * @member {Date} board_pins_modified_at
 */
Board.prototype['board_pins_modified_at'] = undefined;

/**
 * @member {String} name
 */
Board.prototype['name'] = undefined;

/**
 * @member {String} description
 */
Board.prototype['description'] = undefined;

/**
 * Count of collaborators on the board.
 * @member {Number} collaborator_count
 */
Board.prototype['collaborator_count'] = undefined;

/**
 * Count of pins on the board.
 * @member {Number} pin_count
 */
Board.prototype['pin_count'] = undefined;

/**
 * Board follower count.
 * @member {Number} follower_count
 */
Board.prototype['follower_count'] = undefined;

/**
 * @member {module:model/BoardMedia} media
 */
Board.prototype['media'] = undefined;

/**
 * @member {module:model/BoardOwner} owner
 */
Board.prototype['owner'] = undefined;

/**
 * Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
 * @member {module:model/Board.PrivacyEnum} privacy
 * @default 'PUBLIC'
 */
Board.prototype['privacy'] = 'PUBLIC';





/**
 * Allowed values for the <code>privacy</code> property.
 * @enum {String}
 * @readonly
 */
Board['PrivacyEnum'] = {

    /**
     * value: "PUBLIC"
     * @const
     */
    "PUBLIC": "PUBLIC",

    /**
     * value: "PROTECTED"
     * @const
     */
    "PROTECTED": "PROTECTED",

    /**
     * value: "SECRET"
     * @const
     */
    "SECRET": "SECRET"
};



export default Board;
