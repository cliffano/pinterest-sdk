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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.ItemProcessingStatus;
import org.openapitools.model.ItemValidationEvent;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Object describing an item processing record
 */
@JsonPropertyOrder({
  ItemProcessingRecord.JSON_PROPERTY_ITEM_ID,
  ItemProcessingRecord.JSON_PROPERTY_ERRORS,
  ItemProcessingRecord.JSON_PROPERTY_WARNINGS,
  ItemProcessingRecord.JSON_PROPERTY_STATUS
})
@JsonTypeName("ItemProcessingRecord")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class ItemProcessingRecord {
    public static final String JSON_PROPERTY_ITEM_ID = "item_id";
    private String itemId;

    public static final String JSON_PROPERTY_ERRORS = "errors";
    private List<@Valid ItemValidationEvent> errors = null;

    public static final String JSON_PROPERTY_WARNINGS = "warnings";
    private List<@Valid ItemValidationEvent> warnings = null;

    public static final String JSON_PROPERTY_STATUS = "status";
    private ItemProcessingStatus status;

    public ItemProcessingRecord() {
    }

    public ItemProcessingRecord itemId(String itemId) {
        this.itemId = itemId;
        return this;
    }

    /**
     * The catalog item id in the merchant namespace
     * @return itemId
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_ITEM_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getItemId() {
        return itemId;
    }

    @JsonProperty(JSON_PROPERTY_ITEM_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setItemId(String itemId) {
        this.itemId = itemId;
    }

    public ItemProcessingRecord errors(List<@Valid ItemValidationEvent> errors) {
        this.errors = errors;
        return this;
    }

    public ItemProcessingRecord addErrorsItem(ItemValidationEvent errorsItem) {
        if (this.errors == null) {
            this.errors = new ArrayList<>();
        }
        this.errors.add(errorsItem);
        return this;
    }

    /**
     * Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
     * @return errors
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_ERRORS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid ItemValidationEvent> getErrors() {
        return errors;
    }

    @JsonProperty(JSON_PROPERTY_ERRORS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setErrors(List<@Valid ItemValidationEvent> errors) {
        this.errors = errors;
    }

    public ItemProcessingRecord warnings(List<@Valid ItemValidationEvent> warnings) {
        this.warnings = warnings;
        return this;
    }

    public ItemProcessingRecord addWarningsItem(ItemValidationEvent warningsItem) {
        if (this.warnings == null) {
            this.warnings = new ArrayList<>();
        }
        this.warnings.add(warningsItem);
        return this;
    }

    /**
     * Array with the validation warnings for the item processing record
     * @return warnings
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_WARNINGS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid ItemValidationEvent> getWarnings() {
        return warnings;
    }

    @JsonProperty(JSON_PROPERTY_WARNINGS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setWarnings(List<@Valid ItemValidationEvent> warnings) {
        this.warnings = warnings;
    }

    public ItemProcessingRecord status(ItemProcessingStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ItemProcessingStatus getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setStatus(ItemProcessingStatus status) {
        this.status = status;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ItemProcessingRecord itemProcessingRecord = (ItemProcessingRecord) o;
        return Objects.equals(this.itemId, itemProcessingRecord.itemId) &&
            Objects.equals(this.errors, itemProcessingRecord.errors) &&
            Objects.equals(this.warnings, itemProcessingRecord.warnings) &&
            Objects.equals(this.status, itemProcessingRecord.status);
    }

    @Override
    public int hashCode() {
        return Objects.hash(itemId, errors, warnings, status);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ItemProcessingRecord {\n");
        sb.append("    itemId: ").append(toIndentedString(itemId)).append("\n");
        sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
        sb.append("    warnings: ").append(toIndentedString(warnings)).append("\n");
        sb.append("    status: ").append(toIndentedString(status)).append("\n");
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
