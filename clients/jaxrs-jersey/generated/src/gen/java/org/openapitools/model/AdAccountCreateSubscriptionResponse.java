/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * AdAccountCreateSubscriptionResponse
 */
@JsonPropertyOrder({
  AdAccountCreateSubscriptionResponse.JSON_PROPERTY_ID,
  AdAccountCreateSubscriptionResponse.JSON_PROPERTY_CRYPTOGRAPHIC_KEY,
  AdAccountCreateSubscriptionResponse.JSON_PROPERTY_CRYPTOGRAPHIC_ALGORITHM,
  AdAccountCreateSubscriptionResponse.JSON_PROPERTY_CREATED_TIME
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AdAccountCreateSubscriptionResponse   {
  public static final String JSON_PROPERTY_ID = "id";
  @JsonProperty(JSON_PROPERTY_ID)
  private String id;

  public static final String JSON_PROPERTY_CRYPTOGRAPHIC_KEY = "cryptographic_key";
  @JsonProperty(JSON_PROPERTY_CRYPTOGRAPHIC_KEY)
  private String cryptographicKey;

  public static final String JSON_PROPERTY_CRYPTOGRAPHIC_ALGORITHM = "cryptographic_algorithm";
  @JsonProperty(JSON_PROPERTY_CRYPTOGRAPHIC_ALGORITHM)
  private String cryptographicAlgorithm;

  public static final String JSON_PROPERTY_CREATED_TIME = "created_time";
  @JsonProperty(JSON_PROPERTY_CREATED_TIME)
  private Integer createdTime;

  public AdAccountCreateSubscriptionResponse id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Subscription ID.
   * @return id
   **/
  @JsonProperty(value = "id")
  @ApiModelProperty(example = "8078432025948590686", value = "Subscription ID.")
   @Pattern(regexp="^\\d+$")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public AdAccountCreateSubscriptionResponse cryptographicKey(String cryptographicKey) {
    this.cryptographicKey = cryptographicKey;
    return this;
  }

  /**
   * Base64 encoded key for client to decrypt lead data.
   * @return cryptographicKey
   **/
  @JsonProperty(value = "cryptographic_key")
  @ApiModelProperty(example = "ucvxbV2Tdss0vNeYsdh4Qfa/1Khm2b0PqXvXeTTZh54", value = "Base64 encoded key for client to decrypt lead data.")
  
  public String getCryptographicKey() {
    return cryptographicKey;
  }

  public void setCryptographicKey(String cryptographicKey) {
    this.cryptographicKey = cryptographicKey;
  }

  public AdAccountCreateSubscriptionResponse cryptographicAlgorithm(String cryptographicAlgorithm) {
    this.cryptographicAlgorithm = cryptographicAlgorithm;
    return this;
  }

  /**
   * Lead data encryption algorithm.
   * @return cryptographicAlgorithm
   **/
  @JsonProperty(value = "cryptographic_algorithm")
  @ApiModelProperty(example = "AES-256-GCM", value = "Lead data encryption algorithm.")
  
  public String getCryptographicAlgorithm() {
    return cryptographicAlgorithm;
  }

  public void setCryptographicAlgorithm(String cryptographicAlgorithm) {
    this.cryptographicAlgorithm = cryptographicAlgorithm;
  }

  public AdAccountCreateSubscriptionResponse createdTime(Integer createdTime) {
    this.createdTime = createdTime;
    return this;
  }

  /**
   * Subscription creation time. Unix timestamp in milliseconds.
   * @return createdTime
   **/
  @JsonProperty(value = "created_time")
  @ApiModelProperty(example = "1699209842000", value = "Subscription creation time. Unix timestamp in milliseconds.")
  
  public Integer getCreatedTime() {
    return createdTime;
  }

  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdAccountCreateSubscriptionResponse adAccountCreateSubscriptionResponse = (AdAccountCreateSubscriptionResponse) o;
    return Objects.equals(this.id, adAccountCreateSubscriptionResponse.id) &&
        Objects.equals(this.cryptographicKey, adAccountCreateSubscriptionResponse.cryptographicKey) &&
        Objects.equals(this.cryptographicAlgorithm, adAccountCreateSubscriptionResponse.cryptographicAlgorithm) &&
        Objects.equals(this.createdTime, adAccountCreateSubscriptionResponse.createdTime);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, cryptographicKey, cryptographicAlgorithm, createdTime);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdAccountCreateSubscriptionResponse {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    cryptographicKey: ").append(toIndentedString(cryptographicKey)).append("\n");
    sb.append("    cryptographicAlgorithm: ").append(toIndentedString(cryptographicAlgorithm)).append("\n");
    sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
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

