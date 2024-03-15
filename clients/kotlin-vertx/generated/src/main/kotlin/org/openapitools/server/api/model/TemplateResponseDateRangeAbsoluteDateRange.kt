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
 * The absolute date range of the template
 * @param type The date range type
 * @param startDate The start date of the date range
 * @param endDate The end date of the date range
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class TemplateResponseDateRangeAbsoluteDateRange (
    /* The date range type */
    val type: kotlin.String? = null,
    /* The start date of the date range */
    val startDate: java.math.BigDecimal? = null,
    /* The end date of the date range */
    val endDate: java.math.BigDecimal? = null
) {

}

