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
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.Arrays;

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
 * TopPinsAnalyticsResponseDateAvailability
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class TopPinsAnalyticsResponseDateAvailability {
  public static final String SERIALIZED_NAME_LATEST_AVAILABLE_TIMESTAMP = "latest_available_timestamp";
  @SerializedName(SERIALIZED_NAME_LATEST_AVAILABLE_TIMESTAMP)
  private BigDecimal latestAvailableTimestamp;

  public static final String SERIALIZED_NAME_IS_REALTIME = "is_realtime";
  @SerializedName(SERIALIZED_NAME_IS_REALTIME)
  private Boolean isRealtime;

  public TopPinsAnalyticsResponseDateAvailability() {
  }

  public TopPinsAnalyticsResponseDateAvailability latestAvailableTimestamp(BigDecimal latestAvailableTimestamp) {
    this.latestAvailableTimestamp = latestAvailableTimestamp;
    return this;
  }

   /**
   * Get latestAvailableTimestamp
   * @return latestAvailableTimestamp
  **/
  @javax.annotation.Nullable
  public BigDecimal getLatestAvailableTimestamp() {
    return latestAvailableTimestamp;
  }

  public void setLatestAvailableTimestamp(BigDecimal latestAvailableTimestamp) {
    this.latestAvailableTimestamp = latestAvailableTimestamp;
  }


  public TopPinsAnalyticsResponseDateAvailability isRealtime(Boolean isRealtime) {
    this.isRealtime = isRealtime;
    return this;
  }

   /**
   * Get isRealtime
   * @return isRealtime
  **/
  @javax.annotation.Nullable
  public Boolean getIsRealtime() {
    return isRealtime;
  }

  public void setIsRealtime(Boolean isRealtime) {
    this.isRealtime = isRealtime;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TopPinsAnalyticsResponseDateAvailability topPinsAnalyticsResponseDateAvailability = (TopPinsAnalyticsResponseDateAvailability) o;
    return Objects.equals(this.latestAvailableTimestamp, topPinsAnalyticsResponseDateAvailability.latestAvailableTimestamp) &&
        Objects.equals(this.isRealtime, topPinsAnalyticsResponseDateAvailability.isRealtime);
  }

  @Override
  public int hashCode() {
    return Objects.hash(latestAvailableTimestamp, isRealtime);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TopPinsAnalyticsResponseDateAvailability {\n");
    sb.append("    latestAvailableTimestamp: ").append(toIndentedString(latestAvailableTimestamp)).append("\n");
    sb.append("    isRealtime: ").append(toIndentedString(isRealtime)).append("\n");
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
    openapiFields.add("latest_available_timestamp");
    openapiFields.add("is_realtime");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to TopPinsAnalyticsResponseDateAvailability
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!TopPinsAnalyticsResponseDateAvailability.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in TopPinsAnalyticsResponseDateAvailability is not found in the empty JSON string", TopPinsAnalyticsResponseDateAvailability.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!TopPinsAnalyticsResponseDateAvailability.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `TopPinsAnalyticsResponseDateAvailability` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!TopPinsAnalyticsResponseDateAvailability.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'TopPinsAnalyticsResponseDateAvailability' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<TopPinsAnalyticsResponseDateAvailability> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(TopPinsAnalyticsResponseDateAvailability.class));

       return (TypeAdapter<T>) new TypeAdapter<TopPinsAnalyticsResponseDateAvailability>() {
           @Override
           public void write(JsonWriter out, TopPinsAnalyticsResponseDateAvailability value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public TopPinsAnalyticsResponseDateAvailability read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of TopPinsAnalyticsResponseDateAvailability given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of TopPinsAnalyticsResponseDateAvailability
  * @throws IOException if the JSON string is invalid with respect to TopPinsAnalyticsResponseDateAvailability
  */
  public static TopPinsAnalyticsResponseDateAvailability fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, TopPinsAnalyticsResponseDateAvailability.class);
  }

 /**
  * Convert an instance of TopPinsAnalyticsResponseDateAvailability to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

