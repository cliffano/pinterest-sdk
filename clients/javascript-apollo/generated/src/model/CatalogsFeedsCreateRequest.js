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
import CatalogsFeedCredentials from './CatalogsFeedCredentials';
import CatalogsFeedProcessingSchedule from './CatalogsFeedProcessingSchedule';
import CatalogsFormat from './CatalogsFormat';
import Country from './Country';
import NullableCurrency from './NullableCurrency';
import ProductAvailabilityType from './ProductAvailabilityType';

/**
 * The CatalogsFeedsCreateRequest model module.
 * @module model/CatalogsFeedsCreateRequest
 * @version 5.3.0
 */
class CatalogsFeedsCreateRequest {
    /**
     * @member {Country} default_country
     * @type {Country}
     */
    default_country;
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
     * @member {String} default_locale
     * @type {String}
     */
    default_locale;
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
     * Constructs a new <code>CatalogsFeedsCreateRequest</code>.
     * Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
     * @alias module:model/CatalogsFeedsCreateRequest
     * @param name {String} A human-friendly name associated to a given feed.
     * @param format {CatalogsFormat} 
     * @param location {String} The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     */
    constructor(name, format, location) { 
        
        CatalogsFeedsCreateRequest.initialize(this, name, format, location);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, name, format, location) { 
        obj['name'] = name;
        obj['format'] = format;
        obj['location'] = location;
    }

    /**
     * Constructs a <code>CatalogsFeedsCreateRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsFeedsCreateRequest} obj Optional instance to populate.
     * @return {module:model/CatalogsFeedsCreateRequest} The populated <code>CatalogsFeedsCreateRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsFeedsCreateRequest();

            if (data.hasOwnProperty('default_country')) {
                obj['default_country'] = Country.constructFromObject(data['default_country']);
            }
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
            if (data.hasOwnProperty('default_locale')) {
                obj['default_locale'] = ApiClient.convertToType(data['default_locale'], 'String');
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
        }
        return obj;
    }
}



export default CatalogsFeedsCreateRequest;

