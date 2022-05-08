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
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Date;
import org.openapitools.model.BoardOwner;
import org.openapitools.model.PinMedia;
import org.openapitools.model.PinMediaSource;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Pin
 */
@ApiModel(description = "Pin")
@JsonPropertyOrder({
  Pin.JSON_PROPERTY_ID,
  Pin.JSON_PROPERTY_CREATED_AT,
  Pin.JSON_PROPERTY_LINK,
  Pin.JSON_PROPERTY_TITLE,
  Pin.JSON_PROPERTY_DESCRIPTION,
  Pin.JSON_PROPERTY_ALT_TEXT,
  Pin.JSON_PROPERTY_BOARD_ID,
  Pin.JSON_PROPERTY_BOARD_SECTION_ID,
  Pin.JSON_PROPERTY_BOARD_OWNER,
  Pin.JSON_PROPERTY_MEDIA,
  Pin.JSON_PROPERTY_MEDIA_SOURCE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-05-08T00:33:19.615491Z[Etc/UTC]")
public class Pin   {
  public static final String JSON_PROPERTY_ID = "id";
  @JsonProperty(JSON_PROPERTY_ID)
  private String id;

  public static final String JSON_PROPERTY_CREATED_AT = "created_at";
  @JsonProperty(JSON_PROPERTY_CREATED_AT)
  private Date createdAt;

  public static final String JSON_PROPERTY_LINK = "link";
  @JsonProperty(JSON_PROPERTY_LINK)
  private String link;

  public static final String JSON_PROPERTY_TITLE = "title";
  @JsonProperty(JSON_PROPERTY_TITLE)
  private String title;

  public static final String JSON_PROPERTY_DESCRIPTION = "description";
  @JsonProperty(JSON_PROPERTY_DESCRIPTION)
  private String description;

  public static final String JSON_PROPERTY_ALT_TEXT = "alt_text";
  @JsonProperty(JSON_PROPERTY_ALT_TEXT)
  private String altText;

  public static final String JSON_PROPERTY_BOARD_ID = "board_id";
  @JsonProperty(JSON_PROPERTY_BOARD_ID)
  private String boardId;

  public static final String JSON_PROPERTY_BOARD_SECTION_ID = "board_section_id";
  @JsonProperty(JSON_PROPERTY_BOARD_SECTION_ID)
  private String boardSectionId;

  public static final String JSON_PROPERTY_BOARD_OWNER = "board_owner";
  @JsonProperty(JSON_PROPERTY_BOARD_OWNER)
  private BoardOwner boardOwner;

  public static final String JSON_PROPERTY_MEDIA = "media";
  @JsonProperty(JSON_PROPERTY_MEDIA)
  private PinMedia media;

  public static final String JSON_PROPERTY_MEDIA_SOURCE = "media_source";
  @JsonProperty(JSON_PROPERTY_MEDIA_SOURCE)
  private PinMediaSource mediaSource;

  public Pin id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
  @JsonProperty(value = "id", access = JsonProperty.Access.READ_ONLY)
  @ApiModelProperty(example = "813744226420795884", value = "")
  
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public Pin createdAt(Date createdAt) {
    this.createdAt = createdAt;
    return this;
  }

  /**
   * Get createdAt
   * @return createdAt
   **/
  @JsonProperty(value = "created_at", access = JsonProperty.Access.READ_ONLY)
  @ApiModelProperty(example = "2020-01-01T20:10:40Z", value = "")
  
  public Date getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(Date createdAt) {
    this.createdAt = createdAt;
  }

  public Pin link(String link) {
    this.link = link;
    return this;
  }

  /**
   * Get link
   * @return link
   **/
  @JsonProperty(value = "link")
  @ApiModelProperty(example = "https://www.pinterest.com/", value = "")
  
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public Pin title(String title) {
    this.title = title;
    return this;
  }

  /**
   * Get title
   * @return title
   **/
  @JsonProperty(value = "title")
  @ApiModelProperty(value = "")
  
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public Pin description(String description) {
    this.description = description;
    return this;
  }

  /**
   * Get description
   * @return description
   **/
  @JsonProperty(value = "description")
  @ApiModelProperty(value = "")
  
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public Pin altText(String altText) {
    this.altText = altText;
    return this;
  }

  /**
   * Get altText
   * @return altText
   **/
  @JsonProperty(value = "alt_text")
  @ApiModelProperty(value = "")
  
  public String getAltText() {
    return altText;
  }

  public void setAltText(String altText) {
    this.altText = altText;
  }

  public Pin boardId(String boardId) {
    this.boardId = boardId;
    return this;
  }

  /**
   * The board to which this Pin belongs.
   * @return boardId
   **/
  @JsonProperty(value = "board_id")
  @ApiModelProperty(value = "The board to which this Pin belongs.")
   @Pattern(regexp="^\\d+$")
  public String getBoardId() {
    return boardId;
  }

  public void setBoardId(String boardId) {
    this.boardId = boardId;
  }

  public Pin boardSectionId(String boardSectionId) {
    this.boardSectionId = boardSectionId;
    return this;
  }

  /**
   * The board section to which this Pin belongs.
   * @return boardSectionId
   **/
  @JsonProperty(value = "board_section_id")
  @ApiModelProperty(value = "The board section to which this Pin belongs.")
   @Pattern(regexp="^\\d+$")
  public String getBoardSectionId() {
    return boardSectionId;
  }

  public void setBoardSectionId(String boardSectionId) {
    this.boardSectionId = boardSectionId;
  }

  public Pin boardOwner(BoardOwner boardOwner) {
    this.boardOwner = boardOwner;
    return this;
  }

  public Pin putBoardOwnerItem(String key,  boardOwnerItem) {
    if (this.boardOwner == null) {
      this.boardOwner = ;
    }
    this.boardOwner.put(key, boardOwnerItem);
    return this;
  }

  /**
   * Get boardOwner
   * @return boardOwner
   **/
  @JsonProperty(value = "board_owner", access = JsonProperty.Access.READ_ONLY)
  @ApiModelProperty(value = "")
  @Valid 
  public BoardOwner getBoardOwner() {
    return boardOwner;
  }

  public void setBoardOwner(BoardOwner boardOwner) {
    this.boardOwner = boardOwner;
  }

  public Pin media(PinMedia media) {
    this.media = media;
    return this;
  }

  public Pin putMediaItem(String key,  mediaItem) {
    if (this.media == null) {
      this.media = ;
    }
    this.media.put(key, mediaItem);
    return this;
  }

  /**
   * Get media
   * @return media
   **/
  @JsonProperty(value = "media", access = JsonProperty.Access.READ_ONLY)
  @ApiModelProperty(value = "")
  @Valid 
  public PinMedia getMedia() {
    return media;
  }

  public void setMedia(PinMedia media) {
    this.media = media;
  }

  public Pin mediaSource(PinMediaSource mediaSource) {
    this.mediaSource = mediaSource;
    return this;
  }

  public Pin putMediaSourceItem(String key,  mediaSourceItem) {
    if (this.mediaSource == null) {
      this.mediaSource = ;
    }
    this.mediaSource.put(key, mediaSourceItem);
    return this;
  }

  /**
   * Get mediaSource
   * @return mediaSource
   **/
  @JsonProperty(value = "media_source", access = JsonProperty.Access.WRITE_ONLY)
  @ApiModelProperty(value = "")
  @Valid 
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
    return Objects.equals(this.id, pin.id) &&
        Objects.equals(this.createdAt, pin.createdAt) &&
        Objects.equals(this.link, pin.link) &&
        Objects.equals(this.title, pin.title) &&
        Objects.equals(this.description, pin.description) &&
        Objects.equals(this.altText, pin.altText) &&
        Objects.equals(this.boardId, pin.boardId) &&
        Objects.equals(this.boardSectionId, pin.boardSectionId) &&
        Objects.equals(this.boardOwner, pin.boardOwner) &&
        Objects.equals(this.media, pin.media) &&
        Objects.equals(this.mediaSource, pin.mediaSource);
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
