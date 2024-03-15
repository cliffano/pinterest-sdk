package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.vertxweb.server.model.AvailabilityFilter;
import org.openapitools.vertxweb.server.model.BrandFilter;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupCurrencyCriteria;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupMultipleGenderCriteria;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupMultipleStringCriteria;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupMultipleStringListCriteria;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupPricingCriteria;
import org.openapitools.vertxweb.server.model.ConditionFilter;
import org.openapitools.vertxweb.server.model.CurrencyFilter;
import org.openapitools.vertxweb.server.model.CustomLabel0Filter;
import org.openapitools.vertxweb.server.model.CustomLabel1Filter;
import org.openapitools.vertxweb.server.model.CustomLabel2Filter;
import org.openapitools.vertxweb.server.model.CustomLabel3Filter;
import org.openapitools.vertxweb.server.model.CustomLabel4Filter;
import org.openapitools.vertxweb.server.model.GenderFilter;
import org.openapitools.vertxweb.server.model.GoogleProductCategory0Filter;
import org.openapitools.vertxweb.server.model.GoogleProductCategory1Filter;
import org.openapitools.vertxweb.server.model.GoogleProductCategory2Filter;
import org.openapitools.vertxweb.server.model.GoogleProductCategory3Filter;
import org.openapitools.vertxweb.server.model.GoogleProductCategory4Filter;
import org.openapitools.vertxweb.server.model.GoogleProductCategory5Filter;
import org.openapitools.vertxweb.server.model.GoogleProductCategory6Filter;
import org.openapitools.vertxweb.server.model.ItemGroupIdFilter;
import org.openapitools.vertxweb.server.model.ItemIdFilter;
import org.openapitools.vertxweb.server.model.MaxPriceFilter;
import org.openapitools.vertxweb.server.model.MinPriceFilter;
import org.openapitools.vertxweb.server.model.ProductType0Filter;
import org.openapitools.vertxweb.server.model.ProductType1Filter;
import org.openapitools.vertxweb.server.model.ProductType2Filter;
import org.openapitools.vertxweb.server.model.ProductType3Filter;
import org.openapitools.vertxweb.server.model.ProductType4Filter;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class CatalogsProductGroupFilterKeys   {
  
  private CatalogsProductGroupPricingCriteria MIN_PRICE;
  private CatalogsProductGroupPricingCriteria MAX_PRICE;
  private CatalogsProductGroupCurrencyCriteria CURRENCY;
  private CatalogsProductGroupMultipleStringCriteria ITEM_ID;
  private CatalogsProductGroupMultipleStringCriteria AVAILABILITY;
  private CatalogsProductGroupMultipleStringCriteria BRAND;
  private CatalogsProductGroupMultipleStringCriteria CONDITION;
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0;
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_1;
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2;
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_3;
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4;
  private CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID;
  private CatalogsProductGroupMultipleGenderCriteria GENDER;
  private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_4;
  private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_3;
  private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_2;
  private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1;
  private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_0;
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_6;
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_5;
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_4;
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_3;
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_2;
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_1;
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_0;

  public CatalogsProductGroupFilterKeys () {

  }

  public CatalogsProductGroupFilterKeys (CatalogsProductGroupPricingCriteria MIN_PRICE, CatalogsProductGroupPricingCriteria MAX_PRICE, CatalogsProductGroupCurrencyCriteria CURRENCY, CatalogsProductGroupMultipleStringCriteria ITEM_ID, CatalogsProductGroupMultipleStringCriteria AVAILABILITY, CatalogsProductGroupMultipleStringCriteria BRAND, CatalogsProductGroupMultipleStringCriteria CONDITION, CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0, CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_1, CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2, CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_3, CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4, CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID, CatalogsProductGroupMultipleGenderCriteria GENDER, CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_4, CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_3, CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_2, CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1, CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_0, CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_6, CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_5, CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_4, CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_3, CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_2, CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_1, CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_0) {
    this.MIN_PRICE = MIN_PRICE;
    this.MAX_PRICE = MAX_PRICE;
    this.CURRENCY = CURRENCY;
    this.ITEM_ID = ITEM_ID;
    this.AVAILABILITY = AVAILABILITY;
    this.BRAND = BRAND;
    this.CONDITION = CONDITION;
    this.CUSTOM_LABEL_0 = CUSTOM_LABEL_0;
    this.CUSTOM_LABEL_1 = CUSTOM_LABEL_1;
    this.CUSTOM_LABEL_2 = CUSTOM_LABEL_2;
    this.CUSTOM_LABEL_3 = CUSTOM_LABEL_3;
    this.CUSTOM_LABEL_4 = CUSTOM_LABEL_4;
    this.ITEM_GROUP_ID = ITEM_GROUP_ID;
    this.GENDER = GENDER;
    this.PRODUCT_TYPE_4 = PRODUCT_TYPE_4;
    this.PRODUCT_TYPE_3 = PRODUCT_TYPE_3;
    this.PRODUCT_TYPE_2 = PRODUCT_TYPE_2;
    this.PRODUCT_TYPE_1 = PRODUCT_TYPE_1;
    this.PRODUCT_TYPE_0 = PRODUCT_TYPE_0;
    this.GOOGLE_PRODUCT_CATEGORY_6 = GOOGLE_PRODUCT_CATEGORY_6;
    this.GOOGLE_PRODUCT_CATEGORY_5 = GOOGLE_PRODUCT_CATEGORY_5;
    this.GOOGLE_PRODUCT_CATEGORY_4 = GOOGLE_PRODUCT_CATEGORY_4;
    this.GOOGLE_PRODUCT_CATEGORY_3 = GOOGLE_PRODUCT_CATEGORY_3;
    this.GOOGLE_PRODUCT_CATEGORY_2 = GOOGLE_PRODUCT_CATEGORY_2;
    this.GOOGLE_PRODUCT_CATEGORY_1 = GOOGLE_PRODUCT_CATEGORY_1;
    this.GOOGLE_PRODUCT_CATEGORY_0 = GOOGLE_PRODUCT_CATEGORY_0;
  }

    
  @JsonProperty("MIN_PRICE")
  public CatalogsProductGroupPricingCriteria getMINPRICE() {
    return MIN_PRICE;
  }
  public void setMINPRICE(CatalogsProductGroupPricingCriteria MIN_PRICE) {
    this.MIN_PRICE = MIN_PRICE;
  }

    
  @JsonProperty("MAX_PRICE")
  public CatalogsProductGroupPricingCriteria getMAXPRICE() {
    return MAX_PRICE;
  }
  public void setMAXPRICE(CatalogsProductGroupPricingCriteria MAX_PRICE) {
    this.MAX_PRICE = MAX_PRICE;
  }

    
  @JsonProperty("CURRENCY")
  public CatalogsProductGroupCurrencyCriteria getCURRENCY() {
    return CURRENCY;
  }
  public void setCURRENCY(CatalogsProductGroupCurrencyCriteria CURRENCY) {
    this.CURRENCY = CURRENCY;
  }

    
  @JsonProperty("ITEM_ID")
  public CatalogsProductGroupMultipleStringCriteria getITEMID() {
    return ITEM_ID;
  }
  public void setITEMID(CatalogsProductGroupMultipleStringCriteria ITEM_ID) {
    this.ITEM_ID = ITEM_ID;
  }

    
  @JsonProperty("AVAILABILITY")
  public CatalogsProductGroupMultipleStringCriteria getAVAILABILITY() {
    return AVAILABILITY;
  }
  public void setAVAILABILITY(CatalogsProductGroupMultipleStringCriteria AVAILABILITY) {
    this.AVAILABILITY = AVAILABILITY;
  }

    
  @JsonProperty("BRAND")
  public CatalogsProductGroupMultipleStringCriteria getBRAND() {
    return BRAND;
  }
  public void setBRAND(CatalogsProductGroupMultipleStringCriteria BRAND) {
    this.BRAND = BRAND;
  }

    
  @JsonProperty("CONDITION")
  public CatalogsProductGroupMultipleStringCriteria getCONDITION() {
    return CONDITION;
  }
  public void setCONDITION(CatalogsProductGroupMultipleStringCriteria CONDITION) {
    this.CONDITION = CONDITION;
  }

    
  @JsonProperty("CUSTOM_LABEL_0")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL0() {
    return CUSTOM_LABEL_0;
  }
  public void setCUSTOMLABEL0(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0) {
    this.CUSTOM_LABEL_0 = CUSTOM_LABEL_0;
  }

    
  @JsonProperty("CUSTOM_LABEL_1")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL1() {
    return CUSTOM_LABEL_1;
  }
  public void setCUSTOMLABEL1(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_1) {
    this.CUSTOM_LABEL_1 = CUSTOM_LABEL_1;
  }

    
  @JsonProperty("CUSTOM_LABEL_2")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL2() {
    return CUSTOM_LABEL_2;
  }
  public void setCUSTOMLABEL2(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2) {
    this.CUSTOM_LABEL_2 = CUSTOM_LABEL_2;
  }

    
  @JsonProperty("CUSTOM_LABEL_3")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL3() {
    return CUSTOM_LABEL_3;
  }
  public void setCUSTOMLABEL3(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_3) {
    this.CUSTOM_LABEL_3 = CUSTOM_LABEL_3;
  }

    
  @JsonProperty("CUSTOM_LABEL_4")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL4() {
    return CUSTOM_LABEL_4;
  }
  public void setCUSTOMLABEL4(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4) {
    this.CUSTOM_LABEL_4 = CUSTOM_LABEL_4;
  }

    
  @JsonProperty("ITEM_GROUP_ID")
  public CatalogsProductGroupMultipleStringCriteria getITEMGROUPID() {
    return ITEM_GROUP_ID;
  }
  public void setITEMGROUPID(CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID) {
    this.ITEM_GROUP_ID = ITEM_GROUP_ID;
  }

    
  @JsonProperty("GENDER")
  public CatalogsProductGroupMultipleGenderCriteria getGENDER() {
    return GENDER;
  }
  public void setGENDER(CatalogsProductGroupMultipleGenderCriteria GENDER) {
    this.GENDER = GENDER;
  }

    
  @JsonProperty("PRODUCT_TYPE_4")
  public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE4() {
    return PRODUCT_TYPE_4;
  }
  public void setPRODUCTTYPE4(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_4) {
    this.PRODUCT_TYPE_4 = PRODUCT_TYPE_4;
  }

    
  @JsonProperty("PRODUCT_TYPE_3")
  public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE3() {
    return PRODUCT_TYPE_3;
  }
  public void setPRODUCTTYPE3(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_3) {
    this.PRODUCT_TYPE_3 = PRODUCT_TYPE_3;
  }

    
  @JsonProperty("PRODUCT_TYPE_2")
  public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE2() {
    return PRODUCT_TYPE_2;
  }
  public void setPRODUCTTYPE2(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_2) {
    this.PRODUCT_TYPE_2 = PRODUCT_TYPE_2;
  }

    
  @JsonProperty("PRODUCT_TYPE_1")
  public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE1() {
    return PRODUCT_TYPE_1;
  }
  public void setPRODUCTTYPE1(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1) {
    this.PRODUCT_TYPE_1 = PRODUCT_TYPE_1;
  }

    
  @JsonProperty("PRODUCT_TYPE_0")
  public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE0() {
    return PRODUCT_TYPE_0;
  }
  public void setPRODUCTTYPE0(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_0) {
    this.PRODUCT_TYPE_0 = PRODUCT_TYPE_0;
  }

    
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_6")
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY6() {
    return GOOGLE_PRODUCT_CATEGORY_6;
  }
  public void setGOOGLEPRODUCTCATEGORY6(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_6) {
    this.GOOGLE_PRODUCT_CATEGORY_6 = GOOGLE_PRODUCT_CATEGORY_6;
  }

    
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_5")
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY5() {
    return GOOGLE_PRODUCT_CATEGORY_5;
  }
  public void setGOOGLEPRODUCTCATEGORY5(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_5) {
    this.GOOGLE_PRODUCT_CATEGORY_5 = GOOGLE_PRODUCT_CATEGORY_5;
  }

    
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_4")
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY4() {
    return GOOGLE_PRODUCT_CATEGORY_4;
  }
  public void setGOOGLEPRODUCTCATEGORY4(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_4) {
    this.GOOGLE_PRODUCT_CATEGORY_4 = GOOGLE_PRODUCT_CATEGORY_4;
  }

    
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_3")
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY3() {
    return GOOGLE_PRODUCT_CATEGORY_3;
  }
  public void setGOOGLEPRODUCTCATEGORY3(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_3) {
    this.GOOGLE_PRODUCT_CATEGORY_3 = GOOGLE_PRODUCT_CATEGORY_3;
  }

    
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_2")
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY2() {
    return GOOGLE_PRODUCT_CATEGORY_2;
  }
  public void setGOOGLEPRODUCTCATEGORY2(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_2) {
    this.GOOGLE_PRODUCT_CATEGORY_2 = GOOGLE_PRODUCT_CATEGORY_2;
  }

    
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_1")
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY1() {
    return GOOGLE_PRODUCT_CATEGORY_1;
  }
  public void setGOOGLEPRODUCTCATEGORY1(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_1) {
    this.GOOGLE_PRODUCT_CATEGORY_1 = GOOGLE_PRODUCT_CATEGORY_1;
  }

    
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_0")
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY0() {
    return GOOGLE_PRODUCT_CATEGORY_0;
  }
  public void setGOOGLEPRODUCTCATEGORY0(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_0) {
    this.GOOGLE_PRODUCT_CATEGORY_0 = GOOGLE_PRODUCT_CATEGORY_0;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsProductGroupFilterKeys catalogsProductGroupFilterKeys = (CatalogsProductGroupFilterKeys) o;
    return Objects.equals(MIN_PRICE, catalogsProductGroupFilterKeys.MIN_PRICE) &&
        Objects.equals(MAX_PRICE, catalogsProductGroupFilterKeys.MAX_PRICE) &&
        Objects.equals(CURRENCY, catalogsProductGroupFilterKeys.CURRENCY) &&
        Objects.equals(ITEM_ID, catalogsProductGroupFilterKeys.ITEM_ID) &&
        Objects.equals(AVAILABILITY, catalogsProductGroupFilterKeys.AVAILABILITY) &&
        Objects.equals(BRAND, catalogsProductGroupFilterKeys.BRAND) &&
        Objects.equals(CONDITION, catalogsProductGroupFilterKeys.CONDITION) &&
        Objects.equals(CUSTOM_LABEL_0, catalogsProductGroupFilterKeys.CUSTOM_LABEL_0) &&
        Objects.equals(CUSTOM_LABEL_1, catalogsProductGroupFilterKeys.CUSTOM_LABEL_1) &&
        Objects.equals(CUSTOM_LABEL_2, catalogsProductGroupFilterKeys.CUSTOM_LABEL_2) &&
        Objects.equals(CUSTOM_LABEL_3, catalogsProductGroupFilterKeys.CUSTOM_LABEL_3) &&
        Objects.equals(CUSTOM_LABEL_4, catalogsProductGroupFilterKeys.CUSTOM_LABEL_4) &&
        Objects.equals(ITEM_GROUP_ID, catalogsProductGroupFilterKeys.ITEM_GROUP_ID) &&
        Objects.equals(GENDER, catalogsProductGroupFilterKeys.GENDER) &&
        Objects.equals(PRODUCT_TYPE_4, catalogsProductGroupFilterKeys.PRODUCT_TYPE_4) &&
        Objects.equals(PRODUCT_TYPE_3, catalogsProductGroupFilterKeys.PRODUCT_TYPE_3) &&
        Objects.equals(PRODUCT_TYPE_2, catalogsProductGroupFilterKeys.PRODUCT_TYPE_2) &&
        Objects.equals(PRODUCT_TYPE_1, catalogsProductGroupFilterKeys.PRODUCT_TYPE_1) &&
        Objects.equals(PRODUCT_TYPE_0, catalogsProductGroupFilterKeys.PRODUCT_TYPE_0) &&
        Objects.equals(GOOGLE_PRODUCT_CATEGORY_6, catalogsProductGroupFilterKeys.GOOGLE_PRODUCT_CATEGORY_6) &&
        Objects.equals(GOOGLE_PRODUCT_CATEGORY_5, catalogsProductGroupFilterKeys.GOOGLE_PRODUCT_CATEGORY_5) &&
        Objects.equals(GOOGLE_PRODUCT_CATEGORY_4, catalogsProductGroupFilterKeys.GOOGLE_PRODUCT_CATEGORY_4) &&
        Objects.equals(GOOGLE_PRODUCT_CATEGORY_3, catalogsProductGroupFilterKeys.GOOGLE_PRODUCT_CATEGORY_3) &&
        Objects.equals(GOOGLE_PRODUCT_CATEGORY_2, catalogsProductGroupFilterKeys.GOOGLE_PRODUCT_CATEGORY_2) &&
        Objects.equals(GOOGLE_PRODUCT_CATEGORY_1, catalogsProductGroupFilterKeys.GOOGLE_PRODUCT_CATEGORY_1) &&
        Objects.equals(GOOGLE_PRODUCT_CATEGORY_0, catalogsProductGroupFilterKeys.GOOGLE_PRODUCT_CATEGORY_0);
  }

  @Override
  public int hashCode() {
    return Objects.hash(MIN_PRICE, MAX_PRICE, CURRENCY, ITEM_ID, AVAILABILITY, BRAND, CONDITION, CUSTOM_LABEL_0, CUSTOM_LABEL_1, CUSTOM_LABEL_2, CUSTOM_LABEL_3, CUSTOM_LABEL_4, ITEM_GROUP_ID, GENDER, PRODUCT_TYPE_4, PRODUCT_TYPE_3, PRODUCT_TYPE_2, PRODUCT_TYPE_1, PRODUCT_TYPE_0, GOOGLE_PRODUCT_CATEGORY_6, GOOGLE_PRODUCT_CATEGORY_5, GOOGLE_PRODUCT_CATEGORY_4, GOOGLE_PRODUCT_CATEGORY_3, GOOGLE_PRODUCT_CATEGORY_2, GOOGLE_PRODUCT_CATEGORY_1, GOOGLE_PRODUCT_CATEGORY_0);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsProductGroupFilterKeys {\n");
    
    sb.append("    MIN_PRICE: ").append(toIndentedString(MIN_PRICE)).append("\n");
    sb.append("    MAX_PRICE: ").append(toIndentedString(MAX_PRICE)).append("\n");
    sb.append("    CURRENCY: ").append(toIndentedString(CURRENCY)).append("\n");
    sb.append("    ITEM_ID: ").append(toIndentedString(ITEM_ID)).append("\n");
    sb.append("    AVAILABILITY: ").append(toIndentedString(AVAILABILITY)).append("\n");
    sb.append("    BRAND: ").append(toIndentedString(BRAND)).append("\n");
    sb.append("    CONDITION: ").append(toIndentedString(CONDITION)).append("\n");
    sb.append("    CUSTOM_LABEL_0: ").append(toIndentedString(CUSTOM_LABEL_0)).append("\n");
    sb.append("    CUSTOM_LABEL_1: ").append(toIndentedString(CUSTOM_LABEL_1)).append("\n");
    sb.append("    CUSTOM_LABEL_2: ").append(toIndentedString(CUSTOM_LABEL_2)).append("\n");
    sb.append("    CUSTOM_LABEL_3: ").append(toIndentedString(CUSTOM_LABEL_3)).append("\n");
    sb.append("    CUSTOM_LABEL_4: ").append(toIndentedString(CUSTOM_LABEL_4)).append("\n");
    sb.append("    ITEM_GROUP_ID: ").append(toIndentedString(ITEM_GROUP_ID)).append("\n");
    sb.append("    GENDER: ").append(toIndentedString(GENDER)).append("\n");
    sb.append("    PRODUCT_TYPE_4: ").append(toIndentedString(PRODUCT_TYPE_4)).append("\n");
    sb.append("    PRODUCT_TYPE_3: ").append(toIndentedString(PRODUCT_TYPE_3)).append("\n");
    sb.append("    PRODUCT_TYPE_2: ").append(toIndentedString(PRODUCT_TYPE_2)).append("\n");
    sb.append("    PRODUCT_TYPE_1: ").append(toIndentedString(PRODUCT_TYPE_1)).append("\n");
    sb.append("    PRODUCT_TYPE_0: ").append(toIndentedString(PRODUCT_TYPE_0)).append("\n");
    sb.append("    GOOGLE_PRODUCT_CATEGORY_6: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_6)).append("\n");
    sb.append("    GOOGLE_PRODUCT_CATEGORY_5: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_5)).append("\n");
    sb.append("    GOOGLE_PRODUCT_CATEGORY_4: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_4)).append("\n");
    sb.append("    GOOGLE_PRODUCT_CATEGORY_3: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_3)).append("\n");
    sb.append("    GOOGLE_PRODUCT_CATEGORY_2: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_2)).append("\n");
    sb.append("    GOOGLE_PRODUCT_CATEGORY_1: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_1)).append("\n");
    sb.append("    GOOGLE_PRODUCT_CATEGORY_0: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_0)).append("\n");
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
