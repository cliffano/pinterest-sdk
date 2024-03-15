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

/**
 * Image URL-based media source
 **/
@ApiModel(description = "Image URL-based media source")
public class PinMediaSourceImageURL {
  
  public enum SourceTypeEnum {
     image_url, 
  };
  @SerializedName("source_type")
  private SourceTypeEnum sourceType = null;
  @SerializedName("url")
  private String url = null;
  @SerializedName("is_standard")
  private Boolean isStandard = true;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public SourceTypeEnum getSourceType() {
    return sourceType;
  }
  public void setSourceType(SourceTypeEnum sourceType) {
    this.sourceType = sourceType;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  /**
   * Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.
   **/
  @ApiModelProperty(value = "Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.")
  public Boolean getIsStandard() {
    return isStandard;
  }
  public void setIsStandard(Boolean isStandard) {
    this.isStandard = isStandard;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PinMediaSourceImageURL pinMediaSourceImageURL = (PinMediaSourceImageURL) o;
    return (this.sourceType == null ? pinMediaSourceImageURL.sourceType == null : this.sourceType.equals(pinMediaSourceImageURL.sourceType)) &&
        (this.url == null ? pinMediaSourceImageURL.url == null : this.url.equals(pinMediaSourceImageURL.url)) &&
        (this.isStandard == null ? pinMediaSourceImageURL.isStandard == null : this.isStandard.equals(pinMediaSourceImageURL.isStandard));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.sourceType == null ? 0: this.sourceType.hashCode());
    result = 31 * result + (this.url == null ? 0: this.url.hashCode());
    result = 31 * result + (this.isStandard == null ? 0: this.isStandard.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinMediaSourceImageURL {\n");
    
    sb.append("  sourceType: ").append(sourceType).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  isStandard: ").append(isStandard).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
