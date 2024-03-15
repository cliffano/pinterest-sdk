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
import com.github.oapicf.pinterestsdk.model.CampaignSummaryStatus;
import com.github.oapicf.pinterestsdk.model.ObjectiveType;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

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
 * BulkDownloadRequestCampaignFilter
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class BulkDownloadRequestCampaignFilter {
  public static final String SERIALIZED_NAME_START_TIME = "start_time";
  @SerializedName(SERIALIZED_NAME_START_TIME)
  private String startTime;

  public static final String SERIALIZED_NAME_END_TIME = "end_time";
  @SerializedName(SERIALIZED_NAME_END_TIME)
  private String endTime;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_CAMPAIGN_STATUS = "campaign_status";
  @SerializedName(SERIALIZED_NAME_CAMPAIGN_STATUS)
  private List<CampaignSummaryStatus> campaignStatus;

  public static final String SERIALIZED_NAME_OBJECTIVE_TYPE = "objective_type";
  @SerializedName(SERIALIZED_NAME_OBJECTIVE_TYPE)
  private List<ObjectiveType> objectiveType;

  public BulkDownloadRequestCampaignFilter() {
  }

  public BulkDownloadRequestCampaignFilter startTime(String startTime) {
    this.startTime = startTime;
    return this;
  }

   /**
   * Unix UTC timestamp.
   * @return startTime
  **/
  @javax.annotation.Nullable
  public String getStartTime() {
    return startTime;
  }

  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }


  public BulkDownloadRequestCampaignFilter endTime(String endTime) {
    this.endTime = endTime;
    return this;
  }

   /**
   * Unix UTC timestamp.
   * @return endTime
  **/
  @javax.annotation.Nullable
  public String getEndTime() {
    return endTime;
  }

  public void setEndTime(String endTime) {
    this.endTime = endTime;
  }


  public BulkDownloadRequestCampaignFilter name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Campaign name
   * @return name
  **/
  @javax.annotation.Nullable
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }


  public BulkDownloadRequestCampaignFilter campaignStatus(List<CampaignSummaryStatus> campaignStatus) {
    this.campaignStatus = campaignStatus;
    return this;
  }

  public BulkDownloadRequestCampaignFilter addCampaignStatusItem(CampaignSummaryStatus campaignStatusItem) {
    if (this.campaignStatus == null) {
      this.campaignStatus = new ArrayList<>();
    }
    this.campaignStatus.add(campaignStatusItem);
    return this;
  }

   /**
   * Get campaignStatus
   * @return campaignStatus
  **/
  @javax.annotation.Nullable
  public List<CampaignSummaryStatus> getCampaignStatus() {
    return campaignStatus;
  }

  public void setCampaignStatus(List<CampaignSummaryStatus> campaignStatus) {
    this.campaignStatus = campaignStatus;
  }


  public BulkDownloadRequestCampaignFilter objectiveType(List<ObjectiveType> objectiveType) {
    this.objectiveType = objectiveType;
    return this;
  }

  public BulkDownloadRequestCampaignFilter addObjectiveTypeItem(ObjectiveType objectiveTypeItem) {
    if (this.objectiveType == null) {
      this.objectiveType = new ArrayList<>();
    }
    this.objectiveType.add(objectiveTypeItem);
    return this;
  }

   /**
   * Get objectiveType
   * @return objectiveType
  **/
  @javax.annotation.Nullable
  public List<ObjectiveType> getObjectiveType() {
    return objectiveType;
  }

  public void setObjectiveType(List<ObjectiveType> objectiveType) {
    this.objectiveType = objectiveType;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BulkDownloadRequestCampaignFilter bulkDownloadRequestCampaignFilter = (BulkDownloadRequestCampaignFilter) o;
    return Objects.equals(this.startTime, bulkDownloadRequestCampaignFilter.startTime) &&
        Objects.equals(this.endTime, bulkDownloadRequestCampaignFilter.endTime) &&
        Objects.equals(this.name, bulkDownloadRequestCampaignFilter.name) &&
        Objects.equals(this.campaignStatus, bulkDownloadRequestCampaignFilter.campaignStatus) &&
        Objects.equals(this.objectiveType, bulkDownloadRequestCampaignFilter.objectiveType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(startTime, endTime, name, campaignStatus, objectiveType);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BulkDownloadRequestCampaignFilter {\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    campaignStatus: ").append(toIndentedString(campaignStatus)).append("\n");
    sb.append("    objectiveType: ").append(toIndentedString(objectiveType)).append("\n");
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
    openapiFields.add("start_time");
    openapiFields.add("end_time");
    openapiFields.add("name");
    openapiFields.add("campaign_status");
    openapiFields.add("objective_type");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to BulkDownloadRequestCampaignFilter
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!BulkDownloadRequestCampaignFilter.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in BulkDownloadRequestCampaignFilter is not found in the empty JSON string", BulkDownloadRequestCampaignFilter.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!BulkDownloadRequestCampaignFilter.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `BulkDownloadRequestCampaignFilter` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("start_time") != null && !jsonObj.get("start_time").isJsonNull()) && !jsonObj.get("start_time").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `start_time` to be a primitive type in the JSON string but got `%s`", jsonObj.get("start_time").toString()));
      }
      if ((jsonObj.get("end_time") != null && !jsonObj.get("end_time").isJsonNull()) && !jsonObj.get("end_time").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `end_time` to be a primitive type in the JSON string but got `%s`", jsonObj.get("end_time").toString()));
      }
      if ((jsonObj.get("name") != null && !jsonObj.get("name").isJsonNull()) && !jsonObj.get("name").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `name` to be a primitive type in the JSON string but got `%s`", jsonObj.get("name").toString()));
      }
      // ensure the optional json data is an array if present
      if (jsonObj.get("campaign_status") != null && !jsonObj.get("campaign_status").isJsonNull() && !jsonObj.get("campaign_status").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `campaign_status` to be an array in the JSON string but got `%s`", jsonObj.get("campaign_status").toString()));
      }
      // ensure the optional json data is an array if present
      if (jsonObj.get("objective_type") != null && !jsonObj.get("objective_type").isJsonNull() && !jsonObj.get("objective_type").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `objective_type` to be an array in the JSON string but got `%s`", jsonObj.get("objective_type").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!BulkDownloadRequestCampaignFilter.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'BulkDownloadRequestCampaignFilter' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<BulkDownloadRequestCampaignFilter> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(BulkDownloadRequestCampaignFilter.class));

       return (TypeAdapter<T>) new TypeAdapter<BulkDownloadRequestCampaignFilter>() {
           @Override
           public void write(JsonWriter out, BulkDownloadRequestCampaignFilter value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public BulkDownloadRequestCampaignFilter read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of BulkDownloadRequestCampaignFilter given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of BulkDownloadRequestCampaignFilter
  * @throws IOException if the JSON string is invalid with respect to BulkDownloadRequestCampaignFilter
  */
  public static BulkDownloadRequestCampaignFilter fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, BulkDownloadRequestCampaignFilter.class);
  }

 /**
  * Convert an instance of BulkDownloadRequestCampaignFilter to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

