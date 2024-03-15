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

import org.openapitools.client.model.AudienceRule;
import org.openapitools.client.model.AudienceUpdateOperationType;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class AudienceUpdateRequest {
  
  @SerializedName("ad_account_id")
  private String adAccountId = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("rule")
  private AudienceRule rule = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("operation_type")
  private AudienceUpdateOperationType operationType = null;

  /**
   * Ad account ID.
   **/
  @ApiModelProperty(value = "Ad account ID.")
  public String getAdAccountId() {
    return adAccountId;
  }
  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

  /**
   * Audience name.
   **/
  @ApiModelProperty(value = "Audience name.")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public AudienceRule getRule() {
    return rule;
  }
  public void setRule(AudienceRule rule) {
    this.rule = rule;
  }

  /**
   * Audience description.
   **/
  @ApiModelProperty(value = "Audience description.")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public AudienceUpdateOperationType getOperationType() {
    return operationType;
  }
  public void setOperationType(AudienceUpdateOperationType operationType) {
    this.operationType = operationType;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AudienceUpdateRequest audienceUpdateRequest = (AudienceUpdateRequest) o;
    return (this.adAccountId == null ? audienceUpdateRequest.adAccountId == null : this.adAccountId.equals(audienceUpdateRequest.adAccountId)) &&
        (this.name == null ? audienceUpdateRequest.name == null : this.name.equals(audienceUpdateRequest.name)) &&
        (this.rule == null ? audienceUpdateRequest.rule == null : this.rule.equals(audienceUpdateRequest.rule)) &&
        (this.description == null ? audienceUpdateRequest.description == null : this.description.equals(audienceUpdateRequest.description)) &&
        (this.operationType == null ? audienceUpdateRequest.operationType == null : this.operationType.equals(audienceUpdateRequest.operationType));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.adAccountId == null ? 0: this.adAccountId.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.rule == null ? 0: this.rule.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.operationType == null ? 0: this.operationType.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AudienceUpdateRequest {\n");
    
    sb.append("  adAccountId: ").append(adAccountId).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  rule: ").append(rule).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  operationType: ").append(operationType).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}