package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import java.util.Date;
import org.openapitools.model.CatalogsDbItem;
import org.openapitools.model.CatalogsFeedCredentials;
import org.openapitools.model.CatalogsFeedProcessingSchedule;
import org.openapitools.model.CatalogsFormat;
import org.openapitools.model.CatalogsStatus;
import org.openapitools.model.Country;
import org.openapitools.model.FeedFields;
import org.openapitools.model.NullableCurrency;
import org.openapitools.model.ProductAvailabilityType;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
  * Catalogs Catalogs Feed object
 **/
@ApiModel(description="Catalogs Catalogs Feed object")
public class CatalogsFeed  {
  
  @ApiModelProperty(example = "2022-03-14T15:15:22Z", value = "")
  private Date createdAt;

  @ApiModelProperty(value = "")
  private String id;

  @ApiModelProperty(example = "2022-03-14T15:16:34Z", value = "")
  private Date updatedAt;

  @ApiModelProperty(required = true, value = "")
  private Country defaultCountry;

  @ApiModelProperty(required = true, value = "")
  private ProductAvailabilityType defaultAvailability;

  @ApiModelProperty(required = true, value = "")
  private NullableCurrency defaultCurrency;

  @ApiModelProperty(required = true, value = "A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.")
 /**
   * A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
  **/
  private String name;

  @ApiModelProperty(required = true, value = "")
  private CatalogsFormat format;

  @ApiModelProperty(example = "en_US", required = true, value = "The locale used within a feed for product descriptions.")
 /**
   * The locale used within a feed for product descriptions.
  **/
  private String defaultLocale;

  @ApiModelProperty(required = true, value = "")
  private CatalogsFeedCredentials credentials;

  @ApiModelProperty(required = true, value = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.")
 /**
   * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
  **/
  private String location;

  @ApiModelProperty(required = true, value = "")
  private CatalogsFeedProcessingSchedule preferredProcessingSchedule;

  @ApiModelProperty(required = true, value = "")
  private CatalogsStatus status;
 /**
   * Get createdAt
   * @return createdAt
  **/
  @JsonProperty("created_at")
  public Date getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(Date createdAt) {
    this.createdAt = createdAt;
  }

  public CatalogsFeed createdAt(Date createdAt) {
    this.createdAt = createdAt;
    return this;
  }

 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public CatalogsFeed id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Get updatedAt
   * @return updatedAt
  **/
  @JsonProperty("updated_at")
  public Date getUpdatedAt() {
    return updatedAt;
  }

  public void setUpdatedAt(Date updatedAt) {
    this.updatedAt = updatedAt;
  }

  public CatalogsFeed updatedAt(Date updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

 /**
   * Get defaultCountry
   * @return defaultCountry
  **/
  @JsonProperty("default_country")
  public Country getDefaultCountry() {
    return defaultCountry;
  }

  public void setDefaultCountry(Country defaultCountry) {
    this.defaultCountry = defaultCountry;
  }

  public CatalogsFeed defaultCountry(Country defaultCountry) {
    this.defaultCountry = defaultCountry;
    return this;
  }

 /**
   * Get defaultAvailability
   * @return defaultAvailability
  **/
  @JsonProperty("default_availability")
  public ProductAvailabilityType getDefaultAvailability() {
    return defaultAvailability;
  }

  public void setDefaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
  }

  public CatalogsFeed defaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
    return this;
  }

 /**
   * Get defaultCurrency
   * @return defaultCurrency
  **/
  @JsonProperty("default_currency")
  public NullableCurrency getDefaultCurrency() {
    return defaultCurrency;
  }

  public void setDefaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
  }

  public CatalogsFeed defaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
    return this;
  }

 /**
   * A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public CatalogsFeed name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get format
   * @return format
  **/
  @JsonProperty("format")
  public CatalogsFormat getFormat() {
    return format;
  }

  public void setFormat(CatalogsFormat format) {
    this.format = format;
  }

  public CatalogsFeed format(CatalogsFormat format) {
    this.format = format;
    return this;
  }

 /**
   * The locale used within a feed for product descriptions.
   * @return defaultLocale
  **/
  @JsonProperty("default_locale")
  public String getDefaultLocale() {
    return defaultLocale;
  }

  public void setDefaultLocale(String defaultLocale) {
    this.defaultLocale = defaultLocale;
  }

  public CatalogsFeed defaultLocale(String defaultLocale) {
    this.defaultLocale = defaultLocale;
    return this;
  }

 /**
   * Get credentials
   * @return credentials
  **/
  @JsonProperty("credentials")
  public CatalogsFeedCredentials getCredentials() {
    return credentials;
  }

  public void setCredentials(CatalogsFeedCredentials credentials) {
    this.credentials = credentials;
  }

  public CatalogsFeed credentials(CatalogsFeedCredentials credentials) {
    this.credentials = credentials;
    return this;
  }

 /**
   * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
   * @return location
  **/
  @JsonProperty("location")
  public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public CatalogsFeed location(String location) {
    this.location = location;
    return this;
  }

 /**
   * Get preferredProcessingSchedule
   * @return preferredProcessingSchedule
  **/
  @JsonProperty("preferred_processing_schedule")
  public CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() {
    return preferredProcessingSchedule;
  }

  public void setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
  }

  public CatalogsFeed preferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
    return this;
  }

 /**
   * Get status
   * @return status
  **/
  @JsonProperty("status")
  public CatalogsStatus getStatus() {
    return status;
  }

  public void setStatus(CatalogsStatus status) {
    this.status = status;
  }

  public CatalogsFeed status(CatalogsStatus status) {
    this.status = status;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeed {\n");
    
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

