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
 * 
 * @param impression 
 * @param click 
 * @param engagement 
 * @param buyableButton 
 * @param audienceVerification 
 */
data class AdCommonTrackingUrls(
    val impression: kotlin.collections.List<kotlin.String>? = null,
    val click: kotlin.collections.List<kotlin.String>? = null,
    val engagement: kotlin.collections.List<kotlin.String>? = null,
    val buyableButton: kotlin.collections.List<kotlin.String>? = null,
    val audienceVerification: kotlin.collections.List<kotlin.String>? = null
) 

