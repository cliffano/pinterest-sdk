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
import { UserWebsiteSummary } from './userWebsiteSummary';


export interface UserWebsitesGet200Response { 
    items: Array<UserWebsiteSummary>;
    bookmark?: string | null;
}

