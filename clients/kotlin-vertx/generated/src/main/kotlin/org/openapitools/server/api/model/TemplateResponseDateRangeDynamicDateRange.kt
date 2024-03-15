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
 * The dynamic date range of the template
 * @param type The date range type
 * @param range The dynamic range type
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class TemplateResponseDateRangeDynamicDateRange (
    /* The date range type */
    val type: kotlin.String? = null,
    /* The dynamic range type */
    val range: TemplateResponseDateRangeDynamicDateRange.Range? = null
) {

    /**
    * The dynamic range type
    * Values: YEAR_TO_DATE,QUARTER_TO_DATE,MONTH_TO_DATE,LAST_MONTH
    */
    enum class Range(val value: kotlin.String){
    
        YEAR_TO_DATE("YEAR_TO_DATE"),
    
        QUARTER_TO_DATE("QUARTER_TO_DATE"),
    
        MONTH_TO_DATE("MONTH_TO_DATE"),
    
        LAST_MONTH("LAST_MONTH");
    
    }

}

