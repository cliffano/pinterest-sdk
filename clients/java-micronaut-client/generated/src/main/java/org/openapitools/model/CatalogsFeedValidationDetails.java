/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsFeedValidationErrors;
import org.openapitools.model.CatalogsFeedValidationWarnings;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CatalogsFeedValidationDetails
 */
@JsonPropertyOrder({
  CatalogsFeedValidationDetails.JSON_PROPERTY_ERRORS,
  CatalogsFeedValidationDetails.JSON_PROPERTY_WARNINGS
})
@JsonTypeName("CatalogsFeedValidationDetails")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-07T06:38:30.955411Z[Etc/UTC]")
@Introspected
public class CatalogsFeedValidationDetails {
    public static final String JSON_PROPERTY_ERRORS = "errors";
    private CatalogsFeedValidationErrors errors;

    public static final String JSON_PROPERTY_WARNINGS = "warnings";
    private CatalogsFeedValidationWarnings warnings;

    public CatalogsFeedValidationDetails(CatalogsFeedValidationErrors errors, CatalogsFeedValidationWarnings warnings) {
        this.errors = errors;
        this.warnings = warnings;
    }

    public CatalogsFeedValidationDetails errors(CatalogsFeedValidationErrors errors) {
        this.errors = errors;
        return this;
    }

    /**
     * Get errors
     * @return errors
     **/
    @Valid
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_ERRORS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsFeedValidationErrors getErrors() {
        return errors;
    }

    @JsonProperty(JSON_PROPERTY_ERRORS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setErrors(CatalogsFeedValidationErrors errors) {
        this.errors = errors;
    }

    public CatalogsFeedValidationDetails warnings(CatalogsFeedValidationWarnings warnings) {
        this.warnings = warnings;
        return this;
    }

    /**
     * Get warnings
     * @return warnings
     **/
    @Valid
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_WARNINGS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsFeedValidationWarnings getWarnings() {
        return warnings;
    }

    @JsonProperty(JSON_PROPERTY_WARNINGS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setWarnings(CatalogsFeedValidationWarnings warnings) {
        this.warnings = warnings;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsFeedValidationDetails catalogsFeedValidationDetails = (CatalogsFeedValidationDetails) o;
        return Objects.equals(this.errors, catalogsFeedValidationDetails.errors) &&
            Objects.equals(this.warnings, catalogsFeedValidationDetails.warnings);
    }

    @Override
    public int hashCode() {
        return Objects.hash(errors, warnings);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsFeedValidationDetails {\n");
        sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
        sb.append("    warnings: ").append(toIndentedString(warnings)).append("\n");
        sb.append("}");
        return sb.toString();
    }

    /**
     * Convert the given object to string with each line indented by 4 spaces
     * (except the first line).
     */
    private String toIndentedString(Object o) {
        if (o == null) {
            return "null";
        }
        return o.toString().replace("\n", "\n    ");
    }

}
