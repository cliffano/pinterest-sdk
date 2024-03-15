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
import ItemAttributes from './ItemAttributes';

/**
 * The CatalogsUpsertRetailItem model module.
 * @module model/CatalogsUpsertRetailItem
 * @version 1.1.1-pre.0
 */
class CatalogsUpsertRetailItem {
    /**
     * Constructs a new <code>CatalogsUpsertRetailItem</code>.
     * An item to be upserted
     * @alias module:model/CatalogsUpsertRetailItem
     * @param itemId {String} The catalog item id in the merchant namespace
     * @param operation {module:model/CatalogsUpsertRetailItem.OperationEnum} 
     * @param attributes {module:model/ItemAttributes} 
     */
    constructor(itemId, operation, attributes) { 
        
        CatalogsUpsertRetailItem.initialize(this, itemId, operation, attributes);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, itemId, operation, attributes) { 
        obj['item_id'] = itemId;
        obj['operation'] = operation;
        obj['attributes'] = attributes;
    }

    /**
     * Constructs a <code>CatalogsUpsertRetailItem</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsUpsertRetailItem} obj Optional instance to populate.
     * @return {module:model/CatalogsUpsertRetailItem} The populated <code>CatalogsUpsertRetailItem</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsUpsertRetailItem();

            if (data.hasOwnProperty('item_id')) {
                obj['item_id'] = ApiClient.convertToType(data['item_id'], 'String');
            }
            if (data.hasOwnProperty('operation')) {
                obj['operation'] = ApiClient.convertToType(data['operation'], 'String');
            }
            if (data.hasOwnProperty('attributes')) {
                obj['attributes'] = ItemAttributes.constructFromObject(data['attributes']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CatalogsUpsertRetailItem</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CatalogsUpsertRetailItem</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of CatalogsUpsertRetailItem.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['item_id'] && !(typeof data['item_id'] === 'string' || data['item_id'] instanceof String)) {
            throw new Error("Expected the field `item_id` to be a primitive type in the JSON string but got " + data['item_id']);
        }
        // ensure the json data is a string
        if (data['operation'] && !(typeof data['operation'] === 'string' || data['operation'] instanceof String)) {
            throw new Error("Expected the field `operation` to be a primitive type in the JSON string but got " + data['operation']);
        }
        // validate the optional field `attributes`
        if (data['attributes']) { // data not null
          ItemAttributes.validateJSON(data['attributes']);
        }

        return true;
    }


}

CatalogsUpsertRetailItem.RequiredProperties = ["item_id", "operation", "attributes"];

/**
 * The catalog item id in the merchant namespace
 * @member {String} item_id
 */
CatalogsUpsertRetailItem.prototype['item_id'] = undefined;

/**
 * @member {module:model/CatalogsUpsertRetailItem.OperationEnum} operation
 */
CatalogsUpsertRetailItem.prototype['operation'] = undefined;

/**
 * @member {module:model/ItemAttributes} attributes
 */
CatalogsUpsertRetailItem.prototype['attributes'] = undefined;





/**
 * Allowed values for the <code>operation</code> property.
 * @enum {String}
 * @readonly
 */
CatalogsUpsertRetailItem['OperationEnum'] = {

    /**
     * value: "CREATE"
     * @const
     */
    "CREATE": "CREATE",

    /**
     * value: "UPDATE"
     * @const
     */
    "UPDATE": "UPDATE",

    /**
     * value: "UPSERT"
     * @const
     */
    "UPSERT": "UPSERT",

    /**
     * value: "DELETE"
     * @const
     */
    "DELETE": "DELETE"
};



export default CatalogsUpsertRetailItem;

