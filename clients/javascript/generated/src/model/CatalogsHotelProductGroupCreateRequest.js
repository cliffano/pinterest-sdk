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
import CatalogsHotelProductGroupFilters from './CatalogsHotelProductGroupFilters';

/**
 * The CatalogsHotelProductGroupCreateRequest model module.
 * @module model/CatalogsHotelProductGroupCreateRequest
 * @version 1.1.1-pre.0
 */
class CatalogsHotelProductGroupCreateRequest {
    /**
     * Constructs a new <code>CatalogsHotelProductGroupCreateRequest</code>.
     * Request object for creating a hotel product group.
     * @alias module:model/CatalogsHotelProductGroupCreateRequest
     * @param catalogType {module:model/CatalogsHotelProductGroupCreateRequest.CatalogTypeEnum} 
     * @param name {String} 
     * @param filters {module:model/CatalogsHotelProductGroupFilters} 
     * @param catalogId {String} Catalog id pertaining to the hotel product group.
     */
    constructor(catalogType, name, filters, catalogId) { 
        
        CatalogsHotelProductGroupCreateRequest.initialize(this, catalogType, name, filters, catalogId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, catalogType, name, filters, catalogId) { 
        obj['catalog_type'] = catalogType;
        obj['name'] = name;
        obj['filters'] = filters;
        obj['catalog_id'] = catalogId;
    }

    /**
     * Constructs a <code>CatalogsHotelProductGroupCreateRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsHotelProductGroupCreateRequest} obj Optional instance to populate.
     * @return {module:model/CatalogsHotelProductGroupCreateRequest} The populated <code>CatalogsHotelProductGroupCreateRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsHotelProductGroupCreateRequest();

            if (data.hasOwnProperty('catalog_type')) {
                obj['catalog_type'] = ApiClient.convertToType(data['catalog_type'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('filters')) {
                obj['filters'] = CatalogsHotelProductGroupFilters.constructFromObject(data['filters']);
            }
            if (data.hasOwnProperty('catalog_id')) {
                obj['catalog_id'] = ApiClient.convertToType(data['catalog_id'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CatalogsHotelProductGroupCreateRequest</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CatalogsHotelProductGroupCreateRequest</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of CatalogsHotelProductGroupCreateRequest.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['catalog_type'] && !(typeof data['catalog_type'] === 'string' || data['catalog_type'] instanceof String)) {
            throw new Error("Expected the field `catalog_type` to be a primitive type in the JSON string but got " + data['catalog_type']);
        }
        // ensure the json data is a string
        if (data['name'] && !(typeof data['name'] === 'string' || data['name'] instanceof String)) {
            throw new Error("Expected the field `name` to be a primitive type in the JSON string but got " + data['name']);
        }
        // ensure the json data is a string
        if (data['description'] && !(typeof data['description'] === 'string' || data['description'] instanceof String)) {
            throw new Error("Expected the field `description` to be a primitive type in the JSON string but got " + data['description']);
        }
        // validate the optional field `filters`
        if (data['filters']) { // data not null
          CatalogsHotelProductGroupFilters.validateJSON(data['filters']);
        }
        // ensure the json data is a string
        if (data['catalog_id'] && !(typeof data['catalog_id'] === 'string' || data['catalog_id'] instanceof String)) {
            throw new Error("Expected the field `catalog_id` to be a primitive type in the JSON string but got " + data['catalog_id']);
        }

        return true;
    }


}

CatalogsHotelProductGroupCreateRequest.RequiredProperties = ["catalog_type", "name", "filters", "catalog_id"];

/**
 * @member {module:model/CatalogsHotelProductGroupCreateRequest.CatalogTypeEnum} catalog_type
 */
CatalogsHotelProductGroupCreateRequest.prototype['catalog_type'] = undefined;

/**
 * @member {String} name
 */
CatalogsHotelProductGroupCreateRequest.prototype['name'] = undefined;

/**
 * @member {String} description
 */
CatalogsHotelProductGroupCreateRequest.prototype['description'] = undefined;

/**
 * @member {module:model/CatalogsHotelProductGroupFilters} filters
 */
CatalogsHotelProductGroupCreateRequest.prototype['filters'] = undefined;

/**
 * Catalog id pertaining to the hotel product group.
 * @member {String} catalog_id
 */
CatalogsHotelProductGroupCreateRequest.prototype['catalog_id'] = undefined;





/**
 * Allowed values for the <code>catalog_type</code> property.
 * @enum {String}
 * @readonly
 */
CatalogsHotelProductGroupCreateRequest['CatalogTypeEnum'] = {

    /**
     * value: "HOTEL"
     * @const
     */
    "HOTEL": "HOTEL"
};



export default CatalogsHotelProductGroupCreateRequest;

