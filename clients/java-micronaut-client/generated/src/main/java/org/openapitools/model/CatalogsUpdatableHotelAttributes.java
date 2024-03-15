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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsHotelAddress;
import org.openapitools.model.CatalogsHotelGuestRatings;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CatalogsUpdatableHotelAttributes
 */
@JsonPropertyOrder({
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_NAME,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_LINK,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_DESCRIPTION,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_BRAND,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_LATITUDE,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_LONGITUDE,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_NEIGHBORHOOD,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_ADDRESS,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_CUSTOM_LABEL0,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_CUSTOM_LABEL1,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_CUSTOM_LABEL2,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_CUSTOM_LABEL3,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_CUSTOM_LABEL4,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_CATEGORY,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_BASE_PRICE,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_SALE_PRICE,
  CatalogsUpdatableHotelAttributes.JSON_PROPERTY_GUEST_RATINGS
})
@JsonTypeName("CatalogsUpdatableHotelAttributes")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsUpdatableHotelAttributes {
    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_LINK = "link";
    private String link;

    public static final String JSON_PROPERTY_DESCRIPTION = "description";
    private String description;

    public static final String JSON_PROPERTY_BRAND = "brand";
    private String brand;

    public static final String JSON_PROPERTY_LATITUDE = "latitude";
    private BigDecimal latitude;

    public static final String JSON_PROPERTY_LONGITUDE = "longitude";
    private BigDecimal longitude;

    public static final String JSON_PROPERTY_NEIGHBORHOOD = "neighborhood";
    private List<String> neighborhood = null;

    public static final String JSON_PROPERTY_ADDRESS = "address";
    private CatalogsHotelAddress address;

    public static final String JSON_PROPERTY_CUSTOM_LABEL0 = "custom_label_0";
    private String customLabel0;

    public static final String JSON_PROPERTY_CUSTOM_LABEL1 = "custom_label_1";
    private String customLabel1;

    public static final String JSON_PROPERTY_CUSTOM_LABEL2 = "custom_label_2";
    private String customLabel2;

    public static final String JSON_PROPERTY_CUSTOM_LABEL3 = "custom_label_3";
    private String customLabel3;

    public static final String JSON_PROPERTY_CUSTOM_LABEL4 = "custom_label_4";
    private String customLabel4;

    public static final String JSON_PROPERTY_CATEGORY = "category";
    private String category;

    public static final String JSON_PROPERTY_BASE_PRICE = "base_price";
    private String basePrice;

    public static final String JSON_PROPERTY_SALE_PRICE = "sale_price";
    private String salePrice;

    public static final String JSON_PROPERTY_GUEST_RATINGS = "guest_ratings";
    private CatalogsHotelGuestRatings guestRatings;

    public CatalogsUpdatableHotelAttributes() {
    }

    public CatalogsUpdatableHotelAttributes name(String name) {
        this.name = name;
        return this;
    }

    /**
     * The hotel&#39;s name.
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

    public CatalogsUpdatableHotelAttributes link(String link) {
        this.link = link;
        return this;
    }

    /**
     * Link to the product page
     * @return link
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getLink() {
        return link;
    }

    @JsonProperty(JSON_PROPERTY_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLink(String link) {
        this.link = link;
    }

    public CatalogsUpdatableHotelAttributes description(String description) {
        this.description = description;
        return this;
    }

    /**
     * Brief description of the hotel.
     * @return description
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DESCRIPTION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDescription() {
        return description;
    }

    @JsonProperty(JSON_PROPERTY_DESCRIPTION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDescription(String description) {
        this.description = description;
    }

    public CatalogsUpdatableHotelAttributes brand(String brand) {
        this.brand = brand;
        return this;
    }

    /**
     * The brand to which this hotel belongs to.
     * @return brand
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_BRAND)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getBrand() {
        return brand;
    }

    @JsonProperty(JSON_PROPERTY_BRAND)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBrand(String brand) {
        this.brand = brand;
    }

    public CatalogsUpdatableHotelAttributes latitude(BigDecimal latitude) {
        this.latitude = latitude;
        return this;
    }

    /**
     * Latitude of the hotel.
     * @return latitude
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_LATITUDE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getLatitude() {
        return latitude;
    }

    @JsonProperty(JSON_PROPERTY_LATITUDE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLatitude(BigDecimal latitude) {
        this.latitude = latitude;
    }

    public CatalogsUpdatableHotelAttributes longitude(BigDecimal longitude) {
        this.longitude = longitude;
        return this;
    }

    /**
     * Longitude of the hotel.
     * @return longitude
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_LONGITUDE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getLongitude() {
        return longitude;
    }

    @JsonProperty(JSON_PROPERTY_LONGITUDE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLongitude(BigDecimal longitude) {
        this.longitude = longitude;
    }

    public CatalogsUpdatableHotelAttributes neighborhood(List<String> neighborhood) {
        this.neighborhood = neighborhood;
        return this;
    }

    public CatalogsUpdatableHotelAttributes addNeighborhoodItem(String neighborhoodItem) {
        if (this.neighborhood == null) {
            this.neighborhood = new ArrayList<>();
        }
        this.neighborhood.add(neighborhoodItem);
        return this;
    }

    /**
     * A list of neighborhoods where the hotel is located
     * @return neighborhood
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_NEIGHBORHOOD)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<String> getNeighborhood() {
        return neighborhood;
    }

    @JsonProperty(JSON_PROPERTY_NEIGHBORHOOD)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setNeighborhood(List<String> neighborhood) {
        this.neighborhood = neighborhood;
    }

    public CatalogsUpdatableHotelAttributes address(CatalogsHotelAddress address) {
        this.address = address;
        return this;
    }

    /**
     * Get address
     * @return address
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_ADDRESS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CatalogsHotelAddress getAddress() {
        return address;
    }

    @JsonProperty(JSON_PROPERTY_ADDRESS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAddress(CatalogsHotelAddress address) {
        this.address = address;
    }

    public CatalogsUpdatableHotelAttributes customLabel0(String customLabel0) {
        this.customLabel0 = customLabel0;
        return this;
    }

    /**
     * Custom grouping of hotels
     * @return customLabel0
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL0)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCustomLabel0() {
        return customLabel0;
    }

    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL0)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCustomLabel0(String customLabel0) {
        this.customLabel0 = customLabel0;
    }

    public CatalogsUpdatableHotelAttributes customLabel1(String customLabel1) {
        this.customLabel1 = customLabel1;
        return this;
    }

    /**
     * Custom grouping of hotels
     * @return customLabel1
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL1)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCustomLabel1() {
        return customLabel1;
    }

    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL1)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCustomLabel1(String customLabel1) {
        this.customLabel1 = customLabel1;
    }

    public CatalogsUpdatableHotelAttributes customLabel2(String customLabel2) {
        this.customLabel2 = customLabel2;
        return this;
    }

    /**
     * Custom grouping of hotels
     * @return customLabel2
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL2)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCustomLabel2() {
        return customLabel2;
    }

    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL2)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCustomLabel2(String customLabel2) {
        this.customLabel2 = customLabel2;
    }

    public CatalogsUpdatableHotelAttributes customLabel3(String customLabel3) {
        this.customLabel3 = customLabel3;
        return this;
    }

    /**
     * Custom grouping of hotels
     * @return customLabel3
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL3)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCustomLabel3() {
        return customLabel3;
    }

    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL3)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCustomLabel3(String customLabel3) {
        this.customLabel3 = customLabel3;
    }

    public CatalogsUpdatableHotelAttributes customLabel4(String customLabel4) {
        this.customLabel4 = customLabel4;
        return this;
    }

    /**
     * Custom grouping of hotels
     * @return customLabel4
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL4)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCustomLabel4() {
        return customLabel4;
    }

    @JsonProperty(JSON_PROPERTY_CUSTOM_LABEL4)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCustomLabel4(String customLabel4) {
        this.customLabel4 = customLabel4;
    }

    public CatalogsUpdatableHotelAttributes category(String category) {
        this.category = category;
        return this;
    }

    /**
     * The type of property. The category can be any type of internal description desired.
     * @return category
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CATEGORY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCategory() {
        return category;
    }

    @JsonProperty(JSON_PROPERTY_CATEGORY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCategory(String category) {
        this.category = category;
    }

    public CatalogsUpdatableHotelAttributes basePrice(String basePrice) {
        this.basePrice = basePrice;
        return this;
    }

    /**
     * Base price of the hotel room per night followed by the ISO currency code
     * @return basePrice
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_BASE_PRICE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getBasePrice() {
        return basePrice;
    }

    @JsonProperty(JSON_PROPERTY_BASE_PRICE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBasePrice(String basePrice) {
        this.basePrice = basePrice;
    }

    public CatalogsUpdatableHotelAttributes salePrice(String salePrice) {
        this.salePrice = salePrice;
        return this;
    }

    /**
     * Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.
     * @return salePrice
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_SALE_PRICE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getSalePrice() {
        return salePrice;
    }

    @JsonProperty(JSON_PROPERTY_SALE_PRICE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setSalePrice(String salePrice) {
        this.salePrice = salePrice;
    }

    public CatalogsUpdatableHotelAttributes guestRatings(CatalogsHotelGuestRatings guestRatings) {
        this.guestRatings = guestRatings;
        return this;
    }

    /**
     * Get guestRatings
     * @return guestRatings
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_GUEST_RATINGS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CatalogsHotelGuestRatings getGuestRatings() {
        return guestRatings;
    }

    @JsonProperty(JSON_PROPERTY_GUEST_RATINGS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setGuestRatings(CatalogsHotelGuestRatings guestRatings) {
        this.guestRatings = guestRatings;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsUpdatableHotelAttributes catalogsUpdatableHotelAttributes = (CatalogsUpdatableHotelAttributes) o;
        return Objects.equals(this.name, catalogsUpdatableHotelAttributes.name) &&
            Objects.equals(this.link, catalogsUpdatableHotelAttributes.link) &&
            Objects.equals(this.description, catalogsUpdatableHotelAttributes.description) &&
            Objects.equals(this.brand, catalogsUpdatableHotelAttributes.brand) &&
            Objects.equals(this.latitude, catalogsUpdatableHotelAttributes.latitude) &&
            Objects.equals(this.longitude, catalogsUpdatableHotelAttributes.longitude) &&
            Objects.equals(this.neighborhood, catalogsUpdatableHotelAttributes.neighborhood) &&
            Objects.equals(this.address, catalogsUpdatableHotelAttributes.address) &&
            Objects.equals(this.customLabel0, catalogsUpdatableHotelAttributes.customLabel0) &&
            Objects.equals(this.customLabel1, catalogsUpdatableHotelAttributes.customLabel1) &&
            Objects.equals(this.customLabel2, catalogsUpdatableHotelAttributes.customLabel2) &&
            Objects.equals(this.customLabel3, catalogsUpdatableHotelAttributes.customLabel3) &&
            Objects.equals(this.customLabel4, catalogsUpdatableHotelAttributes.customLabel4) &&
            Objects.equals(this.category, catalogsUpdatableHotelAttributes.category) &&
            Objects.equals(this.basePrice, catalogsUpdatableHotelAttributes.basePrice) &&
            Objects.equals(this.salePrice, catalogsUpdatableHotelAttributes.salePrice) &&
            Objects.equals(this.guestRatings, catalogsUpdatableHotelAttributes.guestRatings);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name, link, description, brand, latitude, longitude, neighborhood, address, customLabel0, customLabel1, customLabel2, customLabel3, customLabel4, category, basePrice, salePrice, guestRatings);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsUpdatableHotelAttributes {\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    link: ").append(toIndentedString(link)).append("\n");
        sb.append("    description: ").append(toIndentedString(description)).append("\n");
        sb.append("    brand: ").append(toIndentedString(brand)).append("\n");
        sb.append("    latitude: ").append(toIndentedString(latitude)).append("\n");
        sb.append("    longitude: ").append(toIndentedString(longitude)).append("\n");
        sb.append("    neighborhood: ").append(toIndentedString(neighborhood)).append("\n");
        sb.append("    address: ").append(toIndentedString(address)).append("\n");
        sb.append("    customLabel0: ").append(toIndentedString(customLabel0)).append("\n");
        sb.append("    customLabel1: ").append(toIndentedString(customLabel1)).append("\n");
        sb.append("    customLabel2: ").append(toIndentedString(customLabel2)).append("\n");
        sb.append("    customLabel3: ").append(toIndentedString(customLabel3)).append("\n");
        sb.append("    customLabel4: ").append(toIndentedString(customLabel4)).append("\n");
        sb.append("    category: ").append(toIndentedString(category)).append("\n");
        sb.append("    basePrice: ").append(toIndentedString(basePrice)).append("\n");
        sb.append("    salePrice: ").append(toIndentedString(salePrice)).append("\n");
        sb.append("    guestRatings: ").append(toIndentedString(guestRatings)).append("\n");
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

