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
import com.github.oapicf.pinterestsdk.model.TemplateResponseDateRangeAbsoluteDateRange;
import com.github.oapicf.pinterestsdk.model.TemplateResponseDateRangeDynamicDateRange;
import com.github.oapicf.pinterestsdk.model.TemplateResponseDateRangeRelativeDateRange;
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
 * TemplateResponseDateRange
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class TemplateResponseDateRange {
  public static final String SERIALIZED_NAME_DYNAMIC_DATE_RANGE = "dynamic_date_range";
  @SerializedName(SERIALIZED_NAME_DYNAMIC_DATE_RANGE)
  private TemplateResponseDateRangeDynamicDateRange dynamicDateRange;

  public static final String SERIALIZED_NAME_RELATIVE_DATE_RANGE = "relative_date_range";
  @SerializedName(SERIALIZED_NAME_RELATIVE_DATE_RANGE)
  private TemplateResponseDateRangeRelativeDateRange relativeDateRange;

  public static final String SERIALIZED_NAME_ABSOLUTE_DATE_RANGE = "absolute_date_range";
  @SerializedName(SERIALIZED_NAME_ABSOLUTE_DATE_RANGE)
  private TemplateResponseDateRangeAbsoluteDateRange absoluteDateRange;

  public TemplateResponseDateRange() {
  }

  public TemplateResponseDateRange dynamicDateRange(TemplateResponseDateRangeDynamicDateRange dynamicDateRange) {
    this.dynamicDateRange = dynamicDateRange;
    return this;
  }

   /**
   * Get dynamicDateRange
   * @return dynamicDateRange
  **/
  @javax.annotation.Nullable
  public TemplateResponseDateRangeDynamicDateRange getDynamicDateRange() {
    return dynamicDateRange;
  }

  public void setDynamicDateRange(TemplateResponseDateRangeDynamicDateRange dynamicDateRange) {
    this.dynamicDateRange = dynamicDateRange;
  }


  public TemplateResponseDateRange relativeDateRange(TemplateResponseDateRangeRelativeDateRange relativeDateRange) {
    this.relativeDateRange = relativeDateRange;
    return this;
  }

   /**
   * Get relativeDateRange
   * @return relativeDateRange
  **/
  @javax.annotation.Nullable
  public TemplateResponseDateRangeRelativeDateRange getRelativeDateRange() {
    return relativeDateRange;
  }

  public void setRelativeDateRange(TemplateResponseDateRangeRelativeDateRange relativeDateRange) {
    this.relativeDateRange = relativeDateRange;
  }


  public TemplateResponseDateRange absoluteDateRange(TemplateResponseDateRangeAbsoluteDateRange absoluteDateRange) {
    this.absoluteDateRange = absoluteDateRange;
    return this;
  }

   /**
   * Get absoluteDateRange
   * @return absoluteDateRange
  **/
  @javax.annotation.Nullable
  public TemplateResponseDateRangeAbsoluteDateRange getAbsoluteDateRange() {
    return absoluteDateRange;
  }

  public void setAbsoluteDateRange(TemplateResponseDateRangeAbsoluteDateRange absoluteDateRange) {
    this.absoluteDateRange = absoluteDateRange;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TemplateResponseDateRange templateResponseDateRange = (TemplateResponseDateRange) o;
    return Objects.equals(this.dynamicDateRange, templateResponseDateRange.dynamicDateRange) &&
        Objects.equals(this.relativeDateRange, templateResponseDateRange.relativeDateRange) &&
        Objects.equals(this.absoluteDateRange, templateResponseDateRange.absoluteDateRange);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(dynamicDateRange, relativeDateRange, absoluteDateRange);
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
    sb.append("class TemplateResponseDateRange {\n");
    sb.append("    dynamicDateRange: ").append(toIndentedString(dynamicDateRange)).append("\n");
    sb.append("    relativeDateRange: ").append(toIndentedString(relativeDateRange)).append("\n");
    sb.append("    absoluteDateRange: ").append(toIndentedString(absoluteDateRange)).append("\n");
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
    openapiFields.add("dynamic_date_range");
    openapiFields.add("relative_date_range");
    openapiFields.add("absolute_date_range");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to TemplateResponseDateRange
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!TemplateResponseDateRange.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in TemplateResponseDateRange is not found in the empty JSON string", TemplateResponseDateRange.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!TemplateResponseDateRange.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `TemplateResponseDateRange` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // validate the optional field `dynamic_date_range`
      if (jsonObj.get("dynamic_date_range") != null && !jsonObj.get("dynamic_date_range").isJsonNull()) {
        TemplateResponseDateRangeDynamicDateRange.validateJsonElement(jsonObj.get("dynamic_date_range"));
      }
      // validate the optional field `relative_date_range`
      if (jsonObj.get("relative_date_range") != null && !jsonObj.get("relative_date_range").isJsonNull()) {
        TemplateResponseDateRangeRelativeDateRange.validateJsonElement(jsonObj.get("relative_date_range"));
      }
      // validate the optional field `absolute_date_range`
      if (jsonObj.get("absolute_date_range") != null && !jsonObj.get("absolute_date_range").isJsonNull()) {
        TemplateResponseDateRangeAbsoluteDateRange.validateJsonElement(jsonObj.get("absolute_date_range"));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!TemplateResponseDateRange.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'TemplateResponseDateRange' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<TemplateResponseDateRange> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(TemplateResponseDateRange.class));

       return (TypeAdapter<T>) new TypeAdapter<TemplateResponseDateRange>() {
           @Override
           public void write(JsonWriter out, TemplateResponseDateRange value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public TemplateResponseDateRange read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of TemplateResponseDateRange given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of TemplateResponseDateRange
  * @throws IOException if the JSON string is invalid with respect to TemplateResponseDateRange
  */
  public static TemplateResponseDateRange fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, TemplateResponseDateRange.class);
  }

 /**
  * Convert an instance of TemplateResponseDateRange to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}
