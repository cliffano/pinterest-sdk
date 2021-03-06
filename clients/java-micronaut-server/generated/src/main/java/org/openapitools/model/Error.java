/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
 * Error
 */
@JsonPropertyOrder({
  Error.JSON_PROPERTY_CODE,
  Error.JSON_PROPERTY_MESSAGE
})
@JsonTypeName("Error")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class Error {
    public static final String JSON_PROPERTY_CODE = "code";
    private Integer code;

    public static final String JSON_PROPERTY_MESSAGE = "message";
    private String message;

    public Error(Integer code, String message) {
        this.code = code;
        this.message = message;
    }

    public Error code(Integer code) {
        this.code = code;
        return this;
    }

    /**
     * Get code
     * @return code
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_CODE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public Integer getCode() {
        return code;
    }

    @JsonProperty(JSON_PROPERTY_CODE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setCode(Integer code) {
        this.code = code;
    }

    public Error message(String message) {
        this.message = message;
        return this;
    }

    /**
     * Get message
     * @return message
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_MESSAGE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getMessage() {
        return message;
    }

    @JsonProperty(JSON_PROPERTY_MESSAGE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
        Error error = (Error) o;
        return Objects.equals(this.code, error.code) &&
            Objects.equals(this.message, error.message);
    }

    @Override
    public int hashCode() {
        return Objects.hash(code, message);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class Error {\n");
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
