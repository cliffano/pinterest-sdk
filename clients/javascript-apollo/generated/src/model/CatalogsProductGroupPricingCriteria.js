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
 * The CatalogsProductGroupPricingCriteria model module.
 * @module model/CatalogsProductGroupPricingCriteria
 * @version 5.3.0
 */
class CatalogsProductGroupPricingCriteria {
    /**
     * @member {Boolean} inclusion
     * @type {Boolean}
     */
    inclusion;
    /**
     * @member {Number} values
     * @type {Number}
     */
    values;
    /**
     * @member {Boolean} negated
     * @type {Boolean}
     */
    negated;

    

    /**
     * Constructs a new <code>CatalogsProductGroupPricingCriteria</code>.
     * @alias module:model/CatalogsProductGroupPricingCriteria
     * @param inclusion {Boolean} 
     * @param values {Number} 
     * @param negated {Boolean} 
     */
    constructor(inclusion, values, negated) { 
        
        CatalogsProductGroupPricingCriteria.initialize(this, inclusion, values, negated);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, inclusion, values, negated) { 
        obj['inclusion'] = inclusion;
        obj['values'] = values;
        obj['negated'] = negated;
    }

    /**
     * Constructs a <code>CatalogsProductGroupPricingCriteria</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsProductGroupPricingCriteria} obj Optional instance to populate.
     * @return {module:model/CatalogsProductGroupPricingCriteria} The populated <code>CatalogsProductGroupPricingCriteria</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsProductGroupPricingCriteria();

            if (data.hasOwnProperty('inclusion')) {
                obj['inclusion'] = ApiClient.convertToType(data['inclusion'], 'Boolean');
            }
            if (data.hasOwnProperty('values')) {
                obj['values'] = ApiClient.convertToType(data['values'], 'Number');
            }
            if (data.hasOwnProperty('negated')) {
                obj['negated'] = ApiClient.convertToType(data['negated'], 'Boolean');
            }
        }
        return obj;
    }
}



export default CatalogsProductGroupPricingCriteria;

