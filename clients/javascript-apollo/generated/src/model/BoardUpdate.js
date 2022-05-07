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

/**
 * The BoardUpdate model module.
 * @module model/BoardUpdate
 * @version 5.3.0
 */
class BoardUpdate {
    /**
     * @member {String} name
     * @type {String}
     */
    name;
    /**
     * @member {String} description
     * @type {String}
     */
    description;
    /**
     * @member {BoardUpdate.PrivacyEnum} privacy
     * @type {BoardUpdate.PrivacyEnum}
     */
    privacy;

    

    /**
     * Constructs a new <code>BoardUpdate</code>.
     * Board fields for updates
     * @alias module:model/BoardUpdate
     */
    constructor() { 
        
        BoardUpdate.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>BoardUpdate</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/BoardUpdate} obj Optional instance to populate.
     * @return {module:model/BoardUpdate} The populated <code>BoardUpdate</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new BoardUpdate();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('privacy')) {
                obj['privacy'] = ApiClient.convertToType(data['privacy'], 'String');
            }
        }
        return obj;
    }
}


/**
 * Allowed values for the <code>privacy</code> property.
 * @enum {String}
 * @readonly
 */
BoardUpdate['PrivacyEnum'] = {

    /**
     * value: "PUBLIC"
     * @const
     */
    "PUBLIC": "PUBLIC",

    /**
     * value: "SECRET"
     * @const
     */
    "SECRET": "SECRET"
};



export default BoardUpdate;

