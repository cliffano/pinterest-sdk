/**
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

package org.openapitools.client.model;

import org.openapitools.client.model.CatalogsFeedCredentials;
import org.openapitools.client.model.CatalogsFeedProcessingSchedule;
import org.openapitools.client.model.CatalogsFormat;
import org.openapitools.client.model.CatalogsStatus;
import org.openapitools.client.model.NullableCurrency;
import org.openapitools.client.model.ProductAvailabilityType;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Request object for updating a feed.
 **/
@ApiModel(description = "Request object for updating a feed.")
public class CatalogsFeedsUpdateRequest {
  
  @SerializedName("default_availability")
  private ProductAvailabilityType defaultAvailability = null;
  @SerializedName("default_currency")
  private NullableCurrency defaultCurrency = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("format")
  private CatalogsFormat format = null;
  @SerializedName("credentials")
  private CatalogsFeedCredentials credentials = null;
  @SerializedName("location")
  private String location = null;
  @SerializedName("preferred_processing_schedule")
  private CatalogsFeedProcessingSchedule preferredProcessingSchedule = null;
  @SerializedName("status")
  private CatalogsStatus status = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ProductAvailabilityType getDefaultAvailability() {
    return defaultAvailability;
  }
  public void setDefaultAvailability(ProductAvailabilityType defaultAvailability) {
    this.defaultAvailability = defaultAvailability;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public NullableCurrency getDefaultCurrency() {
    return defaultCurrency;
  }
  public void setDefaultCurrency(NullableCurrency defaultCurrency) {
    this.defaultCurrency = defaultCurrency;
  }

  /**
   * A human-friendly name associated to a given feed.
   **/
  @ApiModelProperty(value = "A human-friendly name associated to a given feed.")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public CatalogsFormat getFormat() {
    return format;
  }
  public void setFormat(CatalogsFormat format) {
    this.format = format;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public CatalogsFeedCredentials getCredentials() {
    return credentials;
  }
  public void setCredentials(CatalogsFeedCredentials credentials) {
    this.credentials = credentials;
  }

  /**
   * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
   **/
  @ApiModelProperty(value = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.")
  public String getLocation() {
    return location;
  }
  public void setLocation(String location) {
    this.location = location;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() {
    return preferredProcessingSchedule;
  }
  public void setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
    this.preferredProcessingSchedule = preferredProcessingSchedule;
  }

  /**
   **/
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
    return (this.defaultAvailability == null ? catalogsFeedsUpdateRequest.defaultAvailability == null : this.defaultAvailability.equals(catalogsFeedsUpdateRequest.defaultAvailability)) &&
        (this.defaultCurrency == null ? catalogsFeedsUpdateRequest.defaultCurrency == null : this.defaultCurrency.equals(catalogsFeedsUpdateRequest.defaultCurrency)) &&
        (this.name == null ? catalogsFeedsUpdateRequest.name == null : this.name.equals(catalogsFeedsUpdateRequest.name)) &&
        (this.format == null ? catalogsFeedsUpdateRequest.format == null : this.format.equals(catalogsFeedsUpdateRequest.format)) &&
        (this.credentials == null ? catalogsFeedsUpdateRequest.credentials == null : this.credentials.equals(catalogsFeedsUpdateRequest.credentials)) &&
        (this.location == null ? catalogsFeedsUpdateRequest.location == null : this.location.equals(catalogsFeedsUpdateRequest.location)) &&
        (this.preferredProcessingSchedule == null ? catalogsFeedsUpdateRequest.preferredProcessingSchedule == null : this.preferredProcessingSchedule.equals(catalogsFeedsUpdateRequest.preferredProcessingSchedule)) &&
        (this.status == null ? catalogsFeedsUpdateRequest.status == null : this.status.equals(catalogsFeedsUpdateRequest.status));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.defaultAvailability == null ? 0: this.defaultAvailability.hashCode());
    result = 31 * result + (this.defaultCurrency == null ? 0: this.defaultCurrency.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.format == null ? 0: this.format.hashCode());
    result = 31 * result + (this.credentials == null ? 0: this.credentials.hashCode());
    result = 31 * result + (this.location == null ? 0: this.location.hashCode());
    result = 31 * result + (this.preferredProcessingSchedule == null ? 0: this.preferredProcessingSchedule.hashCode());
    result = 31 * result + (this.status == null ? 0: this.status.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedsUpdateRequest {\n");
    
    sb.append("  defaultAvailability: ").append(defaultAvailability).append("\n");
    sb.append("  defaultCurrency: ").append(defaultCurrency).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  format: ").append(format).append("\n");
    sb.append("  credentials: ").append(credentials).append("\n");
    sb.append("  location: ").append(location).append("\n");
    sb.append("  preferredProcessingSchedule: ").append(preferredProcessingSchedule).append("\n");
    sb.append("  status: ").append(status).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
