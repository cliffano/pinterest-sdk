package apimodels;

import apimodels.SummaryPin;
import com.fasterxml.jackson.annotation.JsonTypeName;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
import javax.validation.Valid;
/**
 * SearchPartnerPins200Response
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2024-03-14T23:02:53.026613321Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class SearchPartnerPins200Response   {
  @JsonProperty("items")
  @NotNull
@Valid

  private List<@Valid SummaryPin> items = new ArrayList<>();

  @JsonProperty("bookmark")
  
  private String bookmark;

  public SearchPartnerPins200Response items(List<@Valid SummaryPin> items) {
    this.items = items;
    return this;
  }

  public SearchPartnerPins200Response addItemsItem(SummaryPin itemsItem) {
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
  public List<@Valid SummaryPin> getItems() {
    return items;
  }

  public void setItems(List<@Valid SummaryPin> items) {
    this.items = items;
  }

  public SearchPartnerPins200Response bookmark(String bookmark) {
    this.bookmark = bookmark;
    return this;
  }

   /**
   * Get bookmark
   * @return bookmark
  **/
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
    SearchPartnerPins200Response searchPartnerPins200Response = (SearchPartnerPins200Response) o;
    return Objects.equals(items, searchPartnerPins200Response.items) &&
        Objects.equals(bookmark, searchPartnerPins200Response.bookmark);
  }

  @Override
  public int hashCode() {
    return Objects.hash(items, bookmark);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SearchPartnerPins200Response {\n");
    
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

