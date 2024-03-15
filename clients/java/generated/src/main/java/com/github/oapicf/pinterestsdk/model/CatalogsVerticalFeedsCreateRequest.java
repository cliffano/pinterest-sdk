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
import com.github.oapicf.pinterestsdk.model.CatalogsFeedCredentials;
import com.github.oapicf.pinterestsdk.model.CatalogsFeedProcessingSchedule;
import com.github.oapicf.pinterestsdk.model.CatalogsFeedsCreateRequestDefaultLocale;
import com.github.oapicf.pinterestsdk.model.CatalogsFormat;
import com.github.oapicf.pinterestsdk.model.CatalogsHotelFeedsCreateRequest;
import com.github.oapicf.pinterestsdk.model.CatalogsRetailFeedsCreateRequest;
import com.github.oapicf.pinterestsdk.model.CatalogsType;
import com.github.oapicf.pinterestsdk.model.Country;
import com.github.oapicf.pinterestsdk.model.NullableCurrency;
import com.github.oapicf.pinterestsdk.model.ProductAvailabilityType;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.Arrays;
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
public class CatalogsVerticalFeedsCreateRequest extends AbstractOpenApiSchema {
    private static final Logger log = Logger.getLogger(CatalogsVerticalFeedsCreateRequest.class.getName());

    public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
        @SuppressWarnings("unchecked")
        @Override
        public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
            if (!CatalogsVerticalFeedsCreateRequest.class.isAssignableFrom(type.getRawType())) {
                return null; // this class only serializes 'CatalogsVerticalFeedsCreateRequest' and its subtypes
            }
            final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
            final TypeAdapter<CatalogsRetailFeedsCreateRequest> adapterCatalogsRetailFeedsCreateRequest = gson.getDelegateAdapter(this, TypeToken.get(CatalogsRetailFeedsCreateRequest.class));
            final TypeAdapter<CatalogsHotelFeedsCreateRequest> adapterCatalogsHotelFeedsCreateRequest = gson.getDelegateAdapter(this, TypeToken.get(CatalogsHotelFeedsCreateRequest.class));

