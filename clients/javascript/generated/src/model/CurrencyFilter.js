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
import CatalogsProductGroupCurrencyCriteria from './CatalogsProductGroupCurrencyCriteria';

/**
 * The CurrencyFilter model module.
 * @module model/CurrencyFilter
 * @version 1.0.1-pre.0
 */
class CurrencyFilter {
    /**
     * Constructs a new <code>CurrencyFilter</code>.
     * @alias module:model/CurrencyFilter
     * @param CURRENCY {module:model/CatalogsProductGroupCurrencyCriteria} 
     */
    constructor(CURRENCY) { 
        
        CurrencyFilter.initialize(this, CURRENCY);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, CURRENCY) { 
        obj['CURRENCY'] = CURRENCY;
    }

    /**
     * Constructs a <code>CurrencyFilter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CurrencyFilter} obj Optional instance to populate.
     * @return {module:model/CurrencyFilter} The populated <code>CurrencyFilter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CurrencyFilter();

            if (data.hasOwnProperty('CURRENCY')) {
                obj['CURRENCY'] = CatalogsProductGroupCurrencyCriteria.constructFromObject(data['CURRENCY']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/CatalogsProductGroupCurrencyCriteria} CURRENCY
 */
CurrencyFilter.prototype['CURRENCY'] = undefined;






export default CurrencyFilter;

