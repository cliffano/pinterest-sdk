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


export interface CatalogsHotelAddress { 
    /**
     * Primary street address of hotel.
     */
    addr1?: string;
    /**
     * City where the hotel is located.
     */
    city?: string;
    /**
     * State, county, province, where the hotel is located.
     */
    region?: string;
    /**
     * Country where the hotel is located.
     */
    country?: string;
    /**
     * Required for countries with a postal code system. Postal or zip code of the hotel.
     */
    postal_code?: string;
}

