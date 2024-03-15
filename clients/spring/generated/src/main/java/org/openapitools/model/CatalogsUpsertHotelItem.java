package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import org.openapitools.model.CatalogsHotelAttributes;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * A hotel item to be upserted.
 */

@Schema(name = "CatalogsUpsertHotelItem", description = "A hotel item to be upserted.")
@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2024-03-14T23:15:39.458648915Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsUpsertHotelItem {

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

  private OperationEnum operation;

  private CatalogsHotelAttributes attributes;

  public CatalogsUpsertHotelItem() {
    super();
  }

  /**
   * Constructor with only required parameters
   */
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
  */
  @NotNull 
  @Schema(name = "hotel_id", example = "DS0294-M", description = "The catalog hotel id in the merchant namespace", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("hotel_id")
  public String getHotelId() {
    return hotelId;
  }

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
  */
  @NotNull 
  @Schema(name = "operation", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("operation")
  public OperationEnum getOperation() {
    return operation;
  }

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
  */
  @NotNull @Valid 
  @Schema(name = "attributes", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("attributes")
  public CatalogsHotelAttributes getAttributes() {
    return attributes;
  }

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

