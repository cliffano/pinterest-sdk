package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AudienceInsightCategoryCommon;

/**
 * AudienceInsightCategoryArrayResponse
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2024-03-14T23:02:29.393275857Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceInsightCategoryArrayResponse   {
  @JsonProperty("items")
  private List<@Valid AudienceInsightCategoryCommon> items = null;

  public AudienceInsightCategoryArrayResponse items(List<@Valid AudienceInsightCategoryCommon> items) {
    this.items = items;
    return this;
  }

  public AudienceInsightCategoryArrayResponse addItemsItem(AudienceInsightCategoryCommon itemsItem) {
    if (this.items == null) {
      this.items = ;
    }
    this.items.add(itemsItem);
    return this;
  }

   /**
   * Get items
   * @return items
  **/
  @ApiModelProperty(value = "")
  public List<@Valid AudienceInsightCategoryCommon> getItems() {
    return items;
  }

  public void setItems(List<@Valid AudienceInsightCategoryCommon> items) {
    this.items = items;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AudienceInsightCategoryArrayResponse audienceInsightCategoryArrayResponse = (AudienceInsightCategoryArrayResponse) o;
    return Objects.equals(this.items, audienceInsightCategoryArrayResponse.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AudienceInsightCategoryArrayResponse {\n");
    
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
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

