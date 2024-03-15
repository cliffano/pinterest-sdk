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
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AdCommonQuizPinData;
import org.openapitools.model.AdCommonTrackingUrls;
import org.openapitools.model.CreativeType;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.GridClickType;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Creation fields
 */
@ApiModel(description = "Creation fields")
@JsonPropertyOrder({
  AdCommon.JSON_PROPERTY_AD_GROUP_ID,
  AdCommon.JSON_PROPERTY_ANDROID_DEEP_LINK,
  AdCommon.JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS,
  AdCommon.JSON_PROPERTY_CAROUSEL_DESTINATION_URLS,
  AdCommon.JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS,
  AdCommon.JSON_PROPERTY_CLICK_TRACKING_URL,
  AdCommon.JSON_PROPERTY_CREATIVE_TYPE,
  AdCommon.JSON_PROPERTY_DESTINATION_URL,
  AdCommon.JSON_PROPERTY_IOS_DEEP_LINK,
  AdCommon.JSON_PROPERTY_IS_PIN_DELETED,
  AdCommon.JSON_PROPERTY_IS_REMOVABLE,
  AdCommon.JSON_PROPERTY_NAME,
  AdCommon.JSON_PROPERTY_STATUS,
  AdCommon.JSON_PROPERTY_TRACKING_URLS,
  AdCommon.JSON_PROPERTY_VIEW_TRACKING_URL,
  AdCommon.JSON_PROPERTY_LEAD_FORM_ID,
  AdCommon.JSON_PROPERTY_GRID_CLICK_TYPE,
  AdCommon.JSON_PROPERTY_CUSTOMIZABLE_CTA_TYPE,
  AdCommon.JSON_PROPERTY_QUIZ_PIN_DATA
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AdCommon   {
  public static final String JSON_PROPERTY_AD_GROUP_ID = "ad_group_id";
  @JsonProperty(JSON_PROPERTY_AD_GROUP_ID)
  private String adGroupId;

  public static final String JSON_PROPERTY_ANDROID_DEEP_LINK = "android_deep_link";
  @JsonProperty(JSON_PROPERTY_ANDROID_DEEP_LINK)
  private String androidDeepLink;

  public static final String JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS = "carousel_android_deep_links";
  @JsonProperty(JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS)
  private List<String> carouselAndroidDeepLinks;

  public static final String JSON_PROPERTY_CAROUSEL_DESTINATION_URLS = "carousel_destination_urls";
  @JsonProperty(JSON_PROPERTY_CAROUSEL_DESTINATION_URLS)
  private List<String> carouselDestinationUrls;

  public static final String JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS = "carousel_ios_deep_links";
  @JsonProperty(JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS)
  private List<String> carouselIosDeepLinks;

  public static final String JSON_PROPERTY_CLICK_TRACKING_URL = "click_tracking_url";
  @JsonProperty(JSON_PROPERTY_CLICK_TRACKING_URL)
  private String clickTrackingUrl;

  public static final String JSON_PROPERTY_CREATIVE_TYPE = "creative_type";
  @JsonProperty(JSON_PROPERTY_CREATIVE_TYPE)
  private CreativeType creativeType;

  public static final String JSON_PROPERTY_DESTINATION_URL = "destination_url";
  @JsonProperty(JSON_PROPERTY_DESTINATION_URL)
  private String destinationUrl;

  public static final String JSON_PROPERTY_IOS_DEEP_LINK = "ios_deep_link";
  @JsonProperty(JSON_PROPERTY_IOS_DEEP_LINK)
  private String iosDeepLink;

  public static final String JSON_PROPERTY_IS_PIN_DELETED = "is_pin_deleted";
  @JsonProperty(JSON_PROPERTY_IS_PIN_DELETED)
  private Boolean isPinDeleted;

  public static final String JSON_PROPERTY_IS_REMOVABLE = "is_removable";
  @JsonProperty(JSON_PROPERTY_IS_REMOVABLE)
  private Boolean isRemovable;

  public static final String JSON_PROPERTY_NAME = "name";
  @JsonProperty(JSON_PROPERTY_NAME)
  private String name;

  public static final String JSON_PROPERTY_STATUS = "status";
  @JsonProperty(JSON_PROPERTY_STATUS)
  private EntityStatus status;

  public static final String JSON_PROPERTY_TRACKING_URLS = "tracking_urls";
  @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
  private AdCommonTrackingUrls trackingUrls;

  public static final String JSON_PROPERTY_VIEW_TRACKING_URL = "view_tracking_url";
  @JsonProperty(JSON_PROPERTY_VIEW_TRACKING_URL)
  private String viewTrackingUrl;

  public static final String JSON_PROPERTY_LEAD_FORM_ID = "lead_form_id";
  @JsonProperty(JSON_PROPERTY_LEAD_FORM_ID)
  private String leadFormId;

  public static final String JSON_PROPERTY_GRID_CLICK_TYPE = "grid_click_type";
  @JsonProperty(JSON_PROPERTY_GRID_CLICK_TYPE)
  private GridClickType gridClickType;

  /**
   * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
   */
  public enum CustomizableCtaTypeEnum {
    GET_OFFER("GET_OFFER"),
    
    LEARN_MORE("LEARN_MORE"),
    
    ORDER_NOW("ORDER_NOW"),
    
    SHOP_NOW("SHOP_NOW"),
    
    SIGN_UP("SIGN_UP"),
    
    SUBSCRIBE("SUBSCRIBE"),
    
    BUY_NOW("BUY_NOW"),
    
    CONTACT_US("CONTACT_US"),
    
    GET_QUOTE("GET_QUOTE"),
    
    VISIT_WEBSITE("VISIT_WEBSITE"),
    
    APPLY_NOW("APPLY_NOW"),
    
    BOOK_NOW("BOOK_NOW"),
    
    REQUEST_DEMO("REQUEST_DEMO"),
    
    REGISTER_NOW("REGISTER_NOW"),
    
    FIND_A_DEALER("FIND_A_DEALER"),
    
    ADD_TO_CART("ADD_TO_CART"),
    
    WATCH_NOW("WATCH_NOW"),
    
    READ_MORE("READ_MORE"),
    
    NULL("null");

    private String value;

    CustomizableCtaTypeEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static CustomizableCtaTypeEnum fromValue(String value) {
      for (CustomizableCtaTypeEnum b : CustomizableCtaTypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      return null;
    }
  }

  public static final String JSON_PROPERTY_CUSTOMIZABLE_CTA_TYPE = "customizable_cta_type";
  @JsonProperty(JSON_PROPERTY_CUSTOMIZABLE_CTA_TYPE)
  private CustomizableCtaTypeEnum customizableCtaType;

  public static final String JSON_PROPERTY_QUIZ_PIN_DATA = "quiz_pin_data";
  @JsonProperty(JSON_PROPERTY_QUIZ_PIN_DATA)
  private AdCommonQuizPinData quizPinData;

  public AdCommon adGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
    return this;
  }

  /**
   * ID of the ad group that contains the ad.
   * @return adGroupId
   **/
  @JsonProperty(value = "ad_group_id")
  @ApiModelProperty(example = "2680059592705", value = "ID of the ad group that contains the ad.")
   @Pattern(regexp="^(AG)?\\d+$")
  public String getAdGroupId() {
    return adGroupId;
  }

  public void setAdGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
  }

  public AdCommon androidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
    return this;
  }

  /**
   * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
   * @return androidDeepLink
   **/
  @JsonProperty(value = "android_deep_link")
  @ApiModelProperty(value = "Deep link URL for Android devices. Not currently available. Using this field will generate an error.")
  
  public String getAndroidDeepLink() {
    return androidDeepLink;
  }

  public void setAndroidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
  }

  public AdCommon carouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
    this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
    return this;
  }

  public AdCommon addCarouselAndroidDeepLinksItem(String carouselAndroidDeepLinksItem) {
    if (this.carouselAndroidDeepLinks == null) {
      this.carouselAndroidDeepLinks = new ArrayList<>();
    }
    this.carouselAndroidDeepLinks.add(carouselAndroidDeepLinksItem);
    return this;
  }

  /**
   * Comma-separated deep links for the carousel pin on Android.
   * @return carouselAndroidDeepLinks
   **/
  @JsonProperty(value = "carousel_android_deep_links")
  @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on Android.")
  
  public List<String> getCarouselAndroidDeepLinks() {
    return carouselAndroidDeepLinks;
  }

  public void setCarouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
    this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
  }

  public AdCommon carouselDestinationUrls(List<String> carouselDestinationUrls) {
    this.carouselDestinationUrls = carouselDestinationUrls;
    return this;
  }

  public AdCommon addCarouselDestinationUrlsItem(String carouselDestinationUrlsItem) {
    if (this.carouselDestinationUrls == null) {
      this.carouselDestinationUrls = new ArrayList<>();
    }
    this.carouselDestinationUrls.add(carouselDestinationUrlsItem);
    return this;
  }

  /**
   * Comma-separated destination URLs for the carousel pin to promote.
   * @return carouselDestinationUrls
   **/
  @JsonProperty(value = "carousel_destination_urls")
  @ApiModelProperty(value = "Comma-separated destination URLs for the carousel pin to promote.")
  
  public List<String> getCarouselDestinationUrls() {
    return carouselDestinationUrls;
  }

  public void setCarouselDestinationUrls(List<String> carouselDestinationUrls) {
    this.carouselDestinationUrls = carouselDestinationUrls;
  }

  public AdCommon carouselIosDeepLinks(List<String> carouselIosDeepLinks) {
    this.carouselIosDeepLinks = carouselIosDeepLinks;
    return this;
  }

  public AdCommon addCarouselIosDeepLinksItem(String carouselIosDeepLinksItem) {
    if (this.carouselIosDeepLinks == null) {
      this.carouselIosDeepLinks = new ArrayList<>();
    }
    this.carouselIosDeepLinks.add(carouselIosDeepLinksItem);
    return this;
  }

  /**
   * Comma-separated deep links for the carousel pin on iOS.
   * @return carouselIosDeepLinks
   **/
  @JsonProperty(value = "carousel_ios_deep_links")
  @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on iOS.")
  
  public List<String> getCarouselIosDeepLinks() {
    return carouselIosDeepLinks;
  }

  public void setCarouselIosDeepLinks(List<String> carouselIosDeepLinks) {
    this.carouselIosDeepLinks = carouselIosDeepLinks;
  }

  public AdCommon clickTrackingUrl(String clickTrackingUrl) {
    this.clickTrackingUrl = clickTrackingUrl;
    return this;
  }

  /**
   * Tracking url for the ad clicks.
   * @return clickTrackingUrl
   **/
  @JsonProperty(value = "click_tracking_url")
  @ApiModelProperty(value = "Tracking url for the ad clicks.")
  
  public String getClickTrackingUrl() {
    return clickTrackingUrl;
  }

  public void setClickTrackingUrl(String clickTrackingUrl) {
    this.clickTrackingUrl = clickTrackingUrl;
  }

  public AdCommon creativeType(CreativeType creativeType) {
    this.creativeType = creativeType;
    return this;
  }

  /**
   * Get creativeType
   * @return creativeType
   **/
  @JsonProperty(value = "creative_type")
  @ApiModelProperty(value = "")
  @Valid 
  public CreativeType getCreativeType() {
    return creativeType;
  }

  public void setCreativeType(CreativeType creativeType) {
    this.creativeType = creativeType;
  }

  public AdCommon destinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
    return this;
  }

  /**
   * Destination URL.
   * @return destinationUrl
   **/
  @JsonProperty(value = "destination_url")
  @ApiModelProperty(value = "Destination URL.")
  
  public String getDestinationUrl() {
    return destinationUrl;
  }

  public void setDestinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
  }

  public AdCommon iosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
    return this;
  }

  /**
   * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
   * @return iosDeepLink
   **/
  @JsonProperty(value = "ios_deep_link")
  @ApiModelProperty(value = "Deep link URL for iOS devices. Not currently available. Using this field will generate an error.")
  
  public String getIosDeepLink() {
    return iosDeepLink;
  }

  public void setIosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
  }

  public AdCommon isPinDeleted(Boolean isPinDeleted) {
    this.isPinDeleted = isPinDeleted;
    return this;
  }

  /**
   * Is original pin deleted?
   * @return isPinDeleted
   **/
  @JsonProperty(value = "is_pin_deleted")
  @ApiModelProperty(example = "false", value = "Is original pin deleted?")
  
  public Boolean getIsPinDeleted() {
    return isPinDeleted;
  }

  public void setIsPinDeleted(Boolean isPinDeleted) {
    this.isPinDeleted = isPinDeleted;
  }

  public AdCommon isRemovable(Boolean isRemovable) {
    this.isRemovable = isRemovable;
    return this;
  }

  /**
   * Is pin repinnable?
   * @return isRemovable
   **/
  @JsonProperty(value = "is_removable")
  @ApiModelProperty(example = "false", value = "Is pin repinnable?")
  
  public Boolean getIsRemovable() {
    return isRemovable;
  }

  public void setIsRemovable(Boolean isRemovable) {
    this.isRemovable = isRemovable;
  }

  public AdCommon name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Name of the ad - 255 chars max.
   * @return name
   **/
  @JsonProperty(value = "name")
  @ApiModelProperty(value = "Name of the ad - 255 chars max.")
  
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public AdCommon status(EntityStatus status) {
    this.status = status;
    return this;
  }

  /**
   * Get status
   * @return status
   **/
  @JsonProperty(value = "status")
  @ApiModelProperty(value = "")
  @Valid 
  public EntityStatus getStatus() {
    return status;
  }

  public void setStatus(EntityStatus status) {
    this.status = status;
  }

  public AdCommon trackingUrls(AdCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
    return this;
  }

  /**
   * Get trackingUrls
   * @return trackingUrls
   **/
  @JsonProperty(value = "tracking_urls")
  @ApiModelProperty(value = "")
  @Valid 
  public AdCommonTrackingUrls getTrackingUrls() {
    return trackingUrls;
  }

  public void setTrackingUrls(AdCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  public AdCommon viewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
    return this;
  }

  /**
   * Tracking URL for ad impressions.
   * @return viewTrackingUrl
   **/
  @JsonProperty(value = "view_tracking_url")
  @ApiModelProperty(value = "Tracking URL for ad impressions.")
  
  public String getViewTrackingUrl() {
    return viewTrackingUrl;
  }

  public void setViewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
  }

  public AdCommon leadFormId(String leadFormId) {
    this.leadFormId = leadFormId;
    return this;
  }

  /**
   * Lead form ID for lead ad generation.
   * @return leadFormId
   **/
  @JsonProperty(value = "lead_form_id")
  @ApiModelProperty(value = "Lead form ID for lead ad generation.")
   @Pattern(regexp="^(AG)?\\d+$")
  public String getLeadFormId() {
    return leadFormId;
  }

  public void setLeadFormId(String leadFormId) {
    this.leadFormId = leadFormId;
  }

  public AdCommon gridClickType(GridClickType gridClickType) {
    this.gridClickType = gridClickType;
    return this;
  }

  /**
   * Get gridClickType
   * @return gridClickType
   **/
  @JsonProperty(value = "grid_click_type")
  @ApiModelProperty(value = "")
  @Valid 
  public GridClickType getGridClickType() {
    return gridClickType;
  }

  public void setGridClickType(GridClickType gridClickType) {
    this.gridClickType = gridClickType;
  }

  public AdCommon customizableCtaType(CustomizableCtaTypeEnum customizableCtaType) {
    this.customizableCtaType = customizableCtaType;
    return this;
  }

  /**
   * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
   * @return customizableCtaType
   **/
  @JsonProperty(value = "customizable_cta_type")
  @ApiModelProperty(example = "LEARN_MORE", value = "Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)")
  
  public CustomizableCtaTypeEnum getCustomizableCtaType() {
    return customizableCtaType;
  }

  public void setCustomizableCtaType(CustomizableCtaTypeEnum customizableCtaType) {
    this.customizableCtaType = customizableCtaType;
  }

  public AdCommon quizPinData(AdCommonQuizPinData quizPinData) {
    this.quizPinData = quizPinData;
    return this;
  }

  /**
   * Get quizPinData
   * @return quizPinData
   **/
  @JsonProperty(value = "quiz_pin_data")
  @ApiModelProperty(value = "")
  @Valid 
  public AdCommonQuizPinData getQuizPinData() {
    return quizPinData;
  }

  public void setQuizPinData(AdCommonQuizPinData quizPinData) {
    this.quizPinData = quizPinData;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdCommon adCommon = (AdCommon) o;
    return Objects.equals(this.adGroupId, adCommon.adGroupId) &&
        Objects.equals(this.androidDeepLink, adCommon.androidDeepLink) &&
        Objects.equals(this.carouselAndroidDeepLinks, adCommon.carouselAndroidDeepLinks) &&
        Objects.equals(this.carouselDestinationUrls, adCommon.carouselDestinationUrls) &&
        Objects.equals(this.carouselIosDeepLinks, adCommon.carouselIosDeepLinks) &&
        Objects.equals(this.clickTrackingUrl, adCommon.clickTrackingUrl) &&
        Objects.equals(this.creativeType, adCommon.creativeType) &&
        Objects.equals(this.destinationUrl, adCommon.destinationUrl) &&
        Objects.equals(this.iosDeepLink, adCommon.iosDeepLink) &&
        Objects.equals(this.isPinDeleted, adCommon.isPinDeleted) &&
        Objects.equals(this.isRemovable, adCommon.isRemovable) &&
        Objects.equals(this.name, adCommon.name) &&
        Objects.equals(this.status, adCommon.status) &&
        Objects.equals(this.trackingUrls, adCommon.trackingUrls) &&
        Objects.equals(this.viewTrackingUrl, adCommon.viewTrackingUrl) &&
        Objects.equals(this.leadFormId, adCommon.leadFormId) &&
        Objects.equals(this.gridClickType, adCommon.gridClickType) &&
        Objects.equals(this.customizableCtaType, adCommon.customizableCtaType) &&
        Objects.equals(this.quizPinData, adCommon.quizPinData);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adGroupId, androidDeepLink, carouselAndroidDeepLinks, carouselDestinationUrls, carouselIosDeepLinks, clickTrackingUrl, creativeType, destinationUrl, iosDeepLink, isPinDeleted, isRemovable, name, status, trackingUrls, viewTrackingUrl, leadFormId, gridClickType, customizableCtaType, quizPinData);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdCommon {\n");
    
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
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    trackingUrls: ").append(toIndentedString(trackingUrls)).append("\n");
    sb.append("    viewTrackingUrl: ").append(toIndentedString(viewTrackingUrl)).append("\n");
    sb.append("    leadFormId: ").append(toIndentedString(leadFormId)).append("\n");
    sb.append("    gridClickType: ").append(toIndentedString(gridClickType)).append("\n");
    sb.append("    customizableCtaType: ").append(toIndentedString(customizableCtaType)).append("\n");
    sb.append("    quizPinData: ").append(toIndentedString(quizPinData)).append("\n");
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

