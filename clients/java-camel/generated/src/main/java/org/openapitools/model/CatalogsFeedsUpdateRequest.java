package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import java.util.Arrays;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsFeedCredentials;
import org.openapitools.model.CatalogsFeedProcessingSchedule;
import org.openapitools.model.CatalogsFormat;
import org.openapitools.model.CatalogsStatus;
import org.openapitools.model.NullableCurrency;
import org.openapitools.model.ProductAvailabilityType;
import java.util.NoSuchElementException;
import com.fasterxml.jackson.annotation.JsonTypeName;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * Request object for updating a feed.
 */

@Schema(name = "CatalogsFeedsUpdateRequest", description = "Request object for updating a feed.")
@Generated(value = "org.openapitools.codegen.languages.JavaCamelServerCodegen", date = "2024-03-14T23:03:40.689435566Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsFeedsUpdateRequest implements FeedsUpdateRequest {

  private JsonNullable<ProductAvailabilityType> defaultAvailability = JsonNullable.<ProductAvailabilityType>undefined();

  private JsonNullable<NullableCurrency> defaultCurrency = JsonNullable.<NullableCurrency>undefined();

  private String name;

  private CatalogsFormat format;

  private JsonNullable<CatalogsFeedCredentials> credentials = JsonNullable.<CatalogsFeedCredentials>undefined();

  private String location;

  private JsonNullable<CatalogsFeedProcessingSchedule> preferredProcessingSchedule = JsonNullable.<CatalogsFeedProcessingSchedule>undefined();

  private CatalogsStatus status;

  public CatalogsFeedsUpdateRequest defaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = JsonNullable.of(defaultAvailability);
    return this;
  }

  /**
   * Get defaultAvailability
   * @return defaultAvailability
  */
  @Valid 
  @Schema(name = "default_availability", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("default_availability")
  public JsonNullable<ProductAvailabilityType> getDefaultAvailability() {
    return defaultAvailability;
  }

  public void setDefaultAvailability(JsonNullable<ProductAvailabilityType> defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
  }

  public CatalogsFeedsUpdateRequest defaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = JsonNullable.of(defaultCurrency);
    return this;
  }

  /**
   * Get defaultCurrency
   * @return defaultCurrency
  */
  @Valid 
  @Schema(name = "default_currency", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("default_currency")
  public JsonNullable<NullableCurrency> getDefaultCurrency() {
    return defaultCurrency;
  }

  public void setDefaultCurrency(JsonNullable<NullableCurrency> defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
  }

  public CatalogsFeedsUpdateRequest name(String name) {
    this.name = name;
    return this;
  }

  /**
   * A human-friendly name associated to a given feed.
   * @return name
  */
  
  @Schema(name = "name", description = "A human-friendly name associated to a given feed.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("name")
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
  */
  @Valid 
  @Schema(name = "format", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("format")
  public CatalogsFormat getFormat() {
    return format;
  }

  public void setFormat(CatalogsFormat format) {
    this.format = format;
  }

  public CatalogsFeedsUpdateRequest credentials(CatalogsFeedCredentials credentials) {
    this.credentials = JsonNullable.of(credentials);
    return this;
  }

  /**
   * Get credentials
   * @return credentials
  */
  @Valid 
  @Schema(name = "credentials", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("credentials")
  public JsonNullable<CatalogsFeedCredentials> getCredentials() {
    return credentials;
  }

  public void setCredentials(JsonNullable<CatalogsFeedCredentials> credentials) {
    this.credentials = credentials;
  }

  public CatalogsFeedsUpdateRequest location(String location) {
    this.location = location;
    return this;
  }

  /**
   * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
   * @return location
  */
  @Pattern(regexp = "^(http|https|ftp|sftp)://") 
  @Schema(name = "location", description = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("location")
  public String getLocation() {
    return location;
  }

  public void setLocation(String location) {
    this.location = location;
  }

  public CatalogsFeedsUpdateRequest preferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = JsonNullable.of(preferredProcessingSchedule);
    return this;
  }

  /**
   * Get preferredProcessingSchedule
   * @return preferredProcessingSchedule
  */
  @Valid 
  @Schema(name = "preferred_processing_schedule", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("preferred_processing_schedule")
  public JsonNullable<CatalogsFeedProcessingSchedule> getPreferredProcessingSchedule() {
    return preferredProcessingSchedule;
  }

  public void setPreferredProcessingSchedule(JsonNullable<CatalogsFeedProcessingSchedule> preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
  }

  public CatalogsFeedsUpdateRequest status(CatalogsStatus status) {
    this.status = status;
    return this;
  }

  /**
   * Get status
   * @return status
  */
  @Valid 
  @Schema(name = "status", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("status")
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
    return equalsNullable(this.defaultAvailability, catalogsFeedsUpdateRequest.defaultAvailability) &&
        equalsNullable(this.defaultCurrency, catalogsFeedsUpdateRequest.defaultCurrency) &&
        Objects.equals(this.name, catalogsFeedsUpdateRequest.name) &&
        Objects.equals(this.format, catalogsFeedsUpdateRequest.format) &&
        equalsNullable(this.credentials, catalogsFeedsUpdateRequest.credentials) &&
        Objects.equals(this.location, catalogsFeedsUpdateRequest.location) &&
        equalsNullable(this.preferredProcessingSchedule, catalogsFeedsUpdateRequest.preferredProcessingSchedule) &&
        Objects.equals(this.status, catalogsFeedsUpdateRequest.status);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(hashCodeNullable(defaultAvailability), hashCodeNullable(defaultCurrency), name, format, hashCodeNullable(credentials), location, hashCodeNullable(preferredProcessingSchedule), status);
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

