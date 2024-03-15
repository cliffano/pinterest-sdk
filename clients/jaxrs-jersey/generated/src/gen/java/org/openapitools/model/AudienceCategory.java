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
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AudienceSubcategory;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

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
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceCategory   {
  public static final String JSON_PROPERTY_KEY = "key";
  @JsonProperty(JSON_PROPERTY_KEY)
  private String key;

  public static final String JSON_PROPERTY_NAME = "name";
  @JsonProperty(JSON_PROPERTY_NAME)
  private String name;

  public static final String JSON_PROPERTY_RATIO = "ratio";
  @JsonProperty(JSON_PROPERTY_RATIO)
  private BigDecimal ratio;

  public static final String JSON_PROPERTY_INDEX = "index";
  @JsonProperty(JSON_PROPERTY_INDEX)
  private BigDecimal index;

  public static final String JSON_PROPERTY_ID = "id";
  @JsonProperty(JSON_PROPERTY_ID)
  private String id;

  public static final String JSON_PROPERTY_SUBCATEGORIES = "subcategories";
  @JsonProperty(JSON_PROPERTY_SUBCATEGORIES)
  private List<@Valid AudienceSubcategory> subcategories;

  public AudienceCategory key(String key) {
    this.key = key;
    return this;
  }

  /**
   * Interest unique key (same as ID).
   * @return key
   **/
  @JsonProperty(value = "key")
  @ApiModelProperty(example = "1234567", value = "Interest unique key (same as ID).")
  
  public String getKey() {
    return key;
  }

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
  @JsonProperty(value = "name")
  @ApiModelProperty(example = "travel", value = "Interest name.")
  
  public String getName() {
    return name;
  }

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
  @JsonProperty(value = "ratio")
  @ApiModelProperty(example = "0.551", value = "Interest's percent of category's total audience.")
  @Valid 
  public BigDecimal getRatio() {
    return ratio;
  }

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
  @JsonProperty(value = "index")
  @ApiModelProperty(example = "1.2", value = "Interest affinity index.")
  @Valid 
  public BigDecimal getIndex() {
    return index;
  }

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
  @JsonProperty(value = "id")
  @ApiModelProperty(example = "1234567", value = "Interest ID.")
  
  public String getId() {
    return id;
  }

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
  @JsonProperty(value = "subcategories")
  @ApiModelProperty(value = "Subcategory interest distribution")
  @Valid 
  public List<@Valid AudienceSubcategory> getSubcategories() {
    return subcategories;
  }

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

