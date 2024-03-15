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
package org.openapitools.server.api.model


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param lookbackWindow Number of days ago to start lookback timeframe for dynamic retargeting
 * @param tagTypes Event types to target for dynamic retargeting
 * @param exclusionWindow Number of days ago to stop lookback timeframe for dynamic retargeting
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class TargetingSpecSHOPPINGRETARGETING (
    /* Number of days ago to start lookback timeframe for dynamic retargeting */
    val lookbackWindow: kotlin.Int? = null,
    /* Event types to target for dynamic retargeting */
    val tagTypes: kotlin.Array<kotlin.Int>? = null,
    /* Number of days ago to stop lookback timeframe for dynamic retargeting */
    val exclusionWindow: kotlin.Int? = null
) {

}

