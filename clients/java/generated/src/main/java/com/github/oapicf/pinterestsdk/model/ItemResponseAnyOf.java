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
import com.github.oapicf.pinterestsdk.model.CatalogsHotelAttributes;
import com.github.oapicf.pinterestsdk.model.CatalogsHotelItemResponse;
import com.github.oapicf.pinterestsdk.model.CatalogsRetailItemResponse;
import com.github.oapicf.pinterestsdk.model.CatalogsType;
import com.github.oapicf.pinterestsdk.model.Pin;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;



import java.io.IOException;
import java.lang.reflect.Type;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonParseException;
import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.reflect.TypeToken;
import com.google.gson.JsonPrimitive;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonSerializationContext;
import com.google.gson.JsonSerializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonArray;
import com.google.gson.JsonParseException;

import com.github.oapicf.pinterestsdk.JSON;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class ItemResponseAnyOf extends AbstractOpenApiSchema {
    private static final Logger log = Logger.getLogger(ItemResponseAnyOf.class.getName());

    public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
        @SuppressWarnings("unchecked")
        @Override
        public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
            if (!ItemResponseAnyOf.class.isAssignableFrom(type.getRawType())) {
                return null; // this class only serializes 'ItemResponseAnyOf' and its subtypes
            }
            final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
            final TypeAdapter<CatalogsRetailItemResponse> adapterCatalogsRetailItemResponse = gson.getDelegateAdapter(this, TypeToken.get(CatalogsRetailItemResponse.class));
            final TypeAdapter<CatalogsHotelItemResponse> adapterCatalogsHotelItemResponse = gson.getDelegateAdapter(this, TypeToken.get(CatalogsHotelItemResponse.class));

            return (TypeAdapter<T>) new TypeAdapter<ItemResponseAnyOf>() {
                @Override
                public void write(JsonWriter out, ItemResponseAnyOf value) throws IOException {
                    if (value == null || value.getActualInstance() == null) {
                        elementAdapter.write(out, null);
                        return;
                    }

                    // check if the actual instance is of the type `CatalogsRetailItemResponse`
                    if (value.getActualInstance() instanceof CatalogsRetailItemResponse) {
                      JsonElement element = adapterCatalogsRetailItemResponse.toJsonTree((CatalogsRetailItemResponse)value.getActualInstance());
                      elementAdapter.write(out, element);
                      return;
                    }
                    // check if the actual instance is of the type `CatalogsHotelItemResponse`
                    if (value.getActualInstance() instanceof CatalogsHotelItemResponse) {
                      JsonElement element = adapterCatalogsHotelItemResponse.toJsonTree((CatalogsHotelItemResponse)value.getActualInstance());
                      elementAdapter.write(out, element);
                      return;
                    }
                    throw new IOException("Failed to serialize as the type doesn't match oneOf schemas: CatalogsHotelItemResponse, CatalogsRetailItemResponse");
                }

                @Override
                public ItemResponseAnyOf read(JsonReader in) throws IOException {
                    Object deserialized = null;
                    JsonElement jsonElement = elementAdapter.read(in);

                    int match = 0;
                    ArrayList<String> errorMessages = new ArrayList<>();
                    TypeAdapter actualAdapter = elementAdapter;

                    // deserialize CatalogsRetailItemResponse
                    try {
                      // validate the JSON object to see if any exception is thrown
                      CatalogsRetailItemResponse.validateJsonElement(jsonElement);
                      actualAdapter = adapterCatalogsRetailItemResponse;
                      match++;
                      log.log(Level.FINER, "Input data matches schema 'CatalogsRetailItemResponse'");
                    } catch (Exception e) {
                      // deserialization failed, continue
                      errorMessages.add(String.format("Deserialization for CatalogsRetailItemResponse failed with `%s`.", e.getMessage()));
                      log.log(Level.FINER, "Input data does not match schema 'CatalogsRetailItemResponse'", e);
                    }
                    // deserialize CatalogsHotelItemResponse
                    try {
                      // validate the JSON object to see if any exception is thrown
                      CatalogsHotelItemResponse.validateJsonElement(jsonElement);
                      actualAdapter = adapterCatalogsHotelItemResponse;
                      match++;
                      log.log(Level.FINER, "Input data matches schema 'CatalogsHotelItemResponse'");
                    } catch (Exception e) {
                      // deserialization failed, continue
                      errorMessages.add(String.format("Deserialization for CatalogsHotelItemResponse failed with `%s`.", e.getMessage()));
                      log.log(Level.FINER, "Input data does not match schema 'CatalogsHotelItemResponse'", e);
                    }

                    if (match == 1) {
                        ItemResponseAnyOf ret = new ItemResponseAnyOf();
                        ret.setActualInstance(actualAdapter.fromJsonTree(jsonElement));
                        return ret;
                    }

                    throw new IOException(String.format("Failed deserialization for ItemResponseAnyOf: %d classes match result, expected 1. Detailed failure message for oneOf schemas: %s. JSON: %s", match, errorMessages, jsonElement.toString()));
                }
            }.nullSafe();
        }
    }

    // store a list of schema names defined in oneOf
    public static final Map<String, Class<?>> schemas = new HashMap<String, Class<?>>();

    public ItemResponseAnyOf() {
        super("oneOf", Boolean.FALSE);
    }

    public ItemResponseAnyOf(CatalogsHotelItemResponse o) {
        super("oneOf", Boolean.FALSE);
        setActualInstance(o);
    }

    public ItemResponseAnyOf(CatalogsRetailItemResponse o) {
        super("oneOf", Boolean.FALSE);
        setActualInstance(o);
    }

    static {
        schemas.put("CatalogsRetailItemResponse", CatalogsRetailItemResponse.class);
        schemas.put("CatalogsHotelItemResponse", CatalogsHotelItemResponse.class);
    }

    @Override
    public Map<String, Class<?>> getSchemas() {
        return ItemResponseAnyOf.schemas;
    }

    /**
     * Set the instance that matches the oneOf child schema, check
     * the instance parameter is valid against the oneOf child schemas:
     * CatalogsHotelItemResponse, CatalogsRetailItemResponse
     *
     * It could be an instance of the 'oneOf' schemas.
     */
    @Override
    public void setActualInstance(Object instance) {
        if (instance instanceof CatalogsRetailItemResponse) {
            super.setActualInstance(instance);
            return;
        }

        if (instance instanceof CatalogsHotelItemResponse) {
            super.setActualInstance(instance);
            return;
        }

        throw new RuntimeException("Invalid instance type. Must be CatalogsHotelItemResponse, CatalogsRetailItemResponse");
    }

    /**
     * Get the actual instance, which can be the following:
     * CatalogsHotelItemResponse, CatalogsRetailItemResponse
     *
     * @return The actual instance (CatalogsHotelItemResponse, CatalogsRetailItemResponse)
     */
    @Override
    public Object getActualInstance() {
        return super.getActualInstance();
    }

    /**
     * Get the actual instance of `CatalogsRetailItemResponse`. If the actual instance is not `CatalogsRetailItemResponse`,
     * the ClassCastException will be thrown.
     *
     * @return The actual instance of `CatalogsRetailItemResponse`
     * @throws ClassCastException if the instance is not `CatalogsRetailItemResponse`
     */
    public CatalogsRetailItemResponse getCatalogsRetailItemResponse() throws ClassCastException {
        return (CatalogsRetailItemResponse)super.getActualInstance();
    }
    /**
     * Get the actual instance of `CatalogsHotelItemResponse`. If the actual instance is not `CatalogsHotelItemResponse`,
     * the ClassCastException will be thrown.
     *
     * @return The actual instance of `CatalogsHotelItemResponse`
     * @throws ClassCastException if the instance is not `CatalogsHotelItemResponse`
     */
    public CatalogsHotelItemResponse getCatalogsHotelItemResponse() throws ClassCastException {
        return (CatalogsHotelItemResponse)super.getActualInstance();
    }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to ItemResponseAnyOf
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
    // validate oneOf schemas one by one
    int validCount = 0;
    ArrayList<String> errorMessages = new ArrayList<>();
    // validate the json string with CatalogsRetailItemResponse
    try {
      CatalogsRetailItemResponse.validateJsonElement(jsonElement);
      validCount++;
    } catch (Exception e) {
      errorMessages.add(String.format("Deserialization for CatalogsRetailItemResponse failed with `%s`.", e.getMessage()));
      // continue to the next one
    }
    // validate the json string with CatalogsHotelItemResponse
    try {
      CatalogsHotelItemResponse.validateJsonElement(jsonElement);
      validCount++;
    } catch (Exception e) {
      errorMessages.add(String.format("Deserialization for CatalogsHotelItemResponse failed with `%s`.", e.getMessage()));
      // continue to the next one
    }
    if (validCount != 1) {
      throw new IOException(String.format("The JSON string is invalid for ItemResponseAnyOf with oneOf schemas: CatalogsHotelItemResponse, CatalogsRetailItemResponse. %d class(es) match the result, expected 1. Detailed failure message for oneOf schemas: %s. JSON: %s", validCount, errorMessages, jsonElement.toString()));
    }
  }

 /**
  * Create an instance of ItemResponseAnyOf given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of ItemResponseAnyOf
  * @throws IOException if the JSON string is invalid with respect to ItemResponseAnyOf
  */
  public static ItemResponseAnyOf fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, ItemResponseAnyOf.class);
  }

 /**
  * Convert an instance of ItemResponseAnyOf to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

