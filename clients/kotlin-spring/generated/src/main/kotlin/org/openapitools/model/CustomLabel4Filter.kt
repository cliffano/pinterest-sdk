package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria
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
 * @param CUSTOM_LABEL_4 
 */
data class CustomLabel4Filter(

    @field:Valid
    @field:JsonProperty("CUSTOM_LABEL_4", required = true) val CUSTOM_LABEL_4: CatalogsProductGroupMultipleStringCriteria
) {

}

