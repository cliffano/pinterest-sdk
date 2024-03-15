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
 * Base64-encoded image media source
 **/
@ApiModel(description = "Base64-encoded image media source")
public class PinMediaSourceImageBase64 {
  
  public enum SourceTypeEnum {
     image_base64, 
  };
  @SerializedName("source_type")
  private SourceTypeEnum sourceType = null;
  public enum ContentTypeEnum {
     image/jpeg,  image/png, 
  };
  @SerializedName("content_type")
  private ContentTypeEnum contentType = null;
  @SerializedName("data")
  private String data = null;
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
  public ContentTypeEnum getContentType() {
    return contentType;
  }
  public void setContentType(ContentTypeEnum contentType) {
    this.contentType = contentType;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getData() {
    return data;
  }
  public void setData(String data) {
    this.data = data;
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
    PinMediaSourceImageBase64 pinMediaSourceImageBase64 = (PinMediaSourceImageBase64) o;
    return (this.sourceType == null ? pinMediaSourceImageBase64.sourceType == null : this.sourceType.equals(pinMediaSourceImageBase64.sourceType)) &&
        (this.contentType == null ? pinMediaSourceImageBase64.contentType == null : this.contentType.equals(pinMediaSourceImageBase64.contentType)) &&
        (this.data == null ? pinMediaSourceImageBase64.data == null : this.data.equals(pinMediaSourceImageBase64.data)) &&
        (this.isStandard == null ? pinMediaSourceImageBase64.isStandard == null : this.isStandard.equals(pinMediaSourceImageBase64.isStandard));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.sourceType == null ? 0: this.sourceType.hashCode());
    result = 31 * result + (this.contentType == null ? 0: this.contentType.hashCode());
    result = 31 * result + (this.data == null ? 0: this.data.hashCode());
    result = 31 * result + (this.isStandard == null ? 0: this.isStandard.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinMediaSourceImageBase64 {\n");
    
    sb.append("  sourceType: ").append(sourceType).append("\n");
    sb.append("  contentType: ").append(contentType).append("\n");
    sb.append("  data: ").append(data).append("\n");
    sb.append("  isStandard: ").append(isStandard).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}