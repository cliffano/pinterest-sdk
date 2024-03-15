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
import java.time.OffsetDateTime;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.BoardOwner;
import org.openapitools.model.CreativeType;
import org.openapitools.model.PinMediaSource;
import org.openapitools.model.SummaryPinMedia;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Pin
 */
@JsonPropertyOrder({
  Pin.JSON_PROPERTY_ID,
  Pin.JSON_PROPERTY_CREATED_AT,
  Pin.JSON_PROPERTY_LINK,
  Pin.JSON_PROPERTY_TITLE,
  Pin.JSON_PROPERTY_DESCRIPTION,
  Pin.JSON_PROPERTY_DOMINANT_COLOR,
  Pin.JSON_PROPERTY_ALT_TEXT,
  Pin.JSON_PROPERTY_CREATIVE_TYPE,
  Pin.JSON_PROPERTY_BOARD_ID,
  Pin.JSON_PROPERTY_BOARD_SECTION_ID,
  Pin.JSON_PROPERTY_BOARD_OWNER,
  Pin.JSON_PROPERTY_IS_OWNER,
  Pin.JSON_PROPERTY_MEDIA,
  Pin.JSON_PROPERTY_MEDIA_SOURCE,
  Pin.JSON_PROPERTY_PARENT_PIN_ID,
  Pin.JSON_PROPERTY_IS_STANDARD,
  Pin.JSON_PROPERTY_HAS_BEEN_PROMOTED,
  Pin.JSON_PROPERTY_NOTE,
  Pin.JSON_PROPERTY_PIN_METRICS
})
@JsonTypeName("Pin")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class Pin {
    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_CREATED_AT = "created_at";
    private OffsetDateTime createdAt;

    public static final String JSON_PROPERTY_LINK = "link";
    private String link;

    public static final String JSON_PROPERTY_TITLE = "title";
    private String title;

    public static final String JSON_PROPERTY_DESCRIPTION = "description";
    private String description;

    public static final String JSON_PROPERTY_DOMINANT_COLOR = "dominant_color";
    private String dominantColor;

    public static final String JSON_PROPERTY_ALT_TEXT = "alt_text";
    private String altText;

    public static final String JSON_PROPERTY_CREATIVE_TYPE = "creative_type";
    private CreativeType creativeType;

    public static final String JSON_PROPERTY_BOARD_ID = "board_id";
    private String boardId;

    public static final String JSON_PROPERTY_BOARD_SECTION_ID = "board_section_id";
    private String boardSectionId;

    public static final String JSON_PROPERTY_BOARD_OWNER = "board_owner";
    private BoardOwner boardOwner;

    public static final String JSON_PROPERTY_IS_OWNER = "is_owner";
    private Boolean isOwner;

    public static final String JSON_PROPERTY_MEDIA = "media";
    private SummaryPinMedia media;

    public static final String JSON_PROPERTY_MEDIA_SOURCE = "media_source";
    private PinMediaSource mediaSource;

    public static final String JSON_PROPERTY_PARENT_PIN_ID = "parent_pin_id";
    private String parentPinId;

    public static final String JSON_PROPERTY_IS_STANDARD = "is_standard";
    private Boolean isStandard;

    public static final String JSON_PROPERTY_HAS_BEEN_PROMOTED = "has_been_promoted";
    private Boolean hasBeenPromoted;

    public static final String JSON_PROPERTY_NOTE = "note";
    private String note;

    public static final String JSON_PROPERTY_PIN_METRICS = "pin_metrics";
    private Object pinMetrics;

    public Pin() {
    }

    /**
     * Get id
     * @return id
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
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
    @JsonProperty(JSON_PROPERTY_CREATED_AT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    @JsonFormat(shape = JsonFormat.Shape.STRING, pattern = "yyyy-MM-dd'T'HH:mm:ss.SSSXXXX")
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
    @Nullable
    @Size(max=2048)
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

    public Pin dominantColor(String dominantColor) {
        this.dominantColor = dominantColor;
        return this;
    }

    /**
     * Dominant pin color. Hex number, e.g. \\\&quot;#6E7874\\\&quot;.
     * @return dominantColor
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DOMINANT_COLOR)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDominantColor() {
        return dominantColor;
    }

    @JsonProperty(JSON_PROPERTY_DOMINANT_COLOR)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDominantColor(String dominantColor) {
        this.dominantColor = dominantColor;
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
    @Size(max=500)
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

    /**
     * Get creativeType
     * @return creativeType
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CREATIVE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CreativeType getCreativeType() {
        return creativeType;
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

    public Pin boardOwner(BoardOwner boardOwner) {
        this.boardOwner = boardOwner;
        return this;
    }

    /**
     * Get boardOwner
     * @return boardOwner
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_BOARD_OWNER)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BoardOwner getBoardOwner() {
        return boardOwner;
    }

    @JsonProperty(JSON_PROPERTY_BOARD_OWNER)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBoardOwner(BoardOwner boardOwner) {
        this.boardOwner = boardOwner;
    }

    /**
     * Whether the \&quot;operation user_account\&quot; is the Pin owner.
     * @return isOwner
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_IS_OWNER)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getIsOwner() {
        return isOwner;
    }

    public Pin media(SummaryPinMedia media) {
        this.media = media;
        return this;
    }

    /**
     * Get media
     * @return media
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_MEDIA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public SummaryPinMedia getMedia() {
        return media;
    }

    @JsonProperty(JSON_PROPERTY_MEDIA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setMedia(SummaryPinMedia media) {
        this.media = media;
    }

    public Pin mediaSource(PinMediaSource mediaSource) {
        this.mediaSource = mediaSource;
        return this;
    }

    /**
     * Get mediaSource
     * @return mediaSource
     **/
    @Valid
    @Nullable
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

    public Pin parentPinId(String parentPinId) {
        this.parentPinId = parentPinId;
        return this;
    }

    /**
     * The source pin id if this pin was saved from another pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/article/save-pins-on-pinterest\&quot;&gt;Learn more&lt;/a&gt;.
     * @return parentPinId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @JsonProperty(JSON_PROPERTY_PARENT_PIN_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getParentPinId() {
        return parentPinId;
    }

    @JsonProperty(JSON_PROPERTY_PARENT_PIN_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setParentPinId(String parentPinId) {
        this.parentPinId = parentPinId;
    }

    public Pin isStandard(Boolean isStandard) {
        this.isStandard = isStandard;
        return this;
    }

    /**
     * Whether the Pin is standard or not. See documentation on &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/content/update/\&quot;&gt;Changes to Pin creation&lt;/a&gt; for more information.
     * @return isStandard
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_IS_STANDARD)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getIsStandard() {
        return isStandard;
    }

    @JsonProperty(JSON_PROPERTY_IS_STANDARD)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIsStandard(Boolean isStandard) {
        this.isStandard = isStandard;
    }

    /**
     * Whether the Pin has been promoted or not.
     * @return hasBeenPromoted
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_HAS_BEEN_PROMOTED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getHasBeenPromoted() {
        return hasBeenPromoted;
    }

    public Pin note(String note) {
        this.note = note;
        return this;
    }

    /**
     * Private note for this Pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/article/add-notes-to-your-pins\&quot;&gt;Learn more&lt;/a&gt;.
     * @return note
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_NOTE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getNote() {
        return note;
    }

    @JsonProperty(JSON_PROPERTY_NOTE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setNote(String note) {
        this.note = note;
    }

    public Pin pinMetrics(Object pinMetrics) {
        this.pinMetrics = pinMetrics;
        return this;
    }

    /**
     * Pin metrics with associated time intervals if any.
     * @return pinMetrics
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_PIN_METRICS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Object getPinMetrics() {
        return pinMetrics;
    }

    @JsonProperty(JSON_PROPERTY_PIN_METRICS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPinMetrics(Object pinMetrics) {
        this.pinMetrics = pinMetrics;
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
            Objects.equals(this.dominantColor, pin.dominantColor) &&
            Objects.equals(this.altText, pin.altText) &&
            Objects.equals(this.creativeType, pin.creativeType) &&
            Objects.equals(this.boardId, pin.boardId) &&
            Objects.equals(this.boardSectionId, pin.boardSectionId) &&
            Objects.equals(this.boardOwner, pin.boardOwner) &&
            Objects.equals(this.isOwner, pin.isOwner) &&
            Objects.equals(this.media, pin.media) &&
            Objects.equals(this.mediaSource, pin.mediaSource) &&
            Objects.equals(this.parentPinId, pin.parentPinId) &&
            Objects.equals(this.isStandard, pin.isStandard) &&
            Objects.equals(this.hasBeenPromoted, pin.hasBeenPromoted) &&
            Objects.equals(this.note, pin.note) &&
            Objects.equals(this.pinMetrics, pin.pinMetrics);
    }

    @Override
    public int hashCode() {
        return Objects.hash(id, createdAt, link, title, description, dominantColor, altText, creativeType, boardId, boardSectionId, boardOwner, isOwner, media, mediaSource, parentPinId, isStandard, hasBeenPromoted, note, pinMetrics);
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
        sb.append("    dominantColor: ").append(toIndentedString(dominantColor)).append("\n");
        sb.append("    altText: ").append(toIndentedString(altText)).append("\n");
        sb.append("    creativeType: ").append(toIndentedString(creativeType)).append("\n");
        sb.append("    boardId: ").append(toIndentedString(boardId)).append("\n");
        sb.append("    boardSectionId: ").append(toIndentedString(boardSectionId)).append("\n");
        sb.append("    boardOwner: ").append(toIndentedString(boardOwner)).append("\n");
        sb.append("    isOwner: ").append(toIndentedString(isOwner)).append("\n");
        sb.append("    media: ").append(toIndentedString(media)).append("\n");
        sb.append("    mediaSource: ").append(toIndentedString(mediaSource)).append("\n");
        sb.append("    parentPinId: ").append(toIndentedString(parentPinId)).append("\n");
        sb.append("    isStandard: ").append(toIndentedString(isStandard)).append("\n");
        sb.append("    hasBeenPromoted: ").append(toIndentedString(hasBeenPromoted)).append("\n");
        sb.append("    note: ").append(toIndentedString(note)).append("\n");
        sb.append("    pinMetrics: ").append(toIndentedString(pinMetrics)).append("\n");
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
