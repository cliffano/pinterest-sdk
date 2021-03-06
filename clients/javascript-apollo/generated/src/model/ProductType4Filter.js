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
import CatalogsProductGroupMultipleStringListCriteria from './CatalogsProductGroupMultipleStringListCriteria';

/**
 * The ProductType4Filter model module.
 * @module model/ProductType4Filter
 * @version 5.3.0
 */
class ProductType4Filter {
    /**
     * @member {CatalogsProductGroupMultipleStringListCriteria} PRODUCT_TYPE_4
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     */
    PRODUCT_TYPE_4;

    

    /**
     * Constructs a new <code>ProductType4Filter</code>.
     * @alias module:model/ProductType4Filter
     * @param pRODUCTTYPE4 {CatalogsProductGroupMultipleStringListCriteria} 
     */
    constructor(pRODUCTTYPE4) { 
        
        ProductType4Filter.initialize(this, pRODUCTTYPE4);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, pRODUCTTYPE4) { 
        obj['PRODUCT_TYPE_4'] = pRODUCTTYPE4;
    }

    /**
     * Constructs a <code>ProductType4Filter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ProductType4Filter} obj Optional instance to populate.
     * @return {module:model/ProductType4Filter} The populated <code>ProductType4Filter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ProductType4Filter();

            if (data.hasOwnProperty('PRODUCT_TYPE_4')) {
                obj['PRODUCT_TYPE_4'] = CatalogsProductGroupMultipleStringListCriteria.constructFromObject(data['PRODUCT_TYPE_4']);
            }
        }
        return obj;
    }
}



export default ProductType4Filter;

