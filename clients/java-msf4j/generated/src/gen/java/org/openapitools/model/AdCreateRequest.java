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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.AdCommonQuizPinData;
import org.openapitools.model.AdCommonTrackingUrls;
import org.openapitools.model.CreativeType;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.GridClickType;

/**
 * AdCreateRequest
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2024-03-14T23:02:29.393275857Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AdCreateRequest   {
  @JsonProperty("ad_group_id")
  private String adGroupId;

  @JsonProperty("android_deep_link")
  private String androidDeepLink;

  @JsonProperty("carousel_android_deep_links")
  private List<String> carouselAndroidDeepLinks = null;

  @JsonProperty("carousel_destination_urls")
  private List<String> carouselDestinationUrls = null;

  @JsonProperty("carousel_ios_deep_links")
  private List<String> carouselIosDeepLinks = null;

  @JsonProperty("click_tracking_url")
  private String clickTrackingUrl;

  @JsonProperty("creative_type")
  private CreativeType creativeType;

  @JsonProperty("destination_url")
  private String destinationUrl;

  @JsonProperty("ios_deep_link")
  private String iosDeepLink;

  @JsonProperty("is_pin_deleted")
  private Boolean isPinDeleted;

  @JsonProperty("is_removable")
  private Boolean isRemovable;

  @JsonProperty("name")
  private String name;

  @JsonProperty("status")
  private EntityStatus status;

  @JsonProperty("tracking_urls")
  private AdCommonTrackingUrls trackingUrls;

  @JsonProperty("view_tracking_url")
  private String viewTrackingUrl;

  @JsonProperty("lead_form_id")
  private String leadFormId;

  @JsonProperty("grid_click_type")
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
    public static CustomizableCtaTypeEnum fromValue(String text) {
      for (CustomizableCtaTypeEnum b : CustomizableCtaTypeEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }

  @JsonProperty("customizable_cta_type")
  private CustomizableCtaTypeEnum customizableCtaType;

  @JsonProperty("quiz_pin_data")
  private AdCommonQuizPinData quizPinData;

  @JsonProperty("pin_id")
  private String pinId;

  public AdCreateRequest adGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
    return this;
  }

   /**
   * ID of the ad group that contains the ad.
   * @return adGroupId
  **/
  @ApiModelProperty(example = "2680059592705", required = true, value = "ID of the ad group that contains the ad.")
  public String getAdGroupId() {
    return adGroupId;
  }

  public void setAdGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
  }

  public AdCreateRequest androidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
    return this;
  }

   /**
   * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
   * @return androidDeepLink
  **/
  @ApiModelProperty(value = "Deep link URL for Android devices. Not currently available. Using this field will generate an error.")
  public String getAndroidDeepLink() {
    return androidDeepLink;
  }

  public void setAndroidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
  }

  public AdCreateRequest carouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
    this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
    return this;
  }

  public AdCreateRequest addCarouselAndroidDeepLinksItem(String carouselAndroidDeepLinksItem) {
    if (this.carouselAndroidDeepLinks == null) {
      this.carouselAndroidDeepLinks = ;
    }
    this.carouselAndroidDeepLinks.add(carouselAndroidDeepLinksItem);
    return this;
  }

   /**
   * Comma-separated deep links for the carousel pin on Android.
   * @return carouselAndroidDeepLinks
  **/
  @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on Android.")
  public List<String> getCarouselAndroidDeepLinks() {
    return carouselAndroidDeepLinks;
  }

  public void setCarouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
    this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
  }

  public AdCreateRequest carouselDestinationUrls(List<String> carouselDestinationUrls) {
    this.carouselDestinationUrls = carouselDestinationUrls;
    return this;
  }

  public AdCreateRequest addCarouselDestinationUrlsItem(String carouselDestinationUrlsItem) {
    if (this.carouselDestinationUrls == null) {
      this.carouselDestinationUrls = ;
    }
    this.carouselDestinationUrls.add(carouselDestinationUrlsItem);
    return this;
  }

   /**
   * Comma-separated destination URLs for the carousel pin to promote.
   * @return carouselDestinationUrls
  **/
  @ApiModelProperty(value = "Comma-separated destination URLs for the carousel pin to promote.")
  public List<String> getCarouselDestinationUrls() {
    return carouselDestinationUrls;
  }

  public void setCarouselDestinationUrls(List<String> carouselDestinationUrls) {
    this.carouselDestinationUrls = carouselDestinationUrls;
  }

  public AdCreateRequest carouselIosDeepLinks(List<String> carouselIosDeepLinks) {
    this.carouselIosDeepLinks = carouselIosDeepLinks;
    return this;
  }

  public AdCreateRequest addCarouselIosDeepLinksItem(String carouselIosDeepLinksItem) {
    if (this.carouselIosDeepLinks == null) {
      this.carouselIosDeepLinks = ;
    }
    this.carouselIosDeepLinks.add(carouselIosDeepLinksItem);
    return this;
  }

   /**
   * Comma-separated deep links for the carousel pin on iOS.
   * @return carouselIosDeepLinks
  **/
  @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on iOS.")
  public List<String> getCarouselIosDeepLinks() {
    return carouselIosDeepLinks;
  }

  public void setCarouselIosDeepLinks(List<String> carouselIosDeepLinks) {
    this.carouselIosDeepLinks = carouselIosDeepLinks;
  }

  public AdCreateRequest clickTrackingUrl(String clickTrackingUrl) {
    this.clickTrackingUrl = clickTrackingUrl;
    return this;
  }

   /**
   * Tracking url for the ad clicks.
   * @return clickTrackingUrl
  **/
  @ApiModelProperty(value = "Tracking url for the ad clicks.")
  public String getClickTrackingUrl() {
    return clickTrackingUrl;
  }

  public void setClickTrackingUrl(String clickTrackingUrl) {
    this.clickTrackingUrl = clickTrackingUrl;
  }

  public AdCreateRequest creativeType(CreativeType creativeType) {
    this.creativeType = creativeType;
    return this;
  }

   /**
   * Get creativeType
   * @return creativeType
  **/
  @ApiModelProperty(required = true, value = "")
  public CreativeType getCreativeType() {
    return creativeType;
  }

  public void setCreativeType(CreativeType creativeType) {
    this.creativeType = creativeType;
  }

  public AdCreateRequest destinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
    return this;
  }

   /**
   * Destination URL.
   * @return destinationUrl
  **/
  @ApiModelProperty(value = "Destination URL.")
  public String getDestinationUrl() {
    return destinationUrl;
  }

  public void setDestinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
  }

  public AdCreateRequest iosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
    return this;
  }

   /**
   * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
   * @return iosDeepLink
  **/
  @ApiModelProperty(value = "Deep link URL for iOS devices. Not currently available. Using this field will generate an error.")
  public String getIosDeepLink() {
    return iosDeepLink;
  }

  public void setIosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
  }

  public AdCreateRequest isPinDeleted(Boolean isPinDeleted) {
    this.isPinDeleted = isPinDeleted;
    return this;
  }

   /**
   * Is original pin deleted?
   * @return isPinDeleted
  **/
  @ApiModelProperty(example = "false", value = "Is original pin deleted?")
  public Boolean getIsPinDeleted() {
    return isPinDeleted;
  }

  public void setIsPinDeleted(Boolean isPinDeleted) {
    this.isPinDeleted = isPinDeleted;
  }

  public AdCreateRequest isRemovable(Boolean isRemovable) {
    this.isRemovable = isRemovable;
    return this;
  }

   /**
   * Is pin repinnable?
   * @return isRemovable
  **/
  @ApiModelProperty(example = "false", value = "Is pin repinnable?")
  public Boolean getIsRemovable() {
    return isRemovable;
  }

  public void setIsRemovable(Boolean isRemovable) {
    this.isRemovable = isRemovable;
  }

  public AdCreateRequest name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Name of the ad - 255 chars max.
   * @return name
  **/
  @ApiModelProperty(value = "Name of the ad - 255 chars max.")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public AdCreateRequest status(EntityStatus status) {
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @ApiModelProperty(value = "")
  public EntityStatus getStatus() {
    return status;
  }

  public void setStatus(EntityStatus status) {
    this.status = status;
  }

  public AdCreateRequest trackingUrls(AdCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
    return this;
  }

   /**
   * Get trackingUrls
   * @return trackingUrls
  **/
  @ApiModelProperty(value = "")
  public AdCommonTrackingUrls getTrackingUrls() {
    return trackingUrls;
  }

  public void setTrackingUrls(AdCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  public AdCreateRequest viewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
    return this;
  }

   /**
   * Tracking URL for ad impressions.
   * @return viewTrackingUrl
  **/
  @ApiModelProperty(value = "Tracking URL for ad impressions.")
  public String getViewTrackingUrl() {
    return viewTrackingUrl;
  }

  public void setViewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
  }

  public AdCreateRequest leadFormId(String leadFormId) {
    this.leadFormId = leadFormId;
    return this;
  }

   /**
   * Lead form ID for lead ad generation.
   * @return leadFormId
  **/
  @ApiModelProperty(value = "Lead form ID for lead ad generation.")
  public String getLeadFormId() {
    return leadFormId;
  }

  public void setLeadFormId(String leadFormId) {
    this.leadFormId = leadFormId;
  }

  public AdCreateRequest gridClickType(GridClickType gridClickType) {
    this.gridClickType = gridClickType;
    return this;
  }

   /**
   * Get gridClickType
   * @return gridClickType
  **/
  @ApiModelProperty(value = "")
  public GridClickType getGridClickType() {
    return gridClickType;
  }

  public void setGridClickType(GridClickType gridClickType) {
    this.gridClickType = gridClickType;
  }

  public AdCreateRequest customizableCtaType(CustomizableCtaTypeEnum customizableCtaType) {
    this.customizableCtaType = customizableCtaType;
    return this;
  }

   /**
   * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
   * @return customizableCtaType
  **/
  @ApiModelProperty(example = "LEARN_MORE", value = "Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)")
  public CustomizableCtaTypeEnum getCustomizableCtaType() {
    return customizableCtaType;
  }

  public void setCustomizableCtaType(CustomizableCtaTypeEnum customizableCtaType) {
    this.customizableCtaType = customizableCtaType;
  }

  public AdCreateRequest quizPinData(AdCommonQuizPinData quizPinData) {
    this.quizPinData = quizPinData;
    return this;
  }

   /**
   * Get quizPinData
   * @return quizPinData
  **/
  @ApiModelProperty(value = "")
  public AdCommonQuizPinData getQuizPinData() {
    return quizPinData;
  }

  public void setQuizPinData(AdCommonQuizPinData quizPinData) {
    this.quizPinData = quizPinData;
  }

  public AdCreateRequest pinId(String pinId) {
    this.pinId = pinId;
    return this;
  }

   /**
   * Pin ID.
   * @return pinId
  **/
  @ApiModelProperty(example = "394205773611545468", required = true, value = "Pin ID.")
  public String getPinId() {
    return pinId;
  }

  public void setPinId(String pinId) {
    this.pinId = pinId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdCreateRequest adCreateRequest = (AdCreateRequest) o;
    return Objects.equals(this.adGroupId, adCreateRequest.adGroupId) &&
        Objects.equals(this.androidDeepLink, adCreateRequest.androidDeepLink) &&
        Objects.equals(this.carouselAndroidDeepLinks, adCreateRequest.carouselAndroidDeepLinks) &&
        Objects.equals(this.carouselDestinationUrls, adCreateRequest.carouselDestinationUrls) &&
        Objects.equals(this.carouselIosDeepLinks, adCreateRequest.carouselIosDeepLinks) &&
        Objects.equals(this.clickTrackingUrl, adCreateRequest.clickTrackingUrl) &&
        Objects.equals(this.creativeType, adCreateRequest.creativeType) &&
        Objects.equals(this.destinationUrl, adCreateRequest.destinationUrl) &&
        Objects.equals(this.iosDeepLink, adCreateRequest.iosDeepLink) &&
        Objects.equals(this.isPinDeleted, adCreateRequest.isPinDeleted) &&
        Objects.equals(this.isRemovable, adCreateRequest.isRemovable) &&
        Objects.equals(this.name, adCreateRequest.name) &&
        Objects.equals(this.status, adCreateRequest.status) &&
        Objects.equals(this.trackingUrls, adCreateRequest.trackingUrls) &&
        Objects.equals(this.viewTrackingUrl, adCreateRequest.viewTrackingUrl) &&
        Objects.equals(this.leadFormId, adCreateRequest.leadFormId) &&
        Objects.equals(this.gridClickType, adCreateRequest.gridClickType) &&
        Objects.equals(this.customizableCtaType, adCreateRequest.customizableCtaType) &&
        Objects.equals(this.quizPinData, adCreateRequest.quizPinData) &&
        Objects.equals(this.pinId, adCreateRequest.pinId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adGroupId, androidDeepLink, carouselAndroidDeepLinks, carouselDestinationUrls, carouselIosDeepLinks, clickTrackingUrl, creativeType, destinationUrl, iosDeepLink, isPinDeleted, isRemovable, name, status, trackingUrls, viewTrackingUrl, leadFormId, gridClickType, customizableCtaType, quizPinData, pinId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdCreateRequest {\n");
    
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
    sb.append("    pinId: ").append(toIndentedString(pinId)).append("\n");
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

