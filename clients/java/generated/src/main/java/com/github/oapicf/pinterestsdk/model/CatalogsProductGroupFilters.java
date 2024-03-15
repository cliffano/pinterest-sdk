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
import com.github.oapicf.pinterestsdk.model.CatalogsProductGroupFiltersAllOf;
import com.github.oapicf.pinterestsdk.model.CatalogsProductGroupFiltersAnyOf;
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
public class CatalogsProductGroupFilters extends AbstractOpenApiSchema {
    private static final Logger log = Logger.getLogger(CatalogsProductGroupFilters.class.getName());

    public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
        @SuppressWarnings("unchecked")
        @Override
        public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
            if (!CatalogsProductGroupFilters.class.isAssignableFrom(type.getRawType())) {
                return null; // this class only serializes 'CatalogsProductGroupFilters' and its subtypes
            }
            final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
            final TypeAdapter<CatalogsProductGroupFiltersAnyOf> adapterCatalogsProductGroupFiltersAnyOf = gson.getDelegateAdapter(this, TypeToken.get(CatalogsProductGroupFiltersAnyOf.class));
            final TypeAdapter<CatalogsProductGroupFiltersAllOf> adapterCatalogsProductGroupFiltersAllOf = gson.getDelegateAdapter(this, TypeToken.get(CatalogsProductGroupFiltersAllOf.class));

