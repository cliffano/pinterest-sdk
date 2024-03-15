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
import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.CustomerList;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * CustomerListsList200Response
 */
@JsonPropertyOrder({
  CustomerListsList200Response.JSON_PROPERTY_ITEMS,
  CustomerListsList200Response.JSON_PROPERTY_BOOKMARK
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CustomerListsList200Response   {
  public static final String JSON_PROPERTY_ITEMS = "items";
  @JsonProperty(JSON_PROPERTY_ITEMS)
  private List<@Valid CustomerList> items = new ArrayList<>();

  public static final String JSON_PROPERTY_BOOKMARK = "bookmark";
  @JsonProperty(JSON_PROPERTY_BOOKMARK)
  private String bookmark;

  public CustomerListsList200Response items(List<@Valid CustomerList> items) {
    this.items = items;
    return this;
  }

  public CustomerListsList200Response addItemsItem(CustomerList itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }

  /**
   * Get items
   * @return items
   **/
  @JsonProperty(value = "items")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public List<@Valid CustomerList> getItems() {
    return items;
  }

  public void setItems(List<@Valid CustomerList> items) {
    this.items = items;
  }

  public CustomerListsList200Response bookmark(String bookmark) {
    this.bookmark = bookmark;
    return this;
  }

  /**
   * Get bookmark
   * @return bookmark
   **/
  @JsonProperty(value = "bookmark")
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
    CustomerListsList200Response customerListsList200Response = (CustomerListsList200Response) o;
    return Objects.equals(this.items, customerListsList200Response.items) &&
        Objects.equals(this.bookmark, customerListsList200Response.bookmark);
  }

  @Override
  public int hashCode() {
    return Objects.hash(items, bookmark);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CustomerListsList200Response {\n");
    
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

