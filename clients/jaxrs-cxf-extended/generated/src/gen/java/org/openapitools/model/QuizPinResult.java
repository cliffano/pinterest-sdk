package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * The result, and link out, based on the user’s choice.
 */
@ApiModel(description="The result, and link out, based on the user’s choice.")

public class QuizPinResult  {
  
  @ApiModelProperty(value = "")
  private String organicPinId;

  @ApiModelProperty(value = "")
  private String androidDeepLink;

  @ApiModelProperty(value = "")
  private String iosDeepLink;

  @ApiModelProperty(value = "")
  private String destinationUrl;

  @ApiModelProperty(value = "")
  @Valid
  private BigDecimal resultId;
 /**
  * Get organicPinId
  * @return organicPinId
  */
  @JsonProperty("organic_pin_id")
  public String getOrganicPinId() {
    return organicPinId;
  }

  /**
   * Sets the <code>organicPinId</code> property.
   */
 public void setOrganicPinId(String organicPinId) {
    this.organicPinId = organicPinId;
  }

  /**
   * Sets the <code>organicPinId</code> property.
   */
  public QuizPinResult organicPinId(String organicPinId) {
    this.organicPinId = organicPinId;
    return this;
  }

 /**
  * Get androidDeepLink
  * @return androidDeepLink
  */
  @JsonProperty("android_deep_link")
  public String getAndroidDeepLink() {
    return androidDeepLink;
  }

  /**
   * Sets the <code>androidDeepLink</code> property.
   */
 public void setAndroidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
  }

  /**
   * Sets the <code>androidDeepLink</code> property.
   */
  public QuizPinResult androidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
    return this;
  }

 /**
  * Get iosDeepLink
  * @return iosDeepLink
  */
  @JsonProperty("ios_deep_link")
  public String getIosDeepLink() {
    return iosDeepLink;
  }

  /**
   * Sets the <code>iosDeepLink</code> property.
   */
 public void setIosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
  }

  /**
   * Sets the <code>iosDeepLink</code> property.
   */
  public QuizPinResult iosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
    return this;
  }

 /**
  * Get destinationUrl
  * @return destinationUrl
  */
  @JsonProperty("destination_url")
  public String getDestinationUrl() {
    return destinationUrl;
  }

  /**
   * Sets the <code>destinationUrl</code> property.
   */
 public void setDestinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
  }

  /**
   * Sets the <code>destinationUrl</code> property.
   */
  public QuizPinResult destinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
    return this;
  }

 /**
  * Get resultId
  * @return resultId
  */
  @JsonProperty("result_id")
  public BigDecimal getResultId() {
    return resultId;
  }

  /**
   * Sets the <code>resultId</code> property.
   */
 public void setResultId(BigDecimal resultId) {
    this.resultId = resultId;
  }

  /**
   * Sets the <code>resultId</code> property.
   */
  public QuizPinResult resultId(BigDecimal resultId) {
    this.resultId = resultId;
    return this;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuizPinResult quizPinResult = (QuizPinResult) o;
    return Objects.equals(this.organicPinId, quizPinResult.organicPinId) &&
        Objects.equals(this.androidDeepLink, quizPinResult.androidDeepLink) &&
        Objects.equals(this.iosDeepLink, quizPinResult.iosDeepLink) &&
        Objects.equals(this.destinationUrl, quizPinResult.destinationUrl) &&
        Objects.equals(this.resultId, quizPinResult.resultId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(organicPinId, androidDeepLink, iosDeepLink, destinationUrl, resultId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuizPinResult {\n");
    
    sb.append("    organicPinId: ").append(toIndentedString(organicPinId)).append("\n");
    sb.append("    androidDeepLink: ").append(toIndentedString(androidDeepLink)).append("\n");
    sb.append("    iosDeepLink: ").append(toIndentedString(iosDeepLink)).append("\n");
    sb.append("    destinationUrl: ").append(toIndentedString(destinationUrl)).append("\n");
    sb.append("    resultId: ").append(toIndentedString(resultId)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

