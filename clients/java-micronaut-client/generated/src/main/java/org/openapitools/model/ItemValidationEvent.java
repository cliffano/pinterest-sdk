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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Object describing an item validation event
 */
@ApiModel(description = "Object describing an item validation event")
@JsonPropertyOrder({
  ItemValidationEvent.JSON_PROPERTY_ATTRIBUTE,
  ItemValidationEvent.JSON_PROPERTY_CODE,
  ItemValidationEvent.JSON_PROPERTY_MESSAGE
})
@JsonTypeName("ItemValidationEvent")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-08T00:31:09.924165Z[Etc/UTC]")
@Introspected
public class ItemValidationEvent {
    public static final String JSON_PROPERTY_ATTRIBUTE = "attribute";
    private String attribute;

    public static final String JSON_PROPERTY_CODE = "code";
    private Integer code;

    public static final String JSON_PROPERTY_MESSAGE = "message";
    private String message;

    public ItemValidationEvent() {
    }

    public ItemValidationEvent attribute(String attribute) {
        this.attribute = attribute;
        return this;
    }

    /**
     * The attribute that the item validation event references
     * @return attribute
     **/
    @Nullable
    @ApiModelProperty(example = "title", value = "The attribute that the item validation event references")
    @JsonProperty(JSON_PROPERTY_ATTRIBUTE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getAttribute() {
        return attribute;
    }

    @JsonProperty(JSON_PROPERTY_ATTRIBUTE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setAttribute(String attribute) {
        this.attribute = attribute;
    }

    public ItemValidationEvent code(Integer code) {
        this.code = code;
        return this;
    }

    /**
     * The event code that the item validation event references
     * @return code
     **/
    @Nullable
    @ApiModelProperty(example = "106", value = "The event code that the item validation event references")
    @JsonProperty(JSON_PROPERTY_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getCode() {
        return code;
    }

    @JsonProperty(JSON_PROPERTY_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCode(Integer code) {
        this.code = code;
    }

    public ItemValidationEvent message(String message) {
        this.message = message;
        return this;
    }

    /**
     * Title message describing the item validation event
     * @return message
     **/
    @Nullable
    @ApiModelProperty(example = "Title is missing from product metadata.", value = "Title message describing the item validation event")
    @JsonProperty(JSON_PROPERTY_MESSAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getMessage() {
        return message;
    }

    @JsonProperty(JSON_PROPERTY_MESSAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setMessage(String message) {
        this.message = message;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ItemValidationEvent itemValidationEvent = (ItemValidationEvent) o;
        return Objects.equals(this.attribute, itemValidationEvent.attribute) &&
            Objects.equals(this.code, itemValidationEvent.code) &&
            Objects.equals(this.message, itemValidationEvent.message);
    }

    @Override
    public int hashCode() {
        return Objects.hash(attribute, code, message);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ItemValidationEvent {\n");
        sb.append("    attribute: ").append(toIndentedString(attribute)).append("\n");
        sb.append("    code: ").append(toIndentedString(code)).append("\n");
        sb.append("    message: ").append(toIndentedString(message)).append("\n");
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
