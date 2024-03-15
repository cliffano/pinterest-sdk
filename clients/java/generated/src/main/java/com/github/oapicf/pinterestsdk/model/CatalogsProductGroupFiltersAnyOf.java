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
import com.github.oapicf.pinterestsdk.model.CatalogsProductGroupFilterKeys;
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
 * CatalogsProductGroupFiltersAnyOf
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsProductGroupFiltersAnyOf {
  public static final String SERIALIZED_NAME_ANY_OF = "any_of";
  @SerializedName(SERIALIZED_NAME_ANY_OF)
  private List<CatalogsProductGroupFilterKeys> anyOf = new ArrayList<>();

  public CatalogsProductGroupFiltersAnyOf() {
  }

  public CatalogsProductGroupFiltersAnyOf anyOf(List<CatalogsProductGroupFilterKeys> anyOf) {
    this.anyOf = anyOf;
    return this;
  }

  public CatalogsProductGroupFiltersAnyOf addAnyOfItem(CatalogsProductGroupFilterKeys anyOfItem) {
    if (this.anyOf == null) {
      this.anyOf = new ArrayList<>();
    }
    this.anyOf.add(anyOfItem);
    return this;
  }

   /**
   * Get anyOf
   * @return anyOf
  **/
  @javax.annotation.Nonnull
  public List<CatalogsProductGroupFilterKeys> getAnyOf() {
    return anyOf;
  }

  public void setAnyOf(List<CatalogsProductGroupFilterKeys> anyOf) {
    this.anyOf = anyOf;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsProductGroupFiltersAnyOf catalogsProductGroupFiltersAnyOf = (CatalogsProductGroupFiltersAnyOf) o;
    return Objects.equals(this.anyOf, catalogsProductGroupFiltersAnyOf.anyOf);
  }

  @Override
  public int hashCode() {
    return Objects.hash(anyOf);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsProductGroupFiltersAnyOf {\n");
    sb.append("    anyOf: ").append(toIndentedString(anyOf)).append("\n");
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
    openapiFields.add("any_of");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("any_of");
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to CatalogsProductGroupFiltersAnyOf
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!CatalogsProductGroupFiltersAnyOf.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in CatalogsProductGroupFiltersAnyOf is not found in the empty JSON string", CatalogsProductGroupFiltersAnyOf.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!CatalogsProductGroupFiltersAnyOf.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `CatalogsProductGroupFiltersAnyOf` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : CatalogsProductGroupFiltersAnyOf.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // ensure the required json array is present
      if (jsonObj.get("any_of") == null) {
        throw new IllegalArgumentException("Expected the field `linkedContent` to be an array in the JSON string but got `null`");
      } else if (!jsonObj.get("any_of").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `any_of` to be an array in the JSON string but got `%s`", jsonObj.get("any_of").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!CatalogsProductGroupFiltersAnyOf.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'CatalogsProductGroupFiltersAnyOf' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<CatalogsProductGroupFiltersAnyOf> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(CatalogsProductGroupFiltersAnyOf.class));

       return (TypeAdapter<T>) new TypeAdapter<CatalogsProductGroupFiltersAnyOf>() {
           @Override
           public void write(JsonWriter out, CatalogsProductGroupFiltersAnyOf value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public CatalogsProductGroupFiltersAnyOf read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of CatalogsProductGroupFiltersAnyOf given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of CatalogsProductGroupFiltersAnyOf
  * @throws IOException if the JSON string is invalid with respect to CatalogsProductGroupFiltersAnyOf
  */
  public static CatalogsProductGroupFiltersAnyOf fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, CatalogsProductGroupFiltersAnyOf.class);
  }

 /**
  * Convert an instance of CatalogsProductGroupFiltersAnyOf to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

