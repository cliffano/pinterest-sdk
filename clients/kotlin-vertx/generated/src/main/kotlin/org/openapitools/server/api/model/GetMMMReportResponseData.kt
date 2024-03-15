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
 * @param reportStatus 
 * @param url 
 * @param propertySize 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class GetMMMReportResponseData (
    val reportStatus: GetMMMReportResponseData.ReportStatus? = null,
    val url: kotlin.String? = null,
    val propertySize: java.math.BigDecimal? = null
) {

    /**
    * 
    * Values: DOES_NOT_EXIST,FINISHED,IN_PROGRESS,EXPIRED,FAILED,CANCELLED
    */
    enum class ReportStatus(val value: kotlin.String){
    
        DOES_NOT_EXIST("DOES_NOT_EXIST"),
    
        FINISHED("FINISHED"),
    
        IN_PROGRESS("IN_PROGRESS"),
    
        EXPIRED("EXPIRED"),
    
        FAILED("FAILED"),
    
        CANCELLED("CANCELLED");
    
    }

}

