/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
import org.openapitools.model.EntityStatus;
import org.openapitools.model.TrackingUrls;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Creation fields
 */
@ApiModel(description = "Creation fields")
@JsonPropertyOrder({
  AdResponseAllOf.JSON_PROPERTY_AD_GROUP_ID,
  AdResponseAllOf.JSON_PROPERTY_ANDROID_DEEP_LINK,
  AdResponseAllOf.JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS,
  AdResponseAllOf.JSON_PROPERTY_CAROUSEL_DESTINATION_URLS,
  AdResponseAllOf.JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS,
  AdResponseAllOf.JSON_PROPERTY_CLICK_TRACKING_URL,
  AdResponseAllOf.JSON_PROPERTY_CREATIVE_TYPE,
  AdResponseAllOf.JSON_PROPERTY_DESTINATION_URL,
  AdResponseAllOf.JSON_PROPERTY_IOS_DEEP_LINK,
  AdResponseAllOf.JSON_PROPERTY_IS_PIN_DELETED,
  AdResponseAllOf.JSON_PROPERTY_IS_REMOVABLE,
  AdResponseAllOf.JSON_PROPERTY_NAME,
  AdResponseAllOf.JSON_PROPERTY_PIN_ID,
  AdResponseAllOf.JSON_PROPERTY_STATUS,
  AdResponseAllOf.JSON_PROPERTY_TRACKING_URLS,
  AdResponseAllOf.JSON_PROPERTY_VIEW_TRACKING_URL
})
@JsonTypeName("AdResponse_allOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-07-01T11:59:24.863123Z[Etc/UTC]")
@Introspected
public class AdResponseAllOf {
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

    public AdResponseAllOf() {
    }

    public AdResponseAllOf adGroupId(String adGroupId) {
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

    public AdResponseAllOf androidDeepLink(String androidDeepLink) {
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

    public AdResponseAllOf carouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
        this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
        return this;
    }

    public AdResponseAllOf addCarouselAndroidDeepLinksItem(String carouselAndroidDeepLinksItem) {
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

    public AdResponseAllOf carouselDestinationUrls(List<String> carouselDestinationUrls) {
        this.carouselDestinationUrls = carouselDestinationUrls;
        return this;
    }

    public AdResponseAllOf addCarouselDestinationUrlsItem(String carouselDestinationUrlsItem) {
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

    public AdResponseAllOf carouselIosDeepLinks(List<String> carouselIosDeepLinks) {
        this.carouselIosDeepLinks = carouselIosDeepLinks;
        return this;
    }

    public AdResponseAllOf addCarouselIosDeepLinksItem(String carouselIosDeepLinksItem) {
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

    public AdResponseAllOf clickTrackingUrl(String clickTrackingUrl) {
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

    public AdResponseAllOf creativeType(CreativeTypeEnum creativeType) {
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

    public AdResponseAllOf destinationUrl(String destinationUrl) {
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

    public AdResponseAllOf iosDeepLink(String iosDeepLink) {
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

    public AdResponseAllOf isPinDeleted(Boolean isPinDeleted) {
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

    public AdResponseAllOf isRemovable(Boolean isRemovable) {
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

    public AdResponseAllOf name(String name) {
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

    public AdResponseAllOf pinId(String pinId) {
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

    public AdResponseAllOf status(EntityStatus status) {
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

    public AdResponseAllOf trackingUrls(TrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
        return this;
    }

    public AdResponseAllOf putTrackingUrlsItem(String key,  trackingUrlsItem) {
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

    public AdResponseAllOf viewTrackingUrl(String viewTrackingUrl) {
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

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AdResponseAllOf adResponseAllOf = (AdResponseAllOf) o;
        return Objects.equals(this.adGroupId, adResponseAllOf.adGroupId) &&
            Objects.equals(this.androidDeepLink, adResponseAllOf.androidDeepLink) &&
            Objects.equals(this.carouselAndroidDeepLinks, adResponseAllOf.carouselAndroidDeepLinks) &&
            Objects.equals(this.carouselDestinationUrls, adResponseAllOf.carouselDestinationUrls) &&
            Objects.equals(this.carouselIosDeepLinks, adResponseAllOf.carouselIosDeepLinks) &&
            Objects.equals(this.clickTrackingUrl, adResponseAllOf.clickTrackingUrl) &&
            Objects.equals(this.creativeType, adResponseAllOf.creativeType) &&
            Objects.equals(this.destinationUrl, adResponseAllOf.destinationUrl) &&
            Objects.equals(this.iosDeepLink, adResponseAllOf.iosDeepLink) &&
            Objects.equals(this.isPinDeleted, adResponseAllOf.isPinDeleted) &&
            Objects.equals(this.isRemovable, adResponseAllOf.isRemovable) &&
            Objects.equals(this.name, adResponseAllOf.name) &&
            Objects.equals(this.pinId, adResponseAllOf.pinId) &&
            Objects.equals(this.status, adResponseAllOf.status) &&
            Objects.equals(this.trackingUrls, adResponseAllOf.trackingUrls) &&
            Objects.equals(this.viewTrackingUrl, adResponseAllOf.viewTrackingUrl);
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
