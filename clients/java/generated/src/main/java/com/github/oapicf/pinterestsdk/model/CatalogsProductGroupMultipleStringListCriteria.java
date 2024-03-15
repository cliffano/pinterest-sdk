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
 * CatalogsProductGroupMultipleStringListCriteria
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsProductGroupMultipleStringListCriteria {
  public static final String SERIALIZED_NAME_VALUES = "values";
  @SerializedName(SERIALIZED_NAME_VALUES)
  private List<List<String>> values = new ArrayList<>();

  public static final String SERIALIZED_NAME_NEGATED = "negated";
  @SerializedName(SERIALIZED_NAME_NEGATED)
  private Boolean negated = false;

  public CatalogsProductGroupMultipleStringListCriteria() {
  }

  public CatalogsProductGroupMultipleStringListCriteria values(List<List<String>> values) {
    this.values = values;
    return this;
  }

  public CatalogsProductGroupMultipleStringListCriteria addValuesItem(List<String> valuesItem) {
    if (this.values == null) {
      this.values = new ArrayList<>();
    }
    this.values.add(valuesItem);
    return this;
  }

   /**
   * Get values
   * @return values
  **/
  @javax.annotation.Nonnull
  public List<List<String>> getValues() {
    return values;
  }

  public void setValues(List<List<String>> values) {
    this.values = values;
  }


  public CatalogsProductGroupMultipleStringListCriteria negated(Boolean negated) {
    this.negated = negated;
    return this;
  }

   /**
   * Get negated
   * @return negated
  **/
  @javax.annotation.Nullable
  public Boolean getNegated() {
    return negated;
  }

  public void setNegated(Boolean negated) {
    this.negated = negated;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsProductGroupMultipleStringListCriteria catalogsProductGroupMultipleStringListCriteria = (CatalogsProductGroupMultipleStringListCriteria) o;
    return Objects.equals(this.values, catalogsProductGroupMultipleStringListCriteria.values) &&
        Objects.equals(this.negated, catalogsProductGroupMultipleStringListCriteria.negated);
  }

  @Override
  public int hashCode() {
    return Objects.hash(values, negated);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsProductGroupMultipleStringListCriteria {\n");
    sb.append("    values: ").append(toIndentedString(values)).append("\n");
    sb.append("    negated: ").append(toIndentedString(negated)).append("\n");
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
    openapiFields.add("values");
    openapiFields.add("negated");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("values");
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to CatalogsProductGroupMultipleStringListCriteria
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!CatalogsProductGroupMultipleStringListCriteria.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in CatalogsProductGroupMultipleStringListCriteria is not found in the empty JSON string", CatalogsProductGroupMultipleStringListCriteria.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!CatalogsProductGroupMultipleStringListCriteria.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `CatalogsProductGroupMultipleStringListCriteria` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : CatalogsProductGroupMultipleStringListCriteria.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // ensure the required json array is present
      if (jsonObj.get("values") == null) {
        throw new IllegalArgumentException("Expected the field `linkedContent` to be an array in the JSON string but got `null`");
      } else if (!jsonObj.get("values").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `values` to be an array in the JSON string but got `%s`", jsonObj.get("values").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!CatalogsProductGroupMultipleStringListCriteria.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'CatalogsProductGroupMultipleStringListCriteria' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<CatalogsProductGroupMultipleStringListCriteria> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(CatalogsProductGroupMultipleStringListCriteria.class));

       return (TypeAdapter<T>) new TypeAdapter<CatalogsProductGroupMultipleStringListCriteria>() {
           @Override
           public void write(JsonWriter out, CatalogsProductGroupMultipleStringListCriteria value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public CatalogsProductGroupMultipleStringListCriteria read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of CatalogsProductGroupMultipleStringListCriteria given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of CatalogsProductGroupMultipleStringListCriteria
  * @throws IOException if the JSON string is invalid with respect to CatalogsProductGroupMultipleStringListCriteria
  */
  public static CatalogsProductGroupMultipleStringListCriteria fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, CatalogsProductGroupMultipleStringListCriteria.class);
  }

 /**
  * Convert an instance of CatalogsProductGroupMultipleStringListCriteria to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

