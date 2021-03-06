package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size
import javax.validation.Valid

/**
 * 
 * @param reportStatus 
 * @param url 
 * @param propertySize 
 */
data class AdsAnalyticsGetAsyncResponse(

    @field:JsonProperty("report_status") val reportStatus: kotlin.String? = null,

    @field:JsonProperty("url") val url: kotlin.String? = null,

    @field:JsonProperty("size") val propertySize: java.math.BigDecimal? = null
) {

}

