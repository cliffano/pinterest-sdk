package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.AdResponseAllOf;
import org.openapitools.model.AdResponseAllOf1;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.PinPromotionSummaryStatus;
import org.openapitools.model.TrackingUrls;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


public class AdResponse  {
  
 /**
  * ID of the ad group that contains the ad.
  */
  @ApiModelProperty(example = "2680059592705", value = "ID of the ad group that contains the ad.")
  private String adGroupId;

 /**
  * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
  */
  @ApiModelProperty(value = "Deep link URL for Android devices. Not currently available. Using this field will generate an error.")
  private String androidDeepLink;

 /**
  * Comma-separated deep links for the carousel pin on Android.
  */
  @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on Android.")
  private List<String> carouselAndroidDeepLinks = null;

 /**
  * Comma-separated destination URLs for the carousel pin to promote.
  */
  @ApiModelProperty(value = "Comma-separated destination URLs for the carousel pin to promote.")
  private List<String> carouselDestinationUrls = null;

 /**
  * Comma-separated deep links for the carousel pin on iOS.
  */
  @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on iOS.")
  private List<String> carouselIosDeepLinks = null;

 /**
  * Tracking url for the ad clicks.
  */
  @ApiModelProperty(value = "Tracking url for the ad clicks.")
  private String clickTrackingUrl;

public enum CreativeTypeEnum {

    @JsonProperty("REGULAR") REGULAR(String.valueOf("REGULAR")),
    @JsonProperty("VIDEO") VIDEO(String.valueOf("VIDEO")),
    @JsonProperty("SHOPPING") SHOPPING(String.valueOf("SHOPPING")),
    @JsonProperty("CAROUSEL") CAROUSEL(String.valueOf("CAROUSEL")),
    @JsonProperty("MAX_VIDEO") MAX_VIDEO(String.valueOf("MAX_VIDEO")),
    @JsonProperty("SHOP_THE_PIN") SHOP_THE_PIN(String.valueOf("SHOP_THE_PIN")),
    @JsonProperty("STORY") STORY(String.valueOf("STORY"));

    private String value;

    CreativeTypeEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static CreativeTypeEnum fromValue(String value) {
        for (CreativeTypeEnum b : CreativeTypeEnum.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}

 /**
  * Ad creative type enum
  */
  @ApiModelProperty(example = "REGULAR", value = "Ad creative type enum")
  private CreativeTypeEnum creativeType;

 /**
  * Destination URL.
  */
  @ApiModelProperty(value = "Destination URL.")
  private String destinationUrl;

 /**
  * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
  */
  @ApiModelProperty(value = "Deep link URL for iOS devices. Not currently available. Using this field will generate an error.")
  private String iosDeepLink;

 /**
  * Is original pin deleted?
  */
  @ApiModelProperty(example = "false", value = "Is original pin deleted?")
  private Boolean isPinDeleted;

 /**
  * Is pin repinnable?
  */
  @ApiModelProperty(example = "false", value = "Is pin repinnable?")
  private Boolean isRemovable;

 /**
  * Name of the ad - 255 chars max.
  */
  @ApiModelProperty(value = "Name of the ad - 255 chars max.")
  private String name;

 /**
  * Pin ID.
  */
  @ApiModelProperty(example = "394205773611545468", value = "Pin ID.")
  private String pinId;

  @ApiModelProperty(value = "")
  @Valid
  private EntityStatus status;

  @ApiModelProperty(value = "")
  @Valid
  private TrackingUrls trackingUrls;

 /**
  * Tracking URL for ad impressions.
  */
  @ApiModelProperty(value = "Tracking URL for ad impressions.")
  private String viewTrackingUrl;

 /**
  * The ID of the advertiser that this ad belongs to.
  */
  @ApiModelProperty(example = "549755885175", value = "The ID of the advertiser that this ad belongs to.")
  private String adAccountId;

 /**
  * ID of the ad campaign that contains this ad.
  */
  @ApiModelProperty(example = "626735565838", value = "ID of the ad campaign that contains this ad.")
  private String campaignId;

 /**
  * Destination URL template for all items within a collections drawer.
  */
  @ApiModelProperty(value = "Destination URL template for all items within a collections drawer.")
  private String collectionItemsDestinationUrlTemplate;

 /**
  * Pin creation time. Unix timestamp in seconds.
  */
  @ApiModelProperty(example = "1451431341", value = "Pin creation time. Unix timestamp in seconds.")
  private Integer createdTime;

 /**
  * The ID of this ad.
  */
  @ApiModelProperty(example = "687195134316", value = "The ID of this ad.")
  private String id;

public enum RejectedReasonsEnum {

    @JsonProperty("HASHTAGS") HASHTAGS(String.valueOf("HASHTAGS")),
    @JsonProperty("PROMOTIONS_AND_PRICES") PROMOTIONS_AND_PRICES(String.valueOf("PROMOTIONS_AND_PRICES")),
    @JsonProperty("TARGETING") TARGETING(String.valueOf("TARGETING")),
    @JsonProperty("LANDING_PAGE") LANDING_PAGE(String.valueOf("LANDING_PAGE")),
    @JsonProperty("CAPS_AND_SYMBOLS") CAPS_AND_SYMBOLS(String.valueOf("CAPS_AND_SYMBOLS")),
    @JsonProperty("SHOCKING") SHOCKING(String.valueOf("SHOCKING")),
    @JsonProperty("WEIGHT_LOSS") WEIGHT_LOSS(String.valueOf("WEIGHT_LOSS")),
    @JsonProperty("PROHIBITED_PRODUCT") PROHIBITED_PRODUCT(String.valueOf("PROHIBITED_PRODUCT")),
    @JsonProperty("AUTHENTICITY") AUTHENTICITY(String.valueOf("AUTHENTICITY")),
    @JsonProperty("NUDITY") NUDITY(String.valueOf("NUDITY")),
    @JsonProperty("CONFUSING_DESIGN") CONFUSING_DESIGN(String.valueOf("CONFUSING_DESIGN")),
    @JsonProperty("URGENCY") URGENCY(String.valueOf("URGENCY")),
    @JsonProperty("RATINGS") RATINGS(String.valueOf("RATINGS")),
    @JsonProperty("APP") APP(String.valueOf("APP")),
    @JsonProperty("ALCOHOL") ALCOHOL(String.valueOf("ALCOHOL")),
    @JsonProperty("CONTESTS") CONTESTS(String.valueOf("CONTESTS")),
    @JsonProperty("POLITICAL") POLITICAL(String.valueOf("POLITICAL")),
    @JsonProperty("OTHER") OTHER(String.valueOf("OTHER")),
    @JsonProperty("IMAGE") IMAGE(String.valueOf("IMAGE")),
    @JsonProperty("NAR") NAR(String.valueOf("NAR")),
    @JsonProperty("INCONSISTENT") INCONSISTENT(String.valueOf("INCONSISTENT")),
    @JsonProperty("CLICKBAIT") CLICKBAIT(String.valueOf("CLICKBAIT")),
    @JsonProperty("NO_DESCRIPTION") NO_DESCRIPTION(String.valueOf("NO_DESCRIPTION")),
    @JsonProperty("LOW_QUALITY") LOW_QUALITY(String.valueOf("LOW_QUALITY")),
    @JsonProperty("EXAGGERATED_CLAIMS") EXAGGERATED_CLAIMS(String.valueOf("EXAGGERATED_CLAIMS")),
    @JsonProperty("PINTEREST_BRAND") PINTEREST_BRAND(String.valueOf("PINTEREST_BRAND")),
    @JsonProperty("ALCOHOL_NO_SALE") ALCOHOL_NO_SALE(String.valueOf("ALCOHOL_NO_SALE")),
    @JsonProperty("LANDING_PAGE_SPEED") LANDING_PAGE_SPEED(String.valueOf("LANDING_PAGE_SPEED")),
    @JsonProperty("LANDING_PAGE_HARDWALL") LANDING_PAGE_HARDWALL(String.valueOf("LANDING_PAGE_HARDWALL")),
    @JsonProperty("LANDING_PAGE_BROKEN") LANDING_PAGE_BROKEN(String.valueOf("LANDING_PAGE_BROKEN")),
    @JsonProperty("LANDING_PAGE_QUALITY") LANDING_PAGE_QUALITY(String.valueOf("LANDING_PAGE_QUALITY")),
    @JsonProperty("OUT_OF_STOCK") OUT_OF_STOCK(String.valueOf("OUT_OF_STOCK")),
    @JsonProperty("IMAGE_LOW_QUALITY") IMAGE_LOW_QUALITY(String.valueOf("IMAGE_LOW_QUALITY")),
    @JsonProperty("IMAGE_BUSY") IMAGE_BUSY(String.valueOf("IMAGE_BUSY")),
    @JsonProperty("IMAGE_POORLY_EDITED") IMAGE_POORLY_EDITED(String.valueOf("IMAGE_POORLY_EDITED")),
    @JsonProperty("IMAGE_BEFORE_AFTER") IMAGE_BEFORE_AFTER(String.valueOf("IMAGE_BEFORE_AFTER")),
    @JsonProperty("UGC") UGC(String.valueOf("UGC")),
    @JsonProperty("FAKE_BUTTONS") FAKE_BUTTONS(String.valueOf("FAKE_BUTTONS")),
    @JsonProperty("WEAPONS") WEAPONS(String.valueOf("WEAPONS")),
    @JsonProperty("SENSITIVE") SENSITIVE(String.valueOf("SENSITIVE")),
    @JsonProperty("UNACCEPTABLE_BUSINESS") UNACCEPTABLE_BUSINESS(String.valueOf("UNACCEPTABLE_BUSINESS")),
    @JsonProperty("SUSPICIOUS_CLAIMS") SUSPICIOUS_CLAIMS(String.valueOf("SUSPICIOUS_CLAIMS")),
    @JsonProperty("PHARMA") PHARMA(String.valueOf("PHARMA")),
    @JsonProperty("SUSPICIOUS_SUPPLEMENTS") SUSPICIOUS_SUPPLEMENTS(String.valueOf("SUSPICIOUS_SUPPLEMENTS")),
    @JsonProperty("ILLEGAL_RECREATIONAL_DRUG") ILLEGAL_RECREATIONAL_DRUG(String.valueOf("ILLEGAL_RECREATIONAL_DRUG")),
    @JsonProperty("LOW_QUALITY_LANDING_PAGE") LOW_QUALITY_LANDING_PAGE(String.valueOf("LOW_QUALITY_LANDING_PAGE")),
    @JsonProperty("RESTRICTED_HEALTHCARE") RESTRICTED_HEALTHCARE(String.valueOf("RESTRICTED_HEALTHCARE")),
    @JsonProperty("INCONSISTENT_LANG_FR") INCONSISTENT_LANG_FR(String.valueOf("INCONSISTENT_LANG_FR"));

    private String value;

    RejectedReasonsEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static RejectedReasonsEnum fromValue(String value) {
        for (RejectedReasonsEnum b : RejectedReasonsEnum.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}

 /**
  * Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
  */
  @ApiModelProperty(value = "Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".")
  private List<RejectedReasonsEnum> rejectedReasons = null;

 /**
  * Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
  */
  @ApiModelProperty(value = "Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".")
  private List<String> rejectionLabels = null;

public enum ReviewStatusEnum {

    @JsonProperty("OTHER") OTHER(String.valueOf("OTHER")),
    @JsonProperty("PENDING") PENDING(String.valueOf("PENDING")),
    @JsonProperty("REJECTED") REJECTED(String.valueOf("REJECTED")),
    @JsonProperty("APPROVED") APPROVED(String.valueOf("APPROVED"));

    private String value;

    ReviewStatusEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static ReviewStatusEnum fromValue(String value) {
        for (ReviewStatusEnum b : ReviewStatusEnum.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}

 /**
  * Ad review status
  */
  @ApiModelProperty(example = "PENDING", value = "Ad review status")
  private ReviewStatusEnum reviewStatus;

 /**
  * Always \"ad\".
  */
  @ApiModelProperty(example = "pinpromotion", value = "Always \"ad\".")
  private String type;

 /**
  * Last update time. Unix timestamp in seconds.
  */
  @ApiModelProperty(example = "1451431341", value = "Last update time. Unix timestamp in seconds.")
  private Integer updatedTime;

 /**
  * Ad summary status
  */
  @ApiModelProperty(value = "Ad summary status")
  private PinPromotionSummaryStatus summaryStatus;
 /**
  * ID of the ad group that contains the ad.
  * @return adGroupId
  */
  @JsonProperty("ad_group_id")
 @Pattern(regexp="^\\d+$")  public String getAdGroupId() {
    return adGroupId;
  }

  /**
   * Sets the <code>adGroupId</code> property.
   */
 public void setAdGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
  }

  /**
   * Sets the <code>adGroupId</code> property.
   */
  public AdResponse adGroupId(String adGroupId) {
    this.adGroupId = adGroupId;
    return this;
  }

 /**
  * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
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
  public AdResponse androidDeepLink(String androidDeepLink) {
    this.androidDeepLink = androidDeepLink;
    return this;
  }

 /**
  * Comma-separated deep links for the carousel pin on Android.
  * @return carouselAndroidDeepLinks
  */
  @JsonProperty("carousel_android_deep_links")
  public List<String> getCarouselAndroidDeepLinks() {
    return carouselAndroidDeepLinks;
  }

  /**
   * Sets the <code>carouselAndroidDeepLinks</code> property.
   */
 public void setCarouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
    this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
  }

  /**
   * Sets the <code>carouselAndroidDeepLinks</code> property.
   */
  public AdResponse carouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
    this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
    return this;
  }

  /**
   * Adds a new item to the <code>carouselAndroidDeepLinks</code> list.
   */
  public AdResponse addCarouselAndroidDeepLinksItem(String carouselAndroidDeepLinksItem) {
    this.carouselAndroidDeepLinks.add(carouselAndroidDeepLinksItem);
    return this;
  }

 /**
  * Comma-separated destination URLs for the carousel pin to promote.
  * @return carouselDestinationUrls
  */
  @JsonProperty("carousel_destination_urls")
  public List<String> getCarouselDestinationUrls() {
    return carouselDestinationUrls;
  }

  /**
   * Sets the <code>carouselDestinationUrls</code> property.
   */
 public void setCarouselDestinationUrls(List<String> carouselDestinationUrls) {
    this.carouselDestinationUrls = carouselDestinationUrls;
  }

  /**
   * Sets the <code>carouselDestinationUrls</code> property.
   */
  public AdResponse carouselDestinationUrls(List<String> carouselDestinationUrls) {
    this.carouselDestinationUrls = carouselDestinationUrls;
    return this;
  }

  /**
   * Adds a new item to the <code>carouselDestinationUrls</code> list.
   */
  public AdResponse addCarouselDestinationUrlsItem(String carouselDestinationUrlsItem) {
    this.carouselDestinationUrls.add(carouselDestinationUrlsItem);
    return this;
  }

 /**
  * Comma-separated deep links for the carousel pin on iOS.
  * @return carouselIosDeepLinks
  */
  @JsonProperty("carousel_ios_deep_links")
  public List<String> getCarouselIosDeepLinks() {
    return carouselIosDeepLinks;
  }

  /**
   * Sets the <code>carouselIosDeepLinks</code> property.
   */
 public void setCarouselIosDeepLinks(List<String> carouselIosDeepLinks) {
    this.carouselIosDeepLinks = carouselIosDeepLinks;
  }

  /**
   * Sets the <code>carouselIosDeepLinks</code> property.
   */
  public AdResponse carouselIosDeepLinks(List<String> carouselIosDeepLinks) {
    this.carouselIosDeepLinks = carouselIosDeepLinks;
    return this;
  }

  /**
   * Adds a new item to the <code>carouselIosDeepLinks</code> list.
   */
  public AdResponse addCarouselIosDeepLinksItem(String carouselIosDeepLinksItem) {
    this.carouselIosDeepLinks.add(carouselIosDeepLinksItem);
    return this;
  }

 /**
  * Tracking url for the ad clicks.
  * @return clickTrackingUrl
  */
  @JsonProperty("click_tracking_url")
  public String getClickTrackingUrl() {
    return clickTrackingUrl;
  }

  /**
   * Sets the <code>clickTrackingUrl</code> property.
   */
 public void setClickTrackingUrl(String clickTrackingUrl) {
    this.clickTrackingUrl = clickTrackingUrl;
  }

  /**
   * Sets the <code>clickTrackingUrl</code> property.
   */
  public AdResponse clickTrackingUrl(String clickTrackingUrl) {
    this.clickTrackingUrl = clickTrackingUrl;
    return this;
  }

 /**
  * Ad creative type enum
  * @return creativeType
  */
  @JsonProperty("creative_type")
  public String getCreativeType() {
    return creativeType == null ? null : creativeType.value();
  }

  /**
   * Sets the <code>creativeType</code> property.
   */
 public void setCreativeType(CreativeTypeEnum creativeType) {
    this.creativeType = creativeType;
  }

  /**
   * Sets the <code>creativeType</code> property.
   */
  public AdResponse creativeType(CreativeTypeEnum creativeType) {
    this.creativeType = creativeType;
    return this;
  }

 /**
  * Destination URL.
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
  public AdResponse destinationUrl(String destinationUrl) {
    this.destinationUrl = destinationUrl;
    return this;
  }

 /**
  * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
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
  public AdResponse iosDeepLink(String iosDeepLink) {
    this.iosDeepLink = iosDeepLink;
    return this;
  }

 /**
  * Is original pin deleted?
  * @return isPinDeleted
  */
  @JsonProperty("is_pin_deleted")
  public Boolean getIsPinDeleted() {
    return isPinDeleted;
  }

  /**
   * Sets the <code>isPinDeleted</code> property.
   */
 public void setIsPinDeleted(Boolean isPinDeleted) {
    this.isPinDeleted = isPinDeleted;
  }

  /**
   * Sets the <code>isPinDeleted</code> property.
   */
  public AdResponse isPinDeleted(Boolean isPinDeleted) {
    this.isPinDeleted = isPinDeleted;
    return this;
  }

 /**
  * Is pin repinnable?
  * @return isRemovable
  */
  @JsonProperty("is_removable")
  public Boolean getIsRemovable() {
    return isRemovable;
  }

  /**
   * Sets the <code>isRemovable</code> property.
   */
 public void setIsRemovable(Boolean isRemovable) {
    this.isRemovable = isRemovable;
  }

  /**
   * Sets the <code>isRemovable</code> property.
   */
  public AdResponse isRemovable(Boolean isRemovable) {
    this.isRemovable = isRemovable;
    return this;
  }

 /**
  * Name of the ad - 255 chars max.
  * @return name
  */
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  /**
   * Sets the <code>name</code> property.
   */
 public void setName(String name) {
    this.name = name;
  }

  /**
   * Sets the <code>name</code> property.
   */
  public AdResponse name(String name) {
    this.name = name;
    return this;
  }

 /**
  * Pin ID.
  * @return pinId
  */
  @JsonProperty("pin_id")
 @Pattern(regexp="^\\d+$")  public String getPinId() {
    return pinId;
  }

  /**
   * Sets the <code>pinId</code> property.
   */
 public void setPinId(String pinId) {
    this.pinId = pinId;
  }

  /**
   * Sets the <code>pinId</code> property.
   */
  public AdResponse pinId(String pinId) {
    this.pinId = pinId;
    return this;
  }

 /**
  * Get status
  * @return status
  */
  @JsonProperty("status")
  public EntityStatus getStatus() {
    return status;
  }

  /**
   * Sets the <code>status</code> property.
   */
 public void setStatus(EntityStatus status) {
    this.status = status;
  }

  /**
   * Sets the <code>status</code> property.
   */
  public AdResponse status(EntityStatus status) {
    this.status = status;
    return this;
  }

 /**
  * Get trackingUrls
  * @return trackingUrls
  */
  @JsonProperty("tracking_urls")
  public TrackingUrls getTrackingUrls() {
    return trackingUrls;
  }

  /**
   * Sets the <code>trackingUrls</code> property.
   */
 public void setTrackingUrls(TrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  /**
   * Sets the <code>trackingUrls</code> property.
   */
  public AdResponse trackingUrls(TrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
    return this;
  }

  /**
   * Puts a new item into the <code>trackingUrls</code> map.
   */
  public AdResponse putTrackingUrlsItem(String key,  trackingUrlsItem) {
    this.trackingUrls.put(key, trackingUrlsItem);
    return this;
  }

 /**
  * Tracking URL for ad impressions.
  * @return viewTrackingUrl
  */
  @JsonProperty("view_tracking_url")
  public String getViewTrackingUrl() {
    return viewTrackingUrl;
  }

  /**
   * Sets the <code>viewTrackingUrl</code> property.
   */
 public void setViewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
  }

  /**
   * Sets the <code>viewTrackingUrl</code> property.
   */
  public AdResponse viewTrackingUrl(String viewTrackingUrl) {
    this.viewTrackingUrl = viewTrackingUrl;
    return this;
  }

 /**
  * The ID of the advertiser that this ad belongs to.
  * @return adAccountId
  */
  @JsonProperty("ad_account_id")
 @Pattern(regexp="^\\d+$")  public String getAdAccountId() {
    return adAccountId;
  }

  /**
   * Sets the <code>adAccountId</code> property.
   */
 public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

  /**
   * Sets the <code>adAccountId</code> property.
   */
  public AdResponse adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

 /**
  * ID of the ad campaign that contains this ad.
  * @return campaignId
  */
  @JsonProperty("campaign_id")
 @Pattern(regexp="^\\d+$")  public String getCampaignId() {
    return campaignId;
  }

  /**
   * Sets the <code>campaignId</code> property.
   */
 public void setCampaignId(String campaignId) {
    this.campaignId = campaignId;
  }

  /**
   * Sets the <code>campaignId</code> property.
   */
  public AdResponse campaignId(String campaignId) {
    this.campaignId = campaignId;
    return this;
  }

 /**
  * Destination URL template for all items within a collections drawer.
  * @return collectionItemsDestinationUrlTemplate
  */
  @JsonProperty("collection_items_destination_url_template")
  public String getCollectionItemsDestinationUrlTemplate() {
    return collectionItemsDestinationUrlTemplate;
  }

  /**
   * Sets the <code>collectionItemsDestinationUrlTemplate</code> property.
   */
 public void setCollectionItemsDestinationUrlTemplate(String collectionItemsDestinationUrlTemplate) {
    this.collectionItemsDestinationUrlTemplate = collectionItemsDestinationUrlTemplate;
  }

  /**
   * Sets the <code>collectionItemsDestinationUrlTemplate</code> property.
   */
  public AdResponse collectionItemsDestinationUrlTemplate(String collectionItemsDestinationUrlTemplate) {
    this.collectionItemsDestinationUrlTemplate = collectionItemsDestinationUrlTemplate;
    return this;
  }

 /**
  * Pin creation time. Unix timestamp in seconds.
  * @return createdTime
  */
  @JsonProperty("created_time")
  public Integer getCreatedTime() {
    return createdTime;
  }

  /**
   * Sets the <code>createdTime</code> property.
   */
 public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }

  /**
   * Sets the <code>createdTime</code> property.
   */
  public AdResponse createdTime(Integer createdTime) {
    this.createdTime = createdTime;
    return this;
  }

 /**
  * The ID of this ad.
  * @return id
  */
  @JsonProperty("id")
 @Pattern(regexp="^\\d+$")  public String getId() {
    return id;
  }

  /**
   * Sets the <code>id</code> property.
   */
 public void setId(String id) {
    this.id = id;
  }

  /**
   * Sets the <code>id</code> property.
   */
  public AdResponse id(String id) {
    this.id = id;
    return this;
  }

 /**
  * Enum reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.
  * @return rejectedReasons
  */
  @JsonProperty("rejected_reasons")
  public List<RejectedReasonsEnum> getRejectedReasons() {
    return rejectedReasons;
  }

  /**
   * Sets the <code>rejectedReasons</code> property.
   */
 public void setRejectedReasons(List<RejectedReasonsEnum> rejectedReasons) {
    this.rejectedReasons = rejectedReasons;
  }

  /**
   * Sets the <code>rejectedReasons</code> property.
   */
  public AdResponse rejectedReasons(List<RejectedReasonsEnum> rejectedReasons) {
    this.rejectedReasons = rejectedReasons;
    return this;
  }

  /**
   * Adds a new item to the <code>rejectedReasons</code> list.
   */
  public AdResponse addRejectedReasonsItem(RejectedReasonsEnum rejectedReasonsItem) {
    this.rejectedReasons.add(rejectedReasonsItem);
    return this;
  }

 /**
  * Text reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.
  * @return rejectionLabels
  */
  @JsonProperty("rejection_labels")
  public List<String> getRejectionLabels() {
    return rejectionLabels;
  }

  /**
   * Sets the <code>rejectionLabels</code> property.
   */
 public void setRejectionLabels(List<String> rejectionLabels) {
    this.rejectionLabels = rejectionLabels;
  }

  /**
   * Sets the <code>rejectionLabels</code> property.
   */
  public AdResponse rejectionLabels(List<String> rejectionLabels) {
    this.rejectionLabels = rejectionLabels;
    return this;
  }

  /**
   * Adds a new item to the <code>rejectionLabels</code> list.
   */
  public AdResponse addRejectionLabelsItem(String rejectionLabelsItem) {
    this.rejectionLabels.add(rejectionLabelsItem);
    return this;
  }

 /**
  * Ad review status
  * @return reviewStatus
  */
  @JsonProperty("review_status")
  public String getReviewStatus() {
    return reviewStatus == null ? null : reviewStatus.value();
  }

  /**
   * Sets the <code>reviewStatus</code> property.
   */
 public void setReviewStatus(ReviewStatusEnum reviewStatus) {
    this.reviewStatus = reviewStatus;
  }

  /**
   * Sets the <code>reviewStatus</code> property.
   */
  public AdResponse reviewStatus(ReviewStatusEnum reviewStatus) {
    this.reviewStatus = reviewStatus;
    return this;
  }

 /**
  * Always \&quot;ad\&quot;.
  * @return type
  */
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  /**
   * Sets the <code>type</code> property.
   */
 public void setType(String type) {
    this.type = type;
  }

  /**
   * Sets the <code>type</code> property.
   */
  public AdResponse type(String type) {
    this.type = type;
    return this;
  }

 /**
  * Last update time. Unix timestamp in seconds.
  * @return updatedTime
  */
  @JsonProperty("updated_time")
  public Integer getUpdatedTime() {
    return updatedTime;
  }

  /**
   * Sets the <code>updatedTime</code> property.
   */
 public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }

  /**
   * Sets the <code>updatedTime</code> property.
   */
  public AdResponse updatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
    return this;
  }

 /**
  * Ad summary status
  * @return summaryStatus
  */
  @JsonProperty("summary_status")
  public PinPromotionSummaryStatus getSummaryStatus() {
    return summaryStatus;
  }

  /**
   * Sets the <code>summaryStatus</code> property.
   */
 public void setSummaryStatus(PinPromotionSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
  }

  /**
   * Sets the <code>summaryStatus</code> property.
   */
  public AdResponse summaryStatus(PinPromotionSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
    return this;
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

