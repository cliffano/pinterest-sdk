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
import com.fasterxml.jackson.annotation.JsonTypeName;
import org.openapitools.jackson.nullable.JsonNullable;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * PinsSaveRequest
 */
@JsonPropertyOrder({
  PinsSaveRequest.JSON_PROPERTY_BOARD_ID,
  PinsSaveRequest.JSON_PROPERTY_BOARD_SECTION_ID
})
@JsonTypeName("pins_save_request")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class PinsSaveRequest {
    public static final String JSON_PROPERTY_BOARD_ID = "board_id";
    private String boardId;

    public static final String JSON_PROPERTY_BOARD_SECTION_ID = "board_section_id";
    private String boardSectionId;

    public PinsSaveRequest() {
    }

    public PinsSaveRequest boardId(String boardId) {
        this.boardId = boardId;
        return this;
    }

    /**
     * Unique identifier of the board to which the pin will be saved.
     * @return boardId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @JsonProperty(JSON_PROPERTY_BOARD_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getBoardId() {
        return boardId;
    }

    @JsonProperty(JSON_PROPERTY_BOARD_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBoardId(String boardId) {
        this.boardId = boardId;
    }

    public PinsSaveRequest boardSectionId(String boardSectionId) {
        this.boardSectionId = boardSectionId;
        return this;
    }

    /**
     * Unique identifier of the board section to which the pin will be saved.
     * @return boardSectionId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @JsonProperty(JSON_PROPERTY_BOARD_SECTION_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getBoardSectionId() {
        return boardSectionId;
    }

    @JsonProperty(JSON_PROPERTY_BOARD_SECTION_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBoardSectionId(String boardSectionId) {
        this.boardSectionId = boardSectionId;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        PinsSaveRequest pinsSaveRequest = (PinsSaveRequest) o;
        return Objects.equals(this.boardId, pinsSaveRequest.boardId) &&
            Objects.equals(this.boardSectionId, pinsSaveRequest.boardSectionId);
    }

    @Override
    public int hashCode() {
        return Objects.hash(boardId, boardSectionId);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class PinsSaveRequest {\n");
        sb.append("    boardId: ").append(toIndentedString(boardId)).append("\n");
        sb.append("    boardSectionId: ").append(toIndentedString(boardSectionId)).append("\n");
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

