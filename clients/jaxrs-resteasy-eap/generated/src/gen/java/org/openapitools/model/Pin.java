package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Date;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.BoardOwner;
import org.openapitools.model.PinMedia;
import org.openapitools.model.PinMediaSource;
import javax.validation.constraints.*;
import io.swagger.annotations.*;

@ApiModel(description="Pin")@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2022-05-08T00:33:44.584572Z[Etc/UTC]")
public class Pin   {
  

  private String id;

  private Date createdAt;

  private String link;

  private String title;

  private String description;

  private String altText;

  private String boardId;

  private String boardSectionId;

  private BoardOwner boardOwner;

  private PinMedia media;

  private PinMediaSource mediaSource;

  /**
   **/
  
  @ApiModelProperty(example = "813744226420795884", value = "")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  
  @ApiModelProperty(example = "2020-01-01T20:10:40Z", value = "")
  @JsonProperty("created_at")
  public Date getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(Date createdAt) {
    this.createdAt = createdAt;
  }

  /**
   **/
  
  @ApiModelProperty(example = "https://www.pinterest.com/", value = "")
  @JsonProperty("link")
  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("description")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("alt_text")
  public String getAltText() {
    return altText;
  }
  public void setAltText(String altText) {
    this.altText = altText;
  }

  /**
   * The board to which this Pin belongs.
   **/
  
  @ApiModelProperty(value = "The board to which this Pin belongs.")
  @JsonProperty("board_id")
 @Pattern(regexp="^\\d+$")  public String getBoardId() {
    return boardId;
  }
  public void setBoardId(String boardId) {
    this.boardId = boardId;
  }

  /**
   * The board section to which this Pin belongs.
   **/
  
  @ApiModelProperty(value = "The board section to which this Pin belongs.")
  @JsonProperty("board_section_id")
 @Pattern(regexp="^\\d+$")  public String getBoardSectionId() {
    return boardSectionId;
  }
  public void setBoardSectionId(String boardSectionId) {
    this.boardSectionId = boardSectionId;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("board_owner")
  public BoardOwner getBoardOwner() {
    return boardOwner;
  }
  public void setBoardOwner(BoardOwner boardOwner) {
    this.boardOwner = boardOwner;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("media")
  public PinMedia getMedia() {
    return media;
  }
  public void setMedia(PinMedia media) {
    this.media = media;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("media_source")
  public PinMediaSource getMediaSource() {
    return mediaSource;
  }
  public void setMediaSource(PinMediaSource mediaSource) {
    this.mediaSource = mediaSource;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Pin pin = (Pin) o;
    return Objects.equals(id, pin.id) &&
        Objects.equals(createdAt, pin.createdAt) &&
        Objects.equals(link, pin.link) &&
        Objects.equals(title, pin.title) &&
        Objects.equals(description, pin.description) &&
        Objects.equals(altText, pin.altText) &&
        Objects.equals(boardId, pin.boardId) &&
        Objects.equals(boardSectionId, pin.boardSectionId) &&
        Objects.equals(boardOwner, pin.boardOwner) &&
        Objects.equals(media, pin.media) &&
        Objects.equals(mediaSource, pin.mediaSource);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, createdAt, link, title, description, altText, boardId, boardSectionId, boardOwner, media, mediaSource);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Pin {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    altText: ").append(toIndentedString(altText)).append("\n");
    sb.append("    boardId: ").append(toIndentedString(boardId)).append("\n");
    sb.append("    boardSectionId: ").append(toIndentedString(boardSectionId)).append("\n");
    sb.append("    boardOwner: ").append(toIndentedString(boardOwner)).append("\n");
    sb.append("    media: ").append(toIndentedString(media)).append("\n");
    sb.append("    mediaSource: ").append(toIndentedString(mediaSource)).append("\n");
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

