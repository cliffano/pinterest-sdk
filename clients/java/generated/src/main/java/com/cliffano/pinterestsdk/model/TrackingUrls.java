/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
 */
@ApiModel(description = "Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-05-08T00:26:51.345731Z[Etc/UTC]")
public class TrackingUrls {
  public static final String SERIALIZED_NAME_IMPRESSION = "impression";
  @SerializedName(SERIALIZED_NAME_IMPRESSION)
  private List<String> impression = null;

  public static final String SERIALIZED_NAME_CLICK = "click";
  @SerializedName(SERIALIZED_NAME_CLICK)
  private List<String> click = null;

  public static final String SERIALIZED_NAME_ENGAGEMENT = "engagement";
  @SerializedName(SERIALIZED_NAME_ENGAGEMENT)
  private List<String> engagement = null;

  public static final String SERIALIZED_NAME_BUYABLE_BUTTON = "buyable_button";
  @SerializedName(SERIALIZED_NAME_BUYABLE_BUTTON)
  private List<String> buyableButton = null;

  public static final String SERIALIZED_NAME_AUDIENCE_VERIFICATION = "audience_verification";
  @SerializedName(SERIALIZED_NAME_AUDIENCE_VERIFICATION)
  private List<String> audienceVerification = null;

  public TrackingUrls() { 
  }

  public TrackingUrls impression(List<String> impression) {
    
    this.impression = impression;
    return this;
  }

  public TrackingUrls addImpressionItem(String impressionItem) {
    if (this.impression == null) {
      this.impression = new ArrayList<String>();
    }
    this.impression.add(impressionItem);
    return this;
  }

   /**
   * Get impression
   * @return impression
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<String> getImpression() {
    return impression;
  }


  public void setImpression(List<String> impression) {
    this.impression = impression;
  }


  public TrackingUrls click(List<String> click) {
    
    this.click = click;
    return this;
  }

  public TrackingUrls addClickItem(String clickItem) {
    if (this.click == null) {
      this.click = new ArrayList<String>();
    }
    this.click.add(clickItem);
    return this;
  }

   /**
   * Get click
   * @return click
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<String> getClick() {
    return click;
  }


  public void setClick(List<String> click) {
    this.click = click;
  }


  public TrackingUrls engagement(List<String> engagement) {
    
    this.engagement = engagement;
    return this;
  }

  public TrackingUrls addEngagementItem(String engagementItem) {
    if (this.engagement == null) {
      this.engagement = new ArrayList<String>();
    }
    this.engagement.add(engagementItem);
    return this;
  }

   /**
   * Get engagement
   * @return engagement
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<String> getEngagement() {
    return engagement;
  }


  public void setEngagement(List<String> engagement) {
    this.engagement = engagement;
  }


  public TrackingUrls buyableButton(List<String> buyableButton) {
    
    this.buyableButton = buyableButton;
    return this;
  }

  public TrackingUrls addBuyableButtonItem(String buyableButtonItem) {
    if (this.buyableButton == null) {
      this.buyableButton = new ArrayList<String>();
    }
    this.buyableButton.add(buyableButtonItem);
    return this;
  }

   /**
   * Get buyableButton
   * @return buyableButton
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<String> getBuyableButton() {
    return buyableButton;
  }


  public void setBuyableButton(List<String> buyableButton) {
    this.buyableButton = buyableButton;
  }


  public TrackingUrls audienceVerification(List<String> audienceVerification) {
    
    this.audienceVerification = audienceVerification;
    return this;
  }

  public TrackingUrls addAudienceVerificationItem(String audienceVerificationItem) {
    if (this.audienceVerification == null) {
      this.audienceVerification = new ArrayList<String>();
    }
    this.audienceVerification.add(audienceVerificationItem);
    return this;
  }

   /**
   * Get audienceVerification
   * @return audienceVerification
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<String> getAudienceVerification() {
    return audienceVerification;
  }


  public void setAudienceVerification(List<String> audienceVerification) {
    this.audienceVerification = audienceVerification;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TrackingUrls trackingUrls = (TrackingUrls) o;
    return Objects.equals(this.impression, trackingUrls.impression) &&
        Objects.equals(this.click, trackingUrls.click) &&
        Objects.equals(this.engagement, trackingUrls.engagement) &&
        Objects.equals(this.buyableButton, trackingUrls.buyableButton) &&
        Objects.equals(this.audienceVerification, trackingUrls.audienceVerification);
  }

  @Override
  public int hashCode() {
    return Objects.hash(impression, click, engagement, buyableButton, audienceVerification);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TrackingUrls {\n");
    sb.append("    impression: ").append(toIndentedString(impression)).append("\n");
    sb.append("    click: ").append(toIndentedString(click)).append("\n");
    sb.append("    engagement: ").append(toIndentedString(engagement)).append("\n");
    sb.append("    buyableButton: ").append(toIndentedString(buyableButton)).append("\n");
    sb.append("    audienceVerification: ").append(toIndentedString(audienceVerification)).append("\n");
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

