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
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AudienceSubcategory;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AudienceCategory
 */
@JsonPropertyOrder({
  AudienceCategory.JSON_PROPERTY_KEY,
  AudienceCategory.JSON_PROPERTY_NAME,
  AudienceCategory.JSON_PROPERTY_RATIO,
  AudienceCategory.JSON_PROPERTY_INDEX,
  AudienceCategory.JSON_PROPERTY_ID,
  AudienceCategory.JSON_PROPERTY_SUBCATEGORIES
})
@JsonTypeName("AudienceCategory")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AudienceCategory {
    public static final String JSON_PROPERTY_KEY = "key";
    private String key;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_RATIO = "ratio";
    private BigDecimal ratio;

    public static final String JSON_PROPERTY_INDEX = "index";
    private BigDecimal index;

    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_SUBCATEGORIES = "subcategories";
    private List<@Valid AudienceSubcategory> subcategories = null;

    public AudienceCategory() {
    }

    public AudienceCategory key(String key) {
        this.key = key;
        return this;
    }

    /**
     * Interest unique key (same as ID).
     * @return key
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_KEY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getKey() {
        return key;
    }

    @JsonProperty(JSON_PROPERTY_KEY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setKey(String key) {
        this.key = key;
    }

    public AudienceCategory name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Interest name.
     * @return name
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setName(String name) {
        this.name = name;
    }

    public AudienceCategory ratio(BigDecimal ratio) {
        this.ratio = ratio;
        return this;
    }

    /**
     * Interest&#39;s percent of category&#39;s total audience.
     * @return ratio
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_RATIO)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getRatio() {
        return ratio;
    }

    @JsonProperty(JSON_PROPERTY_RATIO)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setRatio(BigDecimal ratio) {
        this.ratio = ratio;
    }

    public AudienceCategory index(BigDecimal index) {
        this.index = index;
        return this;
    }

    /**
     * Interest affinity index.
     * @return index
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_INDEX)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getIndex() {
        return index;
    }

    @JsonProperty(JSON_PROPERTY_INDEX)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIndex(BigDecimal index) {
        this.index = index;
    }

    public AudienceCategory id(String id) {
        this.id = id;
        return this;
    }

    /**
     * Interest ID.
     * @return id
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getId() {
        return id;
    }

    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setId(String id) {
        this.id = id;
    }

    public AudienceCategory subcategories(List<@Valid AudienceSubcategory> subcategories) {
        this.subcategories = subcategories;
        return this;
    }

    public AudienceCategory addSubcategoriesItem(AudienceSubcategory subcategoriesItem) {
        if (this.subcategories == null) {
            this.subcategories = new ArrayList<>();
        }
        this.subcategories.add(subcategoriesItem);
        return this;
    }

    /**
     * Subcategory interest distribution
     * @return subcategories
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_SUBCATEGORIES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid AudienceSubcategory> getSubcategories() {
        return subcategories;
    }

    @JsonProperty(JSON_PROPERTY_SUBCATEGORIES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setSubcategories(List<@Valid AudienceSubcategory> subcategories) {
        this.subcategories = subcategories;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AudienceCategory audienceCategory = (AudienceCategory) o;
        return Objects.equals(this.key, audienceCategory.key) &&
            Objects.equals(this.name, audienceCategory.name) &&
            Objects.equals(this.ratio, audienceCategory.ratio) &&
            Objects.equals(this.index, audienceCategory.index) &&
            Objects.equals(this.id, audienceCategory.id) &&
            Objects.equals(this.subcategories, audienceCategory.subcategories);
    }

    @Override
    public int hashCode() {
        return Objects.hash(key, name, ratio, index, id, subcategories);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AudienceCategory {\n");
        sb.append("    key: ").append(toIndentedString(key)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    ratio: ").append(toIndentedString(ratio)).append("\n");
        sb.append("    index: ").append(toIndentedString(index)).append("\n");
        sb.append("    id: ").append(toIndentedString(id)).append("\n");
        sb.append("    subcategories: ").append(toIndentedString(subcategories)).append("\n");
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

