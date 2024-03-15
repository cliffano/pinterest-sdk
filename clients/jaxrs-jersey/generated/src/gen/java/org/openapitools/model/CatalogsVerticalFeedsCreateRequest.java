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
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonSubTypes;
import com.fasterxml.jackson.annotation.JsonTypeInfo;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsFeedCredentials;
import org.openapitools.model.CatalogsFeedProcessingSchedule;
import org.openapitools.model.CatalogsFeedsCreateRequestDefaultLocale;
import org.openapitools.model.CatalogsFormat;
import org.openapitools.model.CatalogsHotelFeedsCreateRequest;
import org.openapitools.model.CatalogsRetailFeedsCreateRequest;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.Country;
import org.openapitools.model.NullableCurrency;
import org.openapitools.model.ProductAvailabilityType;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request object for creating a feed.
 */
@ApiModel(description = "Request object for creating a feed.")
@JsonPropertyOrder({
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_DEFAULT_CURRENCY,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_NAME,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_FORMAT,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_DEFAULT_LOCALE,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_CREDENTIALS,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_LOCATION,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_CATALOG_TYPE,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_DEFAULT_COUNTRY,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_DEFAULT_AVAILABILITY,
  CatalogsVerticalFeedsCreateRequest.JSON_PROPERTY_CATALOG_ID
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")@JsonTypeInfo(use = JsonTypeInfo.Id.NAME, include = JsonTypeInfo.As.PROPERTY, property = "catalog_type", visible = true)
@JsonSubTypes({
  @JsonSubTypes.Type(value = CatalogsHotelFeedsCreateRequest.class, name = "HOTEL"),
  @JsonSubTypes.Type(value = CatalogsRetailFeedsCreateRequest.class, name = "RETAIL"),
})

public class CatalogsVerticalFeedsCreateRequest   {
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
  private CatalogsFeedsCreateRequestDefaultLocale defaultLocale;

  public static final String JSON_PROPERTY_CREDENTIALS = "credentials";
  @JsonProperty(JSON_PROPERTY_CREDENTIALS)
  private CatalogsFeedCredentials credentials;

  public static final String JSON_PROPERTY_LOCATION = "location";
  @JsonProperty(JSON_PROPERTY_LOCATION)
  private String location;

  public static final String JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE = "preferred_processing_schedule";
  @JsonProperty(JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE)
  private CatalogsFeedProcessingSchedule preferredProcessingSchedule;

  public static final String JSON_PROPERTY_CATALOG_TYPE = "catalog_type";
  @JsonProperty(JSON_PROPERTY_CATALOG_TYPE)
  private CatalogsType catalogType;

  public static final String JSON_PROPERTY_DEFAULT_COUNTRY = "default_country";
  @JsonProperty(JSON_PROPERTY_DEFAULT_COUNTRY)
  private Country defaultCountry;

  public static final String JSON_PROPERTY_DEFAULT_AVAILABILITY = "default_availability";
  @JsonProperty(JSON_PROPERTY_DEFAULT_AVAILABILITY)
  private ProductAvailabilityType defaultAvailability;

  public static final String JSON_PROPERTY_CATALOG_ID = "catalog_id";
  @JsonProperty(JSON_PROPERTY_CATALOG_ID)
  private String catalogId;

  public CatalogsVerticalFeedsCreateRequest defaultCurrency(NullableCurrency defaultCurrency) {
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

  public CatalogsVerticalFeedsCreateRequest name(String name) {
    this.name = name;
    return this;
  }

  /**
   * A human-friendly name associated to a given feed.
   * @return name
   **/
  @JsonProperty(value = "name")
  @ApiModelProperty(required = true, value = "A human-friendly name associated to a given feed.")
  @NotNull 
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public CatalogsVerticalFeedsCreateRequest format(CatalogsFormat format) {
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

  public CatalogsVerticalFeedsCreateRequest defaultLocale(CatalogsFeedsCreateRequestDefaultLocale defaultLocale) {
    this.defaultLocale = defaultLocale;
    return this;
  }

  /**
   * Get defaultLocale
   * @return defaultLocale
   **/
  @JsonProperty(value = "default_locale")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsFeedsCreateRequestDefaultLocale getDefaultLocale() {
    return defaultLocale;
  }

  public void setDefaultLocale(CatalogsFeedsCreateRequestDefaultLocale defaultLocale) {
    this.defaultLocale = defaultLocale;
  }

  public CatalogsVerticalFeedsCreateRequest credentials(CatalogsFeedCredentials credentials) {
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

  public CatalogsVerticalFeedsCreateRequest location(String location) {
    this.location = location;
    return this;
  }

  /**
   * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
   * @return location
   **/
  @JsonProperty(value = "location")
  @ApiModelProperty(required = true, value = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.")
  @NotNull  @Pattern(regexp="^(http|https|ftp|sftp)://")
  public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public CatalogsVerticalFeedsCreateRequest preferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
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

  public CatalogsVerticalFeedsCreateRequest catalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
    return this;
  }

  /**
   * Get catalogType
   * @return catalogType
   **/
  @JsonProperty(value = "catalog_type")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsType getCatalogType() {
    return catalogType;
  }

  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }

  public CatalogsVerticalFeedsCreateRequest defaultCountry(Country defaultCountry) {
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

  public CatalogsVerticalFeedsCreateRequest defaultAvailability(ProductAvailabilityType defaultAvailability) {
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

  public CatalogsVerticalFeedsCreateRequest catalogId(String catalogId) {
    this.catalogId = catalogId;
    return this;
  }

  /**
   * Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future.
   * @return catalogId
   **/
  @JsonProperty(value = "catalog_id")
  @ApiModelProperty(value = "Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future.")
   @Pattern(regexp="^\\d+$")
  public String getCatalogId() {
    return catalogId;
  }

  public void setCatalogId(String catalogId) {
    this.catalogId = catalogId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsVerticalFeedsCreateRequest catalogsVerticalFeedsCreateRequest = (CatalogsVerticalFeedsCreateRequest) o;
    return Objects.equals(this.defaultCurrency, catalogsVerticalFeedsCreateRequest.defaultCurrency) &&
        Objects.equals(this.name, catalogsVerticalFeedsCreateRequest.name) &&
        Objects.equals(this.format, catalogsVerticalFeedsCreateRequest.format) &&
        Objects.equals(this.defaultLocale, catalogsVerticalFeedsCreateRequest.defaultLocale) &&
        Objects.equals(this.credentials, catalogsVerticalFeedsCreateRequest.credentials) &&
        Objects.equals(this.location, catalogsVerticalFeedsCreateRequest.location) &&
        Objects.equals(this.preferredProcessingSchedule, catalogsVerticalFeedsCreateRequest.preferredProcessingSchedule) &&
        Objects.equals(this.catalogType, catalogsVerticalFeedsCreateRequest.catalogType) &&
        Objects.equals(this.defaultCountry, catalogsVerticalFeedsCreateRequest.defaultCountry) &&
        Objects.equals(this.defaultAvailability, catalogsVerticalFeedsCreateRequest.defaultAvailability) &&
        Objects.equals(this.catalogId, catalogsVerticalFeedsCreateRequest.catalogId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(defaultCurrency, name, format, defaultLocale, credentials, location, preferredProcessingSchedule, catalogType, defaultCountry, defaultAvailability, catalogId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsVerticalFeedsCreateRequest {\n");
    
    sb.append("    defaultCurrency: ").append(toIndentedString(defaultCurrency)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    format: ").append(toIndentedString(format)).append("\n");
    sb.append("    defaultLocale: ").append(toIndentedString(defaultLocale)).append("\n");
    sb.append("    credentials: ").append(toIndentedString(credentials)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    preferredProcessingSchedule: ").append(toIndentedString(preferredProcessingSchedule)).append("\n");
    sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
    sb.append("    defaultCountry: ").append(toIndentedString(defaultCountry)).append("\n");
    sb.append("    defaultAvailability: ").append(toIndentedString(defaultAvailability)).append("\n");
    sb.append("    catalogId: ").append(toIndentedString(catalogId)).append("\n");
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
