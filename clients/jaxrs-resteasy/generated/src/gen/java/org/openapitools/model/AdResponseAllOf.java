package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.TrackingUrls;
import javax.validation.constraints.*;
import io.swagger.annotations.*;

@ApiModel(description="Creation fields")@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2022-07-01T12:00:58.963610Z[Etc/UTC]")
public class AdResponseAllOf   {
  
  private String adGroupId;
  private String androidDeepLink;
  private List<String> carouselAndroidDeepLinks = new ArrayList<String>();
  private List<String> carouselDestinationUrls = new ArrayList<String>();
  private List<String> carouselIosDeepLinks = new ArrayList<String>();
  private String clickTrackingUrl;

  /**
   * Ad creative type enum
   */
  public enum CreativeTypeEnum {
    REGULAR("REGULAR"),

        VIDEO("VIDEO"),

        SHOPPING("SHOPPING"),

        CAROUSEL("CAROUSEL"),

        MAX_VIDEO("MAX_VIDEO"),

        SHOP_THE_PIN("SHOP_THE_PIN"),

        STORY("STORY");
    private String value;

    CreativeTypeEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }

  private CreativeTypeEnum creativeType;
  private String destinationUrl;
  private String iosDeepLink;
  private Boolean isPinDeleted;
  private Boolean isRemovable;
  private String name;
  private String pinId;
  private EntityStatus status;
  private TrackingUrls trackingUrls;
  private String viewTrackingUrl;

  /**
   * ID of the ad group that contains the ad.
   **/
  
