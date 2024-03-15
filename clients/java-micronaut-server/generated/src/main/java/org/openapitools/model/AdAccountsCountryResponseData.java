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
import java.math.BigDecimal;
import org.openapitools.model.AdCountry;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * AdAccountsCountryResponseData
 */
@JsonPropertyOrder({
  AdAccountsCountryResponseData.JSON_PROPERTY_CODE,
  AdAccountsCountryResponseData.JSON_PROPERTY_CURRENCY,
  AdAccountsCountryResponseData.JSON_PROPERTY_INDEX,
  AdAccountsCountryResponseData.JSON_PROPERTY_NAME
})
@JsonTypeName("AdAccountsCountryResponseData")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AdAccountsCountryResponseData {
    public static final String JSON_PROPERTY_CODE = "code";
    private AdCountry code;

    public static final String JSON_PROPERTY_CURRENCY = "currency";
    private String currency;

    public static final String JSON_PROPERTY_INDEX = "index";
    private BigDecimal index;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public AdAccountsCountryResponseData() {
    }

    public AdAccountsCountryResponseData code(AdCountry code) {
        this.code = code;
        return this;
    }

    /**
     * Get code
     * @return code
     **/
    @Nullable
    @Schema(name = "code", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public AdCountry getCode() {
        return code;
    }

    @JsonProperty(JSON_PROPERTY_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCode(AdCountry code) {
        this.code = code;
    }

    public AdAccountsCountryResponseData currency(String currency) {
        this.currency = currency;
        return this;
    }

    /**
     * Country currency.
     * @return currency
     **/
    @Nullable
    @Schema(name = "currency", example = "Dollars", description = "Country currency.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCurrency() {
        return currency;
    }

    @JsonProperty(JSON_PROPERTY_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCurrency(String currency) {
        this.currency = currency;
    }

    public AdAccountsCountryResponseData index(BigDecimal index) {
        this.index = index;
        return this;
    }

    /**
     * Country index
     * @return index
     **/
    @Nullable
    @Schema(name = "index", example = "1", description = "Country index", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_INDEX)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getIndex() {
        return index;
    }

    @JsonProperty(JSON_PROPERTY_INDEX)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIndex(BigDecimal index) {
        this.index = index;
    }

    public AdAccountsCountryResponseData name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Country name
     * @return name
     **/
    @Nullable
    @Schema(name = "name", example = "United States of America", description = "Country name", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AdAccountsCountryResponseData adAccountsCountryResponseData = (AdAccountsCountryResponseData) o;
        return Objects.equals(this.code, adAccountsCountryResponseData.code) &&
            Objects.equals(this.currency, adAccountsCountryResponseData.currency) &&
            Objects.equals(this.index, adAccountsCountryResponseData.index) &&
            Objects.equals(this.name, adAccountsCountryResponseData.name);
    }

    @Override
    public int hashCode() {
        return Objects.hash(code, currency, index, name);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AdAccountsCountryResponseData {\n");
        sb.append("    code: ").append(toIndentedString(code)).append("\n");
        sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
        sb.append("    index: ").append(toIndentedString(index)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
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

