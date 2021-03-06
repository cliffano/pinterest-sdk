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
import NonNullableCatalogsCurrency from './NonNullableCatalogsCurrency';

/**
 * The CatalogsProductGroupCurrencyCriteria model module.
 * @module model/CatalogsProductGroupCurrencyCriteria
 * @version 1.0.1-pre.0
 */
class CatalogsProductGroupCurrencyCriteria {
    /**
     * Constructs a new <code>CatalogsProductGroupCurrencyCriteria</code>.
     * @alias module:model/CatalogsProductGroupCurrencyCriteria
     * @param values {module:model/NonNullableCatalogsCurrency} 
     * @param negated {Boolean} 
     */
    constructor(values, negated) { 
        
        CatalogsProductGroupCurrencyCriteria.initialize(this, values, negated);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, values, negated) { 
        obj['values'] = values;
        obj['negated'] = negated;
    }

    /**
     * Constructs a <code>CatalogsProductGroupCurrencyCriteria</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsProductGroupCurrencyCriteria} obj Optional instance to populate.
     * @return {module:model/CatalogsProductGroupCurrencyCriteria} The populated <code>CatalogsProductGroupCurrencyCriteria</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsProductGroupCurrencyCriteria();

            if (data.hasOwnProperty('values')) {
                obj['values'] = NonNullableCatalogsCurrency.constructFromObject(data['values']);
            }
            if (data.hasOwnProperty('negated')) {
                obj['negated'] = ApiClient.convertToType(data['negated'], 'Boolean');
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/NonNullableCatalogsCurrency} values
 */
CatalogsProductGroupCurrencyCriteria.prototype['values'] = undefined;

/**
 * @member {Boolean} negated
 */
CatalogsProductGroupCurrencyCriteria.prototype['negated'] = undefined;






export default CatalogsProductGroupCurrencyCriteria;

