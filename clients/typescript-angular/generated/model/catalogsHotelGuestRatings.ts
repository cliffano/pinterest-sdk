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
 */
export interface CatalogsHotelGuestRatings { 
    /**
     * Your hotel\'s rating.
     */
    score?: number;
    /**
     * Total number of people who have rated this hotel.
     */
    number_of_reviewers?: number;
    /**
     * Max value for the hotel rating score.
     */
    max_score?: number;
    /**
     * System you use for guest reviews.
     */
    rating_system?: string;
}
