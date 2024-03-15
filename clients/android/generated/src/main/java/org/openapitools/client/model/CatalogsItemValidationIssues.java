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

import org.openapitools.client.model.CatalogsItemValidationErrors;
import org.openapitools.client.model.CatalogsItemValidationWarnings;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CatalogsItemValidationIssues {
  
  @SerializedName("item_number")
  private Integer itemNumber = null;
  @SerializedName("item_id")
  private String itemId = null;
  @SerializedName("errors")
  private CatalogsItemValidationErrors errors = null;
  @SerializedName("warnings")
  private CatalogsItemValidationWarnings warnings = null;

  /**
   * Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation.
   **/
  @ApiModelProperty(required = true, value = "Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation.")
  public Integer getItemNumber() {
    return itemNumber;
  }
  public void setItemNumber(Integer itemNumber) {
    this.itemNumber = itemNumber;
  }

  /**
   * The merchant-created unique ID that represents the product.
   **/
  @ApiModelProperty(required = true, value = "The merchant-created unique ID that represents the product.")
  public String getItemId() {
    return itemId;
  }
  public void setItemId(String itemId) {
    this.itemId = itemId;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsItemValidationErrors getErrors() {
    return errors;
  }
  public void setErrors(CatalogsItemValidationErrors errors) {
    this.errors = errors;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsItemValidationWarnings getWarnings() {
    return warnings;
  }
  public void setWarnings(CatalogsItemValidationWarnings warnings) {
    this.warnings = warnings;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsItemValidationIssues catalogsItemValidationIssues = (CatalogsItemValidationIssues) o;
    return (this.itemNumber == null ? catalogsItemValidationIssues.itemNumber == null : this.itemNumber.equals(catalogsItemValidationIssues.itemNumber)) &&
        (this.itemId == null ? catalogsItemValidationIssues.itemId == null : this.itemId.equals(catalogsItemValidationIssues.itemId)) &&
        (this.errors == null ? catalogsItemValidationIssues.errors == null : this.errors.equals(catalogsItemValidationIssues.errors)) &&
        (this.warnings == null ? catalogsItemValidationIssues.warnings == null : this.warnings.equals(catalogsItemValidationIssues.warnings));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.itemNumber == null ? 0: this.itemNumber.hashCode());
    result = 31 * result + (this.itemId == null ? 0: this.itemId.hashCode());
    result = 31 * result + (this.errors == null ? 0: this.errors.hashCode());
    result = 31 * result + (this.warnings == null ? 0: this.warnings.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItemValidationIssues {\n");
    
    sb.append("  itemNumber: ").append(itemNumber).append("\n");
    sb.append("  itemId: ").append(itemId).append("\n");
    sb.append("  errors: ").append(errors).append("\n");
    sb.append("  warnings: ").append(warnings).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
