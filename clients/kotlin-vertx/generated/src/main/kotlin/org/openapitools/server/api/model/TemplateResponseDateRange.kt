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

import org.openapitools.server.api.model.TemplateResponseDateRangeAbsoluteDateRange
import org.openapitools.server.api.model.TemplateResponseDateRangeDynamicDateRange
import org.openapitools.server.api.model.TemplateResponseDateRangeRelativeDateRange

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param dynamicDateRange 
 * @param relativeDateRange 
 * @param absoluteDateRange 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class TemplateResponseDateRange (
    val dynamicDateRange: TemplateResponseDateRangeDynamicDateRange? = null,
    val relativeDateRange: TemplateResponseDateRangeRelativeDateRange? = null,
    val absoluteDateRange: TemplateResponseDateRangeAbsoluteDateRange? = null
) {

}
