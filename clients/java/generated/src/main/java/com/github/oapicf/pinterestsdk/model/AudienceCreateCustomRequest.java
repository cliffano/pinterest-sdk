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
import com.github.oapicf.pinterestsdk.model.AudienceDataParty;
import com.github.oapicf.pinterestsdk.model.AudienceRule;
import com.github.oapicf.pinterestsdk.model.AudienceSharingType;
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
 * AudienceCreateCustomRequest
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceCreateCustomRequest {
  public static final String SERIALIZED_NAME_AD_ACCOUNT_ID = "ad_account_id";
  @SerializedName(SERIALIZED_NAME_AD_ACCOUNT_ID)
  private String adAccountId;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_RULE = "rule";
  @SerializedName(SERIALIZED_NAME_RULE)
  private AudienceRule rule;

  public static final String SERIALIZED_NAME_SHARING_TYPE = "sharing_type";
  @SerializedName(SERIALIZED_NAME_SHARING_TYPE)
  private AudienceSharingType sharingType;

  public static final String SERIALIZED_NAME_DATA_PARTY = "data_party";
  @SerializedName(SERIALIZED_NAME_DATA_PARTY)
  private AudienceDataParty dataParty;

  public static final String SERIALIZED_NAME_CATEGORY = "category";
  @SerializedName(SERIALIZED_NAME_CATEGORY)
  private String category;

  public AudienceCreateCustomRequest() {
  }

  public AudienceCreateCustomRequest adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

   /**
   * Ad account ID.
   * @return adAccountId
  **/
  @javax.annotation.Nullable
  public String getAdAccountId() {
    return adAccountId;
  }

  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }


  public AudienceCreateCustomRequest name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Audience name.
   * @return name
  **/
  @javax.annotation.Nonnull
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }


  public AudienceCreateCustomRequest rule(AudienceRule rule) {
    this.rule = rule;
    return this;
  }

   /**
   * Get rule
   * @return rule
  **/
  @javax.annotation.Nonnull
  public AudienceRule getRule() {
    return rule;
  }

  public void setRule(AudienceRule rule) {
    this.rule = rule;
  }


  public AudienceCreateCustomRequest sharingType(AudienceSharingType sharingType) {
    this.sharingType = sharingType;
    return this;
  }

   /**
   * Get sharingType
   * @return sharingType
  **/
  @javax.annotation.Nonnull
  public AudienceSharingType getSharingType() {
    return sharingType;
  }

  public void setSharingType(AudienceSharingType sharingType) {
    this.sharingType = sharingType;
  }


  public AudienceCreateCustomRequest dataParty(AudienceDataParty dataParty) {
    this.dataParty = dataParty;
    return this;
  }

   /**
   * Get dataParty
   * @return dataParty
  **/
  @javax.annotation.Nonnull
  public AudienceDataParty getDataParty() {
    return dataParty;
  }

  public void setDataParty(AudienceDataParty dataParty) {
    this.dataParty = dataParty;
  }


  public AudienceCreateCustomRequest category(String category) {
    this.category = category;
    return this;
  }

   /**
   * Get category
   * @return category
  **/
  @javax.annotation.Nullable
  public String getCategory() {
    return category;
  }

  public void setCategory(String category) {
    this.category = category;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AudienceCreateCustomRequest audienceCreateCustomRequest = (AudienceCreateCustomRequest) o;
    return Objects.equals(this.adAccountId, audienceCreateCustomRequest.adAccountId) &&
        Objects.equals(this.name, audienceCreateCustomRequest.name) &&
        Objects.equals(this.rule, audienceCreateCustomRequest.rule) &&
        Objects.equals(this.sharingType, audienceCreateCustomRequest.sharingType) &&
        Objects.equals(this.dataParty, audienceCreateCustomRequest.dataParty) &&
        Objects.equals(this.category, audienceCreateCustomRequest.category);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adAccountId, name, rule, sharingType, dataParty, category);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AudienceCreateCustomRequest {\n");
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    rule: ").append(toIndentedString(rule)).append("\n");
    sb.append("    sharingType: ").append(toIndentedString(sharingType)).append("\n");
    sb.append("    dataParty: ").append(toIndentedString(dataParty)).append("\n");
    sb.append("    category: ").append(toIndentedString(category)).append("\n");
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
    openapiFields.add("ad_account_id");
    openapiFields.add("name");
    openapiFields.add("rule");
    openapiFields.add("sharing_type");
    openapiFields.add("data_party");
    openapiFields.add("category");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("name");
    openapiRequiredFields.add("rule");
    openapiRequiredFields.add("sharing_type");
    openapiRequiredFields.add("data_party");
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to AudienceCreateCustomRequest
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!AudienceCreateCustomRequest.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in AudienceCreateCustomRequest is not found in the empty JSON string", AudienceCreateCustomRequest.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!AudienceCreateCustomRequest.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `AudienceCreateCustomRequest` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : AudienceCreateCustomRequest.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("ad_account_id") != null && !jsonObj.get("ad_account_id").isJsonNull()) && !jsonObj.get("ad_account_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `ad_account_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("ad_account_id").toString()));
      }
      if (!jsonObj.get("name").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `name` to be a primitive type in the JSON string but got `%s`", jsonObj.get("name").toString()));
      }
      // validate the required field `rule`
      AudienceRule.validateJsonElement(jsonObj.get("rule"));
      // validate the required field `sharing_type`
      AudienceSharingType.validateJsonElement(jsonObj.get("sharing_type"));
      // validate the required field `data_party`
      AudienceDataParty.validateJsonElement(jsonObj.get("data_party"));
      if ((jsonObj.get("category") != null && !jsonObj.get("category").isJsonNull()) && !jsonObj.get("category").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `category` to be a primitive type in the JSON string but got `%s`", jsonObj.get("category").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!AudienceCreateCustomRequest.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'AudienceCreateCustomRequest' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<AudienceCreateCustomRequest> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(AudienceCreateCustomRequest.class));

       return (TypeAdapter<T>) new TypeAdapter<AudienceCreateCustomRequest>() {
           @Override
           public void write(JsonWriter out, AudienceCreateCustomRequest value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public AudienceCreateCustomRequest read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of AudienceCreateCustomRequest given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of AudienceCreateCustomRequest
  * @throws IOException if the JSON string is invalid with respect to AudienceCreateCustomRequest
  */
  public static AudienceCreateCustomRequest fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, AudienceCreateCustomRequest.class);
  }

 /**
  * Convert an instance of AudienceCreateCustomRequest to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

