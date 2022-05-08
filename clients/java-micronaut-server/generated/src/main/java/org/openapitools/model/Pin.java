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
import java.time.LocalDateTime;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.BoardOwner;
import org.openapitools.model.PinMedia;
import org.openapitools.model.PinMediaSource;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

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
@JsonTypeName("Pin")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class Pin {
    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_CREATED_AT = "created_at";
    private LocalDateTime createdAt;

    public static final String JSON_PROPERTY_LINK = "link";
    private String link;

    public static final String JSON_PROPERTY_TITLE = "title";
    private String title;

    public static final String JSON_PROPERTY_DESCRIPTION = "description";
    private String description;

    public static final String JSON_PROPERTY_ALT_TEXT = "alt_text";
    private String altText;

    public static final String JSON_PROPERTY_BOARD_ID = "board_id";
    private String boardId;

    public static final String JSON_PROPERTY_BOARD_SECTION_ID = "board_section_id";
    private String boardSectionId;

    public static final String JSON_PROPERTY_BOARD_OWNER = "board_owner";
    private BoardOwner boardOwner;

    public static final String JSON_PROPERTY_MEDIA = "media";
    private PinMedia media;

    public static final String JSON_PROPERTY_MEDIA_SOURCE = "media_source";
    private PinMediaSource mediaSource;

    public Pin() {
    }

    /**
     * Get id
     * @return id
     **/
    @Nullable
    @ApiModelProperty(example = "813744226420795884", value = "")
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getId() {
        return id;
    }

    /**
     * Get createdAt
     * @return createdAt
     **/
    @Nullable
    @ApiModelProperty(example = "2020-01-01T20:10:40Z", value = "")
    @JsonProperty(JSON_PROPERTY_CREATED_AT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    @JsonFormat(shape = JsonFormat.Shape.STRING, pattern = "yyyy-MM-dd'T'HH:mm:ss.SSSXXXX")
       public LocalDateTime getCreatedAt() {
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
    @Nullable
    @ApiModelProperty(example = "https://www.pinterest.com/", value = "")
    @JsonProperty(JSON_PROPERTY_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getLink() {
        return link;
    }

    @JsonProperty(JSON_PROPERTY_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_TITLE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getTitle() {
        return title;
    }

    @JsonProperty(JSON_PROPERTY_TITLE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_DESCRIPTION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getDescription() {
        return description;
    }

    @JsonProperty(JSON_PROPERTY_DESCRIPTION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_ALT_TEXT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getAltText() {
        return altText;
    }

    @JsonProperty(JSON_PROPERTY_ALT_TEXT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(value = "The board to which this Pin belongs.")
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

    public Pin boardSectionId(String boardSectionId) {
        this.boardSectionId = boardSectionId;
        return this;
    }

    /**
     * The board section to which this Pin belongs.
     * @return boardSectionId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(value = "The board section to which this Pin belongs.")
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

    /**
     * Get boardOwner
     * @return boardOwner
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_BOARD_OWNER)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public BoardOwner getBoardOwner() {
        return boardOwner;
    }

    /**
     * Get media
     * @return media
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_MEDIA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_MEDIA_SOURCE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public PinMediaSource getMediaSource() {
        return mediaSource;
    }

    @JsonProperty(JSON_PROPERTY_MEDIA_SOURCE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
