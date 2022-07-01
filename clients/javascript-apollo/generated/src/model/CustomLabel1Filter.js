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
import CatalogsProductGroupMultipleStringCriteria from './CatalogsProductGroupMultipleStringCriteria';

/**
 * The CustomLabel1Filter model module.
 * @module model/CustomLabel1Filter
 * @version 5.3.0
 */
class CustomLabel1Filter {
    /**
     * @member {CatalogsProductGroupMultipleStringCriteria} CUSTOM_LABEL_1
     * @type {CatalogsProductGroupMultipleStringCriteria}
     */
    CUSTOM_LABEL_1;

    

    /**
     * Constructs a new <code>CustomLabel1Filter</code>.
     * @alias module:model/CustomLabel1Filter
     * @param cUSTOMLABEL1 {CatalogsProductGroupMultipleStringCriteria} 
     */
    constructor(cUSTOMLABEL1) { 
        
        CustomLabel1Filter.initialize(this, cUSTOMLABEL1);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, cUSTOMLABEL1) { 
        obj['CUSTOM_LABEL_1'] = cUSTOMLABEL1;
    }

    /**
     * Constructs a <code>CustomLabel1Filter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CustomLabel1Filter} obj Optional instance to populate.
     * @return {module:model/CustomLabel1Filter} The populated <code>CustomLabel1Filter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CustomLabel1Filter();

            if (data.hasOwnProperty('CUSTOM_LABEL_1')) {
                obj['CUSTOM_LABEL_1'] = CatalogsProductGroupMultipleStringCriteria.constructFromObject(data['CUSTOM_LABEL_1']);
            }
        }
        return obj;
    }
}



export default CustomLabel1Filter;

