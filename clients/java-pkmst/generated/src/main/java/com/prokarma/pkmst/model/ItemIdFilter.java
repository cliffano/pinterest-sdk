package com.prokarma.pkmst.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.prokarma.pkmst.model.CatalogsProductGroupCurrencyCriteria;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
/**
 * Response class to be returned by Api
 * @author pkmst
 *
 */
/**
 * ItemIdFilter
 */

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2022-07-01T11:59:50.950161Z[Etc/UTC]")
public class ItemIdFilter   {
  @JsonProperty("ITEM_ID")
  private CatalogsProductGroupCurrencyCriteria ITEM_ID;

  public ItemIdFilter ITEM_ID(CatalogsProductGroupCurrencyCriteria ITEM_ID) {
    this.ITEM_ID = ITEM_ID;
    return this;
  }

   /**
   * Get ITEM_ID
   * @return ITEM_ID
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupCurrencyCriteria getITEMID() {
    return ITEM_ID;
  }

  public void setITEMID(CatalogsProductGroupCurrencyCriteria ITEM_ID) {
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

