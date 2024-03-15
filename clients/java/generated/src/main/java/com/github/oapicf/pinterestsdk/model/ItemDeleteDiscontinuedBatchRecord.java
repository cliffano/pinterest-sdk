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
 * Object describing an item batch record to discontinue items
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class ItemDeleteDiscontinuedBatchRecord {
  public static final String SERIALIZED_NAME_ITEM_ID = "item_id";
  @SerializedName(SERIALIZED_NAME_ITEM_ID)
  private String itemId;

  public ItemDeleteDiscontinuedBatchRecord() {
  }

  public ItemDeleteDiscontinuedBatchRecord itemId(String itemId) {
    this.itemId = itemId;
    return this;
  }

   /**
   * The catalog item id in the merchant namespace
   * @return itemId
  **/
  @javax.annotation.Nullable
  public String getItemId() {
    return itemId;
  }

  public void setItemId(String itemId) {
    this.itemId = itemId;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ItemDeleteDiscontinuedBatchRecord itemDeleteDiscontinuedBatchRecord = (ItemDeleteDiscontinuedBatchRecord) o;
    return Objects.equals(this.itemId, itemDeleteDiscontinuedBatchRecord.itemId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(itemId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemDeleteDiscontinuedBatchRecord {\n");
    sb.append("    itemId: ").append(toIndentedString(itemId)).append("\n");
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
    openapiFields.add("item_id");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to ItemDeleteDiscontinuedBatchRecord
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!ItemDeleteDiscontinuedBatchRecord.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in ItemDeleteDiscontinuedBatchRecord is not found in the empty JSON string", ItemDeleteDiscontinuedBatchRecord.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!ItemDeleteDiscontinuedBatchRecord.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `ItemDeleteDiscontinuedBatchRecord` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("item_id") != null && !jsonObj.get("item_id").isJsonNull()) && !jsonObj.get("item_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `item_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("item_id").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!ItemDeleteDiscontinuedBatchRecord.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'ItemDeleteDiscontinuedBatchRecord' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<ItemDeleteDiscontinuedBatchRecord> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(ItemDeleteDiscontinuedBatchRecord.class));

       return (TypeAdapter<T>) new TypeAdapter<ItemDeleteDiscontinuedBatchRecord>() {
           @Override
           public void write(JsonWriter out, ItemDeleteDiscontinuedBatchRecord value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public ItemDeleteDiscontinuedBatchRecord read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of ItemDeleteDiscontinuedBatchRecord given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of ItemDeleteDiscontinuedBatchRecord
  * @throws IOException if the JSON string is invalid with respect to ItemDeleteDiscontinuedBatchRecord
  */
  public static ItemDeleteDiscontinuedBatchRecord fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, ItemDeleteDiscontinuedBatchRecord.class);
  }

 /**
  * Convert an instance of ItemDeleteDiscontinuedBatchRecord to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

