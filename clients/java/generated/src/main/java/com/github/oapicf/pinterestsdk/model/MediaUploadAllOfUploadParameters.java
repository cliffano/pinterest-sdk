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
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class MediaUploadAllOfUploadParameters {
  public static final String SERIALIZED_NAME_X_AMZ_DATE = "x-amz-date";
  @SerializedName(SERIALIZED_NAME_X_AMZ_DATE)
  private String xAmzDate;

  public static final String SERIALIZED_NAME_X_AMZ_SIGNATURE = "x-amz-signature";
  @SerializedName(SERIALIZED_NAME_X_AMZ_SIGNATURE)
  private String xAmzSignature;

  public static final String SERIALIZED_NAME_X_AMZ_SECURITY_TOKEN = "x-amz-security-token";
  @SerializedName(SERIALIZED_NAME_X_AMZ_SECURITY_TOKEN)
  private String xAmzSecurityToken;

  public static final String SERIALIZED_NAME_X_AMZ_ALGORITHM = "x-amz-algorithm";
  @SerializedName(SERIALIZED_NAME_X_AMZ_ALGORITHM)
  private String xAmzAlgorithm;

  public static final String SERIALIZED_NAME_KEY = "key";
  @SerializedName(SERIALIZED_NAME_KEY)
  private String key;

  public static final String SERIALIZED_NAME_POLICY = "policy";
  @SerializedName(SERIALIZED_NAME_POLICY)
  private String policy;

  public static final String SERIALIZED_NAME_X_AMZ_CREDENTIAL = "x-amz-credential";
  @SerializedName(SERIALIZED_NAME_X_AMZ_CREDENTIAL)
  private String xAmzCredential;

  public static final String SERIALIZED_NAME_CONTENT_TYPE = "Content-Type";
  @SerializedName(SERIALIZED_NAME_CONTENT_TYPE)
  private String contentType;

  public MediaUploadAllOfUploadParameters() {
  }

  public MediaUploadAllOfUploadParameters xAmzDate(String xAmzDate) {
    this.xAmzDate = xAmzDate;
    return this;
  }

   /**
   * Get xAmzDate
   * @return xAmzDate
  **/
  @javax.annotation.Nullable
  public String getxAmzDate() {
    return xAmzDate;
  }

  public void setxAmzDate(String xAmzDate) {
    this.xAmzDate = xAmzDate;
  }


  public MediaUploadAllOfUploadParameters xAmzSignature(String xAmzSignature) {
    this.xAmzSignature = xAmzSignature;
    return this;
  }

   /**
   * Get xAmzSignature
   * @return xAmzSignature
  **/
  @javax.annotation.Nullable
  public String getxAmzSignature() {
    return xAmzSignature;
  }

  public void setxAmzSignature(String xAmzSignature) {
    this.xAmzSignature = xAmzSignature;
  }


  public MediaUploadAllOfUploadParameters xAmzSecurityToken(String xAmzSecurityToken) {
    this.xAmzSecurityToken = xAmzSecurityToken;
    return this;
  }

   /**
   * Get xAmzSecurityToken
   * @return xAmzSecurityToken
  **/
  @javax.annotation.Nullable
  public String getxAmzSecurityToken() {
    return xAmzSecurityToken;
  }

  public void setxAmzSecurityToken(String xAmzSecurityToken) {
    this.xAmzSecurityToken = xAmzSecurityToken;
  }


  public MediaUploadAllOfUploadParameters xAmzAlgorithm(String xAmzAlgorithm) {
    this.xAmzAlgorithm = xAmzAlgorithm;
    return this;
  }

   /**
   * Get xAmzAlgorithm
   * @return xAmzAlgorithm
  **/
  @javax.annotation.Nullable
  public String getxAmzAlgorithm() {
    return xAmzAlgorithm;
  }

  public void setxAmzAlgorithm(String xAmzAlgorithm) {
    this.xAmzAlgorithm = xAmzAlgorithm;
  }


  public MediaUploadAllOfUploadParameters key(String key) {
    this.key = key;
    return this;
  }

   /**
   * Get key
   * @return key
  **/
  @javax.annotation.Nullable
  public String getKey() {
    return key;
  }

  public void setKey(String key) {
    this.key = key;
  }


  public MediaUploadAllOfUploadParameters policy(String policy) {
    this.policy = policy;
    return this;
  }

   /**
   * Get policy
   * @return policy
  **/
  @javax.annotation.Nullable
  public String getPolicy() {
    return policy;
  }

  public void setPolicy(String policy) {
    this.policy = policy;
  }


  public MediaUploadAllOfUploadParameters xAmzCredential(String xAmzCredential) {
    this.xAmzCredential = xAmzCredential;
    return this;
  }

   /**
   * Get xAmzCredential
   * @return xAmzCredential
  **/
  @javax.annotation.Nullable
  public String getxAmzCredential() {
    return xAmzCredential;
  }

  public void setxAmzCredential(String xAmzCredential) {
    this.xAmzCredential = xAmzCredential;
  }


  public MediaUploadAllOfUploadParameters contentType(String contentType) {
    this.contentType = contentType;
    return this;
  }

   /**
   * Get contentType
   * @return contentType
  **/
  @javax.annotation.Nullable
  public String getContentType() {
    return contentType;
  }

  public void setContentType(String contentType) {
    this.contentType = contentType;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MediaUploadAllOfUploadParameters mediaUploadAllOfUploadParameters = (MediaUploadAllOfUploadParameters) o;
    return Objects.equals(this.xAmzDate, mediaUploadAllOfUploadParameters.xAmzDate) &&
        Objects.equals(this.xAmzSignature, mediaUploadAllOfUploadParameters.xAmzSignature) &&
        Objects.equals(this.xAmzSecurityToken, mediaUploadAllOfUploadParameters.xAmzSecurityToken) &&
        Objects.equals(this.xAmzAlgorithm, mediaUploadAllOfUploadParameters.xAmzAlgorithm) &&
        Objects.equals(this.key, mediaUploadAllOfUploadParameters.key) &&
        Objects.equals(this.policy, mediaUploadAllOfUploadParameters.policy) &&
        Objects.equals(this.xAmzCredential, mediaUploadAllOfUploadParameters.xAmzCredential) &&
        Objects.equals(this.contentType, mediaUploadAllOfUploadParameters.contentType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(xAmzDate, xAmzSignature, xAmzSecurityToken, xAmzAlgorithm, key, policy, xAmzCredential, contentType);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MediaUploadAllOfUploadParameters {\n");
    sb.append("    xAmzDate: ").append(toIndentedString(xAmzDate)).append("\n");
    sb.append("    xAmzSignature: ").append(toIndentedString(xAmzSignature)).append("\n");
    sb.append("    xAmzSecurityToken: ").append(toIndentedString(xAmzSecurityToken)).append("\n");
    sb.append("    xAmzAlgorithm: ").append(toIndentedString(xAmzAlgorithm)).append("\n");
    sb.append("    key: ").append(toIndentedString(key)).append("\n");
    sb.append("    policy: ").append(toIndentedString(policy)).append("\n");
    sb.append("    xAmzCredential: ").append(toIndentedString(xAmzCredential)).append("\n");
    sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
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
    openapiFields.add("x-amz-date");
    openapiFields.add("x-amz-signature");
    openapiFields.add("x-amz-security-token");
    openapiFields.add("x-amz-algorithm");
    openapiFields.add("key");
    openapiFields.add("policy");
    openapiFields.add("x-amz-credential");
    openapiFields.add("Content-Type");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to MediaUploadAllOfUploadParameters
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!MediaUploadAllOfUploadParameters.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in MediaUploadAllOfUploadParameters is not found in the empty JSON string", MediaUploadAllOfUploadParameters.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!MediaUploadAllOfUploadParameters.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `MediaUploadAllOfUploadParameters` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("x-amz-date") != null && !jsonObj.get("x-amz-date").isJsonNull()) && !jsonObj.get("x-amz-date").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `x-amz-date` to be a primitive type in the JSON string but got `%s`", jsonObj.get("x-amz-date").toString()));
      }
      if ((jsonObj.get("x-amz-signature") != null && !jsonObj.get("x-amz-signature").isJsonNull()) && !jsonObj.get("x-amz-signature").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `x-amz-signature` to be a primitive type in the JSON string but got `%s`", jsonObj.get("x-amz-signature").toString()));
      }
      if ((jsonObj.get("x-amz-security-token") != null && !jsonObj.get("x-amz-security-token").isJsonNull()) && !jsonObj.get("x-amz-security-token").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `x-amz-security-token` to be a primitive type in the JSON string but got `%s`", jsonObj.get("x-amz-security-token").toString()));
      }
      if ((jsonObj.get("x-amz-algorithm") != null && !jsonObj.get("x-amz-algorithm").isJsonNull()) && !jsonObj.get("x-amz-algorithm").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `x-amz-algorithm` to be a primitive type in the JSON string but got `%s`", jsonObj.get("x-amz-algorithm").toString()));
      }
      if ((jsonObj.get("key") != null && !jsonObj.get("key").isJsonNull()) && !jsonObj.get("key").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `key` to be a primitive type in the JSON string but got `%s`", jsonObj.get("key").toString()));
      }
      if ((jsonObj.get("policy") != null && !jsonObj.get("policy").isJsonNull()) && !jsonObj.get("policy").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `policy` to be a primitive type in the JSON string but got `%s`", jsonObj.get("policy").toString()));
      }
      if ((jsonObj.get("x-amz-credential") != null && !jsonObj.get("x-amz-credential").isJsonNull()) && !jsonObj.get("x-amz-credential").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `x-amz-credential` to be a primitive type in the JSON string but got `%s`", jsonObj.get("x-amz-credential").toString()));
      }
      if ((jsonObj.get("Content-Type") != null && !jsonObj.get("Content-Type").isJsonNull()) && !jsonObj.get("Content-Type").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `Content-Type` to be a primitive type in the JSON string but got `%s`", jsonObj.get("Content-Type").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!MediaUploadAllOfUploadParameters.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'MediaUploadAllOfUploadParameters' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<MediaUploadAllOfUploadParameters> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(MediaUploadAllOfUploadParameters.class));

       return (TypeAdapter<T>) new TypeAdapter<MediaUploadAllOfUploadParameters>() {
           @Override
           public void write(JsonWriter out, MediaUploadAllOfUploadParameters value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public MediaUploadAllOfUploadParameters read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of MediaUploadAllOfUploadParameters given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of MediaUploadAllOfUploadParameters
  * @throws IOException if the JSON string is invalid with respect to MediaUploadAllOfUploadParameters
  */
  public static MediaUploadAllOfUploadParameters fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, MediaUploadAllOfUploadParameters.class);
  }

 /**
  * Convert an instance of MediaUploadAllOfUploadParameters to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

