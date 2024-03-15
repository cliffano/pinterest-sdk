/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import CatalogsProductGroupMultipleStringListCriteria from './CatalogsProductGroupMultipleStringListCriteria';

/**
 * The GoogleProductCategory6Filter model module.
 * @module model/GoogleProductCategory6Filter
 * @version 1.1.1-pre.0
 */
class GoogleProductCategory6Filter {
    /**
     * Constructs a new <code>GoogleProductCategory6Filter</code>.
     * @alias module:model/GoogleProductCategory6Filter
     * @param gOOGLEPRODUCTCATEGORY6 {module:model/CatalogsProductGroupMultipleStringListCriteria} 
     */
    constructor(gOOGLEPRODUCTCATEGORY6) { 
        
        GoogleProductCategory6Filter.initialize(this, gOOGLEPRODUCTCATEGORY6);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, gOOGLEPRODUCTCATEGORY6) { 
        obj['GOOGLE_PRODUCT_CATEGORY_6'] = gOOGLEPRODUCTCATEGORY6;
    }

    /**
     * Constructs a <code>GoogleProductCategory6Filter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/GoogleProductCategory6Filter} obj Optional instance to populate.
     * @return {module:model/GoogleProductCategory6Filter} The populated <code>GoogleProductCategory6Filter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new GoogleProductCategory6Filter();

            if (data.hasOwnProperty('GOOGLE_PRODUCT_CATEGORY_6')) {
                obj['GOOGLE_PRODUCT_CATEGORY_6'] = CatalogsProductGroupMultipleStringListCriteria.constructFromObject(data['GOOGLE_PRODUCT_CATEGORY_6']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>GoogleProductCategory6Filter</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>GoogleProductCategory6Filter</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of GoogleProductCategory6Filter.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }

        return true;
    }


}

GoogleProductCategory6Filter.RequiredProperties = ["GOOGLE_PRODUCT_CATEGORY_6"];

/**
 * @member {module:model/CatalogsProductGroupMultipleStringListCriteria} GOOGLE_PRODUCT_CATEGORY_6
 */
GoogleProductCategory6Filter.prototype['GOOGLE_PRODUCT_CATEGORY_6'] = undefined;






export default GoogleProductCategory6Filter;
