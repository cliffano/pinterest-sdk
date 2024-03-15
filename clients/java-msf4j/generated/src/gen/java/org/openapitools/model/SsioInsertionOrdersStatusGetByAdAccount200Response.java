package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.SSIOInsertionOrderStatus;

/**
 * SsioInsertionOrdersStatusGetByAdAccount200Response
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2024-03-14T23:02:29.393275857Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class SsioInsertionOrdersStatusGetByAdAccount200Response   {
  @JsonProperty("items")
  private List<@Valid SSIOInsertionOrderStatus> items = new ArrayList<>();

  @JsonProperty("bookmark")
  private String bookmark;

  public SsioInsertionOrdersStatusGetByAdAccount200Response items(List<@Valid SSIOInsertionOrderStatus> items) {
    this.items = items;
    return this;
  }

  public SsioInsertionOrdersStatusGetByAdAccount200Response addItemsItem(SSIOInsertionOrderStatus itemsItem) {
    this.items.add(itemsItem);
    return this;
  }

   /**
   * Insertion orders status by ad acount id
   * @return items
  **/
  @ApiModelProperty(required = true, value = "Insertion orders status by ad acount id")
  public List<@Valid SSIOInsertionOrderStatus> getItems() {
    return items;
  }

  public void setItems(List<@Valid SSIOInsertionOrderStatus> items) {
    this.items = items;
  }

  public SsioInsertionOrdersStatusGetByAdAccount200Response bookmark(String bookmark) {
    this.bookmark = bookmark;
    return this;
  }

   /**
   * Get bookmark
   * @return bookmark
  **/
  @ApiModelProperty(value = "")
  public String getBookmark() {
    return bookmark;
  }

  public void setBookmark(String bookmark) {
    this.bookmark = bookmark;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SsioInsertionOrdersStatusGetByAdAccount200Response ssioInsertionOrdersStatusGetByAdAccount200Response = (SsioInsertionOrdersStatusGetByAdAccount200Response) o;
    return Objects.equals(this.items, ssioInsertionOrdersStatusGetByAdAccount200Response.items) &&
        Objects.equals(this.bookmark, ssioInsertionOrdersStatusGetByAdAccount200Response.bookmark);
  }

  @Override
  public int hashCode() {
    return Objects.hash(items, bookmark);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SsioInsertionOrdersStatusGetByAdAccount200Response {\n");
    
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
    sb.append("    bookmark: ").append(toIndentedString(bookmark)).append("\n");
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

