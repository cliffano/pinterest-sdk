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


package com.github.oapicf.pinterestsdk.model;

import java.util.Objects;
import com.github.oapicf.pinterestsdk.model.AdCommonTrackingUrls;
import com.github.oapicf.pinterestsdk.model.CampaignSummaryStatus;
import com.github.oapicf.pinterestsdk.model.EntityStatus;
import com.github.oapicf.pinterestsdk.model.ObjectiveType;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.Arrays;
import org.openapitools.jackson.nullable.JsonNullable;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.reflect.TypeToken;
import com.google.gson.TypeAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;

import java.lang.reflect.Type;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

import com.github.oapicf.pinterestsdk.JSON;

/**
 * CampaignCreateResponseData
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CampaignCreateResponseData {
  public static final String SERIALIZED_NAME_AD_ACCOUNT_ID = "ad_account_id";
  @SerializedName(SERIALIZED_NAME_AD_ACCOUNT_ID)
  private String adAccountId;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private EntityStatus status;

  public static final String SERIALIZED_NAME_LIFETIME_SPEND_CAP = "lifetime_spend_cap";
  @SerializedName(SERIALIZED_NAME_LIFETIME_SPEND_CAP)
  private Integer lifetimeSpendCap;

  public static final String SERIALIZED_NAME_DAILY_SPEND_CAP = "daily_spend_cap";
  @SerializedName(SERIALIZED_NAME_DAILY_SPEND_CAP)
  private Integer dailySpendCap;

  public static final String SERIALIZED_NAME_ORDER_LINE_ID = "order_line_id";
  @SerializedName(SERIALIZED_NAME_ORDER_LINE_ID)
  private String orderLineId;

  public static final String SERIALIZED_NAME_TRACKING_URLS = "tracking_urls";
  @SerializedName(SERIALIZED_NAME_TRACKING_URLS)
  private AdCommonTrackingUrls trackingUrls;

  public static final String SERIALIZED_NAME_START_TIME = "start_time";
  @SerializedName(SERIALIZED_NAME_START_TIME)
  private Integer startTime;

  public static final String SERIALIZED_NAME_END_TIME = "end_time";
  @SerializedName(SERIALIZED_NAME_END_TIME)
  private Integer endTime;

  public static final String SERIALIZED_NAME_SUMMARY_STATUS = "summary_status";
  @SerializedName(SERIALIZED_NAME_SUMMARY_STATUS)
  private CampaignSummaryStatus summaryStatus;

  public static final String SERIALIZED_NAME_IS_FLEXIBLE_DAILY_BUDGETS = "is_flexible_daily_budgets";
  @SerializedName(SERIALIZED_NAME_IS_FLEXIBLE_DAILY_BUDGETS)
  private Boolean isFlexibleDailyBudgets;

  public static final String SERIALIZED_NAME_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY = "default_ad_group_budget_in_micro_currency";
  @SerializedName(SERIALIZED_NAME_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY)
  private Integer defaultAdGroupBudgetInMicroCurrency;

  public static final String SERIALIZED_NAME_IS_AUTOMATED_CAMPAIGN = "is_automated_campaign";
  @SerializedName(SERIALIZED_NAME_IS_AUTOMATED_CAMPAIGN)
  private Boolean isAutomatedCampaign = false;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_OBJECTIVE_TYPE = "objective_type";
  @SerializedName(SERIALIZED_NAME_OBJECTIVE_TYPE)
  private ObjectiveType objectiveType;

  public static final String SERIALIZED_NAME_CREATED_TIME = "created_time";
  @SerializedName(SERIALIZED_NAME_CREATED_TIME)
  private Integer createdTime;

  public static final String SERIALIZED_NAME_UPDATED_TIME = "updated_time";
  @SerializedName(SERIALIZED_NAME_UPDATED_TIME)
  private Integer updatedTime;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_IS_CAMPAIGN_BUDGET_OPTIMIZATION = "is_campaign_budget_optimization";
  @SerializedName(SERIALIZED_NAME_IS_CAMPAIGN_BUDGET_OPTIMIZATION)
  private Boolean isCampaignBudgetOptimization;

  public CampaignCreateResponseData() {
  }

  public CampaignCreateResponseData adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

   /**
   * Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
   * @return adAccountId
  **/
  @javax.annotation.Nullable
  public String getAdAccountId() {
    return adAccountId;
  }

  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }


  public CampaignCreateResponseData name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Campaign name.
   * @return name
  **/
  @javax.annotation.Nullable
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }


  public CampaignCreateResponseData status(EntityStatus status) {
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @javax.annotation.Nullable
  public EntityStatus getStatus() {
    return status;
  }

  public void setStatus(EntityStatus status) {
    this.status = status;
  }


  public CampaignCreateResponseData lifetimeSpendCap(Integer lifetimeSpendCap) {
    this.lifetimeSpendCap = lifetimeSpendCap;
    return this;
  }

   /**
   * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time.
   * @return lifetimeSpendCap
  **/
  @javax.annotation.Nullable
  public Integer getLifetimeSpendCap() {
    return lifetimeSpendCap;
  }

  public void setLifetimeSpendCap(Integer lifetimeSpendCap) {
    this.lifetimeSpendCap = lifetimeSpendCap;
  }


  public CampaignCreateResponseData dailySpendCap(Integer dailySpendCap) {
    this.dailySpendCap = dailySpendCap;
    return this;
  }

   /**
   * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time.
   * @return dailySpendCap
  **/
  @javax.annotation.Nullable
  public Integer getDailySpendCap() {
    return dailySpendCap;
  }

  public void setDailySpendCap(Integer dailySpendCap) {
    this.dailySpendCap = dailySpendCap;
  }


  public CampaignCreateResponseData orderLineId(String orderLineId) {
    this.orderLineId = orderLineId;
    return this;
  }

   /**
   * Order line ID that appears on the invoice.
   * @return orderLineId
  **/
  @javax.annotation.Nullable
  public String getOrderLineId() {
    return orderLineId;
  }

  public void setOrderLineId(String orderLineId) {
    this.orderLineId = orderLineId;
  }


  public CampaignCreateResponseData trackingUrls(AdCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
    return this;
  }

   /**
   * Get trackingUrls
   * @return trackingUrls
  **/
  @javax.annotation.Nullable
  public AdCommonTrackingUrls getTrackingUrls() {
    return trackingUrls;
  }

  public void setTrackingUrls(AdCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }


  public CampaignCreateResponseData startTime(Integer startTime) {
    this.startTime = startTime;
    return this;
  }

   /**
   * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
   * @return startTime
  **/
  @javax.annotation.Nullable
  public Integer getStartTime() {
    return startTime;
  }

  public void setStartTime(Integer startTime) {
    this.startTime = startTime;
  }


  public CampaignCreateResponseData endTime(Integer endTime) {
    this.endTime = endTime;
    return this;
  }

   /**
   * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
   * @return endTime
  **/
  @javax.annotation.Nullable
  public Integer getEndTime() {
    return endTime;
  }

  public void setEndTime(Integer endTime) {
    this.endTime = endTime;
  }


  public CampaignCreateResponseData summaryStatus(CampaignSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
    return this;
  }

   /**
   * Get summaryStatus
   * @return summaryStatus
  **/
  @javax.annotation.Nullable
  public CampaignSummaryStatus getSummaryStatus() {
    return summaryStatus;
  }

  public void setSummaryStatus(CampaignSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
  }


  public CampaignCreateResponseData isFlexibleDailyBudgets(Boolean isFlexibleDailyBudgets) {
    this.isFlexibleDailyBudgets = isFlexibleDailyBudgets;
    return this;
  }

   /**
   * Determines if a campaign has flexible daily budgets setup.
   * @return isFlexibleDailyBudgets
  **/
  @javax.annotation.Nullable
  public Boolean getIsFlexibleDailyBudgets() {
    return isFlexibleDailyBudgets;
  }

  public void setIsFlexibleDailyBudgets(Boolean isFlexibleDailyBudgets) {
    this.isFlexibleDailyBudgets = isFlexibleDailyBudgets;
  }


  public CampaignCreateResponseData defaultAdGroupBudgetInMicroCurrency(Integer defaultAdGroupBudgetInMicroCurrency) {
    this.defaultAdGroupBudgetInMicroCurrency = defaultAdGroupBudgetInMicroCurrency;
    return this;
  }

   /**
   * When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
   * @return defaultAdGroupBudgetInMicroCurrency
  **/
  @javax.annotation.Nullable
  public Integer getDefaultAdGroupBudgetInMicroCurrency() {
    return defaultAdGroupBudgetInMicroCurrency;
  }

  public void setDefaultAdGroupBudgetInMicroCurrency(Integer defaultAdGroupBudgetInMicroCurrency) {
    this.defaultAdGroupBudgetInMicroCurrency = defaultAdGroupBudgetInMicroCurrency;
  }


  public CampaignCreateResponseData isAutomatedCampaign(Boolean isAutomatedCampaign) {
    this.isAutomatedCampaign = isAutomatedCampaign;
    return this;
  }

   /**
   * Specifies whether the campaign was created in the automated campaign flow
   * @return isAutomatedCampaign
  **/
  @javax.annotation.Nullable
  public Boolean getIsAutomatedCampaign() {
    return isAutomatedCampaign;
  }

  public void setIsAutomatedCampaign(Boolean isAutomatedCampaign) {
    this.isAutomatedCampaign = isAutomatedCampaign;
  }


  public CampaignCreateResponseData id(String id) {
    this.id = id;
    return this;
  }

   /**
   * Campaign ID.
   * @return id
  **/
  @javax.annotation.Nullable
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }


  public CampaignCreateResponseData objectiveType(ObjectiveType objectiveType) {
    this.objectiveType = objectiveType;
    return this;
  }

   /**
   * Get objectiveType
   * @return objectiveType
  **/
  @javax.annotation.Nullable
  public ObjectiveType getObjectiveType() {
    return objectiveType;
  }

  public void setObjectiveType(ObjectiveType objectiveType) {
    this.objectiveType = objectiveType;
  }


  public CampaignCreateResponseData createdTime(Integer createdTime) {
    this.createdTime = createdTime;
    return this;
  }

   /**
   * Campaign creation time. Unix timestamp in seconds.
   * @return createdTime
  **/
  @javax.annotation.Nullable
  public Integer getCreatedTime() {
    return createdTime;
  }

  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }


  public CampaignCreateResponseData updatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
    return this;
  }

   /**
   * UTC timestamp. Last update time.
   * @return updatedTime
  **/
  @javax.annotation.Nullable
  public Integer getUpdatedTime() {
    return updatedTime;
  }

  public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }


  public CampaignCreateResponseData type(String type) {
    this.type = type;
    return this;
  }

   /**
   * Always \&quot;campaign\&quot;.
   * @return type
  **/
  @javax.annotation.Nullable
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }


  public CampaignCreateResponseData isCampaignBudgetOptimization(Boolean isCampaignBudgetOptimization) {
    this.isCampaignBudgetOptimization = isCampaignBudgetOptimization;
    return this;
  }

   /**
   * Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
   * @return isCampaignBudgetOptimization
  **/
  @javax.annotation.Nullable
  public Boolean getIsCampaignBudgetOptimization() {
    return isCampaignBudgetOptimization;
  }

  public void setIsCampaignBudgetOptimization(Boolean isCampaignBudgetOptimization) {
    this.isCampaignBudgetOptimization = isCampaignBudgetOptimization;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CampaignCreateResponseData campaignCreateResponseData = (CampaignCreateResponseData) o;
    return Objects.equals(this.adAccountId, campaignCreateResponseData.adAccountId) &&
        Objects.equals(this.name, campaignCreateResponseData.name) &&
        Objects.equals(this.status, campaignCreateResponseData.status) &&
        Objects.equals(this.lifetimeSpendCap, campaignCreateResponseData.lifetimeSpendCap) &&
        Objects.equals(this.dailySpendCap, campaignCreateResponseData.dailySpendCap) &&
        Objects.equals(this.orderLineId, campaignCreateResponseData.orderLineId) &&
        Objects.equals(this.trackingUrls, campaignCreateResponseData.trackingUrls) &&
        Objects.equals(this.startTime, campaignCreateResponseData.startTime) &&
        Objects.equals(this.endTime, campaignCreateResponseData.endTime) &&
        Objects.equals(this.summaryStatus, campaignCreateResponseData.summaryStatus) &&
        Objects.equals(this.isFlexibleDailyBudgets, campaignCreateResponseData.isFlexibleDailyBudgets) &&
        Objects.equals(this.defaultAdGroupBudgetInMicroCurrency, campaignCreateResponseData.defaultAdGroupBudgetInMicroCurrency) &&
        Objects.equals(this.isAutomatedCampaign, campaignCreateResponseData.isAutomatedCampaign) &&
        Objects.equals(this.id, campaignCreateResponseData.id) &&
        Objects.equals(this.objectiveType, campaignCreateResponseData.objectiveType) &&
        Objects.equals(this.createdTime, campaignCreateResponseData.createdTime) &&
        Objects.equals(this.updatedTime, campaignCreateResponseData.updatedTime) &&
        Objects.equals(this.type, campaignCreateResponseData.type) &&
        Objects.equals(this.isCampaignBudgetOptimization, campaignCreateResponseData.isCampaignBudgetOptimization);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(adAccountId, name, status, lifetimeSpendCap, dailySpendCap, orderLineId, trackingUrls, startTime, endTime, summaryStatus, isFlexibleDailyBudgets, defaultAdGroupBudgetInMicroCurrency, isAutomatedCampaign, id, objectiveType, createdTime, updatedTime, type, isCampaignBudgetOptimization);
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
    sb.append("class CampaignCreateResponseData {\n");
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    lifetimeSpendCap: ").append(toIndentedString(lifetimeSpendCap)).append("\n");
    sb.append("    dailySpendCap: ").append(toIndentedString(dailySpendCap)).append("\n");
    sb.append("    orderLineId: ").append(toIndentedString(orderLineId)).append("\n");
    sb.append("    trackingUrls: ").append(toIndentedString(trackingUrls)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    summaryStatus: ").append(toIndentedString(summaryStatus)).append("\n");
    sb.append("    isFlexibleDailyBudgets: ").append(toIndentedString(isFlexibleDailyBudgets)).append("\n");
    sb.append("    defaultAdGroupBudgetInMicroCurrency: ").append(toIndentedString(defaultAdGroupBudgetInMicroCurrency)).append("\n");
    sb.append("    isAutomatedCampaign: ").append(toIndentedString(isAutomatedCampaign)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    objectiveType: ").append(toIndentedString(objectiveType)).append("\n");
    sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
    sb.append("    updatedTime: ").append(toIndentedString(updatedTime)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    isCampaignBudgetOptimization: ").append(toIndentedString(isCampaignBudgetOptimization)).append("\n");
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


  public static HashSet<String> openapiFields;
  public static HashSet<String> openapiRequiredFields;

  static {
    // a set of all properties/fields (JSON key names)
    openapiFields = new HashSet<String>();
    openapiFields.add("ad_account_id");
    openapiFields.add("name");
    openapiFields.add("status");
    openapiFields.add("lifetime_spend_cap");
    openapiFields.add("daily_spend_cap");
    openapiFields.add("order_line_id");
    openapiFields.add("tracking_urls");
    openapiFields.add("start_time");
    openapiFields.add("end_time");
    openapiFields.add("summary_status");
    openapiFields.add("is_flexible_daily_budgets");
    openapiFields.add("default_ad_group_budget_in_micro_currency");
    openapiFields.add("is_automated_campaign");
    openapiFields.add("id");
    openapiFields.add("objective_type");
    openapiFields.add("created_time");
    openapiFields.add("updated_time");
    openapiFields.add("type");
    openapiFields.add("is_campaign_budget_optimization");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to CampaignCreateResponseData
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!CampaignCreateResponseData.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in CampaignCreateResponseData is not found in the empty JSON string", CampaignCreateResponseData.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!CampaignCreateResponseData.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `CampaignCreateResponseData` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("ad_account_id") != null && !jsonObj.get("ad_account_id").isJsonNull()) && !jsonObj.get("ad_account_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `ad_account_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("ad_account_id").toString()));
      }
      if ((jsonObj.get("name") != null && !jsonObj.get("name").isJsonNull()) && !jsonObj.get("name").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `name` to be a primitive type in the JSON string but got `%s`", jsonObj.get("name").toString()));
      }
      // validate the optional field `status`
      if (jsonObj.get("status") != null && !jsonObj.get("status").isJsonNull()) {
        EntityStatus.validateJsonElement(jsonObj.get("status"));
      }
      if ((jsonObj.get("order_line_id") != null && !jsonObj.get("order_line_id").isJsonNull()) && !jsonObj.get("order_line_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `order_line_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("order_line_id").toString()));
      }
      // validate the optional field `tracking_urls`
      if (jsonObj.get("tracking_urls") != null && !jsonObj.get("tracking_urls").isJsonNull()) {
        AdCommonTrackingUrls.validateJsonElement(jsonObj.get("tracking_urls"));
      }
      // validate the optional field `summary_status`
      if (jsonObj.get("summary_status") != null && !jsonObj.get("summary_status").isJsonNull()) {
        CampaignSummaryStatus.validateJsonElement(jsonObj.get("summary_status"));
      }
      if ((jsonObj.get("id") != null && !jsonObj.get("id").isJsonNull()) && !jsonObj.get("id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("id").toString()));
      }
      // validate the optional field `objective_type`
      if (jsonObj.get("objective_type") != null && !jsonObj.get("objective_type").isJsonNull()) {
        ObjectiveType.validateJsonElement(jsonObj.get("objective_type"));
      }
      if ((jsonObj.get("type") != null && !jsonObj.get("type").isJsonNull()) && !jsonObj.get("type").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `type` to be a primitive type in the JSON string but got `%s`", jsonObj.get("type").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!CampaignCreateResponseData.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'CampaignCreateResponseData' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<CampaignCreateResponseData> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(CampaignCreateResponseData.class));

       return (TypeAdapter<T>) new TypeAdapter<CampaignCreateResponseData>() {
           @Override
           public void write(JsonWriter out, CampaignCreateResponseData value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public CampaignCreateResponseData read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of CampaignCreateResponseData given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of CampaignCreateResponseData
  * @throws IOException if the JSON string is invalid with respect to CampaignCreateResponseData
  */
  public static CampaignCreateResponseData fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, CampaignCreateResponseData.class);
  }

 /**
  * Convert an instance of CampaignCreateResponseData to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

