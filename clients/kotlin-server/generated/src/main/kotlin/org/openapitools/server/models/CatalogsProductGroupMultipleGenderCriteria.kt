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

import org.openapitools.server.models.Gender

/**
 * 
 * @param propertyValues 
 * @param negated 
 */
data class CatalogsProductGroupMultipleGenderCriteria(
    val propertyValues: kotlin.collections.List<Gender>,
    val negated: kotlin.Boolean? = false
) 
