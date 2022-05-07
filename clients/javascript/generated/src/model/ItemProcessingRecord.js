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
import ItemProcessingStatus from './ItemProcessingStatus';
import ItemValidationEvent from './ItemValidationEvent';

/**
 * The ItemProcessingRecord model module.
 * @module model/ItemProcessingRecord
 * @version 1.0.0-pre.0
 */
class ItemProcessingRecord {
    /**
     * Constructs a new <code>ItemProcessingRecord</code>.
     * Object describing an item processing record
     * @alias module:model/ItemProcessingRecord
     */
    constructor() { 
        
        ItemProcessingRecord.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ItemProcessingRecord</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ItemProcessingRecord} obj Optional instance to populate.
     * @return {module:model/ItemProcessingRecord} The populated <code>ItemProcessingRecord</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ItemProcessingRecord();

            if (data.hasOwnProperty('item_id')) {
                obj['item_id'] = ApiClient.convertToType(data['item_id'], 'String');
            }
            if (data.hasOwnProperty('errors')) {
                obj['errors'] = ApiClient.convertToType(data['errors'], [ItemValidationEvent]);
            }
            if (data.hasOwnProperty('warnings')) {
                obj['warnings'] = ApiClient.convertToType(data['warnings'], [ItemValidationEvent]);
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ItemProcessingStatus.constructFromObject(data['status']);
            }
        }
        return obj;
    }


}

/**
 * The catalog item id in the merchant namespace
 * @member {String} item_id
 */
ItemProcessingRecord.prototype['item_id'] = undefined;

/**
 * Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
 * @member {Array.<module:model/ItemValidationEvent>} errors
 */
ItemProcessingRecord.prototype['errors'] = undefined;

/**
 * Array with the validation warnings for the item processing record
 * @member {Array.<module:model/ItemValidationEvent>} warnings
 */
ItemProcessingRecord.prototype['warnings'] = undefined;

/**
 * @member {module:model/ItemProcessingStatus} status
 */
ItemProcessingRecord.prototype['status'] = undefined;






export default ItemProcessingRecord;

