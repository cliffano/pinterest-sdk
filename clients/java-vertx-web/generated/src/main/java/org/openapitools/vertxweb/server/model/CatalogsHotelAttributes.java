package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.vertxweb.server.model.CatalogsHotelAddress;
import org.openapitools.vertxweb.server.model.CatalogsHotelAttributesAllOfMainImage;
import org.openapitools.vertxweb.server.model.CatalogsHotelGuestRatings;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class CatalogsHotelAttributes   {
  
  private String name;
  private String link;
  private String description;
  private String brand;
  private BigDecimal latitude;
  private BigDecimal longitude;
  private List<String> neighborhood;
  private CatalogsHotelAddress address;
  private String customLabel0;
  private String customLabel1;
  private String customLabel2;
  private String customLabel3;
  private String customLabel4;
  private String category;
  private String basePrice;
  private String salePrice;
  private CatalogsHotelGuestRatings guestRatings;
  private CatalogsHotelAttributesAllOfMainImage mainImage;
  private List<String> additionalImageLink;

  public CatalogsHotelAttributes () {

  }

  public CatalogsHotelAttributes (String name, String link, String description, String brand, BigDecimal latitude, BigDecimal longitude, List<String> neighborhood, CatalogsHotelAddress address, String customLabel0, String customLabel1, String customLabel2, String customLabel3, String customLabel4, String category, String basePrice, String salePrice, CatalogsHotelGuestRatings guestRatings, CatalogsHotelAttributesAllOfMainImage mainImage, List<String> additionalImageLink) {
    this.name = name;
    this.link = link;
    this.description = description;
    this.brand = brand;
    this.latitude = latitude;
    this.longitude = longitude;
    this.neighborhood = neighborhood;
    this.address = address;
    this.customLabel0 = customLabel0;
    this.customLabel1 = customLabel1;
    this.customLabel2 = customLabel2;
    this.customLabel3 = customLabel3;
    this.customLabel4 = customLabel4;
    this.category = category;
    this.basePrice = basePrice;
    this.salePrice = salePrice;
    this.guestRatings = guestRatings;
    this.mainImage = mainImage;
    this.additionalImageLink = additionalImageLink;
  }

    
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

    
  @JsonProperty("link")
  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

    
  @JsonProperty("description")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

    
  @JsonProperty("brand")
  public String getBrand() {
    return brand;
  }
  public void setBrand(String brand) {
    this.brand = brand;
  }

    
  @JsonProperty("latitude")
  public BigDecimal getLatitude() {
    return latitude;
  }
  public void setLatitude(BigDecimal latitude) {
    this.latitude = latitude;
  }

    
  @JsonProperty("longitude")
  public BigDecimal getLongitude() {
    return longitude;
  }
  public void setLongitude(BigDecimal longitude) {
    this.longitude = longitude;
  }

    
  @JsonProperty("neighborhood")
  public List<String> getNeighborhood() {
    return neighborhood;
  }
  public void setNeighborhood(List<String> neighborhood) {
    this.neighborhood = neighborhood;
  }

    
  @JsonProperty("address")
  public CatalogsHotelAddress getAddress() {
    return address;
  }
  public void setAddress(CatalogsHotelAddress address) {
    this.address = address;
  }

    
  @JsonProperty("custom_label_0")
  public String getCustomLabel0() {
    return customLabel0;
  }
  public void setCustomLabel0(String customLabel0) {
    this.customLabel0 = customLabel0;
  }

    
  @JsonProperty("custom_label_1")
  public String getCustomLabel1() {
    return customLabel1;
  }
  public void setCustomLabel1(String customLabel1) {
    this.customLabel1 = customLabel1;
  }

    
  @JsonProperty("custom_label_2")
  public String getCustomLabel2() {
    return customLabel2;
  }
  public void setCustomLabel2(String customLabel2) {
    this.customLabel2 = customLabel2;
  }

    
  @JsonProperty("custom_label_3")
  public String getCustomLabel3() {
    return customLabel3;
  }
  public void setCustomLabel3(String customLabel3) {
    this.customLabel3 = customLabel3;
  }

    
  @JsonProperty("custom_label_4")
  public String getCustomLabel4() {
    return customLabel4;
  }
  public void setCustomLabel4(String customLabel4) {
    this.customLabel4 = customLabel4;
  }

    
  @JsonProperty("category")
  public String getCategory() {
    return category;
  }
  public void setCategory(String category) {
    this.category = category;
  }

    
  @JsonProperty("base_price")
  public String getBasePrice() {
    return basePrice;
  }
  public void setBasePrice(String basePrice) {
    this.basePrice = basePrice;
  }

    
  @JsonProperty("sale_price")
  public String getSalePrice() {
    return salePrice;
  }
  public void setSalePrice(String salePrice) {
    this.salePrice = salePrice;
  }

    
  @JsonProperty("guest_ratings")
  public CatalogsHotelGuestRatings getGuestRatings() {
    return guestRatings;
  }
  public void setGuestRatings(CatalogsHotelGuestRatings guestRatings) {
    this.guestRatings = guestRatings;
  }

    
  @JsonProperty("main_image")
  public CatalogsHotelAttributesAllOfMainImage getMainImage() {
    return mainImage;
  }
  public void setMainImage(CatalogsHotelAttributesAllOfMainImage mainImage) {
    this.mainImage = mainImage;
  }

    
  @JsonProperty("additional_image_link")
  public List<String> getAdditionalImageLink() {
    return additionalImageLink;
  }
  public void setAdditionalImageLink(List<String> additionalImageLink) {
    this.additionalImageLink = additionalImageLink;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsHotelAttributes catalogsHotelAttributes = (CatalogsHotelAttributes) o;
    return Objects.equals(name, catalogsHotelAttributes.name) &&
        Objects.equals(link, catalogsHotelAttributes.link) &&
        Objects.equals(description, catalogsHotelAttributes.description) &&
        Objects.equals(brand, catalogsHotelAttributes.brand) &&
        Objects.equals(latitude, catalogsHotelAttributes.latitude) &&
        Objects.equals(longitude, catalogsHotelAttributes.longitude) &&
        Objects.equals(neighborhood, catalogsHotelAttributes.neighborhood) &&
        Objects.equals(address, catalogsHotelAttributes.address) &&
        Objects.equals(customLabel0, catalogsHotelAttributes.customLabel0) &&
        Objects.equals(customLabel1, catalogsHotelAttributes.customLabel1) &&
        Objects.equals(customLabel2, catalogsHotelAttributes.customLabel2) &&
        Objects.equals(customLabel3, catalogsHotelAttributes.customLabel3) &&
        Objects.equals(customLabel4, catalogsHotelAttributes.customLabel4) &&
        Objects.equals(category, catalogsHotelAttributes.category) &&
        Objects.equals(basePrice, catalogsHotelAttributes.basePrice) &&
        Objects.equals(salePrice, catalogsHotelAttributes.salePrice) &&
        Objects.equals(guestRatings, catalogsHotelAttributes.guestRatings) &&
        Objects.equals(mainImage, catalogsHotelAttributes.mainImage) &&
        Objects.equals(additionalImageLink, catalogsHotelAttributes.additionalImageLink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, link, description, brand, latitude, longitude, neighborhood, address, customLabel0, customLabel1, customLabel2, customLabel3, customLabel4, category, basePrice, salePrice, guestRatings, mainImage, additionalImageLink);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsHotelAttributes {\n");
    
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
    sb.append("    mainImage: ").append(toIndentedString(mainImage)).append("\n");
    sb.append("    additionalImageLink: ").append(toIndentedString(additionalImageLink)).append("\n");
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
