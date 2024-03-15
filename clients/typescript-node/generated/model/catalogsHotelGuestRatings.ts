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

import { RequestFile } from './models';

/**
* If specified, you must provide all properties
*/
export class CatalogsHotelGuestRatings {
    /**
    * Your hotel\'s rating.
    */
    'score'?: number;
    /**
    * Total number of people who have rated this hotel.
    */
    'numberOfReviewers'?: number;
    /**
    * Max value for the hotel rating score.
    */
    'maxScore'?: number;
    /**
    * System you use for guest reviews.
    */
    'ratingSystem'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "score",
            "baseName": "score",
            "type": "number"
        },
        {
            "name": "numberOfReviewers",
            "baseName": "number_of_reviewers",
            "type": "number"
        },
        {
            "name": "maxScore",
            "baseName": "max_score",
            "type": "number"
        },
        {
            "name": "ratingSystem",
            "baseName": "rating_system",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsHotelGuestRatings.attributeTypeMap;
    }
}

