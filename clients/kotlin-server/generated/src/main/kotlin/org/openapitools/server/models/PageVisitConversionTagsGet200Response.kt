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

import org.openapitools.server.models.ConversionEventResponse

/**
 * 
 * @param items 
 * @param bookmark 
 */
data class PageVisitConversionTagsGet200Response(
    val items: kotlin.collections.List<ConversionEventResponse>,
    val bookmark: kotlin.String? = null
) 

