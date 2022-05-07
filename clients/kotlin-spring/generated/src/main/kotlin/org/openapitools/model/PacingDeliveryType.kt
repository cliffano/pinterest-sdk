package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonValue
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
* Ad group pacing delivery type
* Values: sTANDARD,aCCELERATED
*/
enum class PacingDeliveryType(val value: kotlin.String) {

    @JsonProperty("STANDARD") sTANDARD("STANDARD"),

    @JsonProperty("ACCELERATED") aCCELERATED("ACCELERATED");

}

