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
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Date;
import org.openapitools.model.BoardOwner;
import org.openapitools.model.PinMediaSource;
import org.openapitools.model.SummaryPinMedia;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Pin
 */
@ApiModel(description = "Pin")
@JsonPropertyOrder({
  PinCreate.JSON_PROPERTY_ID,
  PinCreate.JSON_PROPERTY_CREATED_AT,
  PinCreate.JSON_PROPERTY_LINK,
  PinCreate.JSON_PROPERTY_TITLE,
  PinCreate.JSON_PROPERTY_DESCRIPTION,
  PinCreate.JSON_PROPERTY_DOMINANT_COLOR,
  PinCreate.JSON_PROPERTY_ALT_TEXT,
  PinCreate.JSON_PROPERTY_BOARD_ID,
  PinCreate.JSON_PROPERTY_BOARD_SECTION_ID,
  PinCreate.JSON_PROPERTY_BOARD_OWNER,
  PinCreate.JSON_PROPERTY_MEDIA,
  PinCreate.JSON_PROPERTY_MEDIA_SOURCE,
  PinCreate.JSON_PROPERTY_PARENT_PIN_ID,
  PinCreate.JSON_PROPERTY_NOTE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class PinCreate   {
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

  public static final String JSON_PROPERTY_DOMINANT_COLOR = "dominant_color";
  @JsonProperty(JSON_PROPERTY_DOMINANT_COLOR)
  private String dominantColor;

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
  private SummaryPinMedia media;

  public static final String JSON_PROPERTY_MEDIA_SOURCE = "media_source";
  @JsonProperty(JSON_PROPERTY_MEDIA_SOURCE)
  private PinMediaSource mediaSource;

  public static final String JSON_PROPERTY_PARENT_PIN_ID = "parent_pin_id";
  @JsonProperty(JSON_PROPERTY_PARENT_PIN_ID)
  private String parentPinId;

  public static final String JSON_PROPERTY_NOTE = "note";
  @JsonProperty(JSON_PROPERTY_NOTE)
  private String note;

  public PinCreate id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
  @JsonProperty(value = "id", access = JsonProperty.Access.READ_ONLY)
  @ApiModelProperty(example = "813744226420795884", value = "")
   @Pattern(regexp="^\\d+$")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public PinCreate createdAt(Date createdAt) {
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

  public PinCreate link(String link) {
    this.link = link;
    return this;
  }

  /**
   * Get link
   * @return link
   **/
  @JsonProperty(value = "link")
  @ApiModelProperty(example = "https://www.pinterest.com/", value = "")
   @Size(max=2048)
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public PinCreate title(String title) {
    this.title = title;
    return this;
  }

  /**
   * Get title
   * @return title
   **/
  @JsonProperty(value = "title")
  @ApiModelProperty(value = "")
   @Size(max=100)
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public PinCreate description(String description) {
    this.description = description;
    return this;
  }

  /**
   * Get description
   * @return description
   **/
  @JsonProperty(value = "description")
  @ApiModelProperty(value = "")
   @Size(max=800)
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public PinCreate dominantColor(String dominantColor) {
    this.dominantColor = dominantColor;
    return this;
  }

  /**
   * Dominant pin color. Hex number, e.g. \\\&quot;#6E7874\\\&quot;.
   * @return dominantColor
   **/
  @JsonProperty(value = "dominant_color")
  @ApiModelProperty(example = "#6E7874", value = "Dominant pin color. Hex number, e.g. \\\"#6E7874\\\".")
  
  public String getDominantColor() {
    return dominantColor;
  }

  public void setDominantColor(String dominantColor) {
    this.dominantColor = dominantColor;
  }

  public PinCreate altText(String altText) {
    this.altText = altText;
    return this;
  }

  /**
   * Get altText
   * @return altText
   **/
  @JsonProperty(value = "alt_text")
  @ApiModelProperty(value = "")
   @Size(max=500)
  public String getAltText() {
    return altText;
  }

  public void setAltText(String altText) {
    this.altText = altText;
  }

  public PinCreate boardId(String boardId) {
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

  public PinCreate boardSectionId(String boardSectionId) {
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

  public PinCreate boardOwner(BoardOwner boardOwner) {
    this.boardOwner = boardOwner;
    return this;
  }

  /**
   * Get boardOwner
   * @return boardOwner
   **/
  @JsonProperty(value = "board_owner")
  @ApiModelProperty(value = "")
  @Valid 
  public BoardOwner getBoardOwner() {
    return boardOwner;
  }

  public void setBoardOwner(BoardOwner boardOwner) {
    this.boardOwner = boardOwner;
  }

  public PinCreate media(SummaryPinMedia media) {
    this.media = media;
    return this;
  }

  /**
   * Get media
   * @return media
   **/
  @JsonProperty(value = "media")
  @ApiModelProperty(value = "")
  @Valid 
  public SummaryPinMedia getMedia() {
    return media;
  }

  public void setMedia(SummaryPinMedia media) {
    this.media = media;
  }

  public PinCreate mediaSource(PinMediaSource mediaSource) {
    this.mediaSource = mediaSource;
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

  public PinCreate parentPinId(String parentPinId) {
    this.parentPinId = parentPinId;
    return this;
  }

  /**
   * The source pin id if this pin was saved from another pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/article/save-pins-on-pinterest\&quot;&gt;Learn more&lt;/a&gt;.
   * @return parentPinId
   **/
  @JsonProperty(value = "parent_pin_id")
  @ApiModelProperty(value = "The source pin id if this pin was saved from another pin. <a href=\"https://help.pinterest.com/article/save-pins-on-pinterest\">Learn more</a>.")
   @Pattern(regexp="^\\d+$")
  public String getParentPinId() {
    return parentPinId;
  }

  public void setParentPinId(String parentPinId) {
    this.parentPinId = parentPinId;
  }

  public PinCreate note(String note) {
    this.note = note;
    return this;
  }

  /**
   * Private note for this Pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/article/add-notes-to-your-pins\&quot;&gt;Learn more&lt;/a&gt;.
   * @return note
   **/
  @JsonProperty(value = "note")
  @ApiModelProperty(value = "Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.")
  
  public String getNote() {
    return note;
  }

  public void setNote(String note) {
    this.note = note;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PinCreate pinCreate = (PinCreate) o;
    return Objects.equals(this.id, pinCreate.id) &&
        Objects.equals(this.createdAt, pinCreate.createdAt) &&
        Objects.equals(this.link, pinCreate.link) &&
        Objects.equals(this.title, pinCreate.title) &&
        Objects.equals(this.description, pinCreate.description) &&
        Objects.equals(this.dominantColor, pinCreate.dominantColor) &&
        Objects.equals(this.altText, pinCreate.altText) &&
        Objects.equals(this.boardId, pinCreate.boardId) &&
        Objects.equals(this.boardSectionId, pinCreate.boardSectionId) &&
        Objects.equals(this.boardOwner, pinCreate.boardOwner) &&
        Objects.equals(this.media, pinCreate.media) &&
        Objects.equals(this.mediaSource, pinCreate.mediaSource) &&
        Objects.equals(this.parentPinId, pinCreate.parentPinId) &&
        Objects.equals(this.note, pinCreate.note);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, createdAt, link, title, description, dominantColor, altText, boardId, boardSectionId, boardOwner, media, mediaSource, parentPinId, note);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinCreate {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    dominantColor: ").append(toIndentedString(dominantColor)).append("\n");
    sb.append("    altText: ").append(toIndentedString(altText)).append("\n");
    sb.append("    boardId: ").append(toIndentedString(boardId)).append("\n");
    sb.append("    boardSectionId: ").append(toIndentedString(boardSectionId)).append("\n");
    sb.append("    boardOwner: ").append(toIndentedString(boardOwner)).append("\n");
    sb.append("    media: ").append(toIndentedString(media)).append("\n");
    sb.append("    mediaSource: ").append(toIndentedString(mediaSource)).append("\n");
    sb.append("    parentPinId: ").append(toIndentedString(parentPinId)).append("\n");
    sb.append("    note: ").append(toIndentedString(note)).append("\n");
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
