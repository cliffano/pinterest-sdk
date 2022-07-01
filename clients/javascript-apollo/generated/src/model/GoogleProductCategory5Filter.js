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
 * The GoogleProductCategory5Filter model module.
 * @module model/GoogleProductCategory5Filter
 * @version 5.3.0
 */
class GoogleProductCategory5Filter {
    /**
     * @member {CatalogsProductGroupMultipleStringListCriteria} GOOGLE_PRODUCT_CATEGORY_5
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     */
    GOOGLE_PRODUCT_CATEGORY_5;

    

    /**
     * Constructs a new <code>GoogleProductCategory5Filter</code>.
     * @alias module:model/GoogleProductCategory5Filter
     * @param gOOGLEPRODUCTCATEGORY5 {CatalogsProductGroupMultipleStringListCriteria} 
     */
    constructor(gOOGLEPRODUCTCATEGORY5) { 
        
        GoogleProductCategory5Filter.initialize(this, gOOGLEPRODUCTCATEGORY5);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, gOOGLEPRODUCTCATEGORY5) { 
        obj['GOOGLE_PRODUCT_CATEGORY_5'] = gOOGLEPRODUCTCATEGORY5;
    }

    /**
     * Constructs a <code>GoogleProductCategory5Filter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/GoogleProductCategory5Filter} obj Optional instance to populate.
     * @return {module:model/GoogleProductCategory5Filter} The populated <code>GoogleProductCategory5Filter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new GoogleProductCategory5Filter();

            if (data.hasOwnProperty('GOOGLE_PRODUCT_CATEGORY_5')) {
                obj['GOOGLE_PRODUCT_CATEGORY_5'] = CatalogsProductGroupMultipleStringListCriteria.constructFromObject(data['GOOGLE_PRODUCT_CATEGORY_5']);
            }
        }
        return obj;
    }
}



export default GoogleProductCategory5Filter;

