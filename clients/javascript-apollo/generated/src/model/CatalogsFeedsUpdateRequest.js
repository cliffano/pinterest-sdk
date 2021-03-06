/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import CatalogsFeedCredentials from './CatalogsFeedCredentials';
import CatalogsFeedProcessingSchedule from './CatalogsFeedProcessingSchedule';
import CatalogsFormat from './CatalogsFormat';
import CatalogsStatus from './CatalogsStatus';
import NullableCurrency from './NullableCurrency';
import ProductAvailabilityType from './ProductAvailabilityType';

/**
 * The CatalogsFeedsUpdateRequest model module.
 * @module model/CatalogsFeedsUpdateRequest
 * @version 5.3.0
 */
class CatalogsFeedsUpdateRequest {
    /**
     * @member {ProductAvailabilityType} default_availability
     * @type {ProductAvailabilityType}
     */
    default_availability;
    /**
     * @member {NullableCurrency} default_currency
     * @type {NullableCurrency}
     */
    default_currency;
    /**
     * @member {String} name
     * @type {String}
     */
    name;
    /**
     * @member {CatalogsFormat} format
     * @type {CatalogsFormat}
     */
    format;
    /**
     * @member {CatalogsFeedCredentials} credentials
     * @type {CatalogsFeedCredentials}
     */
    credentials;
    /**
     * @member {String} location
     * @type {String}
     */
    location;
    /**
     * @member {CatalogsFeedProcessingSchedule} preferred_processing_schedule
     * @type {CatalogsFeedProcessingSchedule}
     */
    preferred_processing_schedule;
    /**
     * @member {CatalogsStatus} status
     * @type {CatalogsStatus}
     */
    status;

    

    /**
     * Constructs a new <code>CatalogsFeedsUpdateRequest</code>.
     * Request object for updating a feed.
     * @alias module:model/CatalogsFeedsUpdateRequest
     */
    constructor() { 
        
        CatalogsFeedsUpdateRequest.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CatalogsFeedsUpdateRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsFeedsUpdateRequest} obj Optional instance to populate.
     * @return {module:model/CatalogsFeedsUpdateRequest} The populated <code>CatalogsFeedsUpdateRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsFeedsUpdateRequest();

            if (data.hasOwnProperty('default_availability')) {
                obj['default_availability'] = ProductAvailabilityType.constructFromObject(data['default_availability']);
            }
            if (data.hasOwnProperty('default_currency')) {
                obj['default_currency'] = NullableCurrency.constructFromObject(data['default_currency']);
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('format')) {
                obj['format'] = CatalogsFormat.constructFromObject(data['format']);
            }
            if (data.hasOwnProperty('credentials')) {
                obj['credentials'] = CatalogsFeedCredentials.constructFromObject(data['credentials']);
            }
            if (data.hasOwnProperty('location')) {
                obj['location'] = ApiClient.convertToType(data['location'], 'String');
            }
            if (data.hasOwnProperty('preferred_processing_schedule')) {
                obj['preferred_processing_schedule'] = CatalogsFeedProcessingSchedule.constructFromObject(data['preferred_processing_schedule']);
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = CatalogsStatus.constructFromObject(data['status']);
            }
        }
        return obj;
    }
}



export default CatalogsFeedsUpdateRequest;

