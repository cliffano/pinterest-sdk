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
import AdGroupUpdateRequest from './AdGroupUpdateRequest';
import AdUpdateRequest from './AdUpdateRequest';
import CampaignUpdateRequest from './CampaignUpdateRequest';
import KeywordUpdate from './KeywordUpdate';
import ProductGroupPromotionUpdateRequest from './ProductGroupPromotionUpdateRequest';

/**
 * The BulkUpsertRequestUpdate model module.
 * @module model/BulkUpsertRequestUpdate
 * @version 1.1.1-pre.0
 */
class BulkUpsertRequestUpdate {
    /**
     * Constructs a new <code>BulkUpsertRequestUpdate</code>.
     * Request for creation of entities in bulk.
     * @alias module:model/BulkUpsertRequestUpdate
     */
    constructor() { 
        
        BulkUpsertRequestUpdate.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>BulkUpsertRequestUpdate</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/BulkUpsertRequestUpdate} obj Optional instance to populate.
     * @return {module:model/BulkUpsertRequestUpdate} The populated <code>BulkUpsertRequestUpdate</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new BulkUpsertRequestUpdate();

            if (data.hasOwnProperty('campaigns')) {
                obj['campaigns'] = ApiClient.convertToType(data['campaigns'], [CampaignUpdateRequest]);
            }
            if (data.hasOwnProperty('ad_groups')) {
                obj['ad_groups'] = ApiClient.convertToType(data['ad_groups'], [AdGroupUpdateRequest]);
            }
            if (data.hasOwnProperty('ads')) {
                obj['ads'] = ApiClient.convertToType(data['ads'], [AdUpdateRequest]);
            }
            if (data.hasOwnProperty('product_groups')) {
                obj['product_groups'] = ApiClient.convertToType(data['product_groups'], [ProductGroupPromotionUpdateRequest]);
            }
            if (data.hasOwnProperty('keywords')) {
                obj['keywords'] = ApiClient.convertToType(data['keywords'], [KeywordUpdate]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>BulkUpsertRequestUpdate</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>BulkUpsertRequestUpdate</code>.
     */
    static validateJSON(data) {
        if (data['campaigns']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['campaigns'])) {
                throw new Error("Expected the field `campaigns` to be an array in the JSON data but got " + data['campaigns']);
            }
            // validate the optional field `campaigns` (array)
            for (const item of data['campaigns']) {
                CampaignUpdateRequest.validateJSON(item);
            };
        }
        if (data['ad_groups']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['ad_groups'])) {
                throw new Error("Expected the field `ad_groups` to be an array in the JSON data but got " + data['ad_groups']);
            }
            // validate the optional field `ad_groups` (array)
            for (const item of data['ad_groups']) {
                AdGroupUpdateRequest.validateJSON(item);
            };
        }
        if (data['ads']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['ads'])) {
                throw new Error("Expected the field `ads` to be an array in the JSON data but got " + data['ads']);
            }
            // validate the optional field `ads` (array)
            for (const item of data['ads']) {
                AdUpdateRequest.validateJSON(item);
            };
        }
        if (data['product_groups']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['product_groups'])) {
                throw new Error("Expected the field `product_groups` to be an array in the JSON data but got " + data['product_groups']);
            }
            // validate the optional field `product_groups` (array)
            for (const item of data['product_groups']) {
                ProductGroupPromotionUpdateRequest.validateJSON(item);
            };
        }
        if (data['keywords']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['keywords'])) {
                throw new Error("Expected the field `keywords` to be an array in the JSON data but got " + data['keywords']);
            }
            // validate the optional field `keywords` (array)
            for (const item of data['keywords']) {
                KeywordUpdate.validateJSON(item);
            };
        }

        return true;
    }


}



/**
 * @member {Array.<module:model/CampaignUpdateRequest>} campaigns
 */
BulkUpsertRequestUpdate.prototype['campaigns'] = undefined;

/**
 * @member {Array.<module:model/AdGroupUpdateRequest>} ad_groups
 */
BulkUpsertRequestUpdate.prototype['ad_groups'] = undefined;

/**
 * @member {Array.<module:model/AdUpdateRequest>} ads
 */
BulkUpsertRequestUpdate.prototype['ads'] = undefined;

/**
 * @member {Array.<module:model/ProductGroupPromotionUpdateRequest>} product_groups
 */
BulkUpsertRequestUpdate.prototype['product_groups'] = undefined;

/**
 * @member {Array.<module:model/KeywordUpdate>} keywords
 */
BulkUpsertRequestUpdate.prototype['keywords'] = undefined;






export default BulkUpsertRequestUpdate;
