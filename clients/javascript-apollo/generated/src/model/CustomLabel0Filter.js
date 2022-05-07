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
import CatalogsProductGroupMultipleStringCriteria from './CatalogsProductGroupMultipleStringCriteria';

/**
 * The CustomLabel0Filter model module.
 * @module model/CustomLabel0Filter
 * @version 5.3.0
 */
class CustomLabel0Filter {
    /**
     * @member {CatalogsProductGroupMultipleStringCriteria} CUSTOM_LABEL_0
     * @type {CatalogsProductGroupMultipleStringCriteria}
     */
    CUSTOM_LABEL_0;

    

    /**
     * Constructs a new <code>CustomLabel0Filter</code>.
     * @alias module:model/CustomLabel0Filter
     * @param cUSTOMLABEL0 {CatalogsProductGroupMultipleStringCriteria} 
     */
    constructor(cUSTOMLABEL0) { 
        
        CustomLabel0Filter.initialize(this, cUSTOMLABEL0);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, cUSTOMLABEL0) { 
        obj['CUSTOM_LABEL_0'] = cUSTOMLABEL0;
    }

    /**
     * Constructs a <code>CustomLabel0Filter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CustomLabel0Filter} obj Optional instance to populate.
     * @return {module:model/CustomLabel0Filter} The populated <code>CustomLabel0Filter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CustomLabel0Filter();

            if (data.hasOwnProperty('CUSTOM_LABEL_0')) {
                obj['CUSTOM_LABEL_0'] = CatalogsProductGroupMultipleStringCriteria.constructFromObject(data['CUSTOM_LABEL_0']);
            }
        }
        return obj;
    }
}



export default CustomLabel0Filter;

