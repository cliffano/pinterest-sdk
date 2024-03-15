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

import * as models from './models';

/**
 * Audience demographics
 */
export interface AudienceDemographics {
    /**
     * Ages distribution.
     */
    ages?: Array<models.AudienceDemographicValue>;

    /**
     * Gender distribution.
     */
    genders?: Array<models.AudienceDemographicValue>;

    /**
     * Device usage distribution.
     */
    devices?: Array<models.AudienceDemographicValue>;

    /**
     * Geographic metro area distribution.
     */
    metros?: Array<models.AudienceDemographicValue>;

    /**
     * Country area distribution.
     */
    countries?: Array<models.AudienceDemographicValue>;

}
