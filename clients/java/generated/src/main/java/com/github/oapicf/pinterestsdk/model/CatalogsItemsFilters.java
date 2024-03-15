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
import com.github.oapicf.pinterestsdk.model.CatalogsHotelItemsFilter;
import com.github.oapicf.pinterestsdk.model.CatalogsRetailItemsFilter;
import com.github.oapicf.pinterestsdk.model.CatalogsType;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;



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
public class CatalogsItemsFilters extends AbstractOpenApiSchema {
    private static final Logger log = Logger.getLogger(CatalogsItemsFilters.class.getName());

    public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
        @SuppressWarnings("unchecked")
        @Override
        public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
            if (!CatalogsItemsFilters.class.isAssignableFrom(type.getRawType())) {
                return null; // this class only serializes 'CatalogsItemsFilters' and its subtypes
            }
            final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
            final TypeAdapter<CatalogsRetailItemsFilter> adapterCatalogsRetailItemsFilter = gson.getDelegateAdapter(this, TypeToken.get(CatalogsRetailItemsFilter.class));
            final TypeAdapter<CatalogsHotelItemsFilter> adapterCatalogsHotelItemsFilter = gson.getDelegateAdapter(this, TypeToken.get(CatalogsHotelItemsFilter.class));

            return (TypeAdapter<T>) new TypeAdapter<CatalogsItemsFilters>() {
                @Override
                public void write(JsonWriter out, CatalogsItemsFilters value) throws IOException {
                    if (value == null || value.getActualInstance() == null) {
                        elementAdapter.write(out, null);
                        return;
                    }

                    // check if the actual instance is of the type `CatalogsRetailItemsFilter`
                    if (value.getActualInstance() instanceof CatalogsRetailItemsFilter) {
                      JsonElement element = adapterCatalogsRetailItemsFilter.toJsonTree((CatalogsRetailItemsFilter)value.getActualInstance());
                      elementAdapter.write(out, element);
                      return;
                    }
                    // check if the actual instance is of the type `CatalogsHotelItemsFilter`
                    if (value.getActualInstance() instanceof CatalogsHotelItemsFilter) {
                      JsonElement element = adapterCatalogsHotelItemsFilter.toJsonTree((CatalogsHotelItemsFilter)value.getActualInstance());
                      elementAdapter.write(out, element);
                      return;
                    }
                    throw new IOException("Failed to serialize as the type doesn't match oneOf schemas: CatalogsHotelItemsFilter, CatalogsRetailItemsFilter");
                }

                @Override
                public CatalogsItemsFilters read(JsonReader in) throws IOException {
                    Object deserialized = null;
                    JsonElement jsonElement = elementAdapter.read(in);

                    int match = 0;
                    ArrayList<String> errorMessages = new ArrayList<>();
                    TypeAdapter actualAdapter = elementAdapter;

                    // deserialize CatalogsRetailItemsFilter
                    try {
                      // validate the JSON object to see if any exception is thrown
                      CatalogsRetailItemsFilter.validateJsonElement(jsonElement);
                      actualAdapter = adapterCatalogsRetailItemsFilter;
                      match++;
                      log.log(Level.FINER, "Input data matches schema 'CatalogsRetailItemsFilter'");
                    } catch (Exception e) {
                      // deserialization failed, continue
                      errorMessages.add(String.format("Deserialization for CatalogsRetailItemsFilter failed with `%s`.", e.getMessage()));
                      log.log(Level.FINER, "Input data does not match schema 'CatalogsRetailItemsFilter'", e);
                    }
                    // deserialize CatalogsHotelItemsFilter
                    try {
                      // validate the JSON object to see if any exception is thrown
                      CatalogsHotelItemsFilter.validateJsonElement(jsonElement);
                      actualAdapter = adapterCatalogsHotelItemsFilter;
                      match++;
                      log.log(Level.FINER, "Input data matches schema 'CatalogsHotelItemsFilter'");
                    } catch (Exception e) {
                      // deserialization failed, continue
                      errorMessages.add(String.format("Deserialization for CatalogsHotelItemsFilter failed with `%s`.", e.getMessage()));
                      log.log(Level.FINER, "Input data does not match schema 'CatalogsHotelItemsFilter'", e);
                    }

                    if (match == 1) {
                        CatalogsItemsFilters ret = new CatalogsItemsFilters();
                        ret.setActualInstance(actualAdapter.fromJsonTree(jsonElement));
                        return ret;
                    }

                    throw new IOException(String.format("Failed deserialization for CatalogsItemsFilters: %d classes match result, expected 1. Detailed failure message for oneOf schemas: %s. JSON: %s", match, errorMessages, jsonElement.toString()));
                }
            }.nullSafe();
        }
    }

    // store a list of schema names defined in oneOf
    public static final Map<String, Class<?>> schemas = new HashMap<String, Class<?>>();

    public CatalogsItemsFilters() {
        super("oneOf", Boolean.FALSE);
    }

    public CatalogsItemsFilters(CatalogsHotelItemsFilter o) {
        super("oneOf", Boolean.FALSE);
        setActualInstance(o);
    }

    public CatalogsItemsFilters(CatalogsRetailItemsFilter o) {
        super("oneOf", Boolean.FALSE);
        setActualInstance(o);
    }

    static {
        schemas.put("CatalogsRetailItemsFilter", CatalogsRetailItemsFilter.class);
        schemas.put("CatalogsHotelItemsFilter", CatalogsHotelItemsFilter.class);
    }

    @Override
    public Map<String, Class<?>> getSchemas() {
        return CatalogsItemsFilters.schemas;
    }

    /**
     * Set the instance that matches the oneOf child schema, check
     * the instance parameter is valid against the oneOf child schemas:
     * CatalogsHotelItemsFilter, CatalogsRetailItemsFilter
     *
     * It could be an instance of the 'oneOf' schemas.
     */
    @Override
    public void setActualInstance(Object instance) {
        if (instance instanceof CatalogsRetailItemsFilter) {
            super.setActualInstance(instance);
            return;
        }

        if (instance instanceof CatalogsHotelItemsFilter) {
            super.setActualInstance(instance);
            return;
        }

        throw new RuntimeException("Invalid instance type. Must be CatalogsHotelItemsFilter, CatalogsRetailItemsFilter");
    }

    /**
     * Get the actual instance, which can be the following:
     * CatalogsHotelItemsFilter, CatalogsRetailItemsFilter
     *
     * @return The actual instance (CatalogsHotelItemsFilter, CatalogsRetailItemsFilter)
     */
    @Override
    public Object getActualInstance() {
        return super.getActualInstance();
    }

    /**
     * Get the actual instance of `CatalogsRetailItemsFilter`. If the actual instance is not `CatalogsRetailItemsFilter`,
     * the ClassCastException will be thrown.
     *
     * @return The actual instance of `CatalogsRetailItemsFilter`
     * @throws ClassCastException if the instance is not `CatalogsRetailItemsFilter`
     */
    public CatalogsRetailItemsFilter getCatalogsRetailItemsFilter() throws ClassCastException {
        return (CatalogsRetailItemsFilter)super.getActualInstance();
    }
    /**
     * Get the actual instance of `CatalogsHotelItemsFilter`. If the actual instance is not `CatalogsHotelItemsFilter`,
     * the ClassCastException will be thrown.
     *
     * @return The actual instance of `CatalogsHotelItemsFilter`
     * @throws ClassCastException if the instance is not `CatalogsHotelItemsFilter`
     */
    public CatalogsHotelItemsFilter getCatalogsHotelItemsFilter() throws ClassCastException {
        return (CatalogsHotelItemsFilter)super.getActualInstance();
    }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to CatalogsItemsFilters
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
    // validate oneOf schemas one by one
    int validCount = 0;
    ArrayList<String> errorMessages = new ArrayList<>();
    // validate the json string with CatalogsRetailItemsFilter
    try {
      CatalogsRetailItemsFilter.validateJsonElement(jsonElement);
      validCount++;
    } catch (Exception e) {
      errorMessages.add(String.format("Deserialization for CatalogsRetailItemsFilter failed with `%s`.", e.getMessage()));
      // continue to the next one
    }
    // validate the json string with CatalogsHotelItemsFilter
    try {
      CatalogsHotelItemsFilter.validateJsonElement(jsonElement);
      validCount++;
    } catch (Exception e) {
      errorMessages.add(String.format("Deserialization for CatalogsHotelItemsFilter failed with `%s`.", e.getMessage()));
      // continue to the next one
    }
    if (validCount != 1) {
      throw new IOException(String.format("The JSON string is invalid for CatalogsItemsFilters with oneOf schemas: CatalogsHotelItemsFilter, CatalogsRetailItemsFilter. %d class(es) match the result, expected 1. Detailed failure message for oneOf schemas: %s. JSON: %s", validCount, errorMessages, jsonElement.toString()));
    }
  }

 /**
  * Create an instance of CatalogsItemsFilters given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of CatalogsItemsFilters
  * @throws IOException if the JSON string is invalid with respect to CatalogsItemsFilters
  */
  public static CatalogsItemsFilters fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, CatalogsItemsFilters.class);
  }

 /**
  * Convert an instance of CatalogsItemsFilters to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

