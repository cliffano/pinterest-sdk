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
import UpdatableItemAttributes from './UpdatableItemAttributes';
import UpdateMaskFieldType from './UpdateMaskFieldType';

/**
 * The ItemUpdateBatchRecord model module.
 * @module model/ItemUpdateBatchRecord
 * @version 1.1.1-pre.0
 */
class ItemUpdateBatchRecord {
    /**
     * Constructs a new <code>ItemUpdateBatchRecord</code>.
     * Object describing an item batch record to update items
     * @alias module:model/ItemUpdateBatchRecord
     */
    constructor() { 
        
        ItemUpdateBatchRecord.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ItemUpdateBatchRecord</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ItemUpdateBatchRecord} obj Optional instance to populate.
     * @return {module:model/ItemUpdateBatchRecord} The populated <code>ItemUpdateBatchRecord</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ItemUpdateBatchRecord();

            if (data.hasOwnProperty('item_id')) {
                obj['item_id'] = ApiClient.convertToType(data['item_id'], 'String');
            }
            if (data.hasOwnProperty('attributes')) {
                obj['attributes'] = UpdatableItemAttributes.constructFromObject(data['attributes']);
            }
            if (data.hasOwnProperty('update_mask')) {
                obj['update_mask'] = ApiClient.convertToType(data['update_mask'], [UpdateMaskFieldType]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>ItemUpdateBatchRecord</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>ItemUpdateBatchRecord</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['item_id'] && !(typeof data['item_id'] === 'string' || data['item_id'] instanceof String)) {
            throw new Error("Expected the field `item_id` to be a primitive type in the JSON string but got " + data['item_id']);
        }
        // validate the optional field `attributes`
        if (data['attributes']) { // data not null
          UpdatableItemAttributes.validateJSON(data['attributes']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['update_mask'])) {
            throw new Error("Expected the field `update_mask` to be an array in the JSON data but got " + data['update_mask']);
        }

        return true;
    }


}



/**
 * The catalog item id in the merchant namespace
 * @member {String} item_id
 */
ItemUpdateBatchRecord.prototype['item_id'] = undefined;

/**
 * @member {module:model/UpdatableItemAttributes} attributes
 */
ItemUpdateBatchRecord.prototype['attributes'] = undefined;

/**
 * The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.
 * @member {Array.<module:model/UpdateMaskFieldType>} update_mask
 */
ItemUpdateBatchRecord.prototype['update_mask'] = undefined;






export default ItemUpdateBatchRecord;

