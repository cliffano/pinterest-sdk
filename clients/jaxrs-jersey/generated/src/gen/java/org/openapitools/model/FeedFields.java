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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsFeedCredentials;
import org.openapitools.model.CatalogsFeedProcessingSchedule;
import org.openapitools.model.CatalogsFormat;
import org.openapitools.model.CatalogsStatus;
import org.openapitools.model.Country;
import org.openapitools.model.NullableCurrency;
import org.openapitools.model.ProductAvailabilityType;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * FeedFields
 */
@JsonPropertyOrder({
  FeedFields.JSON_PROPERTY_DEFAULT_COUNTRY,
  FeedFields.JSON_PROPERTY_DEFAULT_AVAILABILITY,
  FeedFields.JSON_PROPERTY_DEFAULT_CURRENCY,
  FeedFields.JSON_PROPERTY_NAME,
  FeedFields.JSON_PROPERTY_FORMAT,
  FeedFields.JSON_PROPERTY_DEFAULT_LOCALE,
  FeedFields.JSON_PROPERTY_CREDENTIALS,
  FeedFields.JSON_PROPERTY_LOCATION,
  FeedFields.JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE,
  FeedFields.JSON_PROPERTY_STATUS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-07-01T12:00:52.037403Z[Etc/UTC]")
public class FeedFields   {
  public static final String JSON_PROPERTY_DEFAULT_COUNTRY = "default_country";
  @JsonProperty(JSON_PROPERTY_DEFAULT_COUNTRY)
  private Country defaultCountry;

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

  public static final String JSON_PROPERTY_DEFAULT_LOCALE = "default_locale";
  @JsonProperty(JSON_PROPERTY_DEFAULT_LOCALE)
  private String defaultLocale;

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

  public FeedFields defaultCountry(Country defaultCountry) {
    this.defaultCountry = defaultCountry;
    return this;
  }

  /**
   * Get defaultCountry
   * @return defaultCountry
   **/
  @JsonProperty(value = "default_country")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public Country getDefaultCountry() {
    return defaultCountry;
  }

  public void setDefaultCountry(Country defaultCountry) {
    this.defaultCountry = defaultCountry;
  }

  public FeedFields defaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
    return this;
  }

  /**
   * Get defaultAvailability
   * @return defaultAvailability
   **/
  @JsonProperty(value = "default_availability")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public ProductAvailabilityType getDefaultAvailability() {
    return defaultAvailability;
  }

  public void setDefaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
  }

  public FeedFields defaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
    return this;
  }

  /**
   * Get defaultCurrency
   * @return defaultCurrency
   **/
  @JsonProperty(value = "default_currency")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public NullableCurrency getDefaultCurrency() {
    return defaultCurrency;
  }

  public void setDefaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
  }

  public FeedFields name(String name) {
    this.name = name;
    return this;
  }

  /**
   * A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
   * @return name
   **/
  @JsonProperty(value = "name")
  @ApiModelProperty(required = true, value = "A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.")
  @NotNull 
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public FeedFields format(CatalogsFormat format) {
    this.format = format;
    return this;
  }

  /**
   * Get format
   * @return format
   **/
  @JsonProperty(value = "format")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsFormat getFormat() {
    return format;
  }

  public void setFormat(CatalogsFormat format) {
    this.format = format;
  }

  public FeedFields defaultLocale(String defaultLocale) {
    this.defaultLocale = defaultLocale;
    return this;
  }

  /**
   * The locale used within a feed for product descriptions.
   * @return defaultLocale
   **/
  @JsonProperty(value = "default_locale")
  @ApiModelProperty(example = "en_US", required = true, value = "The locale used within a feed for product descriptions.")
  @NotNull 
  public String getDefaultLocale() {
    return defaultLocale;
  }

  public void setDefaultLocale(String defaultLocale) {
    this.defaultLocale = defaultLocale;
  }

  public FeedFields credentials(CatalogsFeedCredentials credentials) {
    this.credentials = credentials;
    return this;
  }

  /**
   * Get credentials
   * @return credentials
   **/
  @JsonProperty(value = "credentials")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsFeedCredentials getCredentials() {
    return credentials;
  }

  public void setCredentials(CatalogsFeedCredentials credentials) {
    this.credentials = credentials;
  }

  public FeedFields location(String location) {
    this.location = location;
    return this;
  }

  /**
   * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
   * @return location
   **/
  @JsonProperty(value = "location")
  @ApiModelProperty(required = true, value = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.")
  @NotNull 
  public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public FeedFields preferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
    return this;
  }

  /**
   * Get preferredProcessingSchedule
   * @return preferredProcessingSchedule
   **/
  @JsonProperty(value = "preferred_processing_schedule")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() {
    return preferredProcessingSchedule;
  }

  public void setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
  }

  public FeedFields status(CatalogsStatus status) {
    this.status = status;
    return this;
  }

  /**
   * Get status
   * @return status
   **/
  @JsonProperty(value = "status")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
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
    FeedFields feedFields = (FeedFields) o;
    return Objects.equals(this.defaultCountry, feedFields.defaultCountry) &&
        Objects.equals(this.defaultAvailability, feedFields.defaultAvailability) &&
        Objects.equals(this.defaultCurrency, feedFields.defaultCurrency) &&
        Objects.equals(this.name, feedFields.name) &&
        Objects.equals(this.format, feedFields.format) &&
        Objects.equals(this.defaultLocale, feedFields.defaultLocale) &&
        Objects.equals(this.credentials, feedFields.credentials) &&
        Objects.equals(this.location, feedFields.location) &&
        Objects.equals(this.preferredProcessingSchedule, feedFields.preferredProcessingSchedule) &&
        Objects.equals(this.status, feedFields.status);
  }

  @Override
  public int hashCode() {
    return Objects.hash(defaultCountry, defaultAvailability, defaultCurrency, name, format, defaultLocale, credentials, location, preferredProcessingSchedule, status);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FeedFields {\n");
    
    sb.append("    defaultCountry: ").append(toIndentedString(defaultCountry)).append("\n");
    sb.append("    defaultAvailability: ").append(toIndentedString(defaultAvailability)).append("\n");
    sb.append("    defaultCurrency: ").append(toIndentedString(defaultCurrency)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    format: ").append(toIndentedString(format)).append("\n");
    sb.append("    defaultLocale: ").append(toIndentedString(defaultLocale)).append("\n");
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

