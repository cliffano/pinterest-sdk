package org.openapitools.model;

import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ItemGroupIdFilter  {
  
  @ApiModelProperty(required = true, value = "")
  private CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID;
 /**
   * Get ITEM_GROUP_ID
   * @return ITEM_GROUP_ID
  **/
  @JsonProperty("ITEM_GROUP_ID")
  public CatalogsProductGroupMultipleStringCriteria getITEMGROUPID() {
    return ITEM_GROUP_ID;
  }

  public void setITEMGROUPID(CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID) {
    this.ITEM_GROUP_ID = ITEM_GROUP_ID;
  }

  public ItemGroupIdFilter ITEM_GROUP_ID(CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID) {
    this.ITEM_GROUP_ID = ITEM_GROUP_ID;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ItemGroupIdFilter itemGroupIdFilter = (ItemGroupIdFilter) o;
    return Objects.equals(this.ITEM_GROUP_ID, itemGroupIdFilter.ITEM_GROUP_ID);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ITEM_GROUP_ID);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemGroupIdFilter {\n");
    
    sb.append("    ITEM_GROUP_ID: ").append(toIndentedString(ITEM_GROUP_ID)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

