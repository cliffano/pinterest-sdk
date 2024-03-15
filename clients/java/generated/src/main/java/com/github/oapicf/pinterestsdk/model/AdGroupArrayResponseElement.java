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
import com.github.oapicf.pinterestsdk.model.AdGroupResponse;
import com.github.oapicf.pinterestsdk.model.Exception;
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
 * AdGroupArrayResponseElement
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AdGroupArrayResponseElement {
  public static final String SERIALIZED_NAME_DATA = "data";
  @SerializedName(SERIALIZED_NAME_DATA)
  private AdGroupResponse data;

  public static final String SERIALIZED_NAME_EXCEPTIONS = "exceptions";
  @SerializedName(SERIALIZED_NAME_EXCEPTIONS)
  private List<Exception> exceptions;

  public AdGroupArrayResponseElement() {
  }

  public AdGroupArrayResponseElement data(AdGroupResponse data) {
    this.data = data;
    return this;
  }

   /**
   * Get data
   * @return data
  **/
  @javax.annotation.Nullable
  public AdGroupResponse getData() {
    return data;
  }

  public void setData(AdGroupResponse data) {
    this.data = data;
  }


  public AdGroupArrayResponseElement exceptions(List<Exception> exceptions) {
    this.exceptions = exceptions;
    return this;
  }

  public AdGroupArrayResponseElement addExceptionsItem(Exception exceptionsItem) {
    if (this.exceptions == null) {
      this.exceptions = new ArrayList<>();
    }
    this.exceptions.add(exceptionsItem);
    return this;
  }

   /**
   * Get exceptions
   * @return exceptions
  **/
  @javax.annotation.Nullable
  public List<Exception> getExceptions() {
    return exceptions;
  }

  public void setExceptions(List<Exception> exceptions) {
    this.exceptions = exceptions;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdGroupArrayResponseElement adGroupArrayResponseElement = (AdGroupArrayResponseElement) o;
    return Objects.equals(this.data, adGroupArrayResponseElement.data) &&
        Objects.equals(this.exceptions, adGroupArrayResponseElement.exceptions);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data, exceptions);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupArrayResponseElement {\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("    exceptions: ").append(toIndentedString(exceptions)).append("\n");
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
    openapiFields.add("exceptions");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to AdGroupArrayResponseElement
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!AdGroupArrayResponseElement.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in AdGroupArrayResponseElement is not found in the empty JSON string", AdGroupArrayResponseElement.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!AdGroupArrayResponseElement.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `AdGroupArrayResponseElement` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // validate the optional field `data`
      if (jsonObj.get("data") != null && !jsonObj.get("data").isJsonNull()) {
        AdGroupResponse.validateJsonElement(jsonObj.get("data"));
      }
      if (jsonObj.get("exceptions") != null && !jsonObj.get("exceptions").isJsonNull()) {
        JsonArray jsonArrayexceptions = jsonObj.getAsJsonArray("exceptions");
        if (jsonArrayexceptions != null) {
          // ensure the json data is an array
          if (!jsonObj.get("exceptions").isJsonArray()) {
            throw new IllegalArgumentException(String.format("Expected the field `exceptions` to be an array in the JSON string but got `%s`", jsonObj.get("exceptions").toString()));
          }

          // validate the optional field `exceptions` (array)
          for (int i = 0; i < jsonArrayexceptions.size(); i++) {
            Exception.validateJsonElement(jsonArrayexceptions.get(i));
          };
        }
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!AdGroupArrayResponseElement.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'AdGroupArrayResponseElement' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<AdGroupArrayResponseElement> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(AdGroupArrayResponseElement.class));

       return (TypeAdapter<T>) new TypeAdapter<AdGroupArrayResponseElement>() {
           @Override
           public void write(JsonWriter out, AdGroupArrayResponseElement value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public AdGroupArrayResponseElement read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of AdGroupArrayResponseElement given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of AdGroupArrayResponseElement
  * @throws IOException if the JSON string is invalid with respect to AdGroupArrayResponseElement
  */
  public static AdGroupArrayResponseElement fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, AdGroupArrayResponseElement.class);
  }

 /**
  * Convert an instance of AdGroupArrayResponseElement to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

