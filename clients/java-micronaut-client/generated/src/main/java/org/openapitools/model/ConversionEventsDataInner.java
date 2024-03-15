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
import com.fasterxml.jackson.annotation.JsonTypeName;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.ConversionEventsDataInnerCustomData;
import org.openapitools.model.ConversionEventsUserData;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * ConversionEventsDataInner
 */
@JsonPropertyOrder({
  ConversionEventsDataInner.JSON_PROPERTY_EVENT_NAME,
  ConversionEventsDataInner.JSON_PROPERTY_ACTION_SOURCE,
  ConversionEventsDataInner.JSON_PROPERTY_EVENT_TIME,
  ConversionEventsDataInner.JSON_PROPERTY_EVENT_ID,
  ConversionEventsDataInner.JSON_PROPERTY_EVENT_SOURCE_URL,
  ConversionEventsDataInner.JSON_PROPERTY_OPT_OUT,
  ConversionEventsDataInner.JSON_PROPERTY_PARTNER_NAME,
  ConversionEventsDataInner.JSON_PROPERTY_USER_DATA,
  ConversionEventsDataInner.JSON_PROPERTY_CUSTOM_DATA,
  ConversionEventsDataInner.JSON_PROPERTY_APP_ID,
  ConversionEventsDataInner.JSON_PROPERTY_APP_NAME,
  ConversionEventsDataInner.JSON_PROPERTY_APP_VERSION,
  ConversionEventsDataInner.JSON_PROPERTY_DEVICE_BRAND,
  ConversionEventsDataInner.JSON_PROPERTY_DEVICE_CARRIER,
  ConversionEventsDataInner.JSON_PROPERTY_DEVICE_MODEL,
  ConversionEventsDataInner.JSON_PROPERTY_DEVICE_TYPE,
  ConversionEventsDataInner.JSON_PROPERTY_OS_VERSION,
  ConversionEventsDataInner.JSON_PROPERTY_WIFI,
  ConversionEventsDataInner.JSON_PROPERTY_LANGUAGE
})
@JsonTypeName("ConversionEvents_data_inner")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class ConversionEventsDataInner {
    public static final String JSON_PROPERTY_EVENT_NAME = "event_name";
    private String eventName;

    public static final String JSON_PROPERTY_ACTION_SOURCE = "action_source";
    private String actionSource;

    public static final String JSON_PROPERTY_EVENT_TIME = "event_time";
    private Long eventTime;

    public static final String JSON_PROPERTY_EVENT_ID = "event_id";
    private String eventId;

    public static final String JSON_PROPERTY_EVENT_SOURCE_URL = "event_source_url";
    private String eventSourceUrl;

    public static final String JSON_PROPERTY_OPT_OUT = "opt_out";
    private Boolean optOut;

    public static final String JSON_PROPERTY_PARTNER_NAME = "partner_name";
    private String partnerName;

    public static final String JSON_PROPERTY_USER_DATA = "user_data";
    private ConversionEventsUserData userData;

    public static final String JSON_PROPERTY_CUSTOM_DATA = "custom_data";
    private ConversionEventsDataInnerCustomData customData;

    public static final String JSON_PROPERTY_APP_ID = "app_id";
    private String appId;

    public static final String JSON_PROPERTY_APP_NAME = "app_name";
    private String appName;

    public static final String JSON_PROPERTY_APP_VERSION = "app_version";
    private String appVersion;

    public static final String JSON_PROPERTY_DEVICE_BRAND = "device_brand";
    private String deviceBrand;

    public static final String JSON_PROPERTY_DEVICE_CARRIER = "device_carrier";
    private String deviceCarrier;

    public static final String JSON_PROPERTY_DEVICE_MODEL = "device_model";
    private String deviceModel;

    public static final String JSON_PROPERTY_DEVICE_TYPE = "device_type";
    private String deviceType;

    public static final String JSON_PROPERTY_OS_VERSION = "os_version";
    private String osVersion;

    public static final String JSON_PROPERTY_WIFI = "wifi";
    private Boolean wifi;

    public static final String JSON_PROPERTY_LANGUAGE = "language";
    private String language;

    public ConversionEventsDataInner(String eventName, String actionSource, Long eventTime, String eventId, ConversionEventsUserData userData) {
        this.eventName = eventName;
        this.actionSource = actionSource;
        this.eventTime = eventTime;
        this.eventId = eventId;
        this.userData = userData;
    }

    public ConversionEventsDataInner eventName(String eventName) {
        this.eventName = eventName;
        return this;
    }

    /**
     * The type of the user event. Please use the right event_name otherwise the event won’t be accepted and show up correctly in reports. &lt;li&gt;&lt;code&gt;add_to_cart&lt;/code&gt; &lt;li&gt;&lt;code&gt;checkout&lt;/code&gt; &lt;li&gt;&lt;code&gt;custom&lt;/code&gt; &lt;li&gt;&lt;code&gt;lead&lt;/code&gt; &lt;li&gt;&lt;code&gt;page_visit&lt;/code&gt; &lt;li&gt;&lt;code&gt;search&lt;/code&gt; &lt;li&gt;&lt;code&gt;signup&lt;/code&gt; &lt;li&gt;&lt;code&gt;view_category&lt;/code&gt; &lt;li&gt;&lt;code&gt;watch_video&lt;/code&gt;
     * @return eventName
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_EVENT_NAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getEventName() {
        return eventName;
    }

    @JsonProperty(JSON_PROPERTY_EVENT_NAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setEventName(String eventName) {
        this.eventName = eventName;
    }

    public ConversionEventsDataInner actionSource(String actionSource) {
        this.actionSource = actionSource;
        return this;
    }

    /**
     * The source indicating where the conversion event occurred. &lt;li&gt;&lt;code&gt;app_android&lt;/code&gt; &lt;li&gt;&lt;code&gt;app_ios&lt;/code&gt; &lt;li&gt;&lt;code&gt;web&lt;/code&gt; &lt;li&gt;&lt;code&gt;offline&lt;/code&gt;
     * @return actionSource
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_ACTION_SOURCE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getActionSource() {
        return actionSource;
    }

    @JsonProperty(JSON_PROPERTY_ACTION_SOURCE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setActionSource(String actionSource) {
        this.actionSource = actionSource;
    }

    public ConversionEventsDataInner eventTime(Long eventTime) {
        this.eventTime = eventTime;
        return this;
    }

    /**
     * The time when the event happened. Unix timestamp in seconds.
     * @return eventTime
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_EVENT_TIME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Long getEventTime() {
        return eventTime;
    }

    @JsonProperty(JSON_PROPERTY_EVENT_TIME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setEventTime(Long eventTime) {
        this.eventTime = eventTime;
    }

    public ConversionEventsDataInner eventId(String eventId) {
        this.eventId = eventId;
        return this;
    }

    /**
     * A unique id string that identifies this event and can be used for deduping between events ingested via both the conversion API and Pinterest tracking. Without this, event&#39;s data is likely to be double counted and will cause report metric inflation. Third-party vendors make sure this field is updated on both Pinterest tag and Conversions API side before rolling out template for Conversions API.
     * @return eventId
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_EVENT_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getEventId() {
        return eventId;
    }

    @JsonProperty(JSON_PROPERTY_EVENT_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setEventId(String eventId) {
        this.eventId = eventId;
    }

    public ConversionEventsDataInner eventSourceUrl(String eventSourceUrl) {
        this.eventSourceUrl = eventSourceUrl;
        return this;
    }

    /**
     * URL of the web conversion event.
     * @return eventSourceUrl
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_EVENT_SOURCE_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getEventSourceUrl() {
        return eventSourceUrl;
    }

    @JsonProperty(JSON_PROPERTY_EVENT_SOURCE_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setEventSourceUrl(String eventSourceUrl) {
        this.eventSourceUrl = eventSourceUrl;
    }

    public ConversionEventsDataInner optOut(Boolean optOut) {
        this.optOut = optOut;
        return this;
    }

    /**
     * When action_source is web or offline, it defines whether the user has opted out of tracking for web conversion events. While when action_source is app_android or app_ios, it defines whether the user has enabled Limit Ad Tracking on their iOS device, or opted out of Ads Personalization on their Android device.
     * @return optOut
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_OPT_OUT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getOptOut() {
        return optOut;
    }

    @JsonProperty(JSON_PROPERTY_OPT_OUT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setOptOut(Boolean optOut) {
        this.optOut = optOut;
    }

    public ConversionEventsDataInner partnerName(String partnerName) {
        this.partnerName = partnerName;
        return this;
    }

    /**
     * The third party partner name responsible to send the event to Conversions API on behalf of the advertiser. The naming convention is \&quot;ss-partnername\&quot; lowercase. E.g ‘ss-shopify’
     * @return partnerName
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_PARTNER_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getPartnerName() {
        return partnerName;
    }

    @JsonProperty(JSON_PROPERTY_PARTNER_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPartnerName(String partnerName) {
        this.partnerName = partnerName;
    }

    public ConversionEventsDataInner userData(ConversionEventsUserData userData) {
        this.userData = userData;
        return this;
    }

    /**
     * Get userData
     * @return userData
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_USER_DATA)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public ConversionEventsUserData getUserData() {
        return userData;
    }

    @JsonProperty(JSON_PROPERTY_USER_DATA)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setUserData(ConversionEventsUserData userData) {
        this.userData = userData;
    }

    public ConversionEventsDataInner customData(ConversionEventsDataInnerCustomData customData) {
        this.customData = customData;
        return this;
    }

    /**
     * Get customData
     * @return customData
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_CUSTOM_DATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ConversionEventsDataInnerCustomData getCustomData() {
        return customData;
    }

    @JsonProperty(JSON_PROPERTY_CUSTOM_DATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCustomData(ConversionEventsDataInnerCustomData customData) {
        this.customData = customData;
    }

    public ConversionEventsDataInner appId(String appId) {
        this.appId = appId;
        return this;
    }

    /**
     * The app store app ID.
     * @return appId
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_APP_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getAppId() {
        return appId;
    }

    @JsonProperty(JSON_PROPERTY_APP_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAppId(String appId) {
        this.appId = appId;
    }

    public ConversionEventsDataInner appName(String appName) {
        this.appName = appName;
        return this;
    }

    /**
     * Name of the app.
     * @return appName
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_APP_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getAppName() {
        return appName;
    }

    @JsonProperty(JSON_PROPERTY_APP_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAppName(String appName) {
        this.appName = appName;
    }

    public ConversionEventsDataInner appVersion(String appVersion) {
        this.appVersion = appVersion;
        return this;
    }

    /**
     * Version of the app.
     * @return appVersion
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_APP_VERSION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getAppVersion() {
        return appVersion;
    }

    @JsonProperty(JSON_PROPERTY_APP_VERSION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAppVersion(String appVersion) {
        this.appVersion = appVersion;
    }

    public ConversionEventsDataInner deviceBrand(String deviceBrand) {
        this.deviceBrand = deviceBrand;
        return this;
    }

    /**
     * Brand of the user device.
     * @return deviceBrand
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DEVICE_BRAND)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDeviceBrand() {
        return deviceBrand;
    }

    @JsonProperty(JSON_PROPERTY_DEVICE_BRAND)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDeviceBrand(String deviceBrand) {
        this.deviceBrand = deviceBrand;
    }

    public ConversionEventsDataInner deviceCarrier(String deviceCarrier) {
        this.deviceCarrier = deviceCarrier;
        return this;
    }

    /**
     * User device&#39;s mobile carrier.
     * @return deviceCarrier
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DEVICE_CARRIER)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDeviceCarrier() {
        return deviceCarrier;
    }

    @JsonProperty(JSON_PROPERTY_DEVICE_CARRIER)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDeviceCarrier(String deviceCarrier) {
        this.deviceCarrier = deviceCarrier;
    }

    public ConversionEventsDataInner deviceModel(String deviceModel) {
        this.deviceModel = deviceModel;
        return this;
    }

    /**
     * Model of the user device.
     * @return deviceModel
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DEVICE_MODEL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDeviceModel() {
        return deviceModel;
    }

    @JsonProperty(JSON_PROPERTY_DEVICE_MODEL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDeviceModel(String deviceModel) {
        this.deviceModel = deviceModel;
    }

    public ConversionEventsDataInner deviceType(String deviceType) {
        this.deviceType = deviceType;
        return this;
    }

    /**
     * Type of the user device.
     * @return deviceType
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DEVICE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDeviceType() {
        return deviceType;
    }

    @JsonProperty(JSON_PROPERTY_DEVICE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDeviceType(String deviceType) {
        this.deviceType = deviceType;
    }

    public ConversionEventsDataInner osVersion(String osVersion) {
        this.osVersion = osVersion;
        return this;
    }

    /**
     * Version of the device operating system.
     * @return osVersion
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_OS_VERSION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getOsVersion() {
        return osVersion;
    }

    @JsonProperty(JSON_PROPERTY_OS_VERSION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setOsVersion(String osVersion) {
        this.osVersion = osVersion;
    }

    public ConversionEventsDataInner wifi(Boolean wifi) {
        this.wifi = wifi;
        return this;
    }

    /**
     * Whether the event occurred when the user device was connected to wifi.
     * @return wifi
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_WIFI)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getWifi() {
        return wifi;
    }

    @JsonProperty(JSON_PROPERTY_WIFI)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setWifi(Boolean wifi) {
        this.wifi = wifi;
    }

    public ConversionEventsDataInner language(String language) {
        this.language = language;
        return this;
    }

    /**
     * Two-character ISO-639-1 language code indicating the user&#39;s language.
     * @return language
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_LANGUAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getLanguage() {
        return language;
    }

    @JsonProperty(JSON_PROPERTY_LANGUAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLanguage(String language) {
        this.language = language;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ConversionEventsDataInner conversionEventsDataInner = (ConversionEventsDataInner) o;
        return Objects.equals(this.eventName, conversionEventsDataInner.eventName) &&
            Objects.equals(this.actionSource, conversionEventsDataInner.actionSource) &&
            Objects.equals(this.eventTime, conversionEventsDataInner.eventTime) &&
            Objects.equals(this.eventId, conversionEventsDataInner.eventId) &&
            Objects.equals(this.eventSourceUrl, conversionEventsDataInner.eventSourceUrl) &&
            Objects.equals(this.optOut, conversionEventsDataInner.optOut) &&
            Objects.equals(this.partnerName, conversionEventsDataInner.partnerName) &&
            Objects.equals(this.userData, conversionEventsDataInner.userData) &&
            Objects.equals(this.customData, conversionEventsDataInner.customData) &&
            Objects.equals(this.appId, conversionEventsDataInner.appId) &&
            Objects.equals(this.appName, conversionEventsDataInner.appName) &&
            Objects.equals(this.appVersion, conversionEventsDataInner.appVersion) &&
            Objects.equals(this.deviceBrand, conversionEventsDataInner.deviceBrand) &&
            Objects.equals(this.deviceCarrier, conversionEventsDataInner.deviceCarrier) &&
            Objects.equals(this.deviceModel, conversionEventsDataInner.deviceModel) &&
            Objects.equals(this.deviceType, conversionEventsDataInner.deviceType) &&
            Objects.equals(this.osVersion, conversionEventsDataInner.osVersion) &&
            Objects.equals(this.wifi, conversionEventsDataInner.wifi) &&
            Objects.equals(this.language, conversionEventsDataInner.language);
    }

    @Override
    public int hashCode() {
        return Objects.hash(eventName, actionSource, eventTime, eventId, eventSourceUrl, optOut, partnerName, userData, customData, appId, appName, appVersion, deviceBrand, deviceCarrier, deviceModel, deviceType, osVersion, wifi, language);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ConversionEventsDataInner {\n");
        sb.append("    eventName: ").append(toIndentedString(eventName)).append("\n");
        sb.append("    actionSource: ").append(toIndentedString(actionSource)).append("\n");
        sb.append("    eventTime: ").append(toIndentedString(eventTime)).append("\n");
        sb.append("    eventId: ").append(toIndentedString(eventId)).append("\n");
        sb.append("    eventSourceUrl: ").append(toIndentedString(eventSourceUrl)).append("\n");
        sb.append("    optOut: ").append(toIndentedString(optOut)).append("\n");
        sb.append("    partnerName: ").append(toIndentedString(partnerName)).append("\n");
        sb.append("    userData: ").append(toIndentedString(userData)).append("\n");
        sb.append("    customData: ").append(toIndentedString(customData)).append("\n");
        sb.append("    appId: ").append(toIndentedString(appId)).append("\n");
        sb.append("    appName: ").append(toIndentedString(appName)).append("\n");
        sb.append("    appVersion: ").append(toIndentedString(appVersion)).append("\n");
        sb.append("    deviceBrand: ").append(toIndentedString(deviceBrand)).append("\n");
        sb.append("    deviceCarrier: ").append(toIndentedString(deviceCarrier)).append("\n");
        sb.append("    deviceModel: ").append(toIndentedString(deviceModel)).append("\n");
        sb.append("    deviceType: ").append(toIndentedString(deviceType)).append("\n");
        sb.append("    osVersion: ").append(toIndentedString(osVersion)).append("\n");
        sb.append("    wifi: ").append(toIndentedString(wifi)).append("\n");
        sb.append("    language: ").append(toIndentedString(language)).append("\n");
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

