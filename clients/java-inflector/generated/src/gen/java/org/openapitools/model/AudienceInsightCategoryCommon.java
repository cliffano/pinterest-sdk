package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2024-03-14T23:01:39.171456580Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceInsightCategoryCommon   {
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

  /**
   **/
  public AudienceInsightCategoryCommon key(String key) {
    this.key = key;
    return this;
  }

  
  @ApiModelProperty(example = "549755885175", value = "")
  @JsonProperty("key")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }

  /**
   **/
  public AudienceInsightCategoryCommon name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "travel", value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public AudienceInsightCategoryCommon ratio(BigDecimal ratio) {
    this.ratio = ratio;
    return this;
  }

  
  @ApiModelProperty(example = "0.551", value = "")
  @JsonProperty("ratio")
  public BigDecimal getRatio() {
    return ratio;
  }
  public void setRatio(BigDecimal ratio) {
    this.ratio = ratio;
  }

  /**
   **/
  public AudienceInsightCategoryCommon index(BigDecimal index) {
    this.index = index;
    return this;
  }

  
  @ApiModelProperty(example = "1.2", value = "")
  @JsonProperty("index")
  public BigDecimal getIndex() {
    return index;
  }
  public void setIndex(BigDecimal index) {
    this.index = index;
  }

  /**
   **/
  public AudienceInsightCategoryCommon id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "549755885175", value = "")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AudienceInsightCategoryCommon audienceInsightCategoryCommon = (AudienceInsightCategoryCommon) o;
    return Objects.equals(key, audienceInsightCategoryCommon.key) &&
        Objects.equals(name, audienceInsightCategoryCommon.name) &&
        Objects.equals(ratio, audienceInsightCategoryCommon.ratio) &&
        Objects.equals(index, audienceInsightCategoryCommon.index) &&
        Objects.equals(id, audienceInsightCategoryCommon.id);
  }

  @Override
  public int hashCode() {
    return Objects.hash(key, name, ratio, index, id);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AudienceInsightCategoryCommon {\n");
    
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    ratio: ").append(toIndentedString(ratio)).append("\n");
    sb.append("    index: ").append(toIndentedString(index)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
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

