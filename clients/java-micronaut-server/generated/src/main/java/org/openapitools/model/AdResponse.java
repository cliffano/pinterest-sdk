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

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AdResponse
 */
@JsonPropertyOrder({
  AdResponse.JSON_PROPERTY_AD_GROUP_ID,
  AdResponse.JSON_PROPERTY_ANDROID_DEEP_LINK,
  AdResponse.JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS,
  AdResponse.JSON_PROPERTY_CAROUSEL_DESTINATION_URLS,
  AdResponse.JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS,
  AdResponse.JSON_PROPERTY_CLICK_TRACKING_URL,
  AdResponse.JSON_PROPERTY_CREATIVE_TYPE,
  AdResponse.JSON_PROPERTY_DESTINATION_URL,
  AdResponse.JSON_PROPERTY_IOS_DEEP_LINK,
  AdResponse.JSON_PROPERTY_IS_PIN_DELETED,
  AdResponse.JSON_PROPERTY_IS_REMOVABLE,
  AdResponse.JSON_PROPERTY_NAME,
  AdResponse.JSON_PROPERTY_PIN_ID,
  AdResponse.JSON_PROPERTY_STATUS,
  AdResponse.JSON_PROPERTY_TRACKING_URLS,
  AdResponse.JSON_PROPERTY_VIEW_TRACKING_URL,
  AdResponse.JSON_PROPERTY_AD_ACCOUNT_ID,
  AdResponse.JSON_PROPERTY_CAMPAIGN_ID,
  AdResponse.JSON_PROPERTY_COLLECTION_ITEMS_DESTINATION_URL_TEMPLATE,
  AdResponse.JSON_PROPERTY_CREATED_TIME,
  AdResponse.JSON_PROPERTY_ID,
  AdResponse.JSON_PROPERTY_REJECTED_REASONS,
  AdResponse.JSON_PROPERTY_REJECTION_LABELS,
  AdResponse.JSON_PROPERTY_REVIEW_STATUS,
  AdResponse.JSON_PROPERTY_TYPE,
  AdResponse.JSON_PROPERTY_UPDATED_TIME,
  AdResponse.JSON_PROPERTY_SUMMARY_STATUS
})
@JsonTypeName("AdResponse")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-07T06:38:54.481854Z[Etc/UTC]")
@Introspected
public class AdResponse {
    public static final String JSON_PROPERTY_AD_GROUP_ID = "ad_group_id";
    private String adGroupId;

    public static final String JSON_PROPERTY_ANDROID_DEEP_LINK = "android_deep_link";
    private String androidDeepLink;

    public static final String JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS = "carousel_android_deep_links";
    private List<String> carouselAndroidDeepLinks = null;

    public static final String JSON_PROPERTY_CAROUSEL_DESTINATION_URLS = "carousel_destination_urls";
    private List<String> carouselDestinationUrls = null;

    public static final String JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS = "carousel_ios_deep_links";
    private List<String> carouselIosDeepLinks = null;

