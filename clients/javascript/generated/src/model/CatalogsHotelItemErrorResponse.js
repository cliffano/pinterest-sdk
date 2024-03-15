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
import CatalogsType from './CatalogsType';
import ItemValidationEvent from './ItemValidationEvent';

/**
 * The CatalogsHotelItemErrorResponse model module.
 * @module model/CatalogsHotelItemErrorResponse
 * @version 1.1.1-pre.0
 */
class CatalogsHotelItemErrorResponse {
    /**
     * Constructs a new <code>CatalogsHotelItemErrorResponse</code>.
     * Object describing a hotel item error
     * @alias module:model/CatalogsHotelItemErrorResponse
     * @param catalogType {module:model/CatalogsType} 
     */
    constructor(catalogType) { 
        
        CatalogsHotelItemErrorResponse.initialize(this, catalogType);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, catalogType) { 
        obj['catalog_type'] = catalogType;
    }

    /**
     * Constructs a <code>CatalogsHotelItemErrorResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsHotelItemErrorResponse} obj Optional instance to populate.
     * @return {module:model/CatalogsHotelItemErrorResponse} The populated <code>CatalogsHotelItemErrorResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsHotelItemErrorResponse();

            if (data.hasOwnProperty('catalog_type')) {
                obj['catalog_type'] = CatalogsType.constructFromObject(data['catalog_type']);
            }
            if (data.hasOwnProperty('hotel_id')) {
                obj['hotel_id'] = ApiClient.convertToType(data['hotel_id'], 'String');
            }
            if (data.hasOwnProperty('errors')) {
                obj['errors'] = ApiClient.convertToType(data['errors'], [ItemValidationEvent]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CatalogsHotelItemErrorResponse</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CatalogsHotelItemErrorResponse</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of CatalogsHotelItemErrorResponse.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['hotel_id'] && !(typeof data['hotel_id'] === 'string' || data['hotel_id'] instanceof String)) {
            throw new Error("Expected the field `hotel_id` to be a primitive type in the JSON string but got " + data['hotel_id']);
        }
        if (data['errors']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['errors'])) {
                throw new Error("Expected the field `errors` to be an array in the JSON data but got " + data['errors']);
            }
            // validate the optional field `errors` (array)
            for (const item of data['errors']) {
                ItemValidationEvent.validateJSON(item);
            };
        }

        return true;
    }


}

CatalogsHotelItemErrorResponse.RequiredProperties = ["catalog_type"];

/**
 * @member {module:model/CatalogsType} catalog_type
 */
CatalogsHotelItemErrorResponse.prototype['catalog_type'] = undefined;

/**
 * The catalog hotel id in the merchant namespace
 * @member {String} hotel_id
 */
CatalogsHotelItemErrorResponse.prototype['hotel_id'] = undefined;

/**
 * Array with the errors for the item id requested
 * @member {Array.<module:model/ItemValidationEvent>} errors
 */
CatalogsHotelItemErrorResponse.prototype['errors'] = undefined;






export default CatalogsHotelItemErrorResponse;
