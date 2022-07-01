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
import CatalogsProductGroupFilterKeys from './CatalogsProductGroupFilterKeys';

/**
 * The CatalogsProductGroupFiltersAllOf model module.
 * @module model/CatalogsProductGroupFiltersAllOf
 * @version 1.0.1-pre.0
 */
class CatalogsProductGroupFiltersAllOf {
    /**
     * Constructs a new <code>CatalogsProductGroupFiltersAllOf</code>.
     * @alias module:model/CatalogsProductGroupFiltersAllOf
     */
    constructor() { 
        
        CatalogsProductGroupFiltersAllOf.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CatalogsProductGroupFiltersAllOf</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsProductGroupFiltersAllOf} obj Optional instance to populate.
     * @return {module:model/CatalogsProductGroupFiltersAllOf} The populated <code>CatalogsProductGroupFiltersAllOf</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsProductGroupFiltersAllOf();

            if (data.hasOwnProperty('all_of')) {
                obj['all_of'] = ApiClient.convertToType(data['all_of'], [CatalogsProductGroupFilterKeys]);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/CatalogsProductGroupFilterKeys>} all_of
 */
CatalogsProductGroupFiltersAllOf.prototype['all_of'] = undefined;






export default CatalogsProductGroupFiltersAllOf;

