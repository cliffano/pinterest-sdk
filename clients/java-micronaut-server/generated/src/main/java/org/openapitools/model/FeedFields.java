/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsFeedCredentials;
import org.openapitools.model.CatalogsFeedProcessingSchedule;
import org.openapitools.model.CatalogsFormat;
import org.openapitools.model.CatalogsStatus;
import org.openapitools.model.Country;
import org.openapitools.model.NullableCurrency;
import org.openapitools.model.ProductAvailabilityType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

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
@JsonTypeName("feed_fields")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class FeedFields {
    public static final String JSON_PROPERTY_DEFAULT_COUNTRY = "default_country";
    private Country defaultCountry;

    public static final String JSON_PROPERTY_DEFAULT_AVAILABILITY = "default_availability";
    private ProductAvailabilityType defaultAvailability;

    public static final String JSON_PROPERTY_DEFAULT_CURRENCY = "default_currency";
    private NullableCurrency defaultCurrency;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_FORMAT = "format";
    private CatalogsFormat _format;

    public static final String JSON_PROPERTY_DEFAULT_LOCALE = "default_locale";
    private String defaultLocale;

    public static final String JSON_PROPERTY_CREDENTIALS = "credentials";
    private CatalogsFeedCredentials credentials;

    public static final String JSON_PROPERTY_LOCATION = "location";
    private String location;

    public static final String JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE = "preferred_processing_schedule";
    private CatalogsFeedProcessingSchedule preferredProcessingSchedule;

    public static final String JSON_PROPERTY_STATUS = "status";
    private CatalogsStatus status;

    public FeedFields(Country defaultCountry, ProductAvailabilityType defaultAvailability, NullableCurrency defaultCurrency, String name, CatalogsFormat _format, String defaultLocale, CatalogsFeedCredentials credentials, String location, CatalogsFeedProcessingSchedule preferredProcessingSchedule, CatalogsStatus status) {
        this.defaultCountry = defaultCountry;
        this.defaultAvailability = defaultAvailability;
        this.defaultCurrency = defaultCurrency;
        this.name = name;
        this._format = _format;
        this.defaultLocale = defaultLocale;
        this.credentials = credentials;
        this.location = location;
        this.preferredProcessingSchedule = preferredProcessingSchedule;
        this.status = status;
    }

    public FeedFields defaultCountry(Country defaultCountry) {
        this.defaultCountry = defaultCountry;
        return this;
    }

    /**
     * Get defaultCountry
     * @return defaultCountry
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_DEFAULT_COUNTRY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public Country getDefaultCountry() {
        return defaultCountry;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_COUNTRY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @Nullable
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_DEFAULT_AVAILABILITY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public ProductAvailabilityType getDefaultAvailability() {
        return defaultAvailability;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_AVAILABILITY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @Nullable
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_DEFAULT_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public NullableCurrency getDefaultCurrency() {
        return defaultCurrency;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @Nullable
    @ApiModelProperty(required = true, value = "A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.")
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setName(String name) {
        this.name = name;
    }

    public FeedFields _format(CatalogsFormat _format) {
        this._format = _format;
        return this;
    }

    /**
     * Get _format
     * @return _format
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_FORMAT)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsFormat getFormat() {
        return _format;
    }

    @JsonProperty(JSON_PROPERTY_FORMAT)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setFormat(CatalogsFormat _format) {
        this._format = _format;
    }

    public FeedFields defaultLocale(String defaultLocale) {
        this.defaultLocale = defaultLocale;
        return this;
    }

    /**
     * The locale used within a feed for product descriptions.
     * @return defaultLocale
     **/
    @NotNull
    @ApiModelProperty(example = "en_US", required = true, value = "The locale used within a feed for product descriptions.")
    @JsonProperty(JSON_PROPERTY_DEFAULT_LOCALE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getDefaultLocale() {
        return defaultLocale;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_LOCALE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @Valid
    @Nullable
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_CREDENTIALS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsFeedCredentials getCredentials() {
        return credentials;
    }

    @JsonProperty(JSON_PROPERTY_CREDENTIALS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @NotNull
    @ApiModelProperty(required = true, value = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.")
    @JsonProperty(JSON_PROPERTY_LOCATION)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getLocation() {
        return location;
    }

    @JsonProperty(JSON_PROPERTY_LOCATION)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @Valid
    @Nullable
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() {
        return preferredProcessingSchedule;
    }

    @JsonProperty(JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsStatus getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
            Objects.equals(this._format, feedFields._format) &&
            Objects.equals(this.defaultLocale, feedFields.defaultLocale) &&
            Objects.equals(this.credentials, feedFields.credentials) &&
            Objects.equals(this.location, feedFields.location) &&
            Objects.equals(this.preferredProcessingSchedule, feedFields.preferredProcessingSchedule) &&
            Objects.equals(this.status, feedFields.status);
    }

    @Override
    public int hashCode() {
        return Objects.hash(defaultCountry, defaultAvailability, defaultCurrency, name, _format, defaultLocale, credentials, location, preferredProcessingSchedule, status);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class FeedFields {\n");
        sb.append("    defaultCountry: ").append(toIndentedString(defaultCountry)).append("\n");
        sb.append("    defaultAvailability: ").append(toIndentedString(defaultAvailability)).append("\n");
        sb.append("    defaultCurrency: ").append(toIndentedString(defaultCurrency)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    _format: ").append(toIndentedString(_format)).append("\n");
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
