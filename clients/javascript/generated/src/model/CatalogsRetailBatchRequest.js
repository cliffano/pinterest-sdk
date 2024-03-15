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
import CatalogsRetailBatchRequestItemsInner from './CatalogsRetailBatchRequestItemsInner';
import CatalogsType from './CatalogsType';
import Country from './Country';
import Language from './Language';

/**
 * The CatalogsRetailBatchRequest model module.
 * @module model/CatalogsRetailBatchRequest
 * @version 1.1.1-pre.0
 */
class CatalogsRetailBatchRequest {
    /**
     * Constructs a new <code>CatalogsRetailBatchRequest</code>.
     * A request object that can have multiple operations on a single retail batch
     * @alias module:model/CatalogsRetailBatchRequest
     * @param catalogType {module:model/CatalogsType} 
     * @param country {module:model/Country} 
     * @param language {module:model/Language} 
     * @param items {Array.<module:model/CatalogsRetailBatchRequestItemsInner>} Array with catalogs item operations
     */
    constructor(catalogType, country, language, items) { 
        
        CatalogsRetailBatchRequest.initialize(this, catalogType, country, language, items);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, catalogType, country, language, items) { 
        obj['catalog_type'] = catalogType;
        obj['country'] = country;
        obj['language'] = language;
        obj['items'] = items;
    }

    /**
     * Constructs a <code>CatalogsRetailBatchRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsRetailBatchRequest} obj Optional instance to populate.
     * @return {module:model/CatalogsRetailBatchRequest} The populated <code>CatalogsRetailBatchRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsRetailBatchRequest();

            if (data.hasOwnProperty('catalog_type')) {
                obj['catalog_type'] = CatalogsType.constructFromObject(data['catalog_type']);
            }
            if (data.hasOwnProperty('country')) {
                obj['country'] = Country.constructFromObject(data['country']);
            }
            if (data.hasOwnProperty('language')) {
                obj['language'] = Language.constructFromObject(data['language']);
            }
            if (data.hasOwnProperty('items')) {
                obj['items'] = ApiClient.convertToType(data['items'], [CatalogsRetailBatchRequestItemsInner]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CatalogsRetailBatchRequest</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CatalogsRetailBatchRequest</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of CatalogsRetailBatchRequest.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        if (data['items']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['items'])) {
                throw new Error("Expected the field `items` to be an array in the JSON data but got " + data['items']);
            }
            // validate the optional field `items` (array)
            for (const item of data['items']) {
                CatalogsRetailBatchRequestItemsInner.validateJSON(item);
            };
        }

        return true;
    }


}

CatalogsRetailBatchRequest.RequiredProperties = ["catalog_type", "country", "language", "items"];

/**
 * @member {module:model/CatalogsType} catalog_type
 */
CatalogsRetailBatchRequest.prototype['catalog_type'] = undefined;

/**
 * @member {module:model/Country} country
 */
CatalogsRetailBatchRequest.prototype['country'] = undefined;

/**
 * @member {module:model/Language} language
 */
CatalogsRetailBatchRequest.prototype['language'] = undefined;

/**
 * Array with catalogs item operations
 * @member {Array.<module:model/CatalogsRetailBatchRequestItemsInner>} items
 */
CatalogsRetailBatchRequest.prototype['items'] = undefined;






export default CatalogsRetailBatchRequest;

