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


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.cliffano.pinterestsdk.model.BoardOwner;
import com.cliffano.pinterestsdk.model.PinMedia;
import com.cliffano.pinterestsdk.model.PinMediaSource;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import org.openapitools.jackson.nullable.JsonNullable;
import org.threeten.bp.OffsetDateTime;

/**
 * Pin
 */
@ApiModel(description = "Pin")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-07-01T11:59:02.167556Z[Etc/UTC]")
public class Pin {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_CREATED_AT = "created_at";
  @SerializedName(SERIALIZED_NAME_CREATED_AT)
  private OffsetDateTime createdAt;

  public static final String SERIALIZED_NAME_LINK = "link";
  @SerializedName(SERIALIZED_NAME_LINK)
  private String link;

  public static final String SERIALIZED_NAME_TITLE = "title";
  @SerializedName(SERIALIZED_NAME_TITLE)
  private String title;

  public static final String SERIALIZED_NAME_DESCRIPTION = "description";
  @SerializedName(SERIALIZED_NAME_DESCRIPTION)
  private String description;

  public static final String SERIALIZED_NAME_ALT_TEXT = "alt_text";
  @SerializedName(SERIALIZED_NAME_ALT_TEXT)
  private String altText;

  public static final String SERIALIZED_NAME_BOARD_ID = "board_id";
  @SerializedName(SERIALIZED_NAME_BOARD_ID)
  private String boardId;

  public static final String SERIALIZED_NAME_BOARD_SECTION_ID = "board_section_id";
  @SerializedName(SERIALIZED_NAME_BOARD_SECTION_ID)
  private String boardSectionId;

  public static final String SERIALIZED_NAME_BOARD_OWNER = "board_owner";
  @SerializedName(SERIALIZED_NAME_BOARD_OWNER)
  private BoardOwner boardOwner;

  public static final String SERIALIZED_NAME_MEDIA = "media";
  @SerializedName(SERIALIZED_NAME_MEDIA)
  private PinMedia media;

  public static final String SERIALIZED_NAME_MEDIA_SOURCE = "media_source";
  @SerializedName(SERIALIZED_NAME_MEDIA_SOURCE)
  private PinMediaSource mediaSource;

  public Pin() { 
  }

  
  public Pin(
     String id, 
     OffsetDateTime createdAt, 
     BoardOwner boardOwner, 
     PinMedia media
  ) {
    this();
    this.id = id;
    this.createdAt = createdAt;
    this.boardOwner = boardOwner;
    this.media = media;
  }

   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "813744226420795884", value = "")

  public String getId() {
    return id;
  }




   /**
   * Get createdAt
   * @return createdAt
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "2020-01-01T20:10:40Z", value = "")

  public OffsetDateTime getCreatedAt() {
    return createdAt;
  }




  public Pin link(String link) {
    
    this.link = link;
    return this;
  }

   /**
   * Get link
   * @return link
  **/
  @javax.annotation.Nullable
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
  @javax.annotation.Nullable
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
  @javax.annotation.Nullable
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
  @javax.annotation.Nullable
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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The board to which this Pin belongs.")

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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The board section to which this Pin belongs.")

  public String getBoardSectionId() {
    return boardSectionId;
  }


  public void setBoardSectionId(String boardSectionId) {
    this.boardSectionId = boardSectionId;
  }


   /**
   * Get boardOwner
   * @return boardOwner
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BoardOwner getBoardOwner() {
    return boardOwner;
  }




   /**
   * Get media
   * @return media
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public PinMedia getMedia() {
    return media;
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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

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

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, createdAt, link, title, description, altText, boardId, boardSectionId, boardOwner, media, mediaSource);
  }

  private static <T> int hashCodeNullable(JsonNullable<T> a) {
    if (a == null) {
      return 1;
    }
    return a.isPresent() ? Arrays.deepHashCode(new Object[]{a.get()}) : 31;
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