            return (TypeAdapter<T>) new TypeAdapter<CatalogsVerticalFeedsCreateRequest>() {
                @Override
                public void write(JsonWriter out, CatalogsVerticalFeedsCreateRequest value) throws IOException {
                    if (value == null || value.getActualInstance() == null) {
                        elementAdapter.write(out, null);
                        return;
                    }

                    // check if the actual instance is of the type `CatalogsRetailFeedsCreateRequest`
                    if (value.getActualInstance() instanceof CatalogsRetailFeedsCreateRequest) {
                      JsonElement element = adapterCatalogsRetailFeedsCreateRequest.toJsonTree((CatalogsRetailFeedsCreateRequest)value.getActualInstance());
                      elementAdapter.write(out, element);
                      return;
                    }
                    // check if the actual instance is of the type `CatalogsHotelFeedsCreateRequest`
                    if (value.getActualInstance() instanceof CatalogsHotelFeedsCreateRequest) {
                      JsonElement element = adapterCatalogsHotelFeedsCreateRequest.toJsonTree((CatalogsHotelFeedsCreateRequest)value.getActualInstance());
                      elementAdapter.write(out, element);
                      return;
                    }
                    throw new IOException("Failed to serialize as the type doesn't match oneOf schemas: CatalogsHotelFeedsCreateRequest, CatalogsRetailFeedsCreateRequest");
                }

                @Override
                public CatalogsVerticalFeedsCreateRequest read(JsonReader in) throws IOException {
                    Object deserialized = null;
                    JsonElement jsonElement = elementAdapter.read(in);

                    int match = 0;
                    ArrayList<String> errorMessages = new ArrayList<>();
                    TypeAdapter actualAdapter = elementAdapter;

                    // deserialize CatalogsRetailFeedsCreateRequest
                    try {
                      // validate the JSON object to see if any exception is thrown
                      CatalogsRetailFeedsCreateRequest.validateJsonElement(jsonElement);
                      actualAdapter = adapterCatalogsRetailFeedsCreateRequest;
                      match++;
                      log.log(Level.FINER, "Input data matches schema 'CatalogsRetailFeedsCreateRequest'");
                    } catch (Exception e) {
                      // deserialization failed, continue
                      errorMessages.add(String.format("Deserialization for CatalogsRetailFeedsCreateRequest failed with `%s`.", e.getMessage()));
                      log.log(Level.FINER, "Input data does not match schema 'CatalogsRetailFeedsCreateRequest'", e);
                    }
                    // deserialize CatalogsHotelFeedsCreateRequest
                    try {
                      // validate the JSON object to see if any exception is thrown
                      CatalogsHotelFeedsCreateRequest.validateJsonElement(jsonElement);
                      actualAdapter = adapterCatalogsHotelFeedsCreateRequest;
                      match++;
                      log.log(Level.FINER, "Input data matches schema 'CatalogsHotelFeedsCreateRequest'");
                    } catch (Exception e) {
                      // deserialization failed, continue
                      errorMessages.add(String.format("Deserialization for CatalogsHotelFeedsCreateRequest failed with `%s`.", e.getMessage()));
                      log.log(Level.FINER, "Input data does not match schema 'CatalogsHotelFeedsCreateRequest'", e);
                    }

                    if (match == 1) {
                        CatalogsVerticalFeedsCreateRequest ret = new CatalogsVerticalFeedsCreateRequest();
                        ret.setActualInstance(actualAdapter.fromJsonTree(jsonElement));
                        return ret;
                    }

                    throw new IOException(String.format("Failed deserialization for CatalogsVerticalFeedsCreateRequest: %d classes match result, expected 1. Detailed failure message for oneOf schemas: %s. JSON: %s", match, errorMessages, jsonElement.toString()));
                }
            }.nullSafe();
        }
    }

    // store a list of schema names defined in oneOf
    public static final Map<String, Class<?>> schemas = new HashMap<String, Class<?>>();

    public CatalogsVerticalFeedsCreateRequest() {
        super("oneOf", Boolean.FALSE);
    }

    public CatalogsVerticalFeedsCreateRequest(CatalogsHotelFeedsCreateRequest o) {
        super("oneOf", Boolean.FALSE);
        setActualInstance(o);
    }

    public CatalogsVerticalFeedsCreateRequest(CatalogsRetailFeedsCreateRequest o) {
        super("oneOf", Boolean.FALSE);
        setActualInstance(o);
    }

    static {
        schemas.put("CatalogsRetailFeedsCreateRequest", CatalogsRetailFeedsCreateRequest.class);
        schemas.put("CatalogsHotelFeedsCreateRequest", CatalogsHotelFeedsCreateRequest.class);
    }

    @Override
    public Map<String, Class<?>> getSchemas() {
        return CatalogsVerticalFeedsCreateRequest.schemas;
    }

    /**
     * Set the instance that matches the oneOf child schema, check
     * the instance parameter is valid against the oneOf child schemas:
     * CatalogsHotelFeedsCreateRequest, CatalogsRetailFeedsCreateRequest
     *
     * It could be an instance of the 'oneOf' schemas.
     */
    @Override
    public void setActualInstance(Object instance) {
        if (instance instanceof CatalogsRetailFeedsCreateRequest) {
            super.setActualInstance(instance);
            return;
        }

        if (instance instanceof CatalogsHotelFeedsCreateRequest) {
            super.setActualInstance(instance);
            return;
        }

        throw new RuntimeException("Invalid instance type. Must be CatalogsHotelFeedsCreateRequest, CatalogsRetailFeedsCreateRequest");
    }

    /**
     * Get the actual instance, which can be the following:
     * CatalogsHotelFeedsCreateRequest, CatalogsRetailFeedsCreateRequest
     *
     * @return The actual instance (CatalogsHotelFeedsCreateRequest, CatalogsRetailFeedsCreateRequest)
     */
    @Override
    public Object getActualInstance() {
        return super.getActualInstance();
    }

    /**
     * Get the actual instance of `CatalogsRetailFeedsCreateRequest`. If the actual instance is not `CatalogsRetailFeedsCreateRequest`,
     * the ClassCastException will be thrown.
     *
     * @return The actual instance of `CatalogsRetailFeedsCreateRequest`
     * @throws ClassCastException if the instance is not `CatalogsRetailFeedsCreateRequest`
     */
    public CatalogsRetailFeedsCreateRequest getCatalogsRetailFeedsCreateRequest() throws ClassCastException {
        return (CatalogsRetailFeedsCreateRequest)super.getActualInstance();
    }
    /**
     * Get the actual instance of `CatalogsHotelFeedsCreateRequest`. If the actual instance is not `CatalogsHotelFeedsCreateRequest`,
     * the ClassCastException will be thrown.
     *
     * @return The actual instance of `CatalogsHotelFeedsCreateRequest`
     * @throws ClassCastException if the instance is not `CatalogsHotelFeedsCreateRequest`
     */
    public CatalogsHotelFeedsCreateRequest getCatalogsHotelFeedsCreateRequest() throws ClassCastException {
        return (CatalogsHotelFeedsCreateRequest)super.getActualInstance();
    }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to CatalogsVerticalFeedsCreateRequest
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
    // validate oneOf schemas one by one
    int validCount = 0;
    ArrayList<String> errorMessages = new ArrayList<>();
    // validate the json string with CatalogsRetailFeedsCreateRequest
    try {
      CatalogsRetailFeedsCreateRequest.validateJsonElement(jsonElement);
      validCount++;
    } catch (Exception e) {
      errorMessages.add(String.format("Deserialization for CatalogsRetailFeedsCreateRequest failed with `%s`.", e.getMessage()));
      // continue to the next one
    }
    // validate the json string with CatalogsHotelFeedsCreateRequest
    try {
      CatalogsHotelFeedsCreateRequest.validateJsonElement(jsonElement);
      validCount++;
    } catch (Exception e) {
      errorMessages.add(String.format("Deserialization for CatalogsHotelFeedsCreateRequest failed with `%s`.", e.getMessage()));
      // continue to the next one
    }
    if (validCount != 1) {
      throw new IOException(String.format("The JSON string is invalid for CatalogsVerticalFeedsCreateRequest with oneOf schemas: CatalogsHotelFeedsCreateRequest, CatalogsRetailFeedsCreateRequest. %d class(es) match the result, expected 1. Detailed failure message for oneOf schemas: %s. JSON: %s", validCount, errorMessages, jsonElement.toString()));
    }
  }

 /**
  * Create an instance of CatalogsVerticalFeedsCreateRequest given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of CatalogsVerticalFeedsCreateRequest
  * @throws IOException if the JSON string is invalid with respect to CatalogsVerticalFeedsCreateRequest
  */
  public static CatalogsVerticalFeedsCreateRequest fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, CatalogsVerticalFeedsCreateRequest.class);
  }

 /**
  * Convert an instance of CatalogsVerticalFeedsCreateRequest to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

