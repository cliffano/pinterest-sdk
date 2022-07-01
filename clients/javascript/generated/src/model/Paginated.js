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
 * The Paginated model module.
 * @module model/Paginated
 * @version 1.0.1-pre.0
 */
class Paginated {
    /**
     * Constructs a new <code>Paginated</code>.
     * @alias module:model/Paginated
     * @param items {Array.<Object>} 
     */
    constructor(items) { 
        
        Paginated.initialize(this, items);
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
     * Constructs a <code>Paginated</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Paginated} obj Optional instance to populate.
     * @return {module:model/Paginated} The populated <code>Paginated</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Paginated();

            if (data.hasOwnProperty('items')) {
                obj['items'] = ApiClient.convertToType(data['items'], [Object]);
            }
            if (data.hasOwnProperty('bookmark')) {
                obj['bookmark'] = ApiClient.convertToType(data['bookmark'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<Object>} items
 */
Paginated.prototype['items'] = undefined;

/**
 * @member {String} bookmark
 */
Paginated.prototype['bookmark'] = undefined;






export default Paginated;

