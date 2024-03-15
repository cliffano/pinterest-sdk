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

/**
 * If specified, you must provide all properties
 * @export
 * @interface CatalogsHotelGuestRatings
 */
export interface CatalogsHotelGuestRatings {
    /**
     * Your hotel\'s rating.
     * @type {number}
     * @memberof CatalogsHotelGuestRatings
     */
    score?: number;
    /**
     * Total number of people who have rated this hotel.
     * @type {number}
     * @memberof CatalogsHotelGuestRatings
     */
    number_of_reviewers?: number;
    /**
     * Max value for the hotel rating score.
     * @type {number}
     * @memberof CatalogsHotelGuestRatings
     */
    max_score?: number;
    /**
     * System you use for guest reviews.
     * @type {string}
     * @memberof CatalogsHotelGuestRatings
     */
    rating_system?: string;
}
