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
import CatalogsProductGroupFilterKeys from './CatalogsProductGroupFilterKeys';

/**
 * The CatalogsProductGroupFiltersAnyOf model module.
 * @module model/CatalogsProductGroupFiltersAnyOf
 * @version 1.0.0-pre.0
 */
class CatalogsProductGroupFiltersAnyOf {
    /**
     * Constructs a new <code>CatalogsProductGroupFiltersAnyOf</code>.
     * @alias module:model/CatalogsProductGroupFiltersAnyOf
     */
    constructor() { 
        
        CatalogsProductGroupFiltersAnyOf.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CatalogsProductGroupFiltersAnyOf</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsProductGroupFiltersAnyOf} obj Optional instance to populate.
     * @return {module:model/CatalogsProductGroupFiltersAnyOf} The populated <code>CatalogsProductGroupFiltersAnyOf</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsProductGroupFiltersAnyOf();

            if (data.hasOwnProperty('any_of')) {
                obj['any_of'] = ApiClient.convertToType(data['any_of'], [CatalogsProductGroupFilterKeys]);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/CatalogsProductGroupFilterKeys>} any_of
 */
CatalogsProductGroupFiltersAnyOf.prototype['any_of'] = undefined;






export default CatalogsProductGroupFiltersAnyOf;

