package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;

/**
 * A hotel item to be deleted
 **/
@ApiModel(description = "A hotel item to be deleted")
@JsonTypeName("CatalogsDeleteHotelItem")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2024-03-14T23:05:05.545684373Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsDeleteHotelItem   {
  private @Valid String hotelId;
  public enum OperationEnum {

    DELETE(String.valueOf("DELETE"));


    private String value;

    OperationEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    /**
     * Convert a String into String, as specified in the
     * <a href="https://download.oracle.com/otndocs/jcp/jaxrs-2_0-fr-eval-spec/index.html">See JAX RS 2.0 Specification, section 3.2, p. 12</a>
     */
    public static OperationEnum fromString(String s) {
        for (OperationEnum b : OperationEnum.values()) {
            // using Objects.toString() to be safe if value type non-object type
            // because types like 'int' etc. will be auto-boxed
            if (java.util.Objects.toString(b.value).equals(s)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected string value '" + s + "'");
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

  private @Valid OperationEnum operation;

  /**
   * The catalog hotel id in the merchant namespace
   **/
  public CatalogsDeleteHotelItem hotelId(String hotelId) {
    this.hotelId = hotelId;
    return this;
  }

  
  @ApiModelProperty(example = "DS0294-M", required = true, value = "The catalog hotel id in the merchant namespace")
  @JsonProperty("hotel_id")
  @NotNull
  public String getHotelId() {
    return hotelId;
  }

  @JsonProperty("hotel_id")
  public void setHotelId(String hotelId) {
    this.hotelId = hotelId;
  }

  /**
   **/
  public CatalogsDeleteHotelItem operation(OperationEnum operation) {
    this.operation = operation;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("operation")
  @NotNull
  public OperationEnum getOperation() {
    return operation;
  }

  @JsonProperty("operation")
  public void setOperation(OperationEnum operation) {
    this.operation = operation;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsDeleteHotelItem catalogsDeleteHotelItem = (CatalogsDeleteHotelItem) o;
    return Objects.equals(this.hotelId, catalogsDeleteHotelItem.hotelId) &&
        Objects.equals(this.operation, catalogsDeleteHotelItem.operation);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hotelId, operation);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsDeleteHotelItem {\n");
    
    sb.append("    hotelId: ").append(toIndentedString(hotelId)).append("\n");
    sb.append("    operation: ").append(toIndentedString(operation)).append("\n");
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

