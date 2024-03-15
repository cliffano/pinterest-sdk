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





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2024-03-14T23:01:39.171456580Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceCategory   {
  @JsonProperty("key")
  private String key;

  @JsonProperty("name")
  private String name;

  @JsonProperty("ratio")
  private BigDecimal ratio;

  @JsonProperty("index")
  private BigDecimal index;

  @JsonProperty("id")
  private String id;

  @JsonProperty("subcategories")
  private List<AudienceSubcategory> subcategories = null;

  /**
   * Interest unique key (same as ID).
   **/
  public AudienceCategory key(String key) {
    this.key = key;
    return this;
  }

  
  @ApiModelProperty(example = "1234567", value = "Interest unique key (same as ID).")
  @JsonProperty("key")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }

  /**
   * Interest name.
   **/
  public AudienceCategory name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "travel", value = "Interest name.")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Interest's percent of category's total audience.
   **/
  public AudienceCategory ratio(BigDecimal ratio) {
    this.ratio = ratio;
    return this;
  }

  
  @ApiModelProperty(example = "0.551", value = "Interest's percent of category's total audience.")
  @JsonProperty("ratio")
  public BigDecimal getRatio() {
    return ratio;
  }
  public void setRatio(BigDecimal ratio) {
    this.ratio = ratio;
  }

  /**
   * Interest affinity index.
   **/
  public AudienceCategory index(BigDecimal index) {
    this.index = index;
    return this;
  }

  
  @ApiModelProperty(example = "1.2", value = "Interest affinity index.")
  @JsonProperty("index")
  public BigDecimal getIndex() {
    return index;
  }
  public void setIndex(BigDecimal index) {
    this.index = index;
  }

  /**
   * Interest ID.
   **/
  public AudienceCategory id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "1234567", value = "Interest ID.")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Subcategory interest distribution
   **/
  public AudienceCategory subcategories(List<AudienceSubcategory> subcategories) {
    this.subcategories = subcategories;
    return this;
  }

  
  @ApiModelProperty(value = "Subcategory interest distribution")
  @JsonProperty("subcategories")
  public List<AudienceSubcategory> getSubcategories() {
    return subcategories;
  }
  public void setSubcategories(List<AudienceSubcategory> subcategories) {
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
    return Objects.equals(key, audienceCategory.key) &&
        Objects.equals(name, audienceCategory.name) &&
        Objects.equals(ratio, audienceCategory.ratio) &&
        Objects.equals(index, audienceCategory.index) &&
        Objects.equals(id, audienceCategory.id) &&
        Objects.equals(subcategories, audienceCategory.subcategories);
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

