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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.UpdatableItemAttributes;
import org.openapitools.model.UpdateMaskFieldType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * An item to be updated
 */
@JsonPropertyOrder({
  CatalogsUpdateRetailItem.JSON_PROPERTY_ITEM_ID,
  CatalogsUpdateRetailItem.JSON_PROPERTY_OPERATION,
  CatalogsUpdateRetailItem.JSON_PROPERTY_ATTRIBUTES,
  CatalogsUpdateRetailItem.JSON_PROPERTY_UPDATE_MASK
})
@JsonTypeName("CatalogsUpdateRetailItem")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsUpdateRetailItem {
    public static final String JSON_PROPERTY_ITEM_ID = "item_id";
    private String itemId;

    /**
     * Gets or Sets operation
     */
    public enum OperationEnum {
        CREATE("CREATE"),
        UPDATE("UPDATE"),
        UPSERT("UPSERT"),
        DELETE("DELETE");

        private String value;

        OperationEnum(String value) {
            this.value = value;
        }

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static OperationEnum fromValue(String value) {
            for (OperationEnum b : OperationEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_OPERATION = "operation";
    private OperationEnum operation;

    public static final String JSON_PROPERTY_ATTRIBUTES = "attributes";
    private UpdatableItemAttributes attributes;

    public static final String JSON_PROPERTY_UPDATE_MASK = "update_mask";
    private List<UpdateMaskFieldType> updateMask = null;

    public CatalogsUpdateRetailItem(String itemId, OperationEnum operation, UpdatableItemAttributes attributes) {
        this.itemId = itemId;
        this.operation = operation;
        this.attributes = attributes;
    }

    public CatalogsUpdateRetailItem itemId(String itemId) {
        this.itemId = itemId;
        return this;
    }

    /**
     * The catalog item id in the merchant namespace
     * @return itemId
     **/
    @NotNull
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

    public CatalogsUpdateRetailItem operation(OperationEnum operation) {
        this.operation = operation;
        return this;
    }

    /**
     * Get operation
     * @return operation
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_OPERATION)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public OperationEnum getOperation() {
        return operation;
    }

    @JsonProperty(JSON_PROPERTY_OPERATION)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setOperation(OperationEnum operation) {
        this.operation = operation;
    }

    public CatalogsUpdateRetailItem attributes(UpdatableItemAttributes attributes) {
        this.attributes = attributes;
        return this;
    }

    /**
     * Get attributes
     * @return attributes
     **/
    @Valid
    @NotNull
    @JsonProperty(JSON_PROPERTY_ATTRIBUTES)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public UpdatableItemAttributes getAttributes() {
        return attributes;
    }

    @JsonProperty(JSON_PROPERTY_ATTRIBUTES)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setAttributes(UpdatableItemAttributes attributes) {
        this.attributes = attributes;
    }

    public CatalogsUpdateRetailItem updateMask(List<UpdateMaskFieldType> updateMask) {
        this.updateMask = updateMask;
        return this;
    }

    public CatalogsUpdateRetailItem addUpdateMaskItem(UpdateMaskFieldType updateMaskItem) {
        if (this.updateMask == null) {
            this.updateMask = new ArrayList<>();
        }
        this.updateMask.add(updateMaskItem);
        return this;
    }

    /**
     * The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.
     * @return updateMask
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_UPDATE_MASK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<UpdateMaskFieldType> getUpdateMask() {
        return updateMask;
    }

    @JsonProperty(JSON_PROPERTY_UPDATE_MASK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setUpdateMask(List<UpdateMaskFieldType> updateMask) {
        this.updateMask = updateMask;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsUpdateRetailItem catalogsUpdateRetailItem = (CatalogsUpdateRetailItem) o;
        return Objects.equals(this.itemId, catalogsUpdateRetailItem.itemId) &&
            Objects.equals(this.operation, catalogsUpdateRetailItem.operation) &&
            Objects.equals(this.attributes, catalogsUpdateRetailItem.attributes) &&
            Objects.equals(this.updateMask, catalogsUpdateRetailItem.updateMask);
    }

    @Override
    public int hashCode() {
        return Objects.hash(itemId, operation, attributes, updateMask);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsUpdateRetailItem {\n");
        sb.append("    itemId: ").append(toIndentedString(itemId)).append("\n");
        sb.append("    operation: ").append(toIndentedString(operation)).append("\n");
        sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
        sb.append("    updateMask: ").append(toIndentedString(updateMask)).append("\n");
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

