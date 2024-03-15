package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.vertxweb.server.model.Interest;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class UserAccountFollowedInterests200Response   {
  
  private List<Interest> items = new ArrayList<>();
  private String bookmark;

  public UserAccountFollowedInterests200Response () {

  }

  public UserAccountFollowedInterests200Response (List<Interest> items, String bookmark) {
    this.items = items;
    this.bookmark = bookmark;
  }

    
  @JsonProperty("items")
  public List<Interest> getItems() {
    return items;
  }
  public void setItems(List<Interest> items) {
    this.items = items;
  }

    
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
    UserAccountFollowedInterests200Response userAccountFollowedInterests200Response = (UserAccountFollowedInterests200Response) o;
    return Objects.equals(items, userAccountFollowedInterests200Response.items) &&
        Objects.equals(bookmark, userAccountFollowedInterests200Response.bookmark);
  }

  @Override
  public int hashCode() {
    return Objects.hash(items, bookmark);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UserAccountFollowedInterests200Response {\n");
    
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
