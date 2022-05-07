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
import com.cliffano.pinterestsdk.model.ActionType;
import com.cliffano.pinterestsdk.model.AdGroupResponseAllOf;
import com.cliffano.pinterestsdk.model.AdGroupResponseAllOf1;
import com.cliffano.pinterestsdk.model.AdGroupSummaryStatus;
import com.cliffano.pinterestsdk.model.EntityStatus;
import com.cliffano.pinterestsdk.model.PacingDeliveryType;
import com.cliffano.pinterestsdk.model.PlacementGroupType;
import com.cliffano.pinterestsdk.model.TrackingUrls;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.jackson.nullable.JsonNullable;

/**
 * AdGroupResponse
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-05-07T06:37:33.786272Z[Etc/UTC]")
public class AdGroupResponse {
  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private EntityStatus status;

  public static final String SERIALIZED_NAME_BUDGET_IN_MICRO_CURRENCY = "budget_in_micro_currency";
  @SerializedName(SERIALIZED_NAME_BUDGET_IN_MICRO_CURRENCY)
  private Integer budgetInMicroCurrency;

  public static final String SERIALIZED_NAME_BID_IN_MICRO_CURRENCY = "bid_in_micro_currency";
  @SerializedName(SERIALIZED_NAME_BID_IN_MICRO_CURRENCY)
  private Integer bidInMicroCurrency;

  /**
   * Budget type. If DAILY, an ad group&#39;s daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group &#x60;start_time&#x60; and &#x60;end_time&#x60; range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
   */
  @JsonAdapter(BudgetTypeEnum.Adapter.class)
  public enum BudgetTypeEnum {
    DAILY("DAILY"),
    
    LIFETIME("LIFETIME"),
    
    CBO_ADGROUP("CBO_ADGROUP");

    private String value;

    BudgetTypeEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static BudgetTypeEnum fromValue(String value) {
      for (BudgetTypeEnum b : BudgetTypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<BudgetTypeEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final BudgetTypeEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public BudgetTypeEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return BudgetTypeEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_BUDGET_TYPE = "budget_type";
  @SerializedName(SERIALIZED_NAME_BUDGET_TYPE)
  private BudgetTypeEnum budgetType;

  public static final String SERIALIZED_NAME_START_TIME = "start_time";
  @SerializedName(SERIALIZED_NAME_START_TIME)
  private Integer startTime;

  public static final String SERIALIZED_NAME_END_TIME = "end_time";
  @SerializedName(SERIALIZED_NAME_END_TIME)
  private Integer endTime;

  public static final String SERIALIZED_NAME_TARGETING_SPEC = "targeting_spec";
  @SerializedName(SERIALIZED_NAME_TARGETING_SPEC)
  private Map<String, List<String>> targetingSpec = null;

  public static final String SERIALIZED_NAME_LIFETIME_FREQUENCY_CAP = "lifetime_frequency_cap";
  @SerializedName(SERIALIZED_NAME_LIFETIME_FREQUENCY_CAP)
  private Integer lifetimeFrequencyCap;

  public static final String SERIALIZED_NAME_TRACKING_URLS = "tracking_urls";
  @SerializedName(SERIALIZED_NAME_TRACKING_URLS)
  private TrackingUrls trackingUrls;

  public static final String SERIALIZED_NAME_AUTO_TARGETING_ENABLED = "auto_targeting_enabled";
  @SerializedName(SERIALIZED_NAME_AUTO_TARGETING_ENABLED)
  private Boolean autoTargetingEnabled;

  public static final String SERIALIZED_NAME_PLACEMENT_GROUP = "placement_group";
  @SerializedName(SERIALIZED_NAME_PLACEMENT_GROUP)
  private PlacementGroupType placementGroup;

  public static final String SERIALIZED_NAME_PACING_DELIVERY_TYPE = "pacing_delivery_type";
  @SerializedName(SERIALIZED_NAME_PACING_DELIVERY_TYPE)
  private PacingDeliveryType pacingDeliveryType;

  /**
   * oCPM learn mode
   */
  @JsonAdapter(ConversionLearningModeTypeEnum.Adapter.class)
  public enum ConversionLearningModeTypeEnum {
    NOT_ACTIVE("NOT_ACTIVE"),
    
    ACTIVE("ACTIVE"),
    
    NULL("null");

    private String value;

    ConversionLearningModeTypeEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static ConversionLearningModeTypeEnum fromValue(String value) {
      for (ConversionLearningModeTypeEnum b : ConversionLearningModeTypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      return null;
    }

    public static class Adapter extends TypeAdapter<ConversionLearningModeTypeEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final ConversionLearningModeTypeEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public ConversionLearningModeTypeEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return ConversionLearningModeTypeEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_CONVERSION_LEARNING_MODE_TYPE = "conversion_learning_mode_type";
  @SerializedName(SERIALIZED_NAME_CONVERSION_LEARNING_MODE_TYPE)
  private ConversionLearningModeTypeEnum conversionLearningModeType;

  public static final String SERIALIZED_NAME_SUMMARY_STATUS = "summary_status";
  @SerializedName(SERIALIZED_NAME_SUMMARY_STATUS)
  private AdGroupSummaryStatus summaryStatus;

  public static final String SERIALIZED_NAME_FEED_PROFILE_ID = "feed_profile_id";
  @SerializedName(SERIALIZED_NAME_FEED_PROFILE_ID)
  private String feedProfileId;

  public static final String SERIALIZED_NAME_CAMPAIGN_ID = "campaign_id";
  @SerializedName(SERIALIZED_NAME_CAMPAIGN_ID)
  private String campaignId;

  public static final String SERIALIZED_NAME_BILLABLE_EVENT = "billable_event";
  @SerializedName(SERIALIZED_NAME_BILLABLE_EVENT)
  private ActionType billableEvent;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_AD_ACCOUNT_ID = "ad_account_id";
  @SerializedName(SERIALIZED_NAME_AD_ACCOUNT_ID)
  private String adAccountId;

  public static final String SERIALIZED_NAME_CREATED_TIME = "created_time";
  @SerializedName(SERIALIZED_NAME_CREATED_TIME)
  private Integer createdTime;

  public static final String SERIALIZED_NAME_UPDATED_TIME = "updated_time";
  @SerializedName(SERIALIZED_NAME_UPDATED_TIME)
  private Integer updatedTime;

  public AdGroupResponse() { 
  }

  public AdGroupResponse name(String name) {
    
    this.name = name;
    return this;
  }

   /**
   * Ad group name.
   * @return name
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "Ad Group For Pin: 687195905986", value = "Ad group name.")

  public String getName() {
    return name;
  }


  public void setName(String name) {
    this.name = name;
  }


  public AdGroupResponse status(EntityStatus status) {
    
    this.status = status;
    return this;
  }

   /**
   * Ad group/entity status.
   * @return status
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Ad group/entity status.")

  public EntityStatus getStatus() {
    return status;
  }


  public void setStatus(EntityStatus status) {
    this.status = status;
  }


  public AdGroupResponse budgetInMicroCurrency(Integer budgetInMicroCurrency) {
    
    this.budgetInMicroCurrency = budgetInMicroCurrency;
    return this;
  }

   /**
   * Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
   * @return budgetInMicroCurrency
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "5000000", value = "Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.")

  public Integer getBudgetInMicroCurrency() {
    return budgetInMicroCurrency;
  }


  public void setBudgetInMicroCurrency(Integer budgetInMicroCurrency) {
    this.budgetInMicroCurrency = budgetInMicroCurrency;
  }


  public AdGroupResponse bidInMicroCurrency(Integer bidInMicroCurrency) {
    
    this.bidInMicroCurrency = bidInMicroCurrency;
    return this;
  }

   /**
   * Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
   * @return bidInMicroCurrency
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "5000000", value = "Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.")

  public Integer getBidInMicroCurrency() {
    return bidInMicroCurrency;
  }


  public void setBidInMicroCurrency(Integer bidInMicroCurrency) {
    this.bidInMicroCurrency = bidInMicroCurrency;
  }


  public AdGroupResponse budgetType(BudgetTypeEnum budgetType) {
    
    this.budgetType = budgetType;
    return this;
  }

   /**
   * Budget type. If DAILY, an ad group&#39;s daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group &#x60;start_time&#x60; and &#x60;end_time&#x60; range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
   * @return budgetType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.")

  public BudgetTypeEnum getBudgetType() {
    return budgetType;
  }


  public void setBudgetType(BudgetTypeEnum budgetType) {
    this.budgetType = budgetType;
  }


  public AdGroupResponse startTime(Integer startTime) {
    
    this.startTime = startTime;
    return this;
  }

   /**
   * Ad group start time. Unix timestamp in seconds. Defaults to current time.
   * @return startTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "5686848000", value = "Ad group start time. Unix timestamp in seconds. Defaults to current time.")

  public Integer getStartTime() {
    return startTime;
  }


  public void setStartTime(Integer startTime) {
    this.startTime = startTime;
  }


  public AdGroupResponse endTime(Integer endTime) {
    
    this.endTime = endTime;
    return this;
  }

   /**
   * Ad group end time. Unix timestamp in seconds.
   * @return endTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "5705424000", value = "Ad group end time. Unix timestamp in seconds.")

  public Integer getEndTime() {
    return endTime;
  }


  public void setEndTime(Integer endTime) {
    this.endTime = endTime;
  }


  public AdGroupResponse targetingSpec(Map<String, List<String>> targetingSpec) {
    
    this.targetingSpec = targetingSpec;
    return this;
  }

  public AdGroupResponse putTargetingSpecItem(String key, List<String> targetingSpecItem) {
    if (this.targetingSpec == null) {
      this.targetingSpec = new HashMap<String, List<String>>();
    }
    this.targetingSpec.put(key, targetingSpecItem);
    return this;
  }

   /**
   * Ad group targeting specification defining the ad group target audience. For example, &#39;{\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}&#39;
   * @return targetingSpec
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}'")

  public Map<String, List<String>> getTargetingSpec() {
    return targetingSpec;
  }


  public void setTargetingSpec(Map<String, List<String>> targetingSpec) {
    this.targetingSpec = targetingSpec;
  }


  public AdGroupResponse lifetimeFrequencyCap(Integer lifetimeFrequencyCap) {
    
    this.lifetimeFrequencyCap = lifetimeFrequencyCap;
    return this;
  }

   /**
   * Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\\\&quot;/docs/redoc/#section/Billable-event\\\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.
   * @return lifetimeFrequencyCap
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "100", value = "Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field.")

  public Integer getLifetimeFrequencyCap() {
    return lifetimeFrequencyCap;
  }


  public void setLifetimeFrequencyCap(Integer lifetimeFrequencyCap) {
    this.lifetimeFrequencyCap = lifetimeFrequencyCap;
  }


  public AdGroupResponse trackingUrls(TrackingUrls trackingUrls) {
    
    this.trackingUrls = trackingUrls;
    return this;
  }

  public AdGroupResponse putTrackingUrlsItem(String key,  trackingUrlsItem) {
    if (this.trackingUrls == null) {
      this.trackingUrls = ;
    }
    this.trackingUrls.put(key, trackingUrlsItem);
    return this;
  }

   /**
   * Third-party tracking URLs.&lt;br&gt; JSON object with the format: {\&quot;&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\&quot;&gt;Tracking event enum&lt;/a&gt;\&quot;:[URL string array],...}&lt;br&gt; For example: {\&quot;impression\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;], \&quot;click\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;, \&quot;URL3\&quot;]}.&lt;br&gt;Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.&lt;br&gt;&lt;br&gt; For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
   * @return trackingUrls
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.")

  public TrackingUrls getTrackingUrls() {
    return trackingUrls;
  }


  public void setTrackingUrls(TrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }


  public AdGroupResponse autoTargetingEnabled(Boolean autoTargetingEnabled) {
    
    this.autoTargetingEnabled = autoTargetingEnabled;
    return this;
  }

   /**
   * Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.
   * @return autoTargetingEnabled
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "true", value = "Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.")

  public Boolean getAutoTargetingEnabled() {
    return autoTargetingEnabled;
  }


  public void setAutoTargetingEnabled(Boolean autoTargetingEnabled) {
    this.autoTargetingEnabled = autoTargetingEnabled;
  }


  public AdGroupResponse placementGroup(PlacementGroupType placementGroup) {
    
    this.placementGroup = placementGroup;
    return this;
  }

   /**
   * &lt;a href&#x3D;\\\&quot;/docs/redoc/#section/Placement-group\\\&quot;&gt;Placement group&lt;/a&gt;.
   * @return placementGroup
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "<a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>.")

  public PlacementGroupType getPlacementGroup() {
    return placementGroup;
  }


  public void setPlacementGroup(PlacementGroupType placementGroup) {
    this.placementGroup = placementGroup;
  }


  public AdGroupResponse pacingDeliveryType(PacingDeliveryType pacingDeliveryType) {
    
    this.pacingDeliveryType = pacingDeliveryType;
    return this;
  }

   /**
   * Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.
   * @return pacingDeliveryType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.")

  public PacingDeliveryType getPacingDeliveryType() {
    return pacingDeliveryType;
  }


  public void setPacingDeliveryType(PacingDeliveryType pacingDeliveryType) {
    this.pacingDeliveryType = pacingDeliveryType;
  }


  public AdGroupResponse conversionLearningModeType(ConversionLearningModeTypeEnum conversionLearningModeType) {
    
    this.conversionLearningModeType = conversionLearningModeType;
    return this;
  }

   /**
   * oCPM learn mode
   * @return conversionLearningModeType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "ACTIVE", value = "oCPM learn mode")

  public ConversionLearningModeTypeEnum getConversionLearningModeType() {
    return conversionLearningModeType;
  }


  public void setConversionLearningModeType(ConversionLearningModeTypeEnum conversionLearningModeType) {
    this.conversionLearningModeType = conversionLearningModeType;
  }


  public AdGroupResponse summaryStatus(AdGroupSummaryStatus summaryStatus) {
    
    this.summaryStatus = summaryStatus;
    return this;
  }

   /**
   * Ad group summary status.
   * @return summaryStatus
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Ad group summary status.")

  public AdGroupSummaryStatus getSummaryStatus() {
    return summaryStatus;
  }


  public void setSummaryStatus(AdGroupSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
  }


  public AdGroupResponse feedProfileId(String feedProfileId) {
    
    this.feedProfileId = feedProfileId;
    return this;
  }

   /**
   * Feed Profile ID associated to the adgroup.
   * @return feedProfileId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "626736533506", value = "Feed Profile ID associated to the adgroup.")

  public String getFeedProfileId() {
    return feedProfileId;
  }


  public void setFeedProfileId(String feedProfileId) {
    this.feedProfileId = feedProfileId;
  }


  public AdGroupResponse campaignId(String campaignId) {
    
    this.campaignId = campaignId;
    return this;
  }

   /**
   * Campaign ID of the ad group.
   * @return campaignId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "626736533506", value = "Campaign ID of the ad group.")

  public String getCampaignId() {
    return campaignId;
  }


  public void setCampaignId(String campaignId) {
    this.campaignId = campaignId;
  }


  public AdGroupResponse billableEvent(ActionType billableEvent) {
    
    this.billableEvent = billableEvent;
    return this;
  }

   /**
   * Get billableEvent
   * @return billableEvent
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ActionType getBillableEvent() {
    return billableEvent;
  }


  public void setBillableEvent(ActionType billableEvent) {
    this.billableEvent = billableEvent;
  }


  public AdGroupResponse id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Ad group ID.
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "2680060704746", value = "Ad group ID.")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public AdGroupResponse type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * Always \&quot;adgroup\&quot;.
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Always \"adgroup\".")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public AdGroupResponse adAccountId(String adAccountId) {
    
    this.adAccountId = adAccountId;
    return this;
  }

   /**
   * Advertiser ID.
   * @return adAccountId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "549755885175", value = "Advertiser ID.")

  public String getAdAccountId() {
    return adAccountId;
  }


  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }


  public AdGroupResponse createdTime(Integer createdTime) {
    
    this.createdTime = createdTime;
    return this;
  }

   /**
   * Ad group creation time. Unix timestamp in seconds.
   * @return createdTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "1476477189", value = "Ad group creation time. Unix timestamp in seconds.")

  public Integer getCreatedTime() {
    return createdTime;
  }


  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }


  public AdGroupResponse updatedTime(Integer updatedTime) {
    
    this.updatedTime = updatedTime;
    return this;
  }

   /**
   * Ad group last update time. Unix timestamp in seconds.
   * @return updatedTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "1476477189", value = "Ad group last update time. Unix timestamp in seconds.")

  public Integer getUpdatedTime() {
    return updatedTime;
  }


  public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdGroupResponse adGroupResponse = (AdGroupResponse) o;
    return Objects.equals(this.name, adGroupResponse.name) &&
        Objects.equals(this.status, adGroupResponse.status) &&
        Objects.equals(this.budgetInMicroCurrency, adGroupResponse.budgetInMicroCurrency) &&
        Objects.equals(this.bidInMicroCurrency, adGroupResponse.bidInMicroCurrency) &&
        Objects.equals(this.budgetType, adGroupResponse.budgetType) &&
        Objects.equals(this.startTime, adGroupResponse.startTime) &&
        Objects.equals(this.endTime, adGroupResponse.endTime) &&
        Objects.equals(this.targetingSpec, adGroupResponse.targetingSpec) &&
        Objects.equals(this.lifetimeFrequencyCap, adGroupResponse.lifetimeFrequencyCap) &&
        Objects.equals(this.trackingUrls, adGroupResponse.trackingUrls) &&
        Objects.equals(this.autoTargetingEnabled, adGroupResponse.autoTargetingEnabled) &&
        Objects.equals(this.placementGroup, adGroupResponse.placementGroup) &&
        Objects.equals(this.pacingDeliveryType, adGroupResponse.pacingDeliveryType) &&
        Objects.equals(this.conversionLearningModeType, adGroupResponse.conversionLearningModeType) &&
        Objects.equals(this.summaryStatus, adGroupResponse.summaryStatus) &&
        Objects.equals(this.feedProfileId, adGroupResponse.feedProfileId) &&
        Objects.equals(this.campaignId, adGroupResponse.campaignId) &&
        Objects.equals(this.billableEvent, adGroupResponse.billableEvent) &&
        Objects.equals(this.id, adGroupResponse.id) &&
        Objects.equals(this.type, adGroupResponse.type) &&
        Objects.equals(this.adAccountId, adGroupResponse.adAccountId) &&
        Objects.equals(this.createdTime, adGroupResponse.createdTime) &&
        Objects.equals(this.updatedTime, adGroupResponse.updatedTime);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, status, budgetInMicroCurrency, bidInMicroCurrency, budgetType, startTime, endTime, targetingSpec, lifetimeFrequencyCap, trackingUrls, autoTargetingEnabled, placementGroup, pacingDeliveryType, conversionLearningModeType, summaryStatus, feedProfileId, campaignId, billableEvent, id, type, adAccountId, createdTime, updatedTime);
  }

  private static <T> int hashCodeNullable(JsonNullable<T> a) {
    if (a == null) {
      return 1;
    }
    return a.isPresent() ? Arrays.deepHashCode(new Object[]{a.get()}) : 31;
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupResponse {\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    budgetInMicroCurrency: ").append(toIndentedString(budgetInMicroCurrency)).append("\n");
    sb.append("    bidInMicroCurrency: ").append(toIndentedString(bidInMicroCurrency)).append("\n");
    sb.append("    budgetType: ").append(toIndentedString(budgetType)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    targetingSpec: ").append(toIndentedString(targetingSpec)).append("\n");
    sb.append("    lifetimeFrequencyCap: ").append(toIndentedString(lifetimeFrequencyCap)).append("\n");
    sb.append("    trackingUrls: ").append(toIndentedString(trackingUrls)).append("\n");
    sb.append("    autoTargetingEnabled: ").append(toIndentedString(autoTargetingEnabled)).append("\n");
    sb.append("    placementGroup: ").append(toIndentedString(placementGroup)).append("\n");
    sb.append("    pacingDeliveryType: ").append(toIndentedString(pacingDeliveryType)).append("\n");
    sb.append("    conversionLearningModeType: ").append(toIndentedString(conversionLearningModeType)).append("\n");
    sb.append("    summaryStatus: ").append(toIndentedString(summaryStatus)).append("\n");
    sb.append("    feedProfileId: ").append(toIndentedString(feedProfileId)).append("\n");
    sb.append("    campaignId: ").append(toIndentedString(campaignId)).append("\n");
    sb.append("    billableEvent: ").append(toIndentedString(billableEvent)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
    sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
    sb.append("    updatedTime: ").append(toIndentedString(updatedTime)).append("\n");
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

