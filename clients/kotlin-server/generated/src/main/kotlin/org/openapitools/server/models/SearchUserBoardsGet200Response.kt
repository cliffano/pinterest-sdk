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

import org.openapitools.server.models.Board

/**
 * 
 * @param items items
 * @param bookmark 
 */
data class SearchUserBoardsGet200Response(
    /* items */
    val items: kotlin.collections.List<Board>,
    val bookmark: kotlin.String? = null
) 

