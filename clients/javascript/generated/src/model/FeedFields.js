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
import Country from './Country';
import NullableCurrency from './NullableCurrency';
import ProductAvailabilityType from './ProductAvailabilityType';

/**
 * The FeedFields model module.
 * @module model/FeedFields
 * @version 1.0.1-pre.0
 */
class FeedFields {
    /**
     * Constructs a new <code>FeedFields</code>.
     * @alias module:model/FeedFields
     * @param defaultCountry {module:model/Country} 
     * @param defaultAvailability {module:model/ProductAvailabilityType} 
     * @param defaultCurrency {module:model/NullableCurrency} 
     * @param name {String} A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
     * @param format {module:model/CatalogsFormat} 
     * @param defaultLocale {String} The locale used within a feed for product descriptions.
     * @param credentials {module:model/CatalogsFeedCredentials} 
     * @param location {String} The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     * @param preferredProcessingSchedule {module:model/CatalogsFeedProcessingSchedule} 
     * @param status {module:model/CatalogsStatus} 
     */
    constructor(defaultCountry, defaultAvailability, defaultCurrency, name, format, defaultLocale, credentials, location, preferredProcessingSchedule, status) { 
        
        FeedFields.initialize(this, defaultCountry, defaultAvailability, defaultCurrency, name, format, defaultLocale, credentials, location, preferredProcessingSchedule, status);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, defaultCountry, defaultAvailability, defaultCurrency, name, format, defaultLocale, credentials, location, preferredProcessingSchedule, status) { 
        obj['default_country'] = defaultCountry;
        obj['default_availability'] = defaultAvailability;
        obj['default_currency'] = defaultCurrency;
        obj['name'] = name;
        obj['format'] = format;
        obj['default_locale'] = defaultLocale;
        obj['credentials'] = credentials;
        obj['location'] = location;
        obj['preferred_processing_schedule'] = preferredProcessingSchedule;
        obj['status'] = status;
    }

    /**
     * Constructs a <code>FeedFields</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/FeedFields} obj Optional instance to populate.
     * @return {module:model/FeedFields} The populated <code>FeedFields</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new FeedFields();

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
            if (data.hasOwnProperty('status')) {
                obj['status'] = CatalogsStatus.constructFromObject(data['status']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/Country} default_country
 */
FeedFields.prototype['default_country'] = undefined;

/**
 * @member {module:model/ProductAvailabilityType} default_availability
 */
FeedFields.prototype['default_availability'] = undefined;

/**
 * @member {module:model/NullableCurrency} default_currency
 */
FeedFields.prototype['default_currency'] = undefined;

/**
 * A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
 * @member {String} name
 */
FeedFields.prototype['name'] = undefined;

/**
 * @member {module:model/CatalogsFormat} format
 */
FeedFields.prototype['format'] = undefined;

/**
 * The locale used within a feed for product descriptions.
 * @member {String} default_locale
 */
FeedFields.prototype['default_locale'] = undefined;

/**
 * @member {module:model/CatalogsFeedCredentials} credentials
 */
FeedFields.prototype['credentials'] = undefined;

/**
 * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
 * @member {String} location
 */
FeedFields.prototype['location'] = undefined;

/**
 * @member {module:model/CatalogsFeedProcessingSchedule} preferred_processing_schedule
 */
FeedFields.prototype['preferred_processing_schedule'] = undefined;

/**
 * @member {module:model/CatalogsStatus} status
 */
FeedFields.prototype['status'] = undefined;






export default FeedFields;