  @ApiModelProperty(example = "2680059592705", value = "ID of the ad group that contains the ad.")
  @JsonProperty("ad_group_id")
 @Pattern(regexp="^\\d+$")  public String getAdGroupId() {
    return adGroupId;
  }
  public void setAdGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
  }

  /**
   * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
   **/
  
  @ApiModelProperty(value = "Deep link URL for Android devices. Not currently available. Using this field will generate an error.")
  @JsonProperty("android_deep_link")
  public String getAndroidDeepLink() {
    return androidDeepLink;
  }
  public void setAndroidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
  }

  /**
   * Comma-separated deep links for the carousel pin on Android.
   **/
  
  @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on Android.")
  @JsonProperty("carousel_android_deep_links")
  public List<String> getCarouselAndroidDeepLinks() {
    return carouselAndroidDeepLinks;
  }
  public void setCarouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
    this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
  }

  /**
   * Comma-separated destination URLs for the carousel pin to promote.
   **/
  
  @ApiModelProperty(value = "Comma-separated destination URLs for the carousel pin to promote.")
  @JsonProperty("carousel_destination_urls")
  public List<String> getCarouselDestinationUrls() {
    return carouselDestinationUrls;
  }
  public void setCarouselDestinationUrls(List<String> carouselDestinationUrls) {
    this.carouselDestinationUrls = carouselDestinationUrls;
  }

  /**
   * Comma-separated deep links for the carousel pin on iOS.
   **/
  
  @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on iOS.")
  @JsonProperty("carousel_ios_deep_links")
  public List<String> getCarouselIosDeepLinks() {
    return carouselIosDeepLinks;
  }
  public void setCarouselIosDeepLinks(List<String> carouselIosDeepLinks) {
    this.carouselIosDeepLinks = carouselIosDeepLinks;
  }

  /**
   * Tracking url for the ad clicks.
   **/
  
  @ApiModelProperty(value = "Tracking url for the ad clicks.")
  @JsonProperty("click_tracking_url")
  public String getClickTrackingUrl() {
    return clickTrackingUrl;
  }
  public void setClickTrackingUrl(String clickTrackingUrl) {
    this.clickTrackingUrl = clickTrackingUrl;
  }

  /**
   * Ad creative type enum
   **/
  
  @ApiModelProperty(example = "REGULAR", value = "Ad creative type enum")
  @JsonProperty("creative_type")
  public CreativeTypeEnum getCreativeType() {
    return creativeType;
  }
  public void setCreativeType(CreativeTypeEnum creativeType) {
    this.creativeType = creativeType;
  }

  /**
   * Destination URL.
   **/
  
  @ApiModelProperty(value = "Destination URL.")
  @JsonProperty("destination_url")
  public String getDestinationUrl() {
    return destinationUrl;
  }
  public void setDestinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
  }

  /**
   * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
   **/
  
  @ApiModelProperty(value = "Deep link URL for iOS devices. Not currently available. Using this field will generate an error.")
  @JsonProperty("ios_deep_link")
  public String getIosDeepLink() {
    return iosDeepLink;
  }
  public void setIosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
  }

  /**
   * Is original pin deleted?
   **/
  
  @ApiModelProperty(example = "false", value = "Is original pin deleted?")
  @JsonProperty("is_pin_deleted")
  public Boolean getIsPinDeleted() {
    return isPinDeleted;
  }
  public void setIsPinDeleted(Boolean isPinDeleted) {
    this.isPinDeleted = isPinDeleted;
  }

  /**
   * Is pin repinnable?
   **/
  
  @ApiModelProperty(example = "false", value = "Is pin repinnable?")
  @JsonProperty("is_removable")
  public Boolean getIsRemovable() {
    return isRemovable;
  }
  public void setIsRemovable(Boolean isRemovable) {
    this.isRemovable = isRemovable;
  }

  /**
   * Name of the ad - 255 chars max.
   **/
  
  @ApiModelProperty(value = "Name of the ad - 255 chars max.")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Pin ID.
   **/
  
  @ApiModelProperty(example = "394205773611545468", value = "Pin ID.")
  @JsonProperty("pin_id")
 @Pattern(regexp="^\\d+$")  public String getPinId() {
    return pinId;
  }
  public void setPinId(String pinId) {
    this.pinId = pinId;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("status")
  public EntityStatus getStatus() {
    return status;
  }
  public void setStatus(EntityStatus status) {
    this.status = status;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("tracking_urls")
  public TrackingUrls getTrackingUrls() {
    return trackingUrls;
  }
  public void setTrackingUrls(TrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  /**
   * Tracking URL for ad impressions.
   **/
  
  @ApiModelProperty(value = "Tracking URL for ad impressions.")
  @JsonProperty("view_tracking_url")
  public String getViewTrackingUrl() {
    return viewTrackingUrl;
  }
  public void setViewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdResponseAllOf adResponseAllOf = (AdResponseAllOf) o;
    return Objects.equals(adGroupId, adResponseAllOf.adGroupId) &&
        Objects.equals(androidDeepLink, adResponseAllOf.androidDeepLink) &&
        Objects.equals(carouselAndroidDeepLinks, adResponseAllOf.carouselAndroidDeepLinks) &&
        Objects.equals(carouselDestinationUrls, adResponseAllOf.carouselDestinationUrls) &&
        Objects.equals(carouselIosDeepLinks, adResponseAllOf.carouselIosDeepLinks) &&
        Objects.equals(clickTrackingUrl, adResponseAllOf.clickTrackingUrl) &&
        Objects.equals(creativeType, adResponseAllOf.creativeType) &&
        Objects.equals(destinationUrl, adResponseAllOf.destinationUrl) &&
        Objects.equals(iosDeepLink, adResponseAllOf.iosDeepLink) &&
        Objects.equals(isPinDeleted, adResponseAllOf.isPinDeleted) &&
        Objects.equals(isRemovable, adResponseAllOf.isRemovable) &&
        Objects.equals(name, adResponseAllOf.name) &&
        Objects.equals(pinId, adResponseAllOf.pinId) &&
        Objects.equals(status, adResponseAllOf.status) &&
        Objects.equals(trackingUrls, adResponseAllOf.trackingUrls) &&
        Objects.equals(viewTrackingUrl, adResponseAllOf.viewTrackingUrl);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adGroupId, androidDeepLink, carouselAndroidDeepLinks, carouselDestinationUrls, carouselIosDeepLinks, clickTrackingUrl, creativeType, destinationUrl, iosDeepLink, isPinDeleted, isRemovable, name, pinId, status, trackingUrls, viewTrackingUrl);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdResponseAllOf {\n");
    
    sb.append("    adGroupId: ").append(toIndentedString(adGroupId)).append("\n");
    sb.append("    androidDeepLink: ").append(toIndentedString(androidDeepLink)).append("\n");
    sb.append("    carouselAndroidDeepLinks: ").append(toIndentedString(carouselAndroidDeepLinks)).append("\n");
    sb.append("    carouselDestinationUrls: ").append(toIndentedString(carouselDestinationUrls)).append("\n");
    sb.append("    carouselIosDeepLinks: ").append(toIndentedString(carouselIosDeepLinks)).append("\n");
    sb.append("    clickTrackingUrl: ").append(toIndentedString(clickTrackingUrl)).append("\n");
    sb.append("    creativeType: ").append(toIndentedString(creativeType)).append("\n");
    sb.append("    destinationUrl: ").append(toIndentedString(destinationUrl)).append("\n");
    sb.append("    iosDeepLink: ").append(toIndentedString(iosDeepLink)).append("\n");
    sb.append("    isPinDeleted: ").append(toIndentedString(isPinDeleted)).append("\n");
    sb.append("    isRemovable: ").append(toIndentedString(isRemovable)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    pinId: ").append(toIndentedString(pinId)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    trackingUrls: ").append(toIndentedString(trackingUrls)).append("\n");
    sb.append("    viewTrackingUrl: ").append(toIndentedString(viewTrackingUrl)).append("\n");
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