            return (TypeAdapter<T>) new TypeAdapter<CatalogsProductGroupFilters>() {
                @Override
                public void write(JsonWriter out, CatalogsProductGroupFilters value) throws IOException {
                    if (value == null || value.getActualInstance() == null) {
                        elementAdapter.write(out, null);
                        return;
                    }

                    // check if the actual instance is of the type `CatalogsProductGroupFiltersAnyOf`
                    if (value.getActualInstance() instanceof CatalogsProductGroupFiltersAnyOf) {
                      JsonElement element = adapterCatalogsProductGroupFiltersAnyOf.toJsonTree((CatalogsProductGroupFiltersAnyOf)value.getActualInstance());
                      elementAdapter.write(out, element);
                      return;
                    }
                    // check if the actual instance is of the type `CatalogsProductGroupFiltersAllOf`
                    if (value.getActualInstance() instanceof CatalogsProductGroupFiltersAllOf) {
                      JsonElement element = adapterCatalogsProductGroupFiltersAllOf.toJsonTree((CatalogsProductGroupFiltersAllOf)value.getActualInstance());
                      elementAdapter.write(out, element);
                      return;
                    }
                    throw new IOException("Failed to serialize as the type doesn't match anyOf schemae: CatalogsProductGroupFiltersAllOf, CatalogsProductGroupFiltersAnyOf");
                }

                @Override
                public CatalogsProductGroupFilters read(JsonReader in) throws IOException {
                    Object deserialized = null;
                    JsonElement jsonElement = elementAdapter.read(in);

                    ArrayList<String> errorMessages = new ArrayList<>();
                    TypeAdapter actualAdapter = elementAdapter;

                    // deserialize CatalogsProductGroupFiltersAnyOf
                    try {
                      // validate the JSON object to see if any exception is thrown
                      CatalogsProductGroupFiltersAnyOf.validateJsonElement(jsonElement);
                      actualAdapter = adapterCatalogsProductGroupFiltersAnyOf;
                      CatalogsProductGroupFilters ret = new CatalogsProductGroupFilters();
                      ret.setActualInstance(actualAdapter.fromJsonTree(jsonElement));
                      return ret;
                    } catch (Exception e) {
                      // deserialization failed, continue
                      errorMessages.add(String.format("Deserialization for CatalogsProductGroupFiltersAnyOf failed with `%s`.", e.getMessage()));
                      log.log(Level.FINER, "Input data does not match schema 'CatalogsProductGroupFiltersAnyOf'", e);
                    }
                    // deserialize CatalogsProductGroupFiltersAllOf
                    try {
                      // validate the JSON object to see if any exception is thrown
                      CatalogsProductGroupFiltersAllOf.validateJsonElement(jsonElement);
                      actualAdapter = adapterCatalogsProductGroupFiltersAllOf;
                      CatalogsProductGroupFilters ret = new CatalogsProductGroupFilters();
                      ret.setActualInstance(actualAdapter.fromJsonTree(jsonElement));
                      return ret;
                    } catch (Exception e) {
                      // deserialization failed, continue
                      errorMessages.add(String.format("Deserialization for CatalogsProductGroupFiltersAllOf failed with `%s`.", e.getMessage()));
                      log.log(Level.FINER, "Input data does not match schema 'CatalogsProductGroupFiltersAllOf'", e);
                    }

                    throw new IOException(String.format("Failed deserialization for CatalogsProductGroupFilters: no class matches result, expected at least 1. Detailed failure message for anyOf schemas: %s. JSON: %s", errorMessages, jsonElement.toString()));
                }
            }.nullSafe();
        }
    }

    // store a list of schema names defined in anyOf
    public static final Map<String, Class<?>> schemas = new HashMap<String, Class<?>>();

    public CatalogsProductGroupFilters() {
        super("anyOf", Boolean.FALSE);
    }

    public CatalogsProductGroupFilters(CatalogsProductGroupFiltersAllOf o) {
        super("anyOf", Boolean.FALSE);
        setActualInstance(o);
    }

    public CatalogsProductGroupFilters(CatalogsProductGroupFiltersAnyOf o) {
        super("anyOf", Boolean.FALSE);
        setActualInstance(o);
    }

    static {
        schemas.put("CatalogsProductGroupFiltersAnyOf", CatalogsProductGroupFiltersAnyOf.class);
        schemas.put("CatalogsProductGroupFiltersAllOf", CatalogsProductGroupFiltersAllOf.class);
    }

    @Override
    public Map<String, Class<?>> getSchemas() {
        return CatalogsProductGroupFilters.schemas;
    }

    /**
     * Set the instance that matches the anyOf child schema, check
     * the instance parameter is valid against the anyOf child schemas:
     * CatalogsProductGroupFiltersAllOf, CatalogsProductGroupFiltersAnyOf
     *
     * It could be an instance of the 'anyOf' schemas.
     */
    @Override
    public void setActualInstance(Object instance) {
        if (instance instanceof CatalogsProductGroupFiltersAnyOf) {
            super.setActualInstance(instance);
            return;
        }

        if (instance instanceof CatalogsProductGroupFiltersAllOf) {
            super.setActualInstance(instance);
            return;
        }

        throw new RuntimeException("Invalid instance type. Must be CatalogsProductGroupFiltersAllOf, CatalogsProductGroupFiltersAnyOf");
    }

    /**
     * Get the actual instance, which can be the following:
     * CatalogsProductGroupFiltersAllOf, CatalogsProductGroupFiltersAnyOf
     *
     * @return The actual instance (CatalogsProductGroupFiltersAllOf, CatalogsProductGroupFiltersAnyOf)
     */
    @Override
    public Object getActualInstance() {
        return super.getActualInstance();
    }

    /**
     * Get the actual instance of `CatalogsProductGroupFiltersAnyOf`. If the actual instance is not `CatalogsProductGroupFiltersAnyOf`,
     * the ClassCastException will be thrown.
     *
     * @return The actual instance of `CatalogsProductGroupFiltersAnyOf`
     * @throws ClassCastException if the instance is not `CatalogsProductGroupFiltersAnyOf`
     */
    public CatalogsProductGroupFiltersAnyOf getCatalogsProductGroupFiltersAnyOf() throws ClassCastException {
        return (CatalogsProductGroupFiltersAnyOf)super.getActualInstance();
    }
    /**
     * Get the actual instance of `CatalogsProductGroupFiltersAllOf`. If the actual instance is not `CatalogsProductGroupFiltersAllOf`,
     * the ClassCastException will be thrown.
     *
     * @return The actual instance of `CatalogsProductGroupFiltersAllOf`
     * @throws ClassCastException if the instance is not `CatalogsProductGroupFiltersAllOf`
     */
    public CatalogsProductGroupFiltersAllOf getCatalogsProductGroupFiltersAllOf() throws ClassCastException {
        return (CatalogsProductGroupFiltersAllOf)super.getActualInstance();
    }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to CatalogsProductGroupFilters
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
    // validate anyOf schemas one by one
    ArrayList<String> errorMessages = new ArrayList<>();
    // validate the json string with CatalogsProductGroupFiltersAnyOf
    try {
      CatalogsProductGroupFiltersAnyOf.validateJsonElement(jsonElement);
      return;
    } catch (Exception e) {
      errorMessages.add(String.format("Deserialization for CatalogsProductGroupFiltersAnyOf failed with `%s`.", e.getMessage()));
      // continue to the next one
    }
    // validate the json string with CatalogsProductGroupFiltersAllOf
    try {
      CatalogsProductGroupFiltersAllOf.validateJsonElement(jsonElement);
      return;
    } catch (Exception e) {
      errorMessages.add(String.format("Deserialization for CatalogsProductGroupFiltersAllOf failed with `%s`.", e.getMessage()));
      // continue to the next one
    }
    throw new IOException(String.format("The JSON string is invalid for CatalogsProductGroupFilters with anyOf schemas: CatalogsProductGroupFiltersAllOf, CatalogsProductGroupFiltersAnyOf. no class match the result, expected at least 1. Detailed failure message for anyOf schemas: %s. JSON: %s", errorMessages, jsonElement.toString()));
    
  }

 /**
  * Create an instance of CatalogsProductGroupFilters given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of CatalogsProductGroupFilters
  * @throws IOException if the JSON string is invalid with respect to CatalogsProductGroupFilters
  */
  public static CatalogsProductGroupFilters fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, CatalogsProductGroupFilters.class);
  }

 /**
  * Convert an instance of CatalogsProductGroupFilters to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}
