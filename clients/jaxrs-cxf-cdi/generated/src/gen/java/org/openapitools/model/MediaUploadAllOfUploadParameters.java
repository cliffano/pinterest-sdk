package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 **/

import io.swagger.annotations.*;
import java.util.Objects;


@ApiModel(description = "The list of parameter key/value pairs you will need to send with your POST request to upload your media file.")
public class MediaUploadAllOfUploadParameters   {
  
  private String xAmzDate;

  private String xAmzSignature;

  private String xAmzSecurityToken;

  private String xAmzAlgorithm;

  private String key;

  private String policy;

  private String xAmzCredential;

  private String contentType;

  /**
   **/
  public MediaUploadAllOfUploadParameters xAmzDate(String xAmzDate) {
    this.xAmzDate = xAmzDate;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("x-amz-date")
  public String getxAmzDate() {
    return xAmzDate;
  }
  public void setxAmzDate(String xAmzDate) {
    this.xAmzDate = xAmzDate;
  }


  /**
   **/
  public MediaUploadAllOfUploadParameters xAmzSignature(String xAmzSignature) {
    this.xAmzSignature = xAmzSignature;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("x-amz-signature")
  public String getxAmzSignature() {
    return xAmzSignature;
  }
  public void setxAmzSignature(String xAmzSignature) {
    this.xAmzSignature = xAmzSignature;
  }


  /**
   **/
  public MediaUploadAllOfUploadParameters xAmzSecurityToken(String xAmzSecurityToken) {
    this.xAmzSecurityToken = xAmzSecurityToken;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("x-amz-security-token")
  public String getxAmzSecurityToken() {
    return xAmzSecurityToken;
  }
  public void setxAmzSecurityToken(String xAmzSecurityToken) {
    this.xAmzSecurityToken = xAmzSecurityToken;
  }


  /**
   **/
  public MediaUploadAllOfUploadParameters xAmzAlgorithm(String xAmzAlgorithm) {
    this.xAmzAlgorithm = xAmzAlgorithm;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("x-amz-algorithm")
  public String getxAmzAlgorithm() {
    return xAmzAlgorithm;
  }
  public void setxAmzAlgorithm(String xAmzAlgorithm) {
    this.xAmzAlgorithm = xAmzAlgorithm;
  }


  /**
   **/
  public MediaUploadAllOfUploadParameters key(String key) {
    this.key = key;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("key")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }


  /**
   **/
  public MediaUploadAllOfUploadParameters policy(String policy) {
    this.policy = policy;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("policy")
  public String getPolicy() {
    return policy;
  }
  public void setPolicy(String policy) {
    this.policy = policy;
  }


  /**
   **/
  public MediaUploadAllOfUploadParameters xAmzCredential(String xAmzCredential) {
    this.xAmzCredential = xAmzCredential;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("x-amz-credential")
  public String getxAmzCredential() {
    return xAmzCredential;
  }
  public void setxAmzCredential(String xAmzCredential) {
    this.xAmzCredential = xAmzCredential;
  }


  /**
   **/
  public MediaUploadAllOfUploadParameters contentType(String contentType) {
    this.contentType = contentType;
    return this;
  }

  
  @ApiModelProperty(example = "multipart/form-data", value = "")
  @JsonProperty("Content-Type")
  public String getContentType() {
    return contentType;
  }
  public void setContentType(String contentType) {
    this.contentType = contentType;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MediaUploadAllOfUploadParameters mediaUploadAllOfUploadParameters = (MediaUploadAllOfUploadParameters) o;
    return Objects.equals(this.xAmzDate, mediaUploadAllOfUploadParameters.xAmzDate) &&
        Objects.equals(this.xAmzSignature, mediaUploadAllOfUploadParameters.xAmzSignature) &&
        Objects.equals(this.xAmzSecurityToken, mediaUploadAllOfUploadParameters.xAmzSecurityToken) &&
        Objects.equals(this.xAmzAlgorithm, mediaUploadAllOfUploadParameters.xAmzAlgorithm) &&
        Objects.equals(this.key, mediaUploadAllOfUploadParameters.key) &&
        Objects.equals(this.policy, mediaUploadAllOfUploadParameters.policy) &&
        Objects.equals(this.xAmzCredential, mediaUploadAllOfUploadParameters.xAmzCredential) &&
        Objects.equals(this.contentType, mediaUploadAllOfUploadParameters.contentType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(xAmzDate, xAmzSignature, xAmzSecurityToken, xAmzAlgorithm, key, policy, xAmzCredential, contentType);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MediaUploadAllOfUploadParameters {\n");
    
    sb.append("    xAmzDate: ").append(toIndentedString(xAmzDate)).append("\n");
    sb.append("    xAmzSignature: ").append(toIndentedString(xAmzSignature)).append("\n");
    sb.append("    xAmzSecurityToken: ").append(toIndentedString(xAmzSecurityToken)).append("\n");
    sb.append("    xAmzAlgorithm: ").append(toIndentedString(xAmzAlgorithm)).append("\n");
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("    policy: ").append(toIndentedString(policy)).append("\n");
    sb.append("    xAmzCredential: ").append(toIndentedString(xAmzCredential)).append("\n");
    sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
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

