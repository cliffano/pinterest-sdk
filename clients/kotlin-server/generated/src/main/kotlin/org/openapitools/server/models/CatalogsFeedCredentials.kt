/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models


/**
 * This field is **OPTIONAL**. Use this if your feed file requires username and password.
 * @param password The required password for downloading a feed.
 * @param username The required username for downloading a feed.
 */
data class CatalogsFeedCredentials(
    /* The required password for downloading a feed. */
    val password: kotlin.String,
    /* The required username for downloading a feed. */
    val username: kotlin.String
) 
