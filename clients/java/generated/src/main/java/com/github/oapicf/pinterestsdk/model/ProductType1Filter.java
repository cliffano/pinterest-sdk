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
import com.github.oapicf.pinterestsdk.model.CatalogsProductGroupMultipleStringListCriteria;
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
 * ProductType1Filter
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class ProductType1Filter {
  public static final String SERIALIZED_NAME_P_R_O_D_U_C_T_T_Y_P_E1 = "PRODUCT_TYPE_1";
  @SerializedName(SERIALIZED_NAME_P_R_O_D_U_C_T_T_Y_P_E1)
  private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1;

  public ProductType1Filter() {
  }

  public ProductType1Filter PRODUCT_TYPE_1(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1) {
    this.PRODUCT_TYPE_1 = PRODUCT_TYPE_1;
    return this;
  }

   /**
   * Get PRODUCT_TYPE_1
   * @return PRODUCT_TYPE_1
  **/
  @javax.annotation.Nonnull
  public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE1() {
    return PRODUCT_TYPE_1;
  }

  public void setPRODUCTTYPE1(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1) {
    this.PRODUCT_TYPE_1 = PRODUCT_TYPE_1;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ProductType1Filter productType1Filter = (ProductType1Filter) o;
    return Objects.equals(this.PRODUCT_TYPE_1, productType1Filter.PRODUCT_TYPE_1);
  }

  @Override
  public int hashCode() {
    return Objects.hash(PRODUCT_TYPE_1);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ProductType1Filter {\n");
    sb.append("    PRODUCT_TYPE_1: ").append(toIndentedString(PRODUCT_TYPE_1)).append("\n");
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
    openapiFields.add("PRODUCT_TYPE_1");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("PRODUCT_TYPE_1");
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to ProductType1Filter
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!ProductType1Filter.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in ProductType1Filter is not found in the empty JSON string", ProductType1Filter.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!ProductType1Filter.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `ProductType1Filter` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : ProductType1Filter.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!ProductType1Filter.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'ProductType1Filter' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<ProductType1Filter> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(ProductType1Filter.class));

       return (TypeAdapter<T>) new TypeAdapter<ProductType1Filter>() {
           @Override
           public void write(JsonWriter out, ProductType1Filter value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public ProductType1Filter read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of ProductType1Filter given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of ProductType1Filter
  * @throws IOException if the JSON string is invalid with respect to ProductType1Filter
  */
  public static ProductType1Filter fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, ProductType1Filter.class);
  }

 /**
  * Convert an instance of ProductType1Filter to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

