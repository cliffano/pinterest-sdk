/**
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

package org.openapitools.client.model;

import java.util.*;
import org.openapitools.client.model.UserSummary;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class UserFollowingGet200Response {
  
  @SerializedName("items")
  private List<UserSummary> items = null;
  @SerializedName("bookmark")
  private String bookmark = null;

  /**
   * Users
   **/
  @ApiModelProperty(required = true, value = "Users")
  public List<UserSummary> getItems() {
    return items;
  }
  public void setItems(List<UserSummary> items) {
    this.items = items;
  }

  /**
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
    UserFollowingGet200Response userFollowingGet200Response = (UserFollowingGet200Response) o;
    return (this.items == null ? userFollowingGet200Response.items == null : this.items.equals(userFollowingGet200Response.items)) &&
        (this.bookmark == null ? userFollowingGet200Response.bookmark == null : this.bookmark.equals(userFollowingGet200Response.bookmark));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.items == null ? 0: this.items.hashCode());
    result = 31 * result + (this.bookmark == null ? 0: this.bookmark.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class UserFollowingGet200Response {\n");
    
    sb.append("  items: ").append(items).append("\n");
    sb.append("  bookmark: ").append(bookmark).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
