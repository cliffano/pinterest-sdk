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
import com.github.oapicf.pinterestsdk.model.Keyword;
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
 * KeywordError
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class KeywordError {
  public static final String SERIALIZED_NAME_DATA = "data";
  @SerializedName(SERIALIZED_NAME_DATA)
  private Keyword data;

  public static final String SERIALIZED_NAME_ERROR_MESSAGES = "error_messages";
  @SerializedName(SERIALIZED_NAME_ERROR_MESSAGES)
  private List<String> errorMessages;

  public KeywordError() {
  }

  public KeywordError data(Keyword data) {
    this.data = data;
    return this;
  }

   /**
   * Get data
   * @return data
  **/
  @javax.annotation.Nullable
  public Keyword getData() {
    return data;
  }

  public void setData(Keyword data) {
    this.data = data;
  }


  public KeywordError errorMessages(List<String> errorMessages) {
    this.errorMessages = errorMessages;
    return this;
  }

  public KeywordError addErrorMessagesItem(String errorMessagesItem) {
    if (this.errorMessages == null) {
      this.errorMessages = new ArrayList<>();
    }
    this.errorMessages.add(errorMessagesItem);
    return this;
  }

   /**
   * Get errorMessages
   * @return errorMessages
  **/
  @javax.annotation.Nullable
  public List<String> getErrorMessages() {
    return errorMessages;
  }

  public void setErrorMessages(List<String> errorMessages) {
    this.errorMessages = errorMessages;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    KeywordError keywordError = (KeywordError) o;
    return Objects.equals(this.data, keywordError.data) &&
        Objects.equals(this.errorMessages, keywordError.errorMessages);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data, errorMessages);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class KeywordError {\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("    errorMessages: ").append(toIndentedString(errorMessages)).append("\n");
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
    openapiFields.add("data");
    openapiFields.add("error_messages");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to KeywordError
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!KeywordError.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in KeywordError is not found in the empty JSON string", KeywordError.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!KeywordError.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `KeywordError` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // validate the optional field `data`
      if (jsonObj.get("data") != null && !jsonObj.get("data").isJsonNull()) {
        Keyword.validateJsonElement(jsonObj.get("data"));
      }
      // ensure the optional json data is an array if present
      if (jsonObj.get("error_messages") != null && !jsonObj.get("error_messages").isJsonNull() && !jsonObj.get("error_messages").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `error_messages` to be an array in the JSON string but got `%s`", jsonObj.get("error_messages").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!KeywordError.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'KeywordError' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<KeywordError> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(KeywordError.class));

       return (TypeAdapter<T>) new TypeAdapter<KeywordError>() {
           @Override
           public void write(JsonWriter out, KeywordError value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public KeywordError read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of KeywordError given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of KeywordError
  * @throws IOException if the JSON string is invalid with respect to KeywordError
  */
  public static KeywordError fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, KeywordError.class);
  }

 /**
  * Convert an instance of KeywordError to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}
