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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class KeywordUpdate {
  
  @SerializedName("id")
  private String id = null;
  @SerializedName("archived")
  private Boolean archived = null;
  @SerializedName("bid")
  private Integer bid = null;

  /**
   * Keyword ID.
   **/
  @ApiModelProperty(required = true, value = "Keyword ID.")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Is keyword archived?
   **/
  @ApiModelProperty(value = "Is keyword archived?")
  public Boolean getArchived() {
    return archived;
  }
  public void setArchived(Boolean archived) {
    this.archived = archived;
  }

  /**
   * Keyword custom bid in microcurrency - null if inherited from parent ad group.
   * minimum: 1
   **/
  @ApiModelProperty(value = "Keyword custom bid in microcurrency - null if inherited from parent ad group.")
  public Integer getBid() {
    return bid;
  }
  public void setBid(Integer bid) {
    this.bid = bid;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    KeywordUpdate keywordUpdate = (KeywordUpdate) o;
    return (this.id == null ? keywordUpdate.id == null : this.id.equals(keywordUpdate.id)) &&
        (this.archived == null ? keywordUpdate.archived == null : this.archived.equals(keywordUpdate.archived)) &&
        (this.bid == null ? keywordUpdate.bid == null : this.bid.equals(keywordUpdate.bid));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.archived == null ? 0: this.archived.hashCode());
    result = 31 * result + (this.bid == null ? 0: this.bid.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class KeywordUpdate {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  archived: ").append(archived).append("\n");
    sb.append("  bid: ").append(bid).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
