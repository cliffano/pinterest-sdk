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

import org.openapitools.server.models.OrderLine

/**
 * 
 * @param `data` 
 * @param errorMessages 
 */
data class OrderLineError(
    val `data`: OrderLine? = null,
    val errorMessages: kotlin.collections.List<kotlin.String>? = null
) 

