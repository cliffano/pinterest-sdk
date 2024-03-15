package apimodels;

import apimodels.CatalogsFeedCredentials;
import apimodels.CatalogsFeedProcessingSchedule;
import apimodels.CatalogsFormat;
import apimodels.CatalogsStatus;
import apimodels.CatalogsType;
import apimodels.NullableCurrency;
import apimodels.ProductAvailabilityType;
import org.openapitools.jackson.nullable.JsonNullable;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
import javax.validation.Valid;
/**
 * Request object for updating a feed.
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2024-03-14T23:02:53.026613321Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class CatalogsRetailFeedsUpdateRequest   {
  @JsonProperty("default_currency")
  @Valid

  private NullableCurrency defaultCurrency;

  @JsonProperty("name")
  
  private String name;

  @JsonProperty("format")
  @Valid

  private CatalogsFormat format;

  @JsonProperty("credentials")
  @Valid

  private CatalogsFeedCredentials credentials;

  @JsonProperty("location")
  @Pattern(regexp="^(http|https|ftp|sftp)://")

  private String location;

  @JsonProperty("preferred_processing_schedule")
  @Valid

  private CatalogsFeedProcessingSchedule preferredProcessingSchedule;

  @JsonProperty("status")
  @Valid

  private CatalogsStatus status;

  @JsonProperty("catalog_type")
  @NotNull
@Valid

  private CatalogsType catalogType;

  @JsonProperty("default_availability")
  @Valid

  private ProductAvailabilityType defaultAvailability;

  public CatalogsRetailFeedsUpdateRequest defaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
    return this;
  }

   /**
   * Get defaultCurrency
   * @return defaultCurrency
  **/
  public NullableCurrency getDefaultCurrency() {
    return defaultCurrency;
  }

  public void setDefaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
  }

  public CatalogsRetailFeedsUpdateRequest name(String name) {
    this.name = name;
    return this;
  }

   /**
   * A human-friendly name associated to a given feed.
   * @return name
  **/
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public CatalogsRetailFeedsUpdateRequest format(CatalogsFormat format) {
    this.format = format;
    return this;
  }

   /**
   * Get format
   * @return format
  **/
  public CatalogsFormat getFormat() {
    return format;
  }

  public void setFormat(CatalogsFormat format) {
    this.format = format;
  }

  public CatalogsRetailFeedsUpdateRequest credentials(CatalogsFeedCredentials credentials) {
    this.credentials = credentials;
    return this;
  }

   /**
   * Get credentials
   * @return credentials
  **/
  public CatalogsFeedCredentials getCredentials() {
    return credentials;
  }

  public void setCredentials(CatalogsFeedCredentials credentials) {
    this.credentials = credentials;
  }

  public CatalogsRetailFeedsUpdateRequest location(String location) {
    this.location = location;
    return this;
  }

   /**
   * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
   * @return location
  **/
  public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public CatalogsRetailFeedsUpdateRequest preferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
    return this;
  }

   /**
   * Get preferredProcessingSchedule
   * @return preferredProcessingSchedule
  **/
  public CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() {
    return preferredProcessingSchedule;
  }

  public void setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
  }

  public CatalogsRetailFeedsUpdateRequest status(CatalogsStatus status) {
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  public CatalogsStatus getStatus() {
    return status;
  }

  public void setStatus(CatalogsStatus status) {
    this.status = status;
  }

  public CatalogsRetailFeedsUpdateRequest catalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
    return this;
  }

   /**
   * Get catalogType
   * @return catalogType
  **/
  public CatalogsType getCatalogType() {
    return catalogType;
  }

  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }

  public CatalogsRetailFeedsUpdateRequest defaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
    return this;
  }

   /**
   * Get defaultAvailability
   * @return defaultAvailability
  **/
  public ProductAvailabilityType getDefaultAvailability() {
    return defaultAvailability;
  }

  public void setDefaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsRetailFeedsUpdateRequest catalogsRetailFeedsUpdateRequest = (CatalogsRetailFeedsUpdateRequest) o;
    return Objects.equals(defaultCurrency, catalogsRetailFeedsUpdateRequest.defaultCurrency) &&
        Objects.equals(name, catalogsRetailFeedsUpdateRequest.name) &&
        Objects.equals(format, catalogsRetailFeedsUpdateRequest.format) &&
        Objects.equals(credentials, catalogsRetailFeedsUpdateRequest.credentials) &&
        Objects.equals(location, catalogsRetailFeedsUpdateRequest.location) &&
        Objects.equals(preferredProcessingSchedule, catalogsRetailFeedsUpdateRequest.preferredProcessingSchedule) &&
        Objects.equals(status, catalogsRetailFeedsUpdateRequest.status) &&
        Objects.equals(catalogType, catalogsRetailFeedsUpdateRequest.catalogType) &&
        Objects.equals(defaultAvailability, catalogsRetailFeedsUpdateRequest.defaultAvailability);
  }

  @Override
  public int hashCode() {
    return Objects.hash(defaultCurrency, name, format, credentials, location, preferredProcessingSchedule, status, catalogType, defaultAvailability);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsRetailFeedsUpdateRequest {\n");
    
    sb.append("    defaultCurrency: ").append(toIndentedString(defaultCurrency)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    format: ").append(toIndentedString(format)).append("\n");
    sb.append("    credentials: ").append(toIndentedString(credentials)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    preferredProcessingSchedule: ").append(toIndentedString(preferredProcessingSchedule)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
    sb.append("    defaultAvailability: ").append(toIndentedString(defaultAvailability)).append("\n");
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

