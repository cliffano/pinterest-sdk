package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;



public class ItemIdFilter   {
  
  private CatalogsProductGroupMultipleStringCriteria ITEM_ID;

  /**
   **/
  public ItemIdFilter ITEM_ID(CatalogsProductGroupMultipleStringCriteria ITEM_ID) {
    this.ITEM_ID = ITEM_ID;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("ITEM_ID")
  @NotNull
  public CatalogsProductGroupMultipleStringCriteria getITEMID() {
    return ITEM_ID;
  }
  public void setITEMID(CatalogsProductGroupMultipleStringCriteria ITEM_ID) {
    this.ITEM_ID = ITEM_ID;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ItemIdFilter itemIdFilter = (ItemIdFilter) o;
    return Objects.equals(this.ITEM_ID, itemIdFilter.ITEM_ID);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ITEM_ID);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemIdFilter {\n");
    
    sb.append("    ITEM_ID: ").append(toIndentedString(ITEM_ID)).append("\n");
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

