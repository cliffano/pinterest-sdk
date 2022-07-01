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

/**
 * The BoardOwner model module.
 * @module model/BoardOwner
 * @version 5.3.0
 */
class BoardOwner {
    /**
     * @member {String} username
     * @type {String}
     */
    username;

    

    /**
     * Constructs a new <code>BoardOwner</code>.
     * @alias module:model/BoardOwner
     */
    constructor() { 
        
        BoardOwner.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>BoardOwner</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/BoardOwner} obj Optional instance to populate.
     * @return {module:model/BoardOwner} The populated <code>BoardOwner</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new BoardOwner();

            if (data.hasOwnProperty('username')) {
                obj['username'] = ApiClient.convertToType(data['username'], 'String');
            }
        }
        return obj;
    }
}



export default BoardOwner;

