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
import { BusinessAccessRole } from './businessAccessRole';
import { Currency } from './currency';
import { Country } from './country';
import { AdAccountOwner } from './adAccountOwner';


export interface AdAccount { 
    id?: string;
    name?: string;
    owner?: AdAccountOwner;
    country?: Country;
    currency?: Currency;
    permissions?: Array<BusinessAccessRole>;
    /**
     * Creation time. Unix timestamp in seconds.
     */
    created_time?: number | null;
    /**
     * Last update time. Unix timestamp in seconds.
     */
    updated_time?: number | null;
}
export namespace AdAccount {
}


