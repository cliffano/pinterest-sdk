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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * The main hotel image
 */
@Schema(name = "CatalogsHotelAttributes_allOf_main_image", description = "The main hotel image")
@JsonPropertyOrder({
  CatalogsHotelAttributesAllOfMainImage.JSON_PROPERTY_LINK,
  CatalogsHotelAttributesAllOfMainImage.JSON_PROPERTY_TAG
})
@JsonTypeName("CatalogsHotelAttributes_allOf_main_image")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsHotelAttributesAllOfMainImage {
    public static final String JSON_PROPERTY_LINK = "link";
    private String link;

    public static final String JSON_PROPERTY_TAG = "tag";
    private List<String> tag = null;

    public CatalogsHotelAttributesAllOfMainImage() {
    }

    public CatalogsHotelAttributesAllOfMainImage link(String link) {
        this.link = link;
        return this;
    }

    /**
     * &lt;p&gt;&lt;&#x3D; 2000 characters&lt;/p&gt; &lt;p&gt;The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.&lt;/p&gt;
     * @return link
     **/
    @Nullable
    @Schema(name = "link", description = "<p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p>", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public CatalogsHotelAttributesAllOfMainImage tag(List<String> tag) {
        this.tag = tag;
        return this;
    }

    public CatalogsHotelAttributesAllOfMainImage addTagItem(String tagItem) {
        if (this.tag == null) {
            this.tag = new ArrayList<>();
        }
        this.tag.add(tagItem);
        return this;
    }

    /**
     * Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image
     * @return tag
     **/
    @Nullable
    @Schema(name = "tag", description = "Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_TAG)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<String> getTag() {
        return tag;
    }

    @JsonProperty(JSON_PROPERTY_TAG)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setTag(List<String> tag) {
        this.tag = tag;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsHotelAttributesAllOfMainImage catalogsHotelAttributesAllOfMainImage = (CatalogsHotelAttributesAllOfMainImage) o;
        return Objects.equals(this.link, catalogsHotelAttributesAllOfMainImage.link) &&
            Objects.equals(this.tag, catalogsHotelAttributesAllOfMainImage.tag);
    }

    @Override
    public int hashCode() {
        return Objects.hash(link, tag);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsHotelAttributesAllOfMainImage {\n");
        sb.append("    link: ").append(toIndentedString(link)).append("\n");
        sb.append("    tag: ").append(toIndentedString(tag)).append("\n");
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

