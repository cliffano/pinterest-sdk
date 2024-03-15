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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsFeedCredentials;
import org.openapitools.model.CatalogsFeedProcessingSchedule;
import org.openapitools.model.CatalogsFormat;
import org.openapitools.model.CatalogsStatus;
import org.openapitools.model.NullableCurrency;
import org.openapitools.model.ProductAvailabilityType;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request object for updating a feed.
 */
@ApiModel(description = "Request object for updating a feed.")
@JsonPropertyOrder({
  CatalogsFeedsUpdateRequest.JSON_PROPERTY_DEFAULT_AVAILABILITY,
  CatalogsFeedsUpdateRequest.JSON_PROPERTY_DEFAULT_CURRENCY,
  CatalogsFeedsUpdateRequest.JSON_PROPERTY_NAME,
  CatalogsFeedsUpdateRequest.JSON_PROPERTY_FORMAT,
  CatalogsFeedsUpdateRequest.JSON_PROPERTY_CREDENTIALS,
  CatalogsFeedsUpdateRequest.JSON_PROPERTY_LOCATION,
  CatalogsFeedsUpdateRequest.JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE,
  CatalogsFeedsUpdateRequest.JSON_PROPERTY_STATUS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsFeedsUpdateRequest   {
  public static final String JSON_PROPERTY_DEFAULT_AVAILABILITY = "default_availability";
  @JsonProperty(JSON_PROPERTY_DEFAULT_AVAILABILITY)
  private ProductAvailabilityType defaultAvailability;

  public static final String JSON_PROPERTY_DEFAULT_CURRENCY = "default_currency";
  @JsonProperty(JSON_PROPERTY_DEFAULT_CURRENCY)
  private NullableCurrency defaultCurrency;

  public static final String JSON_PROPERTY_NAME = "name";
  @JsonProperty(JSON_PROPERTY_NAME)
  private String name;

  public static final String JSON_PROPERTY_FORMAT = "format";
  @JsonProperty(JSON_PROPERTY_FORMAT)
  private CatalogsFormat format;

  public static final String JSON_PROPERTY_CREDENTIALS = "credentials";
  @JsonProperty(JSON_PROPERTY_CREDENTIALS)
  private CatalogsFeedCredentials credentials;

  public static final String JSON_PROPERTY_LOCATION = "location";
  @JsonProperty(JSON_PROPERTY_LOCATION)
  private String location;

  public static final String JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE = "preferred_processing_schedule";
  @JsonProperty(JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE)
  private CatalogsFeedProcessingSchedule preferredProcessingSchedule;

  public static final String JSON_PROPERTY_STATUS = "status";
  @JsonProperty(JSON_PROPERTY_STATUS)
  private CatalogsStatus status;

  public CatalogsFeedsUpdateRequest defaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
    return this;
  }

  /**
   * Get defaultAvailability
   * @return defaultAvailability
   **/
  @JsonProperty(value = "default_availability")
  @ApiModelProperty(value = "")
  @Valid 
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
  @JsonProperty(value = "default_currency")
  @ApiModelProperty(value = "")
  @Valid 
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
  @JsonProperty(value = "name")
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
  @JsonProperty(value = "format")
  @ApiModelProperty(value = "")
  @Valid 
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
  @JsonProperty(value = "credentials")
  @ApiModelProperty(value = "")
  @Valid 
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
  @JsonProperty(value = "location")
  @ApiModelProperty(value = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.")
   @Pattern(regexp="^(http|https|ftp|sftp)://")
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
  @JsonProperty(value = "preferred_processing_schedule")
  @ApiModelProperty(value = "")
  @Valid 
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
  @JsonProperty(value = "status")
  @ApiModelProperty(value = "")
  @Valid 
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

  @Override
  public int hashCode() {
    return Objects.hash(defaultAvailability, defaultCurrency, name, format, credentials, location, preferredProcessingSchedule, status);
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

