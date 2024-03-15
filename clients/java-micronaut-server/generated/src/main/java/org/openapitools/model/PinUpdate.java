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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.PinUpdateCarouselSlotsInner;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Pin fields for updates
 */
@Schema(name = "PinUpdate", description = "Pin fields for updates")
@JsonPropertyOrder({
  PinUpdate.JSON_PROPERTY_ALT_TEXT,
  PinUpdate.JSON_PROPERTY_BOARD_ID,
  PinUpdate.JSON_PROPERTY_BOARD_SECTION_ID,
  PinUpdate.JSON_PROPERTY_DESCRIPTION,
  PinUpdate.JSON_PROPERTY_LINK,
  PinUpdate.JSON_PROPERTY_TITLE,
  PinUpdate.JSON_PROPERTY_CAROUSEL_SLOTS,
  PinUpdate.JSON_PROPERTY_NOTE
})
@JsonTypeName("PinUpdate")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class PinUpdate {
    public static final String JSON_PROPERTY_ALT_TEXT = "alt_text";
    private String altText;

    public static final String JSON_PROPERTY_BOARD_ID = "board_id";
    private String boardId;

    public static final String JSON_PROPERTY_BOARD_SECTION_ID = "board_section_id";
    private String boardSectionId;

    public static final String JSON_PROPERTY_DESCRIPTION = "description";
    private String description;

    public static final String JSON_PROPERTY_LINK = "link";
    private String link;

    public static final String JSON_PROPERTY_TITLE = "title";
    private String title;

    public static final String JSON_PROPERTY_CAROUSEL_SLOTS = "carousel_slots";
    private List<@Valid PinUpdateCarouselSlotsInner> carouselSlots = null;

    public static final String JSON_PROPERTY_NOTE = "note";
    private String note;

    public PinUpdate() {
    }

    public PinUpdate altText(String altText) {
        this.altText = altText;
        return this;
    }

    /**
     * Pin&#39;s alternative text.
     * @return altText
     **/
    @Nullable
    @Size(max=500)
    @Schema(name = "alt_text", description = "Pin's alternative text.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public PinUpdate boardId(String boardId) {
        this.boardId = boardId;
        return this;
    }

    /**
     * The id of the board to move the Pin onto.
     * @return boardId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @Schema(name = "board_id", description = "The id of the board to move the Pin onto.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public PinUpdate boardSectionId(String boardSectionId) {
        this.boardSectionId = boardSectionId;
        return this;
    }

    /**
     * &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/article/create-a-board-section\&quot;&gt;Board section&lt;/a&gt; ID.
     * @return boardSectionId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @Schema(name = "board_section_id", description = "<a href=\"https://help.pinterest.com/en/article/create-a-board-section\">Board section</a> ID.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public PinUpdate description(String description) {
        this.description = description;
        return this;
    }

    /**
     * Pin description - 800 characters maximum.
     * @return description
     **/
    @Nullable
    @Size(max=800)
    @Schema(name = "description", description = "Pin description - 800 characters maximum.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public PinUpdate link(String link) {
        this.link = link;
        return this;
    }

    /**
     * URL viewer is taken to when they click pin.
     * @return link
     **/
    @Nullable
    @Size(max=2048)
    @Schema(name = "link", example = "https://www.pinterest.com/", description = "URL viewer is taken to when they click pin.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public PinUpdate title(String title) {
        this.title = title;
        return this;
    }

    /**
     * The native pin title that creators explicitly prefer to display.
     * @return title
     **/
    @Nullable
    @Size(max=100)
    @Schema(name = "title", description = "The native pin title that creators explicitly prefer to display.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public PinUpdate carouselSlots(List<@Valid PinUpdateCarouselSlotsInner> carouselSlots) {
        this.carouselSlots = carouselSlots;
        return this;
    }

    public PinUpdate addCarouselSlotsItem(PinUpdateCarouselSlotsInner carouselSlotsItem) {
        if (this.carouselSlots == null) {
            this.carouselSlots = new ArrayList<>();
        }
        this.carouselSlots.add(carouselSlotsItem);
        return this;
    }

    /**
     * Carousel Pin slots data.
     * @return carouselSlots
     **/
    @Nullable
    @Schema(name = "carousel_slots", description = "Carousel Pin slots data.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CAROUSEL_SLOTS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid PinUpdateCarouselSlotsInner> getCarouselSlots() {
        return carouselSlots;
    }

    @JsonProperty(JSON_PROPERTY_CAROUSEL_SLOTS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCarouselSlots(List<@Valid PinUpdateCarouselSlotsInner> carouselSlots) {
        this.carouselSlots = carouselSlots;
    }

    public PinUpdate note(String note) {
        this.note = note;
        return this;
    }

    /**
     * Private note for this Pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/article/add-notes-to-your-pins\&quot;&gt;Learn more&lt;/a&gt;.
     * @return note
     **/
    @Nullable
    @Schema(name = "note", description = "Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        PinUpdate pinUpdate = (PinUpdate) o;
        return Objects.equals(this.altText, pinUpdate.altText) &&
            Objects.equals(this.boardId, pinUpdate.boardId) &&
            Objects.equals(this.boardSectionId, pinUpdate.boardSectionId) &&
            Objects.equals(this.description, pinUpdate.description) &&
            Objects.equals(this.link, pinUpdate.link) &&
            Objects.equals(this.title, pinUpdate.title) &&
            Objects.equals(this.carouselSlots, pinUpdate.carouselSlots) &&
            Objects.equals(this.note, pinUpdate.note);
    }

    @Override
    public int hashCode() {
        return Objects.hash(altText, boardId, boardSectionId, description, link, title, carouselSlots, note);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class PinUpdate {\n");
        sb.append("    altText: ").append(toIndentedString(altText)).append("\n");
        sb.append("    boardId: ").append(toIndentedString(boardId)).append("\n");
        sb.append("    boardSectionId: ").append(toIndentedString(boardSectionId)).append("\n");
        sb.append("    description: ").append(toIndentedString(description)).append("\n");
        sb.append("    link: ").append(toIndentedString(link)).append("\n");
        sb.append("    title: ").append(toIndentedString(title)).append("\n");
        sb.append("    carouselSlots: ").append(toIndentedString(carouselSlots)).append("\n");
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

