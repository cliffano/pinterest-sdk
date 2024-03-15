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
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * PinsSaveRequest
 */
@JsonPropertyOrder({
  PinsSaveRequest.JSON_PROPERTY_BOARD_ID,
  PinsSaveRequest.JSON_PROPERTY_BOARD_SECTION_ID
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class PinsSaveRequest   {
  public static final String JSON_PROPERTY_BOARD_ID = "board_id";
  @JsonProperty(JSON_PROPERTY_BOARD_ID)
  private String boardId;

  public static final String JSON_PROPERTY_BOARD_SECTION_ID = "board_section_id";
  @JsonProperty(JSON_PROPERTY_BOARD_SECTION_ID)
  private String boardSectionId;

  public PinsSaveRequest boardId(String boardId) {
    this.boardId = boardId;
    return this;
  }

  /**
   * Unique identifier of the board to which the pin will be saved.
   * @return boardId
   **/
  @JsonProperty(value = "board_id")
  @ApiModelProperty(value = "Unique identifier of the board to which the pin will be saved.")
   @Pattern(regexp="^\\d+$")
  public String getBoardId() {
    return boardId;
  }

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
  @JsonProperty(value = "board_section_id")
  @ApiModelProperty(value = "Unique identifier of the board section to which the pin will be saved.")
   @Pattern(regexp="^\\d+$")
  public String getBoardSectionId() {
    return boardSectionId;
  }

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

