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
import org.openapitools.model.CatalogsHotelAttributes;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * A hotel item to be upserted.
 */
@JsonPropertyOrder({
  CatalogsUpsertHotelItem.JSON_PROPERTY_HOTEL_ID,
  CatalogsUpsertHotelItem.JSON_PROPERTY_OPERATION,
  CatalogsUpsertHotelItem.JSON_PROPERTY_ATTRIBUTES
})
@JsonTypeName("CatalogsUpsertHotelItem")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsUpsertHotelItem {
    public static final String JSON_PROPERTY_HOTEL_ID = "hotel_id";
    private String hotelId;

    /**
     * Gets or Sets operation
     */
    public enum OperationEnum {
        UPSERT("UPSERT");

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
    private CatalogsHotelAttributes attributes;

    public CatalogsUpsertHotelItem(String hotelId, OperationEnum operation, CatalogsHotelAttributes attributes) {
        this.hotelId = hotelId;
        this.operation = operation;
        this.attributes = attributes;
    }

    public CatalogsUpsertHotelItem hotelId(String hotelId) {
        this.hotelId = hotelId;
        return this;
    }

    /**
     * The catalog hotel id in the merchant namespace
     * @return hotelId
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_HOTEL_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getHotelId() {
        return hotelId;
    }

    @JsonProperty(JSON_PROPERTY_HOTEL_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setHotelId(String hotelId) {
        this.hotelId = hotelId;
    }

    public CatalogsUpsertHotelItem operation(OperationEnum operation) {
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

    public CatalogsUpsertHotelItem attributes(CatalogsHotelAttributes attributes) {
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
    public CatalogsHotelAttributes getAttributes() {
        return attributes;
    }

    @JsonProperty(JSON_PROPERTY_ATTRIBUTES)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setAttributes(CatalogsHotelAttributes attributes) {
        this.attributes = attributes;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsUpsertHotelItem catalogsUpsertHotelItem = (CatalogsUpsertHotelItem) o;
        return Objects.equals(this.hotelId, catalogsUpsertHotelItem.hotelId) &&
            Objects.equals(this.operation, catalogsUpsertHotelItem.operation) &&
            Objects.equals(this.attributes, catalogsUpsertHotelItem.attributes);
    }

    @Override
    public int hashCode() {
        return Objects.hash(hotelId, operation, attributes);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsUpsertHotelItem {\n");
        sb.append("    hotelId: ").append(toIndentedString(hotelId)).append("\n");
        sb.append("    operation: ").append(toIndentedString(operation)).append("\n");
        sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
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

