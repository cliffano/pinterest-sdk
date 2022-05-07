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
import CatalogsProductGroupMultipleStringListCriteria from './CatalogsProductGroupMultipleStringListCriteria';

/**
 * The ProductType3Filter model module.
 * @module model/ProductType3Filter
 * @version 1.0.0-pre.0
 */
class ProductType3Filter {
    /**
     * Constructs a new <code>ProductType3Filter</code>.
     * @alias module:model/ProductType3Filter
     * @param pRODUCTTYPE3 {module:model/CatalogsProductGroupMultipleStringListCriteria} 
     */
    constructor(pRODUCTTYPE3) { 
        
        ProductType3Filter.initialize(this, pRODUCTTYPE3);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, pRODUCTTYPE3) { 
        obj['PRODUCT_TYPE_3'] = pRODUCTTYPE3;
    }

    /**
     * Constructs a <code>ProductType3Filter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ProductType3Filter} obj Optional instance to populate.
     * @return {module:model/ProductType3Filter} The populated <code>ProductType3Filter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ProductType3Filter();

            if (data.hasOwnProperty('PRODUCT_TYPE_3')) {
                obj['PRODUCT_TYPE_3'] = CatalogsProductGroupMultipleStringListCriteria.constructFromObject(data['PRODUCT_TYPE_3']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/CatalogsProductGroupMultipleStringListCriteria} PRODUCT_TYPE_3
 */
ProductType3Filter.prototype['PRODUCT_TYPE_3'] = undefined;






export default ProductType3Filter;

