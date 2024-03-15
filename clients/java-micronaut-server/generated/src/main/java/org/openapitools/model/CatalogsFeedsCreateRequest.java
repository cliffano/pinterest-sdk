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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsFeedCredentials;
import org.openapitools.model.CatalogsFeedProcessingSchedule;
import org.openapitools.model.CatalogsFeedsCreateRequestDefaultLocale;
import org.openapitools.model.CatalogsFormat;
import org.openapitools.model.Country;
import org.openapitools.model.NullableCurrency;
import org.openapitools.model.ProductAvailabilityType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 */
@Schema(name = "CatalogsFeedsCreateRequest", description = "Request object for creating a feed. Please, be aware that \"default_country\" and \"default_locale\" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.")
@JsonPropertyOrder({
  CatalogsFeedsCreateRequest.JSON_PROPERTY_DEFAULT_CURRENCY,
  CatalogsFeedsCreateRequest.JSON_PROPERTY_NAME,
  CatalogsFeedsCreateRequest.JSON_PROPERTY_FORMAT,
  CatalogsFeedsCreateRequest.JSON_PROPERTY_DEFAULT_LOCALE,
  CatalogsFeedsCreateRequest.JSON_PROPERTY_CREDENTIALS,
  CatalogsFeedsCreateRequest.JSON_PROPERTY_LOCATION,
  CatalogsFeedsCreateRequest.JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE,
  CatalogsFeedsCreateRequest.JSON_PROPERTY_DEFAULT_COUNTRY,
  CatalogsFeedsCreateRequest.JSON_PROPERTY_DEFAULT_AVAILABILITY
})
@JsonTypeName("CatalogsFeedsCreateRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsFeedsCreateRequest {
    public static final String JSON_PROPERTY_DEFAULT_CURRENCY = "default_currency";
    private NullableCurrency defaultCurrency;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_FORMAT = "format";
    private CatalogsFormat _format;

    public static final String JSON_PROPERTY_DEFAULT_LOCALE = "default_locale";
    private CatalogsFeedsCreateRequestDefaultLocale defaultLocale;

    public static final String JSON_PROPERTY_CREDENTIALS = "credentials";
    private CatalogsFeedCredentials credentials;

    public static final String JSON_PROPERTY_LOCATION = "location";
    private String location;

    public static final String JSON_PROPERTY_PREFERRED_PROCESSING_SCHEDULE = "preferred_processing_schedule";
    private CatalogsFeedProcessingSchedule preferredProcessingSchedule;

    public static final String JSON_PROPERTY_DEFAULT_COUNTRY = "default_country";
    private Country defaultCountry;

    public static final String JSON_PROPERTY_DEFAULT_AVAILABILITY = "default_availability";
    private ProductAvailabilityType defaultAvailability;

    public CatalogsFeedsCreateRequest(String name, CatalogsFormat _format, String location) {
        this.name = name;
        this._format = _format;
        this.location = location;
    }

    public CatalogsFeedsCreateRequest defaultCurrency(NullableCurrency defaultCurrency) {
        this.defaultCurrency = defaultCurrency;
        return this;
    }

    /**
     * Get defaultCurrency
     * @return defaultCurrency
     **/
    @Nullable
    @Schema(name = "default_currency", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public CatalogsFeedsCreateRequest name(String name) {
        this.name = name;
        return this;
    }

    /**
     * A human-friendly name associated to a given feed.
     * @return name
     **/
    @NotNull
    @Schema(name = "name", description = "A human-friendly name associated to a given feed.", requiredMode = Schema.RequiredMode.REQUIRED)
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

    public CatalogsFeedsCreateRequest _format(CatalogsFormat _format) {
        this._format = _format;
        return this;
    }

    /**
     * Get _format
     * @return _format
     **/
    @NotNull
    @Schema(name = "format", requiredMode = Schema.RequiredMode.REQUIRED)
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

    public CatalogsFeedsCreateRequest defaultLocale(CatalogsFeedsCreateRequestDefaultLocale defaultLocale) {
        this.defaultLocale = defaultLocale;
        return this;
    }

    /**
     * Get defaultLocale
     * @return defaultLocale
     **/
    @Valid
    @Nullable
    @Schema(name = "default_locale", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_DEFAULT_LOCALE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CatalogsFeedsCreateRequestDefaultLocale getDefaultLocale() {
        return defaultLocale;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_LOCALE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDefaultLocale(CatalogsFeedsCreateRequestDefaultLocale defaultLocale) {
        this.defaultLocale = defaultLocale;
    }

    public CatalogsFeedsCreateRequest credentials(CatalogsFeedCredentials credentials) {
        this.credentials = credentials;
        return this;
    }

    /**
     * Get credentials
     * @return credentials
     **/
    @Valid
    @Nullable
    @Schema(name = "credentials", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public CatalogsFeedsCreateRequest location(String location) {
        this.location = location;
        return this;
    }

    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     * @return location
     **/
    @NotNull
    @Pattern(regexp="^(http|https|ftp|sftp)://")
    @Schema(name = "location", description = "The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.", requiredMode = Schema.RequiredMode.REQUIRED)
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

    public CatalogsFeedsCreateRequest preferredProcessingSchedule(CatalogsFeedProcessingSchedule preferredProcessingSchedule) {
        this.preferredProcessingSchedule = preferredProcessingSchedule;
        return this;
    }

    /**
     * Get preferredProcessingSchedule
     * @return preferredProcessingSchedule
     **/
    @Valid
    @Nullable
    @Schema(name = "preferred_processing_schedule", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public CatalogsFeedsCreateRequest defaultCountry(Country defaultCountry) {
        this.defaultCountry = defaultCountry;
        return this;
    }

    /**
     * Get defaultCountry
     * @return defaultCountry
     **/
    @Nullable
    @Schema(name = "default_country", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_DEFAULT_COUNTRY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Country getDefaultCountry() {
        return defaultCountry;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_COUNTRY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDefaultCountry(Country defaultCountry) {
        this.defaultCountry = defaultCountry;
    }

    public CatalogsFeedsCreateRequest defaultAvailability(ProductAvailabilityType defaultAvailability) {
        this.defaultAvailability = defaultAvailability;
        return this;
    }

    /**
     * Get defaultAvailability
     * @return defaultAvailability
     **/
    @Nullable
    @Schema(name = "default_availability", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsFeedsCreateRequest catalogsFeedsCreateRequest = (CatalogsFeedsCreateRequest) o;
        return Objects.equals(this.defaultCurrency, catalogsFeedsCreateRequest.defaultCurrency) &&
            Objects.equals(this.name, catalogsFeedsCreateRequest.name) &&
            Objects.equals(this._format, catalogsFeedsCreateRequest._format) &&
            Objects.equals(this.defaultLocale, catalogsFeedsCreateRequest.defaultLocale) &&
            Objects.equals(this.credentials, catalogsFeedsCreateRequest.credentials) &&
            Objects.equals(this.location, catalogsFeedsCreateRequest.location) &&
            Objects.equals(this.preferredProcessingSchedule, catalogsFeedsCreateRequest.preferredProcessingSchedule) &&
            Objects.equals(this.defaultCountry, catalogsFeedsCreateRequest.defaultCountry) &&
            Objects.equals(this.defaultAvailability, catalogsFeedsCreateRequest.defaultAvailability);
    }

    @Override
    public int hashCode() {
        return Objects.hash(defaultCurrency, name, _format, defaultLocale, credentials, location, preferredProcessingSchedule, defaultCountry, defaultAvailability);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsFeedsCreateRequest {\n");
        sb.append("    defaultCurrency: ").append(toIndentedString(defaultCurrency)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    _format: ").append(toIndentedString(_format)).append("\n");
        sb.append("    defaultLocale: ").append(toIndentedString(defaultLocale)).append("\n");
        sb.append("    credentials: ").append(toIndentedString(credentials)).append("\n");
        sb.append("    location: ").append(toIndentedString(location)).append("\n");
        sb.append("    preferredProcessingSchedule: ").append(toIndentedString(preferredProcessingSchedule)).append("\n");
        sb.append("    defaultCountry: ").append(toIndentedString(defaultCountry)).append("\n");
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

