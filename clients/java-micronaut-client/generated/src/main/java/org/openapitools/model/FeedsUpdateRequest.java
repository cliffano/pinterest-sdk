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
import java.util.Arrays;
import com.fasterxml.jackson.annotation.JsonTypeName;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsFeedCredentials;
import org.openapitools.model.CatalogsFeedProcessingSchedule;
import org.openapitools.model.CatalogsFeedsUpdateRequest;
import org.openapitools.model.CatalogsFormat;
import org.openapitools.model.CatalogsStatus;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.CatalogsVerticalFeedsUpdateRequest;
import org.openapitools.model.NullableCurrency;
import org.openapitools.model.ProductAvailabilityType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * FeedsUpdateRequest
 */
@JsonPropertyOrder({
  FeedsUpdateRequest.JSON_PROPERTY_DEFAULT_AVAILABILITY,
  FeedsUpdateRequest.JSON_PROPERTY_DEFAULT_CURRENCY,
  FeedsUpdateRequest.JSON_PROPERTY_NAME,
  FeedsUpdateRequest.JSON_PROPERTY_FORMAT,
  FeedsUpdateRequest.JSON_PROPERTY_CREDENTIALS,
  FeedsUpdateRequest.JSON_PROPERTY_LOCATION,
  FeedsUpdateRequest.JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE,
  FeedsUpdateRequest.JSON_PROPERTY_STATUS
})
@JsonTypeName("feeds_update_request")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class FeedsUpdateRequest {
    public static final String JSON_PROPERTY_DEFAULT_AVAILABILITY = "default_availability";
    private ProductAvailabilityType defaultAvailability;

    public static final String JSON_PROPERTY_DEFAULT_CURRENCY = "default_currency";
    private NullableCurrency defaultCurrency;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_FORMAT = "format";
    private CatalogsFormat _format;

    public static final String JSON_PROPERTY_CREDENTIALS = "credentials";
    private CatalogsFeedCredentials credentials;

    public static final String JSON_PROPERTY_LOCATION = "location";
    private String location;

    public static final String JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE = "preferred_processing_schedule";
    private CatalogsFeedProcessingSchedule preferredProcessingSchedule;

    public static final String JSON_PROPERTY_STATUS = "status";
    private CatalogsStatus status;

    public FeedsUpdateRequest(CatalogsType catalogType) {
    }

    public FeedsUpdateRequest defaultAvailability(ProductAvailabilityType defaultAvailability) {
        this.defaultAvailability = defaultAvailability;
        return this;
    }

    /**
     * Get defaultAvailability
     * @return defaultAvailability
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DEFAULT_AVAILABILITY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ProductAvailabilityType getDefaultAvailability() {
        return defaultAvailability;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_AVAILABILITY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDefaultAvailability(ProductAvailabilityType defaultAvailability) {
        this.defaultAvailability = defaultAvailability;
    }

    public FeedsUpdateRequest defaultCurrency(NullableCurrency defaultCurrency) {
        this.defaultCurrency = defaultCurrency;
        return this;
    }

    /**
     * Get defaultCurrency
     * @return defaultCurrency
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DEFAULT_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public NullableCurrency getDefaultCurrency() {
        return defaultCurrency;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDefaultCurrency(NullableCurrency defaultCurrency) {
        this.defaultCurrency = defaultCurrency;
    }

    public FeedsUpdateRequest name(String name) {
        this.name = name;
        return this;
    }

    /**
     * A human-friendly name associated to a given feed.
     * @return name
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setName(String name) {
        this.name = name;
    }

    public FeedsUpdateRequest _format(CatalogsFormat _format) {
        this._format = _format;
        return this;
    }

    /**
     * Get _format
     * @return _format
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_FORMAT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CatalogsFormat getFormat() {
        return _format;
    }

    @JsonProperty(JSON_PROPERTY_FORMAT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setFormat(CatalogsFormat _format) {
        this._format = _format;
    }

    public FeedsUpdateRequest credentials(CatalogsFeedCredentials credentials) {
        this.credentials = credentials;
        return this;
    }

    /**
     * Get credentials
     * @return credentials
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_CREDENTIALS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CatalogsFeedCredentials getCredentials() {
        return credentials;
    }

    @JsonProperty(JSON_PROPERTY_CREDENTIALS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCredentials(CatalogsFeedCredentials credentials) {
        this.credentials = credentials;
    }

    public FeedsUpdateRequest location(String location) {
        this.location = location;
        return this;
    }

    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     * @return location
     **/
    @Nullable
    @Pattern(regexp="^(http|https|ftp|sftp)://")
    @JsonProperty(JSON_PROPERTY_LOCATION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getLocation() {
        return location;
    }

    @JsonProperty(JSON_PROPERTY_LOCATION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLocation(String location) {
        this.location = location;
    }

    public FeedsUpdateRequest preferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
        this.preferredProcessingSchedule = preferredProcessingSchedule;
        return this;
    }

    /**
     * Get preferredProcessingSchedule
     * @return preferredProcessingSchedule
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() {
        return preferredProcessingSchedule;
    }

    @JsonProperty(JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
        this.preferredProcessingSchedule = preferredProcessingSchedule;
    }

    public FeedsUpdateRequest status(CatalogsStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CatalogsStatus getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
        FeedsUpdateRequest feedsUpdateRequest = (FeedsUpdateRequest) o;
        return Objects.equals(this.defaultAvailability, feedsUpdateRequest.defaultAvailability) &&
            Objects.equals(this.defaultCurrency, feedsUpdateRequest.defaultCurrency) &&
            Objects.equals(this.name, feedsUpdateRequest.name) &&
            Objects.equals(this._format, feedsUpdateRequest._format) &&
            Objects.equals(this.credentials, feedsUpdateRequest.credentials) &&
            Objects.equals(this.location, feedsUpdateRequest.location) &&
            Objects.equals(this.preferredProcessingSchedule, feedsUpdateRequest.preferredProcessingSchedule) &&
            Objects.equals(this.status, feedsUpdateRequest.status);
    }

    @Override
    public int hashCode() {
        return Objects.hash(defaultAvailability, defaultCurrency, name, _format, credentials, location, preferredProcessingSchedule, status);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class FeedsUpdateRequest {\n");
        sb.append("    defaultAvailability: ").append(toIndentedString(defaultAvailability)).append("\n");
        sb.append("    defaultCurrency: ").append(toIndentedString(defaultCurrency)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    _format: ").append(toIndentedString(_format)).append("\n");
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

