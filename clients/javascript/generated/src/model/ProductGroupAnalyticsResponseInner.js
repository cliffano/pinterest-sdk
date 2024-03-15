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

/**
 * The ProductGroupAnalyticsResponseInner model module.
 * @module model/ProductGroupAnalyticsResponseInner
 * @version 1.1.1-pre.0
 */
class ProductGroupAnalyticsResponseInner {
    /**
     * Constructs a new <code>ProductGroupAnalyticsResponseInner</code>.
     * @alias module:model/ProductGroupAnalyticsResponseInner
     * @extends Object
     * @param PRODUCT_GROUP_ID {String} The ID of the product group that this metrics belongs to.
     */
    constructor(PRODUCT_GROUP_ID) { 
        
        ProductGroupAnalyticsResponseInner.initialize(this, PRODUCT_GROUP_ID);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, PRODUCT_GROUP_ID) { 
        obj['PRODUCT_GROUP_ID'] = PRODUCT_GROUP_ID;
    }

    /**
     * Constructs a <code>ProductGroupAnalyticsResponseInner</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ProductGroupAnalyticsResponseInner} obj Optional instance to populate.
     * @return {module:model/ProductGroupAnalyticsResponseInner} The populated <code>ProductGroupAnalyticsResponseInner</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ProductGroupAnalyticsResponseInner();

            ApiClient.constructFromObject(data, obj, 'Object');
            

            if (data.hasOwnProperty('PRODUCT_GROUP_ID')) {
                obj['PRODUCT_GROUP_ID'] = ApiClient.convertToType(data['PRODUCT_GROUP_ID'], 'String');
            }
            if (data.hasOwnProperty('DATE')) {
                obj['DATE'] = ApiClient.convertToType(data['DATE'], 'Date');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>ProductGroupAnalyticsResponseInner</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>ProductGroupAnalyticsResponseInner</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of ProductGroupAnalyticsResponseInner.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['PRODUCT_GROUP_ID'] && !(typeof data['PRODUCT_GROUP_ID'] === 'string' || data['PRODUCT_GROUP_ID'] instanceof String)) {
            throw new Error("Expected the field `PRODUCT_GROUP_ID` to be a primitive type in the JSON string but got " + data['PRODUCT_GROUP_ID']);
        }

        return true;
    }


}

ProductGroupAnalyticsResponseInner.RequiredProperties = ["PRODUCT_GROUP_ID"];

/**
 * The ID of the product group that this metrics belongs to.
 * @member {String} PRODUCT_GROUP_ID
 */
ProductGroupAnalyticsResponseInner.prototype['PRODUCT_GROUP_ID'] = undefined;

/**
 * Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
 * @member {Date} DATE
 */
ProductGroupAnalyticsResponseInner.prototype['DATE'] = undefined;






export default ProductGroupAnalyticsResponseInner;