    public static final String JSON_PROPERTY_CLICK_TRACKING_URL = "click_tracking_url";
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

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static CreativeTypeEnum fromValue(String value) {
            for (CreativeTypeEnum b : CreativeTypeEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_CREATIVE_TYPE = "creative_type";
    private CreativeTypeEnum creativeType;

    public static final String JSON_PROPERTY_DESTINATION_URL = "destination_url";
    private String destinationUrl;

    public static final String JSON_PROPERTY_IOS_DEEP_LINK = "ios_deep_link";
    private String iosDeepLink;

    public static final String JSON_PROPERTY_IS_PIN_DELETED = "is_pin_deleted";
    private Boolean isPinDeleted;

    public static final String JSON_PROPERTY_IS_REMOVABLE = "is_removable";
    private Boolean isRemovable;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_PIN_ID = "pin_id";
    private String pinId;

    public static final String JSON_PROPERTY_STATUS = "status";
    private EntityStatus status;

    public static final String JSON_PROPERTY_TRACKING_URLS = "tracking_urls";
    private TrackingUrls trackingUrls;

    public static final String JSON_PROPERTY_VIEW_TRACKING_URL = "view_tracking_url";
    private String viewTrackingUrl;

    public static final String JSON_PROPERTY_AD_ACCOUNT_ID = "ad_account_id";
    private String adAccountId;

    public static final String JSON_PROPERTY_CAMPAIGN_ID = "campaign_id";
    private String campaignId;

    public static final String JSON_PROPERTY_COLLECTION_ITEMS_DESTINATION_URL_TEMPLATE = "collection_items_destination_url_template";
    private String collectionItemsDestinationUrlTemplate;

    public static final String JSON_PROPERTY_CREATED_TIME = "created_time";
    private Integer createdTime;

    public static final String JSON_PROPERTY_ID = "id";
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

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static RejectedReasonsEnum fromValue(String value) {
            for (RejectedReasonsEnum b : RejectedReasonsEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_REJECTED_REASONS = "rejected_reasons";
    private List<RejectedReasonsEnum> rejectedReasons = null;

    public static final String JSON_PROPERTY_REJECTION_LABELS = "rejection_labels";
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

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static ReviewStatusEnum fromValue(String value) {
            for (ReviewStatusEnum b : ReviewStatusEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_REVIEW_STATUS = "review_status";
    private ReviewStatusEnum reviewStatus;

    public static final String JSON_PROPERTY_TYPE = "type";
    private String type;

    public static final String JSON_PROPERTY_UPDATED_TIME = "updated_time";
    private Integer updatedTime;

    public static final String JSON_PROPERTY_SUMMARY_STATUS = "summary_status";
    private PinPromotionSummaryStatus summaryStatus;

    public AdResponse() {
    }

    public AdResponse adGroupId(String adGroupId) {
        this.adGroupId = adGroupId;
        return this;
    }

    /**
     * ID of the ad group that contains the ad.
     * @return adGroupId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "2680059592705", value = "ID of the ad group that contains the ad.")
    @JsonProperty(JSON_PROPERTY_AD_GROUP_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getAdGroupId() {
        return adGroupId;
    }

    @JsonProperty(JSON_PROPERTY_AD_GROUP_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setAdGroupId(String adGroupId) {
        this.adGroupId = adGroupId;
    }

    public AdResponse androidDeepLink(String androidDeepLink) {
        this.androidDeepLink = androidDeepLink;
        return this;
    }

    /**
     * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
     * @return androidDeepLink
     **/
    @Nullable
    @ApiModelProperty(value = "Deep link URL for Android devices. Not currently available. Using this field will generate an error.")
    @JsonProperty(JSON_PROPERTY_ANDROID_DEEP_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getAndroidDeepLink() {
        return androidDeepLink;
    }

    @JsonProperty(JSON_PROPERTY_ANDROID_DEEP_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setAndroidDeepLink(String androidDeepLink) {
        this.androidDeepLink = androidDeepLink;
    }

    public AdResponse carouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
        this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
        return this;
    }

    public AdResponse addCarouselAndroidDeepLinksItem(String carouselAndroidDeepLinksItem) {
        if (this.carouselAndroidDeepLinks == null) {
            this.carouselAndroidDeepLinks = new ArrayList<String>();
        }
        this.carouselAndroidDeepLinks.add(carouselAndroidDeepLinksItem);
        return this;
    }

    /**
     * Comma-separated deep links for the carousel pin on Android.
     * @return carouselAndroidDeepLinks
     **/
    @Nullable
    @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on Android.")
    @JsonProperty(JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getCarouselAndroidDeepLinks() {
        return carouselAndroidDeepLinks;
    }

    @JsonProperty(JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCarouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
        this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
    }

    public AdResponse carouselDestinationUrls(List<String> carouselDestinationUrls) {
        this.carouselDestinationUrls = carouselDestinationUrls;
        return this;
    }

    public AdResponse addCarouselDestinationUrlsItem(String carouselDestinationUrlsItem) {
        if (this.carouselDestinationUrls == null) {
            this.carouselDestinationUrls = new ArrayList<String>();
        }
        this.carouselDestinationUrls.add(carouselDestinationUrlsItem);
        return this;
    }

    /**
     * Comma-separated destination URLs for the carousel pin to promote.
     * @return carouselDestinationUrls
     **/
    @Nullable
    @ApiModelProperty(value = "Comma-separated destination URLs for the carousel pin to promote.")
    @JsonProperty(JSON_PROPERTY_CAROUSEL_DESTINATION_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getCarouselDestinationUrls() {
        return carouselDestinationUrls;
    }

    @JsonProperty(JSON_PROPERTY_CAROUSEL_DESTINATION_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCarouselDestinationUrls(List<String> carouselDestinationUrls) {
        this.carouselDestinationUrls = carouselDestinationUrls;
    }

    public AdResponse carouselIosDeepLinks(List<String> carouselIosDeepLinks) {
        this.carouselIosDeepLinks = carouselIosDeepLinks;
        return this;
    }

    public AdResponse addCarouselIosDeepLinksItem(String carouselIosDeepLinksItem) {
        if (this.carouselIosDeepLinks == null) {
            this.carouselIosDeepLinks = new ArrayList<String>();
        }
        this.carouselIosDeepLinks.add(carouselIosDeepLinksItem);
        return this;
    }

    /**
     * Comma-separated deep links for the carousel pin on iOS.
     * @return carouselIosDeepLinks
     **/
    @Nullable
    @ApiModelProperty(value = "Comma-separated deep links for the carousel pin on iOS.")
    @JsonProperty(JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getCarouselIosDeepLinks() {
        return carouselIosDeepLinks;
    }

    @JsonProperty(JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCarouselIosDeepLinks(List<String> carouselIosDeepLinks) {
        this.carouselIosDeepLinks = carouselIosDeepLinks;
    }

    public AdResponse clickTrackingUrl(String clickTrackingUrl) {
        this.clickTrackingUrl = clickTrackingUrl;
        return this;
    }

    /**
     * Tracking url for the ad clicks.
     * @return clickTrackingUrl
     **/
    @Nullable
    @ApiModelProperty(value = "Tracking url for the ad clicks.")
    @JsonProperty(JSON_PROPERTY_CLICK_TRACKING_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getClickTrackingUrl() {
        return clickTrackingUrl;
    }

    @JsonProperty(JSON_PROPERTY_CLICK_TRACKING_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setClickTrackingUrl(String clickTrackingUrl) {
        this.clickTrackingUrl = clickTrackingUrl;
    }

    public AdResponse creativeType(CreativeTypeEnum creativeType) {
        this.creativeType = creativeType;
        return this;
    }

    /**
     * Ad creative type enum
     * @return creativeType
     **/
    @Nullable
    @ApiModelProperty(example = "REGULAR", value = "Ad creative type enum")
    @JsonProperty(JSON_PROPERTY_CREATIVE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public CreativeTypeEnum getCreativeType() {
        return creativeType;
    }

    @JsonProperty(JSON_PROPERTY_CREATIVE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCreativeType(CreativeTypeEnum creativeType) {
        this.creativeType = creativeType;
    }

    public AdResponse destinationUrl(String destinationUrl) {
        this.destinationUrl = destinationUrl;
        return this;
    }

    /**
     * Destination URL.
     * @return destinationUrl
     **/
    @Nullable
    @ApiModelProperty(value = "Destination URL.")
    @JsonProperty(JSON_PROPERTY_DESTINATION_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getDestinationUrl() {
        return destinationUrl;
    }

    @JsonProperty(JSON_PROPERTY_DESTINATION_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setDestinationUrl(String destinationUrl) {
        this.destinationUrl = destinationUrl;
    }

    public AdResponse iosDeepLink(String iosDeepLink) {
        this.iosDeepLink = iosDeepLink;
        return this;
    }

    /**
     * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
     * @return iosDeepLink
     **/
    @Nullable
    @ApiModelProperty(value = "Deep link URL for iOS devices. Not currently available. Using this field will generate an error.")
    @JsonProperty(JSON_PROPERTY_IOS_DEEP_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getIosDeepLink() {
        return iosDeepLink;
    }

    @JsonProperty(JSON_PROPERTY_IOS_DEEP_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setIosDeepLink(String iosDeepLink) {
        this.iosDeepLink = iosDeepLink;
    }

    public AdResponse isPinDeleted(Boolean isPinDeleted) {
        this.isPinDeleted = isPinDeleted;
        return this;
    }

    /**
     * Is original pin deleted?
     * @return isPinDeleted
     **/
    @Nullable
    @ApiModelProperty(example = "false", value = "Is original pin deleted?")
    @JsonProperty(JSON_PROPERTY_IS_PIN_DELETED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Boolean getIsPinDeleted() {
        return isPinDeleted;
    }

    @JsonProperty(JSON_PROPERTY_IS_PIN_DELETED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setIsPinDeleted(Boolean isPinDeleted) {
        this.isPinDeleted = isPinDeleted;
    }

    public AdResponse isRemovable(Boolean isRemovable) {
        this.isRemovable = isRemovable;
        return this;
    }

    /**
     * Is pin repinnable?
     * @return isRemovable
     **/
    @Nullable
    @ApiModelProperty(example = "false", value = "Is pin repinnable?")
    @JsonProperty(JSON_PROPERTY_IS_REMOVABLE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Boolean getIsRemovable() {
        return isRemovable;
    }

    @JsonProperty(JSON_PROPERTY_IS_REMOVABLE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setIsRemovable(Boolean isRemovable) {
        this.isRemovable = isRemovable;
    }

    public AdResponse name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Name of the ad - 255 chars max.
     * @return name
     **/
    @Nullable
    @ApiModelProperty(value = "Name of the ad - 255 chars max.")
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setName(String name) {
        this.name = name;
    }

    public AdResponse pinId(String pinId) {
        this.pinId = pinId;
        return this;
    }

    /**
     * Pin ID.
     * @return pinId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "394205773611545468", value = "Pin ID.")
    @JsonProperty(JSON_PROPERTY_PIN_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getPinId() {
        return pinId;
    }

    @JsonProperty(JSON_PROPERTY_PIN_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setPinId(String pinId) {
        this.pinId = pinId;
    }

    public AdResponse status(EntityStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public EntityStatus getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setStatus(EntityStatus status) {
        this.status = status;
    }

    public AdResponse trackingUrls(TrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
        return this;
    }

    public AdResponse putTrackingUrlsItem(String key,  trackingUrlsItem) {
        if (this.trackingUrls == null) {
            this.trackingUrls = ;
        }
        this.trackingUrls.put(key, trackingUrlsItem);
        return this;
  }

    /**
     * Get trackingUrls
     * @return trackingUrls
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public TrackingUrls getTrackingUrls() {
        return trackingUrls;
    }

    @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setTrackingUrls(TrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
    }

    public AdResponse viewTrackingUrl(String viewTrackingUrl) {
        this.viewTrackingUrl = viewTrackingUrl;
        return this;
    }

    /**
     * Tracking URL for ad impressions.
     * @return viewTrackingUrl
     **/
    @Nullable
    @ApiModelProperty(value = "Tracking URL for ad impressions.")
    @JsonProperty(JSON_PROPERTY_VIEW_TRACKING_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getViewTrackingUrl() {
        return viewTrackingUrl;
    }

    @JsonProperty(JSON_PROPERTY_VIEW_TRACKING_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setViewTrackingUrl(String viewTrackingUrl) {
        this.viewTrackingUrl = viewTrackingUrl;
    }

    public AdResponse adAccountId(String adAccountId) {
        this.adAccountId = adAccountId;
        return this;
    }

    /**
     * The ID of the advertiser that this ad belongs to.
     * @return adAccountId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "549755885175", value = "The ID of the advertiser that this ad belongs to.")
    @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getAdAccountId() {
        return adAccountId;
    }

    @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setAdAccountId(String adAccountId) {
        this.adAccountId = adAccountId;
    }

    public AdResponse campaignId(String campaignId) {
        this.campaignId = campaignId;
        return this;
    }

    /**
     * ID of the ad campaign that contains this ad.
     * @return campaignId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "626735565838", value = "ID of the ad campaign that contains this ad.")
    @JsonProperty(JSON_PROPERTY_CAMPAIGN_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getCampaignId() {
        return campaignId;
    }

    @JsonProperty(JSON_PROPERTY_CAMPAIGN_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCampaignId(String campaignId) {
        this.campaignId = campaignId;
    }

    public AdResponse collectionItemsDestinationUrlTemplate(String collectionItemsDestinationUrlTemplate) {
        this.collectionItemsDestinationUrlTemplate = collectionItemsDestinationUrlTemplate;
        return this;
    }

    /**
     * Destination URL template for all items within a collections drawer.
     * @return collectionItemsDestinationUrlTemplate
     **/
    @Nullable
    @ApiModelProperty(value = "Destination URL template for all items within a collections drawer.")
    @JsonProperty(JSON_PROPERTY_COLLECTION_ITEMS_DESTINATION_URL_TEMPLATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getCollectionItemsDestinationUrlTemplate() {
        return collectionItemsDestinationUrlTemplate;
    }

    @JsonProperty(JSON_PROPERTY_COLLECTION_ITEMS_DESTINATION_URL_TEMPLATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCollectionItemsDestinationUrlTemplate(String collectionItemsDestinationUrlTemplate) {
        this.collectionItemsDestinationUrlTemplate = collectionItemsDestinationUrlTemplate;
    }

    public AdResponse createdTime(Integer createdTime) {
        this.createdTime = createdTime;
        return this;
    }

    /**
     * Pin creation time. Unix timestamp in seconds.
     * @return createdTime
     **/
    @Nullable
    @ApiModelProperty(example = "1451431341", value = "Pin creation time. Unix timestamp in seconds.")
    @JsonProperty(JSON_PROPERTY_CREATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getCreatedTime() {
        return createdTime;
    }

    @JsonProperty(JSON_PROPERTY_CREATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCreatedTime(Integer createdTime) {
        this.createdTime = createdTime;
    }

    public AdResponse id(String id) {
        this.id = id;
        return this;
    }

    /**
     * The ID of this ad.
     * @return id
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "687195134316", value = "The ID of this ad.")
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getId() {
        return id;
    }

    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setId(String id) {
        this.id = id;
    }

    public AdResponse rejectedReasons(List<RejectedReasonsEnum> rejectedReasons) {
        this.rejectedReasons = rejectedReasons;
        return this;
    }

    public AdResponse addRejectedReasonsItem(RejectedReasonsEnum rejectedReasonsItem) {
        if (this.rejectedReasons == null) {
            this.rejectedReasons = new ArrayList<RejectedReasonsEnum>();
        }
        this.rejectedReasons.add(rejectedReasonsItem);
        return this;
    }

    /**
     * Enum reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.
     * @return rejectedReasons
     **/
    @Nullable
    @ApiModelProperty(value = "Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".")
    @JsonProperty(JSON_PROPERTY_REJECTED_REASONS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<RejectedReasonsEnum> getRejectedReasons() {
        return rejectedReasons;
    }

    @JsonProperty(JSON_PROPERTY_REJECTED_REASONS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setRejectedReasons(List<RejectedReasonsEnum> rejectedReasons) {
        this.rejectedReasons = rejectedReasons;
    }

    public AdResponse rejectionLabels(List<String> rejectionLabels) {
        this.rejectionLabels = rejectionLabels;
        return this;
    }

    public AdResponse addRejectionLabelsItem(String rejectionLabelsItem) {
        if (this.rejectionLabels == null) {
            this.rejectionLabels = new ArrayList<String>();
        }
        this.rejectionLabels.add(rejectionLabelsItem);
        return this;
    }

    /**
     * Text reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.
     * @return rejectionLabels
     **/
    @Nullable
    @ApiModelProperty(value = "Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".")
    @JsonProperty(JSON_PROPERTY_REJECTION_LABELS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getRejectionLabels() {
        return rejectionLabels;
    }

    @JsonProperty(JSON_PROPERTY_REJECTION_LABELS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setRejectionLabels(List<String> rejectionLabels) {
        this.rejectionLabels = rejectionLabels;
    }

    public AdResponse reviewStatus(ReviewStatusEnum reviewStatus) {
        this.reviewStatus = reviewStatus;
        return this;
    }

    /**
     * Ad review status
     * @return reviewStatus
     **/
    @Nullable
    @ApiModelProperty(example = "PENDING", value = "Ad review status")
    @JsonProperty(JSON_PROPERTY_REVIEW_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public ReviewStatusEnum getReviewStatus() {
        return reviewStatus;
    }

    @JsonProperty(JSON_PROPERTY_REVIEW_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setReviewStatus(ReviewStatusEnum reviewStatus) {
        this.reviewStatus = reviewStatus;
    }

    public AdResponse type(String type) {
        this.type = type;
        return this;
    }

    /**
     * Always \&quot;ad\&quot;.
     * @return type
     **/
    @Nullable
    @ApiModelProperty(example = "pinpromotion", value = "Always \"ad\".")
    @JsonProperty(JSON_PROPERTY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getType() {
        return type;
    }

    @JsonProperty(JSON_PROPERTY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setType(String type) {
        this.type = type;
    }

    public AdResponse updatedTime(Integer updatedTime) {
        this.updatedTime = updatedTime;
        return this;
    }

    /**
     * Last update time. Unix timestamp in seconds.
     * @return updatedTime
     **/
    @Nullable
    @ApiModelProperty(example = "1451431341", value = "Last update time. Unix timestamp in seconds.")
    @JsonProperty(JSON_PROPERTY_UPDATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getUpdatedTime() {
        return updatedTime;
    }

    @JsonProperty(JSON_PROPERTY_UPDATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setUpdatedTime(Integer updatedTime) {
        this.updatedTime = updatedTime;
    }

    public AdResponse summaryStatus(PinPromotionSummaryStatus summaryStatus) {
        this.summaryStatus = summaryStatus;
        return this;
    }

    /**
     * Ad summary status
     * @return summaryStatus
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "Ad summary status")
    @JsonProperty(JSON_PROPERTY_SUMMARY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public PinPromotionSummaryStatus getSummaryStatus() {
        return summaryStatus;
    }

    @JsonProperty(JSON_PROPERTY_SUMMARY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
        return Objects.equals(this.adGroupId, adResponse.adGroupId) &&
            Objects.equals(this.androidDeepLink, adResponse.androidDeepLink) &&
            Objects.equals(this.carouselAndroidDeepLinks, adResponse.carouselAndroidDeepLinks) &&
            Objects.equals(this.carouselDestinationUrls, adResponse.carouselDestinationUrls) &&
            Objects.equals(this.carouselIosDeepLinks, adResponse.carouselIosDeepLinks) &&
            Objects.equals(this.clickTrackingUrl, adResponse.clickTrackingUrl) &&
            Objects.equals(this.creativeType, adResponse.creativeType) &&
            Objects.equals(this.destinationUrl, adResponse.destinationUrl) &&
            Objects.equals(this.iosDeepLink, adResponse.iosDeepLink) &&
            Objects.equals(this.isPinDeleted, adResponse.isPinDeleted) &&
            Objects.equals(this.isRemovable, adResponse.isRemovable) &&
            Objects.equals(this.name, adResponse.name) &&
            Objects.equals(this.pinId, adResponse.pinId) &&
            Objects.equals(this.status, adResponse.status) &&
            Objects.equals(this.trackingUrls, adResponse.trackingUrls) &&
            Objects.equals(this.viewTrackingUrl, adResponse.viewTrackingUrl) &&
            Objects.equals(this.adAccountId, adResponse.adAccountId) &&
            Objects.equals(this.campaignId, adResponse.campaignId) &&
            Objects.equals(this.collectionItemsDestinationUrlTemplate, adResponse.collectionItemsDestinationUrlTemplate) &&
            Objects.equals(this.createdTime, adResponse.createdTime) &&
            Objects.equals(this.id, adResponse.id) &&
            Objects.equals(this.rejectedReasons, adResponse.rejectedReasons) &&
            Objects.equals(this.rejectionLabels, adResponse.rejectionLabels) &&
            Objects.equals(this.reviewStatus, adResponse.reviewStatus) &&
            Objects.equals(this.type, adResponse.type) &&
            Objects.equals(this.updatedTime, adResponse.updatedTime) &&
            Objects.equals(this.summaryStatus, adResponse.summaryStatus);
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
