// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import type {
    CatalogsHotelAddress,
    CatalogsHotelGuestRatings,
} from './';

/**
 * @export
 * @interface CatalogsUpdatableHotelAttributes
 */
export interface CatalogsUpdatableHotelAttributes {
    /**
     * The hotel\'s name.
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    name?: string | null;
    /**
     * Link to the product page
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    link?: string | null;
    /**
     * Brief description of the hotel.
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    description?: string | null;
    /**
     * The brand to which this hotel belongs to.
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    brand?: string | null;
    /**
     * Latitude of the hotel.
     * @type {number}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    latitude?: number;
    /**
     * Longitude of the hotel.
     * @type {number}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    longitude?: number | null;
    /**
     * A list of neighborhoods where the hotel is located
     * @type {Array<string>}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    neighborhood?: Array<string> | null;
    /**
     * @type {CatalogsHotelAddress}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    address?: CatalogsHotelAddress;
    /**
     * Custom grouping of hotels
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    custom_label_0?: string | null;
    /**
     * Custom grouping of hotels
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    custom_label_1?: string | null;
    /**
     * Custom grouping of hotels
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    custom_label_2?: string | null;
    /**
     * Custom grouping of hotels
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    custom_label_3?: string | null;
    /**
     * Custom grouping of hotels
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    custom_label_4?: string | null;
    /**
     * The type of property. The category can be any type of internal description desired.
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    category?: string | null;
    /**
     * Base price of the hotel room per night followed by the ISO currency code
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    base_price?: string | null;
    /**
     * Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.
     * @type {string}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    sale_price?: string | null;
    /**
     * @type {CatalogsHotelGuestRatings}
     * @memberof CatalogsUpdatableHotelAttributes
     */
    guest_ratings?: CatalogsHotelGuestRatings;
}