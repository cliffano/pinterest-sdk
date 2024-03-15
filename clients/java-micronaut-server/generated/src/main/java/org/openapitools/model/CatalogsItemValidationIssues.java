/*
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

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import org.openapitools.model.CatalogsItemValidationErrors;
import org.openapitools.model.CatalogsItemValidationWarnings;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * CatalogsItemValidationIssues
 */
@JsonPropertyOrder({
  CatalogsItemValidationIssues.JSON_PROPERTY_ITEM_NUMBER,
  CatalogsItemValidationIssues.JSON_PROPERTY_ITEM_ID,
  CatalogsItemValidationIssues.JSON_PROPERTY_ERRORS,
  CatalogsItemValidationIssues.JSON_PROPERTY_WARNINGS
})
@JsonTypeName("CatalogsItemValidationIssues")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsItemValidationIssues {
    public static final String JSON_PROPERTY_ITEM_NUMBER = "item_number";
    private Integer itemNumber;

    public static final String JSON_PROPERTY_ITEM_ID = "item_id";
    private String itemId;

    public static final String JSON_PROPERTY_ERRORS = "errors";
    private CatalogsItemValidationErrors errors;

    public static final String JSON_PROPERTY_WARNINGS = "warnings";
    private CatalogsItemValidationWarnings warnings;

    public CatalogsItemValidationIssues(Integer itemNumber, String itemId, CatalogsItemValidationErrors errors, CatalogsItemValidationWarnings warnings) {
        this.itemNumber = itemNumber;
        this.itemId = itemId;
        this.errors = errors;
        this.warnings = warnings;
    }

    public CatalogsItemValidationIssues itemNumber(Integer itemNumber) {
        this.itemNumber = itemNumber;
        return this;
    }

    /**
     * Item number based on order of appearance in the Catalogs Feed. For example, &#39;0&#39; refers to first item found in a feed that was downloaded from a &#39;location&#39; specified during feed creation.
     * @return itemNumber
     **/
    @NotNull
    @Schema(name = "item_number", example = "0", description = "Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation.", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ITEM_NUMBER)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Integer getItemNumber() {
        return itemNumber;
    }

    @JsonProperty(JSON_PROPERTY_ITEM_NUMBER)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setItemNumber(Integer itemNumber) {
        this.itemNumber = itemNumber;
    }

    public CatalogsItemValidationIssues itemId(String itemId) {
        this.itemId = itemId;
        return this;
    }

    /**
     * The merchant-created unique ID that represents the product.
     * @return itemId
     **/
    @Nullable
    @Schema(name = "item_id", example = "DS0294-L", description = "The merchant-created unique ID that represents the product.", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ITEM_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getItemId() {
        return itemId;
    }

    @JsonProperty(JSON_PROPERTY_ITEM_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setItemId(String itemId) {
        this.itemId = itemId;
    }

    public CatalogsItemValidationIssues errors(CatalogsItemValidationErrors errors) {
        this.errors = errors;
        return this;
    }

    /**
     * Get errors
     * @return errors
     **/
    @Valid
    @NotNull
    @Schema(name = "errors", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ERRORS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public CatalogsItemValidationErrors getErrors() {
        return errors;
    }

    @JsonProperty(JSON_PROPERTY_ERRORS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setErrors(CatalogsItemValidationErrors errors) {
        this.errors = errors;
    }

    public CatalogsItemValidationIssues warnings(CatalogsItemValidationWarnings warnings) {
        this.warnings = warnings;
        return this;
    }

    /**
     * Get warnings
     * @return warnings
     **/
    @Valid
    @NotNull
    @Schema(name = "warnings", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_WARNINGS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public CatalogsItemValidationWarnings getWarnings() {
        return warnings;
    }

    @JsonProperty(JSON_PROPERTY_WARNINGS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setWarnings(CatalogsItemValidationWarnings warnings) {
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
        CatalogsItemValidationIssues catalogsItemValidationIssues = (CatalogsItemValidationIssues) o;
        return Objects.equals(this.itemNumber, catalogsItemValidationIssues.itemNumber) &&
            Objects.equals(this.itemId, catalogsItemValidationIssues.itemId) &&
            Objects.equals(this.errors, catalogsItemValidationIssues.errors) &&
            Objects.equals(this.warnings, catalogsItemValidationIssues.warnings);
    }

    @Override
    public int hashCode() {
        return Objects.hash(itemNumber, itemId, errors, warnings);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsItemValidationIssues {\n");
        sb.append("    itemNumber: ").append(toIndentedString(itemNumber)).append("\n");
        sb.append("    itemId: ").append(toIndentedString(itemId)).append("\n");
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

