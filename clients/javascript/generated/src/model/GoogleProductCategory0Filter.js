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
 * The GoogleProductCategory0Filter model module.
 * @module model/GoogleProductCategory0Filter
 * @version 1.0.0-pre.0
 */
class GoogleProductCategory0Filter {
    /**
     * Constructs a new <code>GoogleProductCategory0Filter</code>.
     * @alias module:model/GoogleProductCategory0Filter
     * @param gOOGLEPRODUCTCATEGORY0 {module:model/CatalogsProductGroupMultipleStringListCriteria} 
     */
    constructor(gOOGLEPRODUCTCATEGORY0) { 
        
        GoogleProductCategory0Filter.initialize(this, gOOGLEPRODUCTCATEGORY0);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, gOOGLEPRODUCTCATEGORY0) { 
        obj['GOOGLE_PRODUCT_CATEGORY_0'] = gOOGLEPRODUCTCATEGORY0;
    }

    /**
     * Constructs a <code>GoogleProductCategory0Filter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/GoogleProductCategory0Filter} obj Optional instance to populate.
     * @return {module:model/GoogleProductCategory0Filter} The populated <code>GoogleProductCategory0Filter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new GoogleProductCategory0Filter();

            if (data.hasOwnProperty('GOOGLE_PRODUCT_CATEGORY_0')) {
                obj['GOOGLE_PRODUCT_CATEGORY_0'] = CatalogsProductGroupMultipleStringListCriteria.constructFromObject(data['GOOGLE_PRODUCT_CATEGORY_0']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/CatalogsProductGroupMultipleStringListCriteria} GOOGLE_PRODUCT_CATEGORY_0
 */
GoogleProductCategory0Filter.prototype['GOOGLE_PRODUCT_CATEGORY_0'] = undefined;






export default GoogleProductCategory0Filter;
