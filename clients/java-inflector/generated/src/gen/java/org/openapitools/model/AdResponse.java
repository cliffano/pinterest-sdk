package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.AdResponseAllOf;
import org.openapitools.model.AdResponseAllOf1;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.PinPromotionSummaryStatus;
import org.openapitools.model.TrackingUrls;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2022-05-07T06:38:14.669946Z[Etc/UTC]")
public class AdResponse   {
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

    @JsonCreator
    public static CreativeTypeEnum fromValue(String text) {
      for (CreativeTypeEnum b : CreativeTypeEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + text + "'");
    }
  }

  @JsonProperty("creative_type")
  private CreativeTypeEnum creativeType;

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

  @JsonProperty("pin_id")
  private String pinId;

  @JsonProperty("status")
  private EntityStatus status;

  @JsonProperty("tracking_urls")
  private TrackingUrls trackingUrls;

  @JsonProperty("view_tracking_url")
  private String viewTrackingUrl;

  @JsonProperty("ad_account_id")
  private String adAccountId;

  @JsonProperty("campaign_id")
  private String campaignId;

  @JsonProperty("collection_items_destination_url_template")
  private String collectionItemsDestinationUrlTemplate;

  @JsonProperty("created_time")
  private Integer createdTime;

  @JsonProperty("id")
  private String id;

  /**
   * ad disapproval reasons
   */
  public enum RejectedReasonsEnum {
    HASHTAGS("HASHTAGS"),
    
    PROMOTIONS_AND_PRICES("PROMOTIONS_AND_PRICES"),
    
    TARGETING("TARGETING"),
    
    LANDING_PAGE("LANDING_PAGE"),
    
    CAPS_AND_SYMBOLS("CAPS_AND_SYMBOLS"),
    
    SHOCKING("SHOCKING"),
    
    WEIGHT_LOSS("WEIGHT_LOSS"),
    
    PROHIBITED_PRODUCT("PROHIBITED_PRODUCT"),
    
    AUTHENTICITY("AUTHENTICITY"),
    
    NUDITY("NUDITY"),
    
    CONFUSING_DESIGN("CONFUSING_DESIGN"),
    
    URGENCY("URGENCY"),
    
    RATINGS("RATINGS"),
    
    APP("APP"),
    
    ALCOHOL("ALCOHOL"),
    
    CONTESTS("CONTESTS"),
    
    POLITICAL("POLITICAL"),
    
    OTHER("OTHER"),
    
    IMAGE("IMAGE"),
    
    NAR("NAR"),
    
    INCONSISTENT("INCONSISTENT"),
    
    CLICKBAIT("CLICKBAIT"),
    
    NO_DESCRIPTION("NO_DESCRIPTION"),
    
    LOW_QUALITY("LOW_QUALITY"),
    
    EXAGGERATED_CLAIMS("EXAGGERATED_CLAIMS"),
    
    PINTEREST_BRAND("PINTEREST_BRAND"),
    
    ALCOHOL_NO_SALE("ALCOHOL_NO_SALE"),
    
    LANDING_PAGE_SPEED("LANDING_PAGE_SPEED"),
    
    LANDING_PAGE_HARDWALL("LANDING_PAGE_HARDWALL"),
    
    LANDING_PAGE_BROKEN("LANDING_PAGE_BROKEN"),
    
    LANDING_PAGE_QUALITY("LANDING_PAGE_QUALITY"),
    
    OUT_OF_STOCK("OUT_OF_STOCK"),
    
    IMAGE_LOW_QUALITY("IMAGE_LOW_QUALITY"),
    
    IMAGE_BUSY("IMAGE_BUSY"),
    
    IMAGE_POORLY_EDITED("IMAGE_POORLY_EDITED"),
    
    IMAGE_BEFORE_AFTER("IMAGE_BEFORE_AFTER"),
    
    UGC("UGC"),
    
    FAKE_BUTTONS("FAKE_BUTTONS"),
    
    WEAPONS("WEAPONS"),
    
    SENSITIVE("SENSITIVE"),
    
    UNACCEPTABLE_BUSINESS("UNACCEPTABLE_BUSINESS"),
    
    SUSPICIOUS_CLAIMS("SUSPICIOUS_CLAIMS"),
    
    PHARMA("PHARMA"),
    
    SUSPICIOUS_SUPPLEMENTS("SUSPICIOUS_SUPPLEMENTS"),
    
    ILLEGAL_RECREATIONAL_DRUG("ILLEGAL_RECREATIONAL_DRUG"),
    
    LOW_QUALITY_LANDING_PAGE("LOW_QUALITY_LANDING_PAGE"),
    
    RESTRICTED_HEALTHCARE("RESTRICTED_HEALTHCARE"),
    
    INCONSISTENT_LANG_FR("INCONSISTENT_LANG_FR");

    private String value;

    RejectedReasonsEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static RejectedReasonsEnum fromValue(String text) {
      for (RejectedReasonsEnum b : RejectedReasonsEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + text + "'");
    }
  }

  @JsonProperty("rejected_reasons")
  private List<RejectedReasonsEnum> rejectedReasons = null;

  @JsonProperty("rejection_labels")
  private List<String> rejectionLabels = null;

  /**
   * Ad review status
   */
  public enum ReviewStatusEnum {
    OTHER("OTHER"),
    
    PENDING("PENDING"),
    
    REJECTED("REJECTED"),
    
    APPROVED("APPROVED");

    private String value;

    ReviewStatusEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static ReviewStatusEnum fromValue(String text) {
      for (ReviewStatusEnum b : ReviewStatusEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + text + "'");
    }
  }

  @JsonProperty("review_status")
  private ReviewStatusEnum reviewStatus;

  @JsonProperty("type")
  private String type;

  @JsonProperty("updated_time")
  private Integer updatedTime;

  @JsonProperty("summary_status")
  private PinPromotionSummaryStatus summaryStatus;

  /**
   * ID of the ad group that contains the ad.
   **/
  public AdResponse adGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
    return this;
  }

  
  @ApiModelProperty(example = "2680059592705", value = "ID of the ad group that contains the ad.")
  @JsonProperty("ad_group_id")
  public String getAdGroupId() {
    return adGroupId;
  }
  public void setAdGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
  }

  /**
   * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
   **/
  public AdResponse androidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
    return this;
  }

  
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
  public AdResponse carouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
    this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
    return this;
  }

  
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
  public AdResponse carouselDestinationUrls(List<String> carouselDestinationUrls) {
    this.carouselDestinationUrls = carouselDestinationUrls;
    return this;
  }

  
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
  public AdResponse carouselIosDeepLinks(List<String> carouselIosDeepLinks) {
    this.carouselIosDeepLinks = carouselIosDeepLinks;
    return this;
  }

  
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
  public AdResponse clickTrackingUrl(String clickTrackingUrl) {
    this.clickTrackingUrl = clickTrackingUrl;
    return this;
  }

  
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
  public AdResponse creativeType(CreativeTypeEnum creativeType) {
    this.creativeType = creativeType;
    return this;
  }

  
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
  public AdResponse destinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
    return this;
  }

  
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
  public AdResponse iosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
    return this;
  }

  
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
  public AdResponse isPinDeleted(Boolean isPinDeleted) {
    this.isPinDeleted = isPinDeleted;
    return this;
  }

  
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
  public AdResponse isRemovable(Boolean isRemovable) {
    this.isRemovable = isRemovable;
    return this;
  }

  
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
  public AdResponse name(String name) {
    this.name = name;
    return this;
  }

  
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
  public AdResponse pinId(String pinId) {
    this.pinId = pinId;
    return this;
  }

  
  @ApiModelProperty(example = "394205773611545468", value = "Pin ID.")
  @JsonProperty("pin_id")
  public String getPinId() {
    return pinId;
  }
  public void setPinId(String pinId) {
    this.pinId = pinId;
  }

  /**
   **/
  public AdResponse status(EntityStatus status) {
    this.status = status;
    return this;
  }

  
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
  public AdResponse trackingUrls(TrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
    return this;
  }

  
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
  public AdResponse viewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
    return this;
  }

  
  @ApiModelProperty(value = "Tracking URL for ad impressions.")
  @JsonProperty("view_tracking_url")
  public String getViewTrackingUrl() {
    return viewTrackingUrl;
  }
  public void setViewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
  }

  /**
   * The ID of the advertiser that this ad belongs to.
   **/
  public AdResponse adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

  
  @ApiModelProperty(example = "549755885175", value = "The ID of the advertiser that this ad belongs to.")
  @JsonProperty("ad_account_id")
  public String getAdAccountId() {
    return adAccountId;
  }
  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

  /**
   * ID of the ad campaign that contains this ad.
   **/
  public AdResponse campaignId(String campaignId) {
    this.campaignId = campaignId;
    return this;
  }

  
  @ApiModelProperty(example = "626735565838", value = "ID of the ad campaign that contains this ad.")
  @JsonProperty("campaign_id")
  public String getCampaignId() {
    return campaignId;
  }
  public void setCampaignId(String campaignId) {
    this.campaignId = campaignId;
  }

  /**
   * Destination URL template for all items within a collections drawer.
   **/
  public AdResponse collectionItemsDestinationUrlTemplate(String collectionItemsDestinationUrlTemplate) {
    this.collectionItemsDestinationUrlTemplate = collectionItemsDestinationUrlTemplate;
    return this;
  }

  
  @ApiModelProperty(value = "Destination URL template for all items within a collections drawer.")
  @JsonProperty("collection_items_destination_url_template")
  public String getCollectionItemsDestinationUrlTemplate() {
    return collectionItemsDestinationUrlTemplate;
  }
  public void setCollectionItemsDestinationUrlTemplate(String collectionItemsDestinationUrlTemplate) {
    this.collectionItemsDestinationUrlTemplate = collectionItemsDestinationUrlTemplate;
  }

  /**
   * Pin creation time. Unix timestamp in seconds.
   **/
  public AdResponse createdTime(Integer createdTime) {
    this.createdTime = createdTime;
    return this;
  }

  
  @ApiModelProperty(example = "1451431341", value = "Pin creation time. Unix timestamp in seconds.")
  @JsonProperty("created_time")
  public Integer getCreatedTime() {
    return createdTime;
  }
  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }

  /**
   * The ID of this ad.
   **/
  public AdResponse id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "687195134316", value = "The ID of this ad.")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
   **/
  public AdResponse rejectedReasons(List<RejectedReasonsEnum> rejectedReasons) {
    this.rejectedReasons = rejectedReasons;
    return this;
  }

  
  @ApiModelProperty(value = "Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".")
  @JsonProperty("rejected_reasons")
  public List<RejectedReasonsEnum> getRejectedReasons() {
    return rejectedReasons;
  }
  public void setRejectedReasons(List<RejectedReasonsEnum> rejectedReasons) {
    this.rejectedReasons = rejectedReasons;
  }

  /**
   * Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
   **/
  public AdResponse rejectionLabels(List<String> rejectionLabels) {
    this.rejectionLabels = rejectionLabels;
    return this;
  }

  
  @ApiModelProperty(value = "Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".")
  @JsonProperty("rejection_labels")
  public List<String> getRejectionLabels() {
    return rejectionLabels;
  }
  public void setRejectionLabels(List<String> rejectionLabels) {
    this.rejectionLabels = rejectionLabels;
  }

  /**
   * Ad review status
   **/
  public AdResponse reviewStatus(ReviewStatusEnum reviewStatus) {
    this.reviewStatus = reviewStatus;
    return this;
  }

  
  @ApiModelProperty(example = "PENDING", value = "Ad review status")
  @JsonProperty("review_status")
  public ReviewStatusEnum getReviewStatus() {
    return reviewStatus;
  }
  public void setReviewStatus(ReviewStatusEnum reviewStatus) {
    this.reviewStatus = reviewStatus;
  }

  /**
   * Always \"ad\".
   **/
  public AdResponse type(String type) {
    this.type = type;
    return this;
  }

  
  @ApiModelProperty(example = "pinpromotion", value = "Always \"ad\".")
  @JsonProperty("type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * Last update time. Unix timestamp in seconds.
   **/
  public AdResponse updatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
    return this;
  }

  
  @ApiModelProperty(example = "1451431341", value = "Last update time. Unix timestamp in seconds.")
  @JsonProperty("updated_time")
  public Integer getUpdatedTime() {
    return updatedTime;
  }
  public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }

  /**
   * Ad summary status
   **/
  public AdResponse summaryStatus(PinPromotionSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
    return this;
  }

  
  @ApiModelProperty(value = "Ad summary status")
  @JsonProperty("summary_status")
  public PinPromotionSummaryStatus getSummaryStatus() {
    return summaryStatus;
  }
  public void setSummaryStatus(PinPromotionSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdResponse adResponse = (AdResponse) o;
    return Objects.equals(adGroupId, adResponse.adGroupId) &&
        Objects.equals(androidDeepLink, adResponse.androidDeepLink) &&
        Objects.equals(carouselAndroidDeepLinks, adResponse.carouselAndroidDeepLinks) &&
        Objects.equals(carouselDestinationUrls, adResponse.carouselDestinationUrls) &&
        Objects.equals(carouselIosDeepLinks, adResponse.carouselIosDeepLinks) &&
        Objects.equals(clickTrackingUrl, adResponse.clickTrackingUrl) &&
        Objects.equals(creativeType, adResponse.creativeType) &&
        Objects.equals(destinationUrl, adResponse.destinationUrl) &&
        Objects.equals(iosDeepLink, adResponse.iosDeepLink) &&
        Objects.equals(isPinDeleted, adResponse.isPinDeleted) &&
        Objects.equals(isRemovable, adResponse.isRemovable) &&
        Objects.equals(name, adResponse.name) &&
        Objects.equals(pinId, adResponse.pinId) &&
        Objects.equals(status, adResponse.status) &&
        Objects.equals(trackingUrls, adResponse.trackingUrls) &&
        Objects.equals(viewTrackingUrl, adResponse.viewTrackingUrl) &&
        Objects.equals(adAccountId, adResponse.adAccountId) &&
        Objects.equals(campaignId, adResponse.campaignId) &&
        Objects.equals(collectionItemsDestinationUrlTemplate, adResponse.collectionItemsDestinationUrlTemplate) &&
        Objects.equals(createdTime, adResponse.createdTime) &&
        Objects.equals(id, adResponse.id) &&
        Objects.equals(rejectedReasons, adResponse.rejectedReasons) &&
        Objects.equals(rejectionLabels, adResponse.rejectionLabels) &&
        Objects.equals(reviewStatus, adResponse.reviewStatus) &&
        Objects.equals(type, adResponse.type) &&
        Objects.equals(updatedTime, adResponse.updatedTime) &&
        Objects.equals(summaryStatus, adResponse.summaryStatus);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adGroupId, androidDeepLink, carouselAndroidDeepLinks, carouselDestinationUrls, carouselIosDeepLinks, clickTrackingUrl, creativeType, destinationUrl, iosDeepLink, isPinDeleted, isRemovable, name, pinId, status, trackingUrls, viewTrackingUrl, adAccountId, campaignId, collectionItemsDestinationUrlTemplate, createdTime, id, rejectedReasons, rejectionLabels, reviewStatus, type, updatedTime, summaryStatus);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdResponse {\n");
    
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
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
    sb.append("    campaignId: ").append(toIndentedString(campaignId)).append("\n");
    sb.append("    collectionItemsDestinationUrlTemplate: ").append(toIndentedString(collectionItemsDestinationUrlTemplate)).append("\n");
    sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    rejectedReasons: ").append(toIndentedString(rejectedReasons)).append("\n");
    sb.append("    rejectionLabels: ").append(toIndentedString(rejectionLabels)).append("\n");
    sb.append("    reviewStatus: ").append(toIndentedString(reviewStatus)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    updatedTime: ").append(toIndentedString(updatedTime)).append("\n");
    sb.append("    summaryStatus: ").append(toIndentedString(summaryStatus)).append("\n");
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

