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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CatalogsHotelAddress
 */
@JsonPropertyOrder({
  CatalogsHotelAddress.JSON_PROPERTY_ADDR1,
  CatalogsHotelAddress.JSON_PROPERTY_CITY,
  CatalogsHotelAddress.JSON_PROPERTY_REGION,
  CatalogsHotelAddress.JSON_PROPERTY_COUNTRY,
  CatalogsHotelAddress.JSON_PROPERTY_POSTAL_CODE
})
@JsonTypeName("CatalogsHotelAddress")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsHotelAddress {
    public static final String JSON_PROPERTY_ADDR1 = "addr1";
    private String addr1;

    public static final String JSON_PROPERTY_CITY = "city";
    private String city;

    public static final String JSON_PROPERTY_REGION = "region";
    private String region;

    public static final String JSON_PROPERTY_COUNTRY = "country";
    private String country;

    public static final String JSON_PROPERTY_POSTAL_CODE = "postal_code";
    private String postalCode;

    public CatalogsHotelAddress() {
    }

    public CatalogsHotelAddress addr1(String addr1) {
        this.addr1 = addr1;
        return this;
    }

    /**
     * Primary street address of hotel.
     * @return addr1
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_ADDR1)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getAddr1() {
        return addr1;
    }

    @JsonProperty(JSON_PROPERTY_ADDR1)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAddr1(String addr1) {
        this.addr1 = addr1;
    }

    public CatalogsHotelAddress city(String city) {
        this.city = city;
        return this;
    }

    /**
     * City where the hotel is located.
     * @return city
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CITY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCity() {
        return city;
    }

    @JsonProperty(JSON_PROPERTY_CITY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCity(String city) {
        this.city = city;
    }

    public CatalogsHotelAddress region(String region) {
        this.region = region;
        return this;
    }

    /**
     * State, county, province, where the hotel is located.
     * @return region
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_REGION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getRegion() {
        return region;
    }

    @JsonProperty(JSON_PROPERTY_REGION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setRegion(String region) {
        this.region = region;
    }

    public CatalogsHotelAddress country(String country) {
        this.country = country;
        return this;
    }

    /**
     * Country where the hotel is located.
     * @return country
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_COUNTRY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCountry() {
        return country;
    }

    @JsonProperty(JSON_PROPERTY_COUNTRY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCountry(String country) {
        this.country = country;
    }

    public CatalogsHotelAddress postalCode(String postalCode) {
        this.postalCode = postalCode;
        return this;
    }

    /**
     * Required for countries with a postal code system. Postal or zip code of the hotel.
     * @return postalCode
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_POSTAL_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getPostalCode() {
        return postalCode;
    }

    @JsonProperty(JSON_PROPERTY_POSTAL_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPostalCode(String postalCode) {
        this.postalCode = postalCode;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsHotelAddress catalogsHotelAddress = (CatalogsHotelAddress) o;
        return Objects.equals(this.addr1, catalogsHotelAddress.addr1) &&
            Objects.equals(this.city, catalogsHotelAddress.city) &&
            Objects.equals(this.region, catalogsHotelAddress.region) &&
            Objects.equals(this.country, catalogsHotelAddress.country) &&
            Objects.equals(this.postalCode, catalogsHotelAddress.postalCode);
    }

    @Override
    public int hashCode() {
        return Objects.hash(addr1, city, region, country, postalCode);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsHotelAddress {\n");
        sb.append("    addr1: ").append(toIndentedString(addr1)).append("\n");
        sb.append("    city: ").append(toIndentedString(city)).append("\n");
        sb.append("    region: ").append(toIndentedString(region)).append("\n");
        sb.append("    country: ").append(toIndentedString(country)).append("\n");
        sb.append("    postalCode: ").append(toIndentedString(postalCode)).append("\n");
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

