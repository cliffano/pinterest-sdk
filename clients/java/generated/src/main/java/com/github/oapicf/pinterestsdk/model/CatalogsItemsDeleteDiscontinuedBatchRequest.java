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
import com.github.oapicf.pinterestsdk.model.BatchOperation;
import com.github.oapicf.pinterestsdk.model.Country;
import com.github.oapicf.pinterestsdk.model.ItemDeleteDiscontinuedBatchRecord;
import com.github.oapicf.pinterestsdk.model.Language;
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
 * Request object to discontinue catalogs items
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsItemsDeleteDiscontinuedBatchRequest {
  public static final String SERIALIZED_NAME_COUNTRY = "country";
  @SerializedName(SERIALIZED_NAME_COUNTRY)
  private Country country;

  public static final String SERIALIZED_NAME_LANGUAGE = "language";
  @SerializedName(SERIALIZED_NAME_LANGUAGE)
  private Language language;

  public static final String SERIALIZED_NAME_OPERATION = "operation";
  @SerializedName(SERIALIZED_NAME_OPERATION)
  private BatchOperation operation;

  public static final String SERIALIZED_NAME_ITEMS = "items";
  @SerializedName(SERIALIZED_NAME_ITEMS)
  private List<ItemDeleteDiscontinuedBatchRecord> items = new ArrayList<>();

  public CatalogsItemsDeleteDiscontinuedBatchRequest() {
  }

  public CatalogsItemsDeleteDiscontinuedBatchRequest country(Country country) {
    this.country = country;
    return this;
  }

   /**
   * Get country
   * @return country
  **/
  @javax.annotation.Nonnull
  public Country getCountry() {
    return country;
  }

  public void setCountry(Country country) {
    this.country = country;
  }


  public CatalogsItemsDeleteDiscontinuedBatchRequest language(Language language) {
    this.language = language;
    return this;
  }

   /**
   * Get language
   * @return language
  **/
  @javax.annotation.Nonnull
  public Language getLanguage() {
    return language;
  }

  public void setLanguage(Language language) {
    this.language = language;
  }


  public CatalogsItemsDeleteDiscontinuedBatchRequest operation(BatchOperation operation) {
    this.operation = operation;
    return this;
  }

   /**
   * Get operation
   * @return operation
  **/
  @javax.annotation.Nonnull
  public BatchOperation getOperation() {
    return operation;
  }

  public void setOperation(BatchOperation operation) {
    this.operation = operation;
  }


  public CatalogsItemsDeleteDiscontinuedBatchRequest items(List<ItemDeleteDiscontinuedBatchRecord> items) {
    this.items = items;
    return this;
  }

  public CatalogsItemsDeleteDiscontinuedBatchRequest addItemsItem(ItemDeleteDiscontinuedBatchRecord itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }

   /**
   * Array with catalogs items
   * @return items
  **/
  @javax.annotation.Nonnull
  public List<ItemDeleteDiscontinuedBatchRecord> getItems() {
    return items;
  }

  public void setItems(List<ItemDeleteDiscontinuedBatchRecord> items) {
    this.items = items;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsItemsDeleteDiscontinuedBatchRequest catalogsItemsDeleteDiscontinuedBatchRequest = (CatalogsItemsDeleteDiscontinuedBatchRequest) o;
    return Objects.equals(this.country, catalogsItemsDeleteDiscontinuedBatchRequest.country) &&
        Objects.equals(this.language, catalogsItemsDeleteDiscontinuedBatchRequest.language) &&
        Objects.equals(this.operation, catalogsItemsDeleteDiscontinuedBatchRequest.operation) &&
        Objects.equals(this.items, catalogsItemsDeleteDiscontinuedBatchRequest.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(country, language, operation, items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItemsDeleteDiscontinuedBatchRequest {\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
    sb.append("    operation: ").append(toIndentedString(operation)).append("\n");
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
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
    openapiFields.add("country");
    openapiFields.add("language");
    openapiFields.add("operation");
    openapiFields.add("items");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("country");
    openapiRequiredFields.add("language");
    openapiRequiredFields.add("operation");
    openapiRequiredFields.add("items");
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to CatalogsItemsDeleteDiscontinuedBatchRequest
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!CatalogsItemsDeleteDiscontinuedBatchRequest.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in CatalogsItemsDeleteDiscontinuedBatchRequest is not found in the empty JSON string", CatalogsItemsDeleteDiscontinuedBatchRequest.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!CatalogsItemsDeleteDiscontinuedBatchRequest.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `CatalogsItemsDeleteDiscontinuedBatchRequest` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : CatalogsItemsDeleteDiscontinuedBatchRequest.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // validate the required field `country`
      Country.validateJsonElement(jsonObj.get("country"));
      // validate the required field `language`
      Language.validateJsonElement(jsonObj.get("language"));
      // validate the required field `operation`
      BatchOperation.validateJsonElement(jsonObj.get("operation"));
      // ensure the json data is an array
      if (!jsonObj.get("items").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `items` to be an array in the JSON string but got `%s`", jsonObj.get("items").toString()));
      }

      JsonArray jsonArrayitems = jsonObj.getAsJsonArray("items");
      // validate the required field `items` (array)
      for (int i = 0; i < jsonArrayitems.size(); i++) {
        ItemDeleteDiscontinuedBatchRecord.validateJsonElement(jsonArrayitems.get(i));
      };
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!CatalogsItemsDeleteDiscontinuedBatchRequest.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'CatalogsItemsDeleteDiscontinuedBatchRequest' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<CatalogsItemsDeleteDiscontinuedBatchRequest> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(CatalogsItemsDeleteDiscontinuedBatchRequest.class));

       return (TypeAdapter<T>) new TypeAdapter<CatalogsItemsDeleteDiscontinuedBatchRequest>() {
           @Override
           public void write(JsonWriter out, CatalogsItemsDeleteDiscontinuedBatchRequest value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public CatalogsItemsDeleteDiscontinuedBatchRequest read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of CatalogsItemsDeleteDiscontinuedBatchRequest given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of CatalogsItemsDeleteDiscontinuedBatchRequest
  * @throws IOException if the JSON string is invalid with respect to CatalogsItemsDeleteDiscontinuedBatchRequest
  */
  public static CatalogsItemsDeleteDiscontinuedBatchRequest fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, CatalogsItemsDeleteDiscontinuedBatchRequest.class);
  }

 /**
  * Convert an instance of CatalogsItemsDeleteDiscontinuedBatchRequest to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}
