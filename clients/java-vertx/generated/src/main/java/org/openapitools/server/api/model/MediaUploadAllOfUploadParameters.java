package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 **/
@JsonInclude(JsonInclude.Include.NON_NULL)
public class MediaUploadAllOfUploadParameters   {
  
  private String xAmzDate;
  private String xAmzSignature;
  private String xAmzSecurityToken;
  private String xAmzAlgorithm;
  private String key;
  private String policy;
  private String xAmzCredential;
  private String contentType;

  public MediaUploadAllOfUploadParameters () {

  }

  public MediaUploadAllOfUploadParameters (String xAmzDate, String xAmzSignature, String xAmzSecurityToken, String xAmzAlgorithm, String key, String policy, String xAmzCredential, String contentType) {
    this.xAmzDate = xAmzDate;
    this.xAmzSignature = xAmzSignature;
    this.xAmzSecurityToken = xAmzSecurityToken;
    this.xAmzAlgorithm = xAmzAlgorithm;
    this.key = key;
    this.policy = policy;
    this.xAmzCredential = xAmzCredential;
    this.contentType = contentType;
  }

    
  @JsonProperty("x-amz-date")
  public String getxAmzDate() {
    return xAmzDate;
  }
  public void setxAmzDate(String xAmzDate) {
    this.xAmzDate = xAmzDate;
  }

    
  @JsonProperty("x-amz-signature")
  public String getxAmzSignature() {
    return xAmzSignature;
  }
  public void setxAmzSignature(String xAmzSignature) {
    this.xAmzSignature = xAmzSignature;
  }

    
  @JsonProperty("x-amz-security-token")
  public String getxAmzSecurityToken() {
    return xAmzSecurityToken;
  }
  public void setxAmzSecurityToken(String xAmzSecurityToken) {
    this.xAmzSecurityToken = xAmzSecurityToken;
  }

    
  @JsonProperty("x-amz-algorithm")
  public String getxAmzAlgorithm() {
    return xAmzAlgorithm;
  }
  public void setxAmzAlgorithm(String xAmzAlgorithm) {
    this.xAmzAlgorithm = xAmzAlgorithm;
  }

    
  @JsonProperty("key")
  public String getKey() {
    return key;
  }
  public void setKey(String key) {
    this.key = key;
  }

    
  @JsonProperty("policy")
  public String getPolicy() {
    return policy;
  }
  public void setPolicy(String policy) {
    this.policy = policy;
  }

    
  @JsonProperty("x-amz-credential")
  public String getxAmzCredential() {
    return xAmzCredential;
  }
  public void setxAmzCredential(String xAmzCredential) {
    this.xAmzCredential = xAmzCredential;
  }

    
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
    return Objects.equals(xAmzDate, mediaUploadAllOfUploadParameters.xAmzDate) &&
        Objects.equals(xAmzSignature, mediaUploadAllOfUploadParameters.xAmzSignature) &&
        Objects.equals(xAmzSecurityToken, mediaUploadAllOfUploadParameters.xAmzSecurityToken) &&
        Objects.equals(xAmzAlgorithm, mediaUploadAllOfUploadParameters.xAmzAlgorithm) &&
        Objects.equals(key, mediaUploadAllOfUploadParameters.key) &&
        Objects.equals(policy, mediaUploadAllOfUploadParameters.policy) &&
        Objects.equals(xAmzCredential, mediaUploadAllOfUploadParameters.xAmzCredential) &&
        Objects.equals(contentType, mediaUploadAllOfUploadParameters.contentType);
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
