package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.AdAccountGetSubscriptionResponse;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;



public class AdAccountsSubscriptionsGetList200Response   {
  
  private List<@Valid AdAccountGetSubscriptionResponse> items = new ArrayList<>();

  private String bookmark;

  /**
   **/
  public AdAccountsSubscriptionsGetList200Response items(List<@Valid AdAccountGetSubscriptionResponse> items) {
    this.items = items;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("items")
  @NotNull
  public List<@Valid AdAccountGetSubscriptionResponse> getItems() {
    return items;
  }
  public void setItems(List<@Valid AdAccountGetSubscriptionResponse> items) {
    this.items = items;
  }

  public AdAccountsSubscriptionsGetList200Response addItemsItem(AdAccountGetSubscriptionResponse itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }


  /**
   **/
  public AdAccountsSubscriptionsGetList200Response bookmark(String bookmark) {
    this.bookmark = bookmark;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("bookmark")
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
    AdAccountsSubscriptionsGetList200Response adAccountsSubscriptionsGetList200Response = (AdAccountsSubscriptionsGetList200Response) o;
    return Objects.equals(this.items, adAccountsSubscriptionsGetList200Response.items) &&
        Objects.equals(this.bookmark, adAccountsSubscriptionsGetList200Response.bookmark);
  }

  @Override
  public int hashCode() {
    return Objects.hash(items, bookmark);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdAccountsSubscriptionsGetList200Response {\n");
    
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

