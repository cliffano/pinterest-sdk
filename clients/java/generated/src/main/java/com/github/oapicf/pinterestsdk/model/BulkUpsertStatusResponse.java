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
import com.github.oapicf.pinterestsdk.model.BulkUpsertStatus;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
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
 * ID of the bulk request.
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class BulkUpsertStatusResponse {
  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private BulkUpsertStatus status;

  public static final String SERIALIZED_NAME_RESULT_URL = "result_url";
  @SerializedName(SERIALIZED_NAME_RESULT_URL)
  private String resultUrl;

  public BulkUpsertStatusResponse() {
  }

  public BulkUpsertStatusResponse status(BulkUpsertStatus status) {
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @javax.annotation.Nullable
  public BulkUpsertStatus getStatus() {
    return status;
  }

  public void setStatus(BulkUpsertStatus status) {
    this.status = status;
  }


  public BulkUpsertStatusResponse resultUrl(String resultUrl) {
    this.resultUrl = resultUrl;
    return this;
  }

   /**
   * Get resultUrl
   * @return resultUrl
  **/
  @javax.annotation.Nullable
  public String getResultUrl() {
    return resultUrl;
  }

  public void setResultUrl(String resultUrl) {
    this.resultUrl = resultUrl;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BulkUpsertStatusResponse bulkUpsertStatusResponse = (BulkUpsertStatusResponse) o;
    return Objects.equals(this.status, bulkUpsertStatusResponse.status) &&
        Objects.equals(this.resultUrl, bulkUpsertStatusResponse.resultUrl);
  }

  @Override
  public int hashCode() {
    return Objects.hash(status, resultUrl);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BulkUpsertStatusResponse {\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    resultUrl: ").append(toIndentedString(resultUrl)).append("\n");
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
    openapiFields.add("status");
    openapiFields.add("result_url");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to BulkUpsertStatusResponse
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!BulkUpsertStatusResponse.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in BulkUpsertStatusResponse is not found in the empty JSON string", BulkUpsertStatusResponse.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!BulkUpsertStatusResponse.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `BulkUpsertStatusResponse` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // validate the optional field `status`
      if (jsonObj.get("status") != null && !jsonObj.get("status").isJsonNull()) {
        BulkUpsertStatus.validateJsonElement(jsonObj.get("status"));
      }
      if ((jsonObj.get("result_url") != null && !jsonObj.get("result_url").isJsonNull()) && !jsonObj.get("result_url").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `result_url` to be a primitive type in the JSON string but got `%s`", jsonObj.get("result_url").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!BulkUpsertStatusResponse.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'BulkUpsertStatusResponse' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<BulkUpsertStatusResponse> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(BulkUpsertStatusResponse.class));

       return (TypeAdapter<T>) new TypeAdapter<BulkUpsertStatusResponse>() {
           @Override
           public void write(JsonWriter out, BulkUpsertStatusResponse value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public BulkUpsertStatusResponse read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of BulkUpsertStatusResponse given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of BulkUpsertStatusResponse
  * @throws IOException if the JSON string is invalid with respect to BulkUpsertStatusResponse
  */
  public static BulkUpsertStatusResponse fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, BulkUpsertStatusResponse.class);
  }

 /**
  * Convert an instance of BulkUpsertStatusResponse to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}
