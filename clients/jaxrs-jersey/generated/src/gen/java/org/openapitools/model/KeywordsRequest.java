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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.KeywordsCommon;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * KeywordsRequest
 */
@JsonPropertyOrder({
  KeywordsRequest.JSON_PROPERTY_KEYWORDS,
  KeywordsRequest.JSON_PROPERTY_PARENT_ID
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class KeywordsRequest   {
  public static final String JSON_PROPERTY_KEYWORDS = "keywords";
  @JsonProperty(JSON_PROPERTY_KEYWORDS)
  private List<@Valid KeywordsCommon> keywords = new ArrayList<>();

  public static final String JSON_PROPERTY_PARENT_ID = "parent_id";
  @JsonProperty(JSON_PROPERTY_PARENT_ID)
  private String parentId;

  public KeywordsRequest keywords(List<@Valid KeywordsCommon> keywords) {
    this.keywords = keywords;
    return this;
  }

  public KeywordsRequest addKeywordsItem(KeywordsCommon keywordsItem) {
    if (this.keywords == null) {
      this.keywords = new ArrayList<>();
    }
    this.keywords.add(keywordsItem);
    return this;
  }

  /**
   * Keyword JSON array. Each array element has 3 fields
   * @return keywords
   **/
  @JsonProperty(value = "keywords")
  @ApiModelProperty(required = true, value = "Keyword JSON array. Each array element has 3 fields")
  @NotNull @Valid 
  public List<@Valid KeywordsCommon> getKeywords() {
    return keywords;
  }

  public void setKeywords(List<@Valid KeywordsCommon> keywords) {
    this.keywords = keywords;
  }

  public KeywordsRequest parentId(String parentId) {
    this.parentId = parentId;
    return this;
  }

  /**
   * Keyword parent entity ID (advertiser, campaign, ad group).
   * @return parentId
   **/
  @JsonProperty(value = "parent_id")
  @ApiModelProperty(example = "383791336903426391", required = true, value = "Keyword parent entity ID (advertiser, campaign, ad group).")
  @NotNull  @Pattern(regexp="^((AG)|C)?\\d+$")
  public String getParentId() {
    return parentId;
  }

  public void setParentId(String parentId) {
    this.parentId = parentId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    KeywordsRequest keywordsRequest = (KeywordsRequest) o;
    return Objects.equals(this.keywords, keywordsRequest.keywords) &&
        Objects.equals(this.parentId, keywordsRequest.parentId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(keywords, parentId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class KeywordsRequest {\n");
    
    sb.append("    keywords: ").append(toIndentedString(keywords)).append("\n");
    sb.append("    parentId: ").append(toIndentedString(parentId)).append("\n");
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

