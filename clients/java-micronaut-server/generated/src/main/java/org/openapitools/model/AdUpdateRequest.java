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
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.AdCommonQuizPinData;
import org.openapitools.model.AdCommonTrackingUrls;
import org.openapitools.model.CreativeType;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.GridClickType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * AdUpdateRequest
 */
@JsonPropertyOrder({
  AdUpdateRequest.JSON_PROPERTY_AD_GROUP_ID,
  AdUpdateRequest.JSON_PROPERTY_ANDROID_DEEP_LINK,
  AdUpdateRequest.JSON_PROPERTY_CAROUSEL_ANDROID_DEEP_LINKS,
  AdUpdateRequest.JSON_PROPERTY_CAROUSEL_DESTINATION_URLS,
  AdUpdateRequest.JSON_PROPERTY_CAROUSEL_IOS_DEEP_LINKS,
  AdUpdateRequest.JSON_PROPERTY_CLICK_TRACKING_URL,
  AdUpdateRequest.JSON_PROPERTY_CREATIVE_TYPE,
  AdUpdateRequest.JSON_PROPERTY_DESTINATION_URL,
  AdUpdateRequest.JSON_PROPERTY_IOS_DEEP_LINK,
  AdUpdateRequest.JSON_PROPERTY_IS_PIN_DELETED,
  AdUpdateRequest.JSON_PROPERTY_IS_REMOVABLE,
  AdUpdateRequest.JSON_PROPERTY_NAME,
  AdUpdateRequest.JSON_PROPERTY_STATUS,
  AdUpdateRequest.JSON_PROPERTY_TRACKING_URLS,
  AdUpdateRequest.JSON_PROPERTY_VIEW_TRACKING_URL,
  AdUpdateRequest.JSON_PROPERTY_LEAD_FORM_ID,
  AdUpdateRequest.JSON_PROPERTY_GRID_CLICK_TYPE,
  AdUpdateRequest.JSON_PROPERTY_CUSTOMIZABLE_CTA_TYPE,
  AdUpdateRequest.JSON_PROPERTY_QUIZ_PIN_DATA,
  AdUpdateRequest.JSON_PROPERTY_ID,
  AdUpdateRequest.JSON_PROPERTY_PIN_ID
})
@JsonTypeName("AdUpdateRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AdUpdateRequest {
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

    public static final String JSON_PROPERTY_CREATIVE_TYPE = "creative_type";
    private CreativeType creativeType;

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

    public static final String JSON_PROPERTY_STATUS = "status";
    private EntityStatus status;

    public static final String JSON_PROPERTY_TRACKING_URLS = "tracking_urls";
    private AdCommonTrackingUrls trackingUrls;

    public static final String JSON_PROPERTY_VIEW_TRACKING_URL = "view_tracking_url";
    private String viewTrackingUrl;

    public static final String JSON_PROPERTY_LEAD_FORM_ID = "lead_form_id";
    private String leadFormId;

    public static final String JSON_PROPERTY_GRID_CLICK_TYPE = "grid_click_type";
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

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
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
    private CustomizableCtaTypeEnum customizableCtaType;

    public static final String JSON_PROPERTY_QUIZ_PIN_DATA = "quiz_pin_data";
    private AdCommonQuizPinData quizPinData;

    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_PIN_ID = "pin_id";
    private String pinId;

    public AdUpdateRequest(String id) {
        this.id = id;
    }

    public AdUpdateRequest adGroupId(String adGroupId) {
        this.adGroupId = adGroupId;
        return this;
    }

    /**
     * ID of the ad group that contains the ad.
     * @return adGroupId
     **/
    @Nullable
    @Pattern(regexp="^(AG)?\\d+$")
    @Schema(name = "ad_group_id", example = "2680059592705", description = "ID of the ad group that contains the ad.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest androidDeepLink(String androidDeepLink) {
        this.androidDeepLink = androidDeepLink;
        return this;
    }

    /**
     * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
     * @return androidDeepLink
     **/
    @Nullable
    @Schema(name = "android_deep_link", description = "Deep link URL for Android devices. Not currently available. Using this field will generate an error.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest carouselAndroidDeepLinks(List<String> carouselAndroidDeepLinks) {
        this.carouselAndroidDeepLinks = carouselAndroidDeepLinks;
        return this;
    }

    public AdUpdateRequest addCarouselAndroidDeepLinksItem(String carouselAndroidDeepLinksItem) {
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
    @Nullable
    @Schema(name = "carousel_android_deep_links", description = "Comma-separated deep links for the carousel pin on Android.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest carouselDestinationUrls(List<String> carouselDestinationUrls) {
        this.carouselDestinationUrls = carouselDestinationUrls;
        return this;
    }

    public AdUpdateRequest addCarouselDestinationUrlsItem(String carouselDestinationUrlsItem) {
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
    @Nullable
    @Schema(name = "carousel_destination_urls", description = "Comma-separated destination URLs for the carousel pin to promote.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest carouselIosDeepLinks(List<String> carouselIosDeepLinks) {
        this.carouselIosDeepLinks = carouselIosDeepLinks;
        return this;
    }

    public AdUpdateRequest addCarouselIosDeepLinksItem(String carouselIosDeepLinksItem) {
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
    @Nullable
    @Schema(name = "carousel_ios_deep_links", description = "Comma-separated deep links for the carousel pin on iOS.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest clickTrackingUrl(String clickTrackingUrl) {
        this.clickTrackingUrl = clickTrackingUrl;
        return this;
    }

    /**
     * Tracking url for the ad clicks.
     * @return clickTrackingUrl
     **/
    @Nullable
    @Schema(name = "click_tracking_url", description = "Tracking url for the ad clicks.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest creativeType(CreativeType creativeType) {
        this.creativeType = creativeType;
        return this;
    }

    /**
     * Get creativeType
     * @return creativeType
     **/
    @Nullable
    @Schema(name = "creative_type", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CREATIVE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CreativeType getCreativeType() {
        return creativeType;
    }

    @JsonProperty(JSON_PROPERTY_CREATIVE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCreativeType(CreativeType creativeType) {
        this.creativeType = creativeType;
    }

    public AdUpdateRequest destinationUrl(String destinationUrl) {
        this.destinationUrl = destinationUrl;
        return this;
    }

    /**
     * Destination URL.
     * @return destinationUrl
     **/
    @Nullable
    @Schema(name = "destination_url", description = "Destination URL.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest iosDeepLink(String iosDeepLink) {
        this.iosDeepLink = iosDeepLink;
        return this;
    }

    /**
     * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
     * @return iosDeepLink
     **/
    @Nullable
    @Schema(name = "ios_deep_link", description = "Deep link URL for iOS devices. Not currently available. Using this field will generate an error.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest isPinDeleted(Boolean isPinDeleted) {
        this.isPinDeleted = isPinDeleted;
        return this;
    }

    /**
     * Is original pin deleted?
     * @return isPinDeleted
     **/
    @Nullable
    @Schema(name = "is_pin_deleted", example = "false", description = "Is original pin deleted?", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest isRemovable(Boolean isRemovable) {
        this.isRemovable = isRemovable;
        return this;
    }

    /**
     * Is pin repinnable?
     * @return isRemovable
     **/
    @Nullable
    @Schema(name = "is_removable", example = "false", description = "Is pin repinnable?", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Name of the ad - 255 chars max.
     * @return name
     **/
    @Nullable
    @Schema(name = "name", description = "Name of the ad - 255 chars max.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest status(EntityStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Nullable
    @Schema(name = "status", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest trackingUrls(AdCommonTrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
        return this;
    }

    /**
     * Get trackingUrls
     * @return trackingUrls
     **/
    @Valid
    @Nullable
    @Schema(name = "tracking_urls", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public AdCommonTrackingUrls getTrackingUrls() {
        return trackingUrls;
    }

    @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setTrackingUrls(AdCommonTrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
    }

    public AdUpdateRequest viewTrackingUrl(String viewTrackingUrl) {
        this.viewTrackingUrl = viewTrackingUrl;
        return this;
    }

    /**
     * Tracking URL for ad impressions.
     * @return viewTrackingUrl
     **/
    @Nullable
    @Schema(name = "view_tracking_url", description = "Tracking URL for ad impressions.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdUpdateRequest leadFormId(String leadFormId) {
        this.leadFormId = leadFormId;
        return this;
    }

    /**
     * Lead form ID for lead ad generation.
     * @return leadFormId
     **/
    @Nullable
    @Pattern(regexp="^(AG)?\\d+$")
    @Schema(name = "lead_form_id", description = "Lead form ID for lead ad generation.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_LEAD_FORM_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getLeadFormId() {
        return leadFormId;
    }

    @JsonProperty(JSON_PROPERTY_LEAD_FORM_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLeadFormId(String leadFormId) {
        this.leadFormId = leadFormId;
    }

    public AdUpdateRequest gridClickType(GridClickType gridClickType) {
        this.gridClickType = gridClickType;
        return this;
    }

    /**
     * Get gridClickType
     * @return gridClickType
     **/
    @Nullable
    @Schema(name = "grid_click_type", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_GRID_CLICK_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public GridClickType getGridClickType() {
        return gridClickType;
    }

    @JsonProperty(JSON_PROPERTY_GRID_CLICK_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setGridClickType(GridClickType gridClickType) {
        this.gridClickType = gridClickType;
    }

    public AdUpdateRequest customizableCtaType(CustomizableCtaTypeEnum customizableCtaType) {
        this.customizableCtaType = customizableCtaType;
        return this;
    }

    /**
     * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
     * @return customizableCtaType
     **/
    @Nullable
    @Schema(name = "customizable_cta_type", example = "LEARN_MORE", description = "Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CUSTOMIZABLE_CTA_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CustomizableCtaTypeEnum getCustomizableCtaType() {
        return customizableCtaType;
    }

    @JsonProperty(JSON_PROPERTY_CUSTOMIZABLE_CTA_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCustomizableCtaType(CustomizableCtaTypeEnum customizableCtaType) {
        this.customizableCtaType = customizableCtaType;
    }

    public AdUpdateRequest quizPinData(AdCommonQuizPinData quizPinData) {
        this.quizPinData = quizPinData;
        return this;
    }

    /**
     * Get quizPinData
     * @return quizPinData
     **/
    @Valid
    @Nullable
    @Schema(name = "quiz_pin_data", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_QUIZ_PIN_DATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public AdCommonQuizPinData getQuizPinData() {
        return quizPinData;
    }

    @JsonProperty(JSON_PROPERTY_QUIZ_PIN_DATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setQuizPinData(AdCommonQuizPinData quizPinData) {
        this.quizPinData = quizPinData;
    }

    public AdUpdateRequest id(String id) {
        this.id = id;
        return this;
    }

    /**
     * The ID of this ad.
     * @return id
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @Schema(name = "id", example = "687195134316", description = "The ID of this ad.", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getId() {
        return id;
    }

    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setId(String id) {
        this.id = id;
    }

    public AdUpdateRequest pinId(String pinId) {
        this.pinId = pinId;
        return this;
    }

    /**
     * Pin ID. This field may only be updated for draft ads.
     * @return pinId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @Schema(name = "pin_id", example = "394205773611545468", description = "Pin ID. This field may only be updated for draft ads.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AdUpdateRequest adUpdateRequest = (AdUpdateRequest) o;
        return Objects.equals(this.adGroupId, adUpdateRequest.adGroupId) &&
            Objects.equals(this.androidDeepLink, adUpdateRequest.androidDeepLink) &&
            Objects.equals(this.carouselAndroidDeepLinks, adUpdateRequest.carouselAndroidDeepLinks) &&
            Objects.equals(this.carouselDestinationUrls, adUpdateRequest.carouselDestinationUrls) &&
            Objects.equals(this.carouselIosDeepLinks, adUpdateRequest.carouselIosDeepLinks) &&
            Objects.equals(this.clickTrackingUrl, adUpdateRequest.clickTrackingUrl) &&
            Objects.equals(this.creativeType, adUpdateRequest.creativeType) &&
            Objects.equals(this.destinationUrl, adUpdateRequest.destinationUrl) &&
            Objects.equals(this.iosDeepLink, adUpdateRequest.iosDeepLink) &&
            Objects.equals(this.isPinDeleted, adUpdateRequest.isPinDeleted) &&
            Objects.equals(this.isRemovable, adUpdateRequest.isRemovable) &&
            Objects.equals(this.name, adUpdateRequest.name) &&
            Objects.equals(this.status, adUpdateRequest.status) &&
            Objects.equals(this.trackingUrls, adUpdateRequest.trackingUrls) &&
            Objects.equals(this.viewTrackingUrl, adUpdateRequest.viewTrackingUrl) &&
            Objects.equals(this.leadFormId, adUpdateRequest.leadFormId) &&
            Objects.equals(this.gridClickType, adUpdateRequest.gridClickType) &&
            Objects.equals(this.customizableCtaType, adUpdateRequest.customizableCtaType) &&
            Objects.equals(this.quizPinData, adUpdateRequest.quizPinData) &&
            Objects.equals(this.id, adUpdateRequest.id) &&
            Objects.equals(this.pinId, adUpdateRequest.pinId);
    }

    @Override
    public int hashCode() {
        return Objects.hash(adGroupId, androidDeepLink, carouselAndroidDeepLinks, carouselDestinationUrls, carouselIosDeepLinks, clickTrackingUrl, creativeType, destinationUrl, iosDeepLink, isPinDeleted, isRemovable, name, status, trackingUrls, viewTrackingUrl, leadFormId, gridClickType, customizableCtaType, quizPinData, id, pinId);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AdUpdateRequest {\n");
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
        sb.append("    id: ").append(toIndentedString(id)).append("\n");
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

