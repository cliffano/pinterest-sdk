package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.BrandFilter;
import org.openapitools.model.CatalogsProductGroupMultipleCountriesCriteria;
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;
import org.openapitools.model.CatalogsProductGroupPricingCurrencyCriteria;
import org.openapitools.model.CountryFilter;
import org.openapitools.model.CustomLabel0Filter;
import org.openapitools.model.CustomLabel1Filter;
import org.openapitools.model.CustomLabel2Filter;
import org.openapitools.model.CustomLabel3Filter;
import org.openapitools.model.CustomLabel4Filter;
import org.openapitools.model.HotelIdFilter;
import org.openapitools.model.PriceFilter;

/**
 * CatalogsHotelProductGroupFilterKeys
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2024-03-14T23:02:29.393275857Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsHotelProductGroupFilterKeys   {
  @JsonProperty("PRICE")
  private CatalogsProductGroupPricingCurrencyCriteria PRICE;

  @JsonProperty("HOTEL_ID")
  private CatalogsProductGroupMultipleStringCriteria HOTEL_ID;

  @JsonProperty("BRAND")
  private CatalogsProductGroupMultipleStringCriteria BRAND;

  @JsonProperty("CUSTOM_LABEL_0")
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0;

  @JsonProperty("CUSTOM_LABEL_1")
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_1;

  @JsonProperty("CUSTOM_LABEL_2")
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2;

  @JsonProperty("CUSTOM_LABEL_3")
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_3;

  @JsonProperty("CUSTOM_LABEL_4")
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4;

  @JsonProperty("COUNTRY")
  private CatalogsProductGroupMultipleCountriesCriteria COUNTRY;

  public CatalogsHotelProductGroupFilterKeys PRICE(CatalogsProductGroupPricingCurrencyCriteria PRICE) {
    this.PRICE = PRICE;
    return this;
  }

   /**
   * Get PRICE
   * @return PRICE
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupPricingCurrencyCriteria getPRICE() {
    return PRICE;
  }

  public void setPRICE(CatalogsProductGroupPricingCurrencyCriteria PRICE) {
    this.PRICE = PRICE;
  }

  public CatalogsHotelProductGroupFilterKeys HOTEL_ID(CatalogsProductGroupMultipleStringCriteria HOTEL_ID) {
    this.HOTEL_ID = HOTEL_ID;
    return this;
  }

   /**
   * Get HOTEL_ID
   * @return HOTEL_ID
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getHOTELID() {
    return HOTEL_ID;
  }

  public void setHOTELID(CatalogsProductGroupMultipleStringCriteria HOTEL_ID) {
    this.HOTEL_ID = HOTEL_ID;
  }

  public CatalogsHotelProductGroupFilterKeys BRAND(CatalogsProductGroupMultipleStringCriteria BRAND) {
    this.BRAND = BRAND;
    return this;
  }

   /**
   * Get BRAND
   * @return BRAND
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getBRAND() {
    return BRAND;
  }

  public void setBRAND(CatalogsProductGroupMultipleStringCriteria BRAND) {
    this.BRAND = BRAND;
  }

  public CatalogsHotelProductGroupFilterKeys CUSTOM_LABEL_0(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0) {
    this.CUSTOM_LABEL_0 = CUSTOM_LABEL_0;
    return this;
  }

   /**
   * Get CUSTOM_LABEL_0
   * @return CUSTOM_LABEL_0
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL0() {
    return CUSTOM_LABEL_0;
  }

  public void setCUSTOMLABEL0(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0) {
    this.CUSTOM_LABEL_0 = CUSTOM_LABEL_0;
  }

  public CatalogsHotelProductGroupFilterKeys CUSTOM_LABEL_1(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_1) {
    this.CUSTOM_LABEL_1 = CUSTOM_LABEL_1;
    return this;
  }

   /**
   * Get CUSTOM_LABEL_1
   * @return CUSTOM_LABEL_1
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL1() {
    return CUSTOM_LABEL_1;
  }

  public void setCUSTOMLABEL1(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_1) {
    this.CUSTOM_LABEL_1 = CUSTOM_LABEL_1;
  }

  public CatalogsHotelProductGroupFilterKeys CUSTOM_LABEL_2(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2) {
    this.CUSTOM_LABEL_2 = CUSTOM_LABEL_2;
    return this;
  }

   /**
   * Get CUSTOM_LABEL_2
   * @return CUSTOM_LABEL_2
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL2() {
    return CUSTOM_LABEL_2;
  }

  public void setCUSTOMLABEL2(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2) {
    this.CUSTOM_LABEL_2 = CUSTOM_LABEL_2;
  }

  public CatalogsHotelProductGroupFilterKeys CUSTOM_LABEL_3(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_3) {
    this.CUSTOM_LABEL_3 = CUSTOM_LABEL_3;
    return this;
  }

   /**
   * Get CUSTOM_LABEL_3
   * @return CUSTOM_LABEL_3
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL3() {
    return CUSTOM_LABEL_3;
  }

  public void setCUSTOMLABEL3(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_3) {
    this.CUSTOM_LABEL_3 = CUSTOM_LABEL_3;
  }

  public CatalogsHotelProductGroupFilterKeys CUSTOM_LABEL_4(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4) {
    this.CUSTOM_LABEL_4 = CUSTOM_LABEL_4;
    return this;
  }

   /**
   * Get CUSTOM_LABEL_4
   * @return CUSTOM_LABEL_4
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL4() {
    return CUSTOM_LABEL_4;
  }

  public void setCUSTOMLABEL4(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4) {
    this.CUSTOM_LABEL_4 = CUSTOM_LABEL_4;
  }

  public CatalogsHotelProductGroupFilterKeys COUNTRY(CatalogsProductGroupMultipleCountriesCriteria COUNTRY) {
    this.COUNTRY = COUNTRY;
    return this;
  }

   /**
   * Get COUNTRY
   * @return COUNTRY
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleCountriesCriteria getCOUNTRY() {
    return COUNTRY;
  }

  public void setCOUNTRY(CatalogsProductGroupMultipleCountriesCriteria COUNTRY) {
    this.COUNTRY = COUNTRY;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsHotelProductGroupFilterKeys catalogsHotelProductGroupFilterKeys = (CatalogsHotelProductGroupFilterKeys) o;
    return Objects.equals(this.PRICE, catalogsHotelProductGroupFilterKeys.PRICE) &&
        Objects.equals(this.HOTEL_ID, catalogsHotelProductGroupFilterKeys.HOTEL_ID) &&
        Objects.equals(this.BRAND, catalogsHotelProductGroupFilterKeys.BRAND) &&
        Objects.equals(this.CUSTOM_LABEL_0, catalogsHotelProductGroupFilterKeys.CUSTOM_LABEL_0) &&
        Objects.equals(this.CUSTOM_LABEL_1, catalogsHotelProductGroupFilterKeys.CUSTOM_LABEL_1) &&
        Objects.equals(this.CUSTOM_LABEL_2, catalogsHotelProductGroupFilterKeys.CUSTOM_LABEL_2) &&
        Objects.equals(this.CUSTOM_LABEL_3, catalogsHotelProductGroupFilterKeys.CUSTOM_LABEL_3) &&
        Objects.equals(this.CUSTOM_LABEL_4, catalogsHotelProductGroupFilterKeys.CUSTOM_LABEL_4) &&
        Objects.equals(this.COUNTRY, catalogsHotelProductGroupFilterKeys.COUNTRY);
  }

  @Override
  public int hashCode() {
    return Objects.hash(PRICE, HOTEL_ID, BRAND, CUSTOM_LABEL_0, CUSTOM_LABEL_1, CUSTOM_LABEL_2, CUSTOM_LABEL_3, CUSTOM_LABEL_4, COUNTRY);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsHotelProductGroupFilterKeys {\n");
    
    sb.append("    PRICE: ").append(toIndentedString(PRICE)).append("\n");
    sb.append("    HOTEL_ID: ").append(toIndentedString(HOTEL_ID)).append("\n");
    sb.append("    BRAND: ").append(toIndentedString(BRAND)).append("\n");
    sb.append("    CUSTOM_LABEL_0: ").append(toIndentedString(CUSTOM_LABEL_0)).append("\n");
    sb.append("    CUSTOM_LABEL_1: ").append(toIndentedString(CUSTOM_LABEL_1)).append("\n");
    sb.append("    CUSTOM_LABEL_2: ").append(toIndentedString(CUSTOM_LABEL_2)).append("\n");
    sb.append("    CUSTOM_LABEL_3: ").append(toIndentedString(CUSTOM_LABEL_3)).append("\n");
    sb.append("    CUSTOM_LABEL_4: ").append(toIndentedString(CUSTOM_LABEL_4)).append("\n");
    sb.append("    COUNTRY: ").append(toIndentedString(COUNTRY)).append("\n");
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

