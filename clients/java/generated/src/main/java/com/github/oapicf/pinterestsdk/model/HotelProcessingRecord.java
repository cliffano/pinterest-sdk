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
import com.github.oapicf.pinterestsdk.model.ItemProcessingStatus;
import com.github.oapicf.pinterestsdk.model.ItemValidationEvent;
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
 * Object describing an item processing record
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class HotelProcessingRecord {
  public static final String SERIALIZED_NAME_HOTEL_ID = "hotel_id";
  @SerializedName(SERIALIZED_NAME_HOTEL_ID)
  private String hotelId;

  public static final String SERIALIZED_NAME_ERRORS = "errors";
  @SerializedName(SERIALIZED_NAME_ERRORS)
  private List<ItemValidationEvent> errors;

  public static final String SERIALIZED_NAME_WARNINGS = "warnings";
  @SerializedName(SERIALIZED_NAME_WARNINGS)
  private List<ItemValidationEvent> warnings;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private ItemProcessingStatus status;

  public HotelProcessingRecord() {
  }

  public HotelProcessingRecord hotelId(String hotelId) {
    this.hotelId = hotelId;
    return this;
  }

   /**
   * The catalog hotel id in the merchant namespace
   * @return hotelId
  **/
  @javax.annotation.Nullable
  public String getHotelId() {
    return hotelId;
  }

  public void setHotelId(String hotelId) {
    this.hotelId = hotelId;
  }


  public HotelProcessingRecord errors(List<ItemValidationEvent> errors) {
    this.errors = errors;
    return this;
  }

  public HotelProcessingRecord addErrorsItem(ItemValidationEvent errorsItem) {
    if (this.errors == null) {
      this.errors = new ArrayList<>();
    }
    this.errors.add(errorsItem);
    return this;
  }

   /**
   * Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
   * @return errors
  **/
  @javax.annotation.Nullable
  public List<ItemValidationEvent> getErrors() {
    return errors;
  }

  public void setErrors(List<ItemValidationEvent> errors) {
    this.errors = errors;
  }


  public HotelProcessingRecord warnings(List<ItemValidationEvent> warnings) {
    this.warnings = warnings;
    return this;
  }

  public HotelProcessingRecord addWarningsItem(ItemValidationEvent warningsItem) {
    if (this.warnings == null) {
      this.warnings = new ArrayList<>();
    }
    this.warnings.add(warningsItem);
    return this;
  }

   /**
   * Array with the validation warnings for the item processing record
   * @return warnings
  **/
  @javax.annotation.Nullable
  public List<ItemValidationEvent> getWarnings() {
    return warnings;
  }

  public void setWarnings(List<ItemValidationEvent> warnings) {
    this.warnings = warnings;
  }


  public HotelProcessingRecord status(ItemProcessingStatus status) {
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @javax.annotation.Nullable
  public ItemProcessingStatus getStatus() {
    return status;
  }

  public void setStatus(ItemProcessingStatus status) {
    this.status = status;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HotelProcessingRecord hotelProcessingRecord = (HotelProcessingRecord) o;
    return Objects.equals(this.hotelId, hotelProcessingRecord.hotelId) &&
        Objects.equals(this.errors, hotelProcessingRecord.errors) &&
        Objects.equals(this.warnings, hotelProcessingRecord.warnings) &&
        Objects.equals(this.status, hotelProcessingRecord.status);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hotelId, errors, warnings, status);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HotelProcessingRecord {\n");
    sb.append("    hotelId: ").append(toIndentedString(hotelId)).append("\n");
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    warnings: ").append(toIndentedString(warnings)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
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
    openapiFields.add("hotel_id");
    openapiFields.add("errors");
    openapiFields.add("warnings");
    openapiFields.add("status");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to HotelProcessingRecord
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!HotelProcessingRecord.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in HotelProcessingRecord is not found in the empty JSON string", HotelProcessingRecord.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!HotelProcessingRecord.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `HotelProcessingRecord` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("hotel_id") != null && !jsonObj.get("hotel_id").isJsonNull()) && !jsonObj.get("hotel_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `hotel_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("hotel_id").toString()));
      }
      if (jsonObj.get("errors") != null && !jsonObj.get("errors").isJsonNull()) {
        JsonArray jsonArrayerrors = jsonObj.getAsJsonArray("errors");
        if (jsonArrayerrors != null) {
          // ensure the json data is an array
          if (!jsonObj.get("errors").isJsonArray()) {
            throw new IllegalArgumentException(String.format("Expected the field `errors` to be an array in the JSON string but got `%s`", jsonObj.get("errors").toString()));
          }

          // validate the optional field `errors` (array)
          for (int i = 0; i < jsonArrayerrors.size(); i++) {
            ItemValidationEvent.validateJsonElement(jsonArrayerrors.get(i));
          };
        }
      }
      if (jsonObj.get("warnings") != null && !jsonObj.get("warnings").isJsonNull()) {
        JsonArray jsonArraywarnings = jsonObj.getAsJsonArray("warnings");
        if (jsonArraywarnings != null) {
          // ensure the json data is an array
          if (!jsonObj.get("warnings").isJsonArray()) {
            throw new IllegalArgumentException(String.format("Expected the field `warnings` to be an array in the JSON string but got `%s`", jsonObj.get("warnings").toString()));
          }

          // validate the optional field `warnings` (array)
          for (int i = 0; i < jsonArraywarnings.size(); i++) {
            ItemValidationEvent.validateJsonElement(jsonArraywarnings.get(i));
          };
        }
      }
      // validate the optional field `status`
      if (jsonObj.get("status") != null && !jsonObj.get("status").isJsonNull()) {
        ItemProcessingStatus.validateJsonElement(jsonObj.get("status"));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!HotelProcessingRecord.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'HotelProcessingRecord' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<HotelProcessingRecord> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(HotelProcessingRecord.class));

       return (TypeAdapter<T>) new TypeAdapter<HotelProcessingRecord>() {
           @Override
           public void write(JsonWriter out, HotelProcessingRecord value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public HotelProcessingRecord read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of HotelProcessingRecord given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of HotelProcessingRecord
  * @throws IOException if the JSON string is invalid with respect to HotelProcessingRecord
  */
  public static HotelProcessingRecord fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, HotelProcessingRecord.class);
  }

 /**
  * Convert an instance of HotelProcessingRecord to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

