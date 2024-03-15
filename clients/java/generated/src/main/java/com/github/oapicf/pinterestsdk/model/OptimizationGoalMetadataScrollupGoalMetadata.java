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
 * OptimizationGoalMetadataScrollupGoalMetadata
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class OptimizationGoalMetadataScrollupGoalMetadata {
  public static final String SERIALIZED_NAME_SCROLLUP_GOAL_VALUE_IN_MICRO_CURRENCY = "scrollup_goal_value_in_micro_currency";
  @SerializedName(SERIALIZED_NAME_SCROLLUP_GOAL_VALUE_IN_MICRO_CURRENCY)
  private String scrollupGoalValueInMicroCurrency;

  public OptimizationGoalMetadataScrollupGoalMetadata() {
  }

  public OptimizationGoalMetadataScrollupGoalMetadata scrollupGoalValueInMicroCurrency(String scrollupGoalValueInMicroCurrency) {
    this.scrollupGoalValueInMicroCurrency = scrollupGoalValueInMicroCurrency;
    return this;
  }

   /**
   * Get scrollupGoalValueInMicroCurrency
   * @return scrollupGoalValueInMicroCurrency
  **/
  @javax.annotation.Nullable
  public String getScrollupGoalValueInMicroCurrency() {
    return scrollupGoalValueInMicroCurrency;
  }

  public void setScrollupGoalValueInMicroCurrency(String scrollupGoalValueInMicroCurrency) {
    this.scrollupGoalValueInMicroCurrency = scrollupGoalValueInMicroCurrency;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OptimizationGoalMetadataScrollupGoalMetadata optimizationGoalMetadataScrollupGoalMetadata = (OptimizationGoalMetadataScrollupGoalMetadata) o;
    return Objects.equals(this.scrollupGoalValueInMicroCurrency, optimizationGoalMetadataScrollupGoalMetadata.scrollupGoalValueInMicroCurrency);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(scrollupGoalValueInMicroCurrency);
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
    sb.append("class OptimizationGoalMetadataScrollupGoalMetadata {\n");
    sb.append("    scrollupGoalValueInMicroCurrency: ").append(toIndentedString(scrollupGoalValueInMicroCurrency)).append("\n");
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
    openapiFields.add("scrollup_goal_value_in_micro_currency");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to OptimizationGoalMetadataScrollupGoalMetadata
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!OptimizationGoalMetadataScrollupGoalMetadata.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in OptimizationGoalMetadataScrollupGoalMetadata is not found in the empty JSON string", OptimizationGoalMetadataScrollupGoalMetadata.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!OptimizationGoalMetadataScrollupGoalMetadata.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `OptimizationGoalMetadataScrollupGoalMetadata` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("scrollup_goal_value_in_micro_currency") != null && !jsonObj.get("scrollup_goal_value_in_micro_currency").isJsonNull()) && !jsonObj.get("scrollup_goal_value_in_micro_currency").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `scrollup_goal_value_in_micro_currency` to be a primitive type in the JSON string but got `%s`", jsonObj.get("scrollup_goal_value_in_micro_currency").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!OptimizationGoalMetadataScrollupGoalMetadata.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'OptimizationGoalMetadataScrollupGoalMetadata' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<OptimizationGoalMetadataScrollupGoalMetadata> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(OptimizationGoalMetadataScrollupGoalMetadata.class));

       return (TypeAdapter<T>) new TypeAdapter<OptimizationGoalMetadataScrollupGoalMetadata>() {
           @Override
           public void write(JsonWriter out, OptimizationGoalMetadataScrollupGoalMetadata value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public OptimizationGoalMetadataScrollupGoalMetadata read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of OptimizationGoalMetadataScrollupGoalMetadata given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of OptimizationGoalMetadataScrollupGoalMetadata
  * @throws IOException if the JSON string is invalid with respect to OptimizationGoalMetadataScrollupGoalMetadata
  */
  public static OptimizationGoalMetadataScrollupGoalMetadata fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, OptimizationGoalMetadataScrollupGoalMetadata.class);
  }

 /**
  * Convert an instance of OptimizationGoalMetadataScrollupGoalMetadata to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

