/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.cliffano.pinterestsdk.model.CatalogsFeedCredentials;
import com.cliffano.pinterestsdk.model.CatalogsFeedProcessingSchedule;
import com.cliffano.pinterestsdk.model.CatalogsFormat;
import com.cliffano.pinterestsdk.model.CatalogsStatus;
import com.cliffano.pinterestsdk.model.NullableCurrency;
import com.cliffano.pinterestsdk.model.ProductAvailabilityType;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import org.openapitools.jackson.nullable.JsonNullable;

/**
 * Request object for updating a feed.
 */
@ApiModel(description = "Request object for updating a feed.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-07-01T11:59:02.167556Z[Etc/UTC]")
public class CatalogsFeedsUpdateRequest {
  public static final String SERIALIZED_NAME_DEFAULT_AVAILABILITY = "default_availability";
  @SerializedName(SERIALIZED_NAME_DEFAULT_AVAILABILITY)
  private ProductAvailabilityType defaultAvailability;

  public static final String SERIALIZED_NAME_DEFAULT_CURRENCY = "default_currency";
  @SerializedName(SERIALIZED_NAME_DEFAULT_CURRENCY)
  private NullableCurrency defaultCurrency;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_FORMAT = "format";
  @SerializedName(SERIALIZED_NAME_FORMAT)
  private CatalogsFormat format;

  public static final String SERIALIZED_NAME_CREDENTIALS = "credentials";
  @SerializedName(SERIALIZED_NAME_CREDENTIALS)
  private CatalogsFeedCredentials credentials;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private String location;

  public static final String SERIALIZED_NAME_PREFERRED_PROCESSING_SCHEDULE = "preferred_processing_schedule";
  @SerializedName(SERIALIZED_NAME_PREFERRED_PROCESSING_SCHEDULE)
  private CatalogsFeedProcessingSchedule preferredProcessingSchedule;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private CatalogsStatus status;

  public CatalogsFeedsUpdateRequest() { 
  }

  public CatalogsFeedsUpdateRequest defaultAvailability(ProductAvailabilityType defaultAvailability) {
    
    this.defaultAvailability = defaultAvailability;
    return this;
  }

   /**
   * Get defaultAvailability
   * @return defaultAvailability
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ProductAvailabilityType getDefaultAvailability() {
    return defaultAvailability;
  }


  public void setDefaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
  }


  public CatalogsFeedsUpdateRequest defaultCurrency(NullableCurrency defaultCurrency) {
    
    this.defaultCurrency = defaultCurrency;
    return this;
  }

   /**
   * Get defaultCurrency
   * @return defaultCurrency
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public NullableCurrency getDefaultCurrency() {
    return defaultCurrency;
  }


  public void setDefaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
  }


  public CatalogsFeedsUpdateRequest name(String name) {
    
    this.name = name;
    return this;
  }

   /**
   * A human-friendly name associated to a given feed.
   * @return name
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "A human-friendly name associated to a given feed.")

  public String getName() {
    return name;
  }


  public void setName(String name) {
    this.name = name;
  }


  public CatalogsFeedsUpdateRequest format(CatalogsFormat format) {
    
    this.format = format;
    return this;
  }

   /**
   * Get format
   * @return format
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public CatalogsFormat getFormat() {
    return format;
  }


  public void setFormat(CatalogsFormat format) {
    this.format = format;
  }


  public CatalogsFeedsUpdateRequest credentials(CatalogsFeedCredentials credentials) {
    
    this.credentials = credentials;
    return this;
  }

   /**
   * Get credentials
   * @return credentials
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public CatalogsFeedCredentials getCredentials() {
    return credentials;
  }


  public void setCredentials(CatalogsFeedCredentials credentials) {
    this.credentials = credentials;
  }


  public CatalogsFeedsUpdateRequest location(String location) {
    
    this.location = location;
    return this;
  }

   /**
   * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
   * @return location
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.")

  public String getLocation() {
    return location;
  }


  public void setLocation(String location) {
    this.location = location;
  }


  public CatalogsFeedsUpdateRequest preferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    
    this.preferredProcessingSchedule = preferredProcessingSchedule;
    return this;
  }

   /**
   * Get preferredProcessingSchedule
   * @return preferredProcessingSchedule
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() {
    return preferredProcessingSchedule;
  }


  public void setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
  }


  public CatalogsFeedsUpdateRequest status(CatalogsStatus status) {
    
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public CatalogsStatus getStatus() {
    return status;
  }


  public void setStatus(CatalogsStatus status) {
    this.status = status;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsFeedsUpdateRequest catalogsFeedsUpdateRequest = (CatalogsFeedsUpdateRequest) o;
    return Objects.equals(this.defaultAvailability, catalogsFeedsUpdateRequest.defaultAvailability) &&
        Objects.equals(this.defaultCurrency, catalogsFeedsUpdateRequest.defaultCurrency) &&
        Objects.equals(this.name, catalogsFeedsUpdateRequest.name) &&
        Objects.equals(this.format, catalogsFeedsUpdateRequest.format) &&
        Objects.equals(this.credentials, catalogsFeedsUpdateRequest.credentials) &&
        Objects.equals(this.location, catalogsFeedsUpdateRequest.location) &&
        Objects.equals(this.preferredProcessingSchedule, catalogsFeedsUpdateRequest.preferredProcessingSchedule) &&
        Objects.equals(this.status, catalogsFeedsUpdateRequest.status);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(defaultAvailability, defaultCurrency, name, format, credentials, location, preferredProcessingSchedule, status);
  }

  private static <T> int hashCodeNullable(JsonNullable<T> a) {
    if (a == null) {
      return 1;
    }
    return a.isPresent() ? Arrays.deepHashCode(new Object[]{a.get()}) : 31;
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedsUpdateRequest {\n");
    sb.append("    defaultAvailability: ").append(toIndentedString(defaultAvailability)).append("\n");
    sb.append("    defaultCurrency: ").append(toIndentedString(defaultCurrency)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    format: ").append(toIndentedString(format)).append("\n");
    sb.append("    credentials: ").append(toIndentedString(credentials)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    preferredProcessingSchedule: ").append(toIndentedString(preferredProcessingSchedule)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
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

}

