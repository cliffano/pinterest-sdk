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
import com.github.oapicf.pinterestsdk.model.AudienceCategory;
import com.github.oapicf.pinterestsdk.model.AudienceDemographics;
import com.github.oapicf.pinterestsdk.model.AudienceInsightType;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
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
 * Audience interests and demographics.
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceInsightsResponse {
  public static final String SERIALIZED_NAME_CATEGORIES = "categories";
  @SerializedName(SERIALIZED_NAME_CATEGORIES)
  private List<AudienceCategory> categories;

  public static final String SERIALIZED_NAME_DEMOGRAPHICS = "demographics";
  @SerializedName(SERIALIZED_NAME_DEMOGRAPHICS)
  private AudienceDemographics demographics;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private AudienceInsightType type = AudienceInsightType.YOUR_TOTAL_AUDIENCE;

  public static final String SERIALIZED_NAME_DATE = "date";
  @SerializedName(SERIALIZED_NAME_DATE)
  private String date;

  public static final String SERIALIZED_NAME_SIZE = "size";
  @SerializedName(SERIALIZED_NAME_SIZE)
  private Integer size;

  public static final String SERIALIZED_NAME_SIZE_IS_UPPER_BOUND = "size_is_upper_bound";
  @SerializedName(SERIALIZED_NAME_SIZE_IS_UPPER_BOUND)
  private Boolean sizeIsUpperBound;

  public AudienceInsightsResponse() {
  }

  public AudienceInsightsResponse categories(List<AudienceCategory> categories) {
    this.categories = categories;
    return this;
  }

  public AudienceInsightsResponse addCategoriesItem(AudienceCategory categoriesItem) {
    if (this.categories == null) {
      this.categories = new ArrayList<>();
    }
    this.categories.add(categoriesItem);
    return this;
  }

   /**
   * Category interest distribution
   * @return categories
  **/
  @javax.annotation.Nullable
  public List<AudienceCategory> getCategories() {
    return categories;
  }

  public void setCategories(List<AudienceCategory> categories) {
    this.categories = categories;
  }


  public AudienceInsightsResponse demographics(AudienceDemographics demographics) {
    this.demographics = demographics;
    return this;
  }

   /**
   * Get demographics
   * @return demographics
  **/
  @javax.annotation.Nullable
  public AudienceDemographics getDemographics() {
    return demographics;
  }

  public void setDemographics(AudienceDemographics demographics) {
    this.demographics = demographics;
  }


  public AudienceInsightsResponse type(AudienceInsightType type) {
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @javax.annotation.Nullable
  public AudienceInsightType getType() {
    return type;
  }

  public void setType(AudienceInsightType type) {
    this.type = type;
  }


  public AudienceInsightsResponse date(String date) {
    this.date = date;
    return this;
  }

   /**
   * Generation date
   * @return date
  **/
  @javax.annotation.Nullable
  public String getDate() {
    return date;
  }

  public void setDate(String date) {
    this.date = date;
  }


  public AudienceInsightsResponse size(Integer size) {
    this.size = size;
    return this;
  }

   /**
   * Population count.
   * @return size
  **/
  @javax.annotation.Nullable
  public Integer getSize() {
    return size;
  }

  public void setSize(Integer size) {
    this.size = size;
  }


  public AudienceInsightsResponse sizeIsUpperBound(Boolean sizeIsUpperBound) {
    this.sizeIsUpperBound = sizeIsUpperBound;
    return this;
  }

   /**
   * Indicates whether the audience size has been rounded up to the next highest upper boundary.
   * @return sizeIsUpperBound
  **/
  @javax.annotation.Nullable
  public Boolean getSizeIsUpperBound() {
    return sizeIsUpperBound;
  }

  public void setSizeIsUpperBound(Boolean sizeIsUpperBound) {
    this.sizeIsUpperBound = sizeIsUpperBound;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AudienceInsightsResponse audienceInsightsResponse = (AudienceInsightsResponse) o;
    return Objects.equals(this.categories, audienceInsightsResponse.categories) &&
        Objects.equals(this.demographics, audienceInsightsResponse.demographics) &&
        Objects.equals(this.type, audienceInsightsResponse.type) &&
        Objects.equals(this.date, audienceInsightsResponse.date) &&
        Objects.equals(this.size, audienceInsightsResponse.size) &&
        Objects.equals(this.sizeIsUpperBound, audienceInsightsResponse.sizeIsUpperBound);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(categories, demographics, type, date, size, sizeIsUpperBound);
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
    sb.append("class AudienceInsightsResponse {\n");
    sb.append("    categories: ").append(toIndentedString(categories)).append("\n");
    sb.append("    demographics: ").append(toIndentedString(demographics)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    date: ").append(toIndentedString(date)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    sizeIsUpperBound: ").append(toIndentedString(sizeIsUpperBound)).append("\n");
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
    openapiFields.add("categories");
    openapiFields.add("demographics");
    openapiFields.add("type");
    openapiFields.add("date");
    openapiFields.add("size");
    openapiFields.add("size_is_upper_bound");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to AudienceInsightsResponse
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!AudienceInsightsResponse.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in AudienceInsightsResponse is not found in the empty JSON string", AudienceInsightsResponse.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!AudienceInsightsResponse.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `AudienceInsightsResponse` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if (jsonObj.get("categories") != null && !jsonObj.get("categories").isJsonNull()) {
        JsonArray jsonArraycategories = jsonObj.getAsJsonArray("categories");
        if (jsonArraycategories != null) {
          // ensure the json data is an array
          if (!jsonObj.get("categories").isJsonArray()) {
            throw new IllegalArgumentException(String.format("Expected the field `categories` to be an array in the JSON string but got `%s`", jsonObj.get("categories").toString()));
          }

          // validate the optional field `categories` (array)
          for (int i = 0; i < jsonArraycategories.size(); i++) {
            AudienceCategory.validateJsonElement(jsonArraycategories.get(i));
          };
        }
      }
      // validate the optional field `demographics`
      if (jsonObj.get("demographics") != null && !jsonObj.get("demographics").isJsonNull()) {
        AudienceDemographics.validateJsonElement(jsonObj.get("demographics"));
      }
      // validate the optional field `type`
      if (jsonObj.get("type") != null && !jsonObj.get("type").isJsonNull()) {
        AudienceInsightType.validateJsonElement(jsonObj.get("type"));
      }
      if ((jsonObj.get("date") != null && !jsonObj.get("date").isJsonNull()) && !jsonObj.get("date").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `date` to be a primitive type in the JSON string but got `%s`", jsonObj.get("date").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!AudienceInsightsResponse.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'AudienceInsightsResponse' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<AudienceInsightsResponse> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(AudienceInsightsResponse.class));

       return (TypeAdapter<T>) new TypeAdapter<AudienceInsightsResponse>() {
           @Override
           public void write(JsonWriter out, AudienceInsightsResponse value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public AudienceInsightsResponse read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of AudienceInsightsResponse given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of AudienceInsightsResponse
  * @throws IOException if the JSON string is invalid with respect to AudienceInsightsResponse
  */
  public static AudienceInsightsResponse fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, AudienceInsightsResponse.class);
  }

 /**
  * Convert an instance of AudienceInsightsResponse to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}
