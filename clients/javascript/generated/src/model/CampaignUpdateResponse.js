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
import CampaignCreateResponse from './CampaignCreateResponse';
import CampaignCreateResponseItem from './CampaignCreateResponseItem';

/**
 * The CampaignUpdateResponse model module.
 * @module model/CampaignUpdateResponse
 * @version 1.1.1-pre.0
 */
class CampaignUpdateResponse {
    /**
     * Constructs a new <code>CampaignUpdateResponse</code>.
     * @alias module:model/CampaignUpdateResponse
     * @implements module:model/CampaignCreateResponse
     */
    constructor() { 
        CampaignCreateResponse.initialize(this);
        CampaignUpdateResponse.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CampaignUpdateResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CampaignUpdateResponse} obj Optional instance to populate.
     * @return {module:model/CampaignUpdateResponse} The populated <code>CampaignUpdateResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CampaignUpdateResponse();
            CampaignCreateResponse.constructFromObject(data, obj);

            if (data.hasOwnProperty('items')) {
                obj['items'] = ApiClient.convertToType(data['items'], [CampaignCreateResponseItem]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CampaignUpdateResponse</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CampaignUpdateResponse</code>.
     */
    static validateJSON(data) {
        if (data['items']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['items'])) {
                throw new Error("Expected the field `items` to be an array in the JSON data but got " + data['items']);
            }
            // validate the optional field `items` (array)
            for (const item of data['items']) {
                CampaignCreateResponseItem.validateJSON(item);
            };
        }

        return true;
    }


}



/**
 * @member {Array.<module:model/CampaignCreateResponseItem>} items
 */
CampaignUpdateResponse.prototype['items'] = undefined;


// Implement CampaignCreateResponse interface:
/**
 * @member {Array.<module:model/CampaignCreateResponseItem>} items
 */
CampaignCreateResponse.prototype['items'] = undefined;




export default CampaignUpdateResponse;

