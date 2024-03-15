package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * CatalogsFeedValidationWarnings
 */

@Generated(value = "org.openapitools.codegen.languages.JavaCamelServerCodegen", date = "2024-03-14T23:03:40.689435566Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsFeedValidationWarnings {

  private Integer AD_LINK_FORMAT_WARNING;

  private Integer AD_LINK_SAME_AS_LINK;

  private Integer TITLE_LENGTH_TOO_LONG;

  private Integer DESCRIPTION_LENGTH_TOO_LONG;

  private Integer GENDER_INVALID;

  private Integer AGE_GROUP_INVALID;

  private Integer SIZE_TYPE_INVALID;

  private Integer SIZE_SYSTEM_INVALID;

  private Integer LINK_FORMAT_WARNING;

  private Integer SALES_PRICE_INVALID;

  private Integer PRODUCT_CATEGORY_DEPTH_WARNING;

  private Integer ADWORDS_FORMAT_WARNING;

  private Integer ADWORDS_SAME_AS_LINK;

  private Integer DUPLICATE_HEADERS;

  /**
   * Ingestion completed early because there are no changes to your feed since the last successful update.
   */
  public enum FETCHSAMESIGNATUREEnum {
    NUMBER_1(1);

    private Integer value;

    FETCHSAMESIGNATUREEnum(Integer value) {
      this.value = value;
    }

    @JsonValue
    public Integer getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static FETCHSAMESIGNATUREEnum fromValue(Integer value) {
      for (FETCHSAMESIGNATUREEnum b : FETCHSAMESIGNATUREEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
  }

  private FETCHSAMESIGNATUREEnum FETCH_SAME_SIGNATURE;

  private Integer ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG;

  private Integer ADDITIONAL_IMAGE_LINK_WARNING;

  private Integer IMAGE_LINK_WARNING;

  private Integer SHIPPING_INVALID;

  private Integer TAX_INVALID;

  private Integer SHIPPING_WEIGHT_INVALID;

  private Integer EXPIRATION_DATE_INVALID;

  private Integer AVAILABILITY_DATE_INVALID;

  private Integer SALE_DATE_INVALID;

  private Integer WEIGHT_UNIT_INVALID;

  private Integer IS_BUNDLE_INVALID;

  private Integer UPDATED_TIME_INVALID;

  private Integer CUSTOM_LABEL_LENGTH_TOO_LONG;

  private Integer PRODUCT_TYPE_LENGTH_TOO_LONG;

  private Integer TOO_MANY_ADDITIONAL_IMAGE_LINKS;

  private Integer MULTIPACK_INVALID;

  private Integer INDEXED_PRODUCT_COUNT_LARGE_DELTA;

  private Integer ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE;

  private Integer OPTIONAL_PRODUCT_CATEGORY_MISSING;

  private Integer OPTIONAL_PRODUCT_CATEGORY_INVALID;

  private Integer OPTIONAL_CONDITION_MISSING;

  private Integer OPTIONAL_CONDITION_INVALID;

  private Integer IOS_DEEP_LINK_INVALID;

  private Integer ANDROID_DEEP_LINK_INVALID;

  private Integer UTM_SOURCE_AUTO_CORRECTED;

  private Integer COUNTRY_DOES_NOT_MAP_TO_CURRENCY;

  private Integer MIN_AD_PRICE_INVALID;

  private Integer GTIN_INVALID;

  private Integer INCONSISTENT_CURRENCY_VALUES;

  private Integer SALES_PRICE_TOO_LOW;

  private Integer SHIPPING_WIDTH_INVALID;

  private Integer SHIPPING_HEIGHT_INVALID;

  private Integer SALES_PRICE_TOO_HIGH;

  private Integer MPN_INVALID;

  public CatalogsFeedValidationWarnings AD_LINK_FORMAT_WARNING(Integer AD_LINK_FORMAT_WARNING) {
    this.AD_LINK_FORMAT_WARNING = AD_LINK_FORMAT_WARNING;
    return this;
  }

  /**
   * Some items have ad links that are formatted incorrectly.
   * @return AD_LINK_FORMAT_WARNING
  */
  
  @Schema(name = "AD_LINK_FORMAT_WARNING", description = "Some items have ad links that are formatted incorrectly.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("AD_LINK_FORMAT_WARNING")
  public Integer getADLINKFORMATWARNING() {
    return AD_LINK_FORMAT_WARNING;
  }

  public void setADLINKFORMATWARNING(Integer AD_LINK_FORMAT_WARNING) {
    this.AD_LINK_FORMAT_WARNING = AD_LINK_FORMAT_WARNING;
  }

  public CatalogsFeedValidationWarnings AD_LINK_SAME_AS_LINK(Integer AD_LINK_SAME_AS_LINK) {
    this.AD_LINK_SAME_AS_LINK = AD_LINK_SAME_AS_LINK;
    return this;
  }

  /**
   * Some items have ad link URLs that are duplicates of the link URLs for those items.
   * @return AD_LINK_SAME_AS_LINK
  */
  
  @Schema(name = "AD_LINK_SAME_AS_LINK", description = "Some items have ad link URLs that are duplicates of the link URLs for those items.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("AD_LINK_SAME_AS_LINK")
  public Integer getADLINKSAMEASLINK() {
    return AD_LINK_SAME_AS_LINK;
  }

  public void setADLINKSAMEASLINK(Integer AD_LINK_SAME_AS_LINK) {
    this.AD_LINK_SAME_AS_LINK = AD_LINK_SAME_AS_LINK;
  }

  public CatalogsFeedValidationWarnings TITLE_LENGTH_TOO_LONG(Integer TITLE_LENGTH_TOO_LONG) {
    this.TITLE_LENGTH_TOO_LONG = TITLE_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * The title for some items were truncated because they contain too many characters.
   * @return TITLE_LENGTH_TOO_LONG
  */
  
  @Schema(name = "TITLE_LENGTH_TOO_LONG", description = "The title for some items were truncated because they contain too many characters.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("TITLE_LENGTH_TOO_LONG")
  public Integer getTITLELENGTHTOOLONG() {
    return TITLE_LENGTH_TOO_LONG;
  }

  public void setTITLELENGTHTOOLONG(Integer TITLE_LENGTH_TOO_LONG) {
    this.TITLE_LENGTH_TOO_LONG = TITLE_LENGTH_TOO_LONG;
  }

  public CatalogsFeedValidationWarnings DESCRIPTION_LENGTH_TOO_LONG(Integer DESCRIPTION_LENGTH_TOO_LONG) {
    this.DESCRIPTION_LENGTH_TOO_LONG = DESCRIPTION_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * The description for some items were truncated because they contain too many characters.
   * @return DESCRIPTION_LENGTH_TOO_LONG
  */
  
  @Schema(name = "DESCRIPTION_LENGTH_TOO_LONG", description = "The description for some items were truncated because they contain too many characters.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("DESCRIPTION_LENGTH_TOO_LONG")
  public Integer getDESCRIPTIONLENGTHTOOLONG() {
    return DESCRIPTION_LENGTH_TOO_LONG;
  }

  public void setDESCRIPTIONLENGTHTOOLONG(Integer DESCRIPTION_LENGTH_TOO_LONG) {
    this.DESCRIPTION_LENGTH_TOO_LONG = DESCRIPTION_LENGTH_TOO_LONG;
  }

  public CatalogsFeedValidationWarnings GENDER_INVALID(Integer GENDER_INVALID) {
    this.GENDER_INVALID = GENDER_INVALID;
    return this;
  }

  /**
   * Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
   * @return GENDER_INVALID
  */
  
  @Schema(name = "GENDER_INVALID", description = "Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("GENDER_INVALID")
  public Integer getGENDERINVALID() {
    return GENDER_INVALID;
  }

  public void setGENDERINVALID(Integer GENDER_INVALID) {
    this.GENDER_INVALID = GENDER_INVALID;
  }

  public CatalogsFeedValidationWarnings AGE_GROUP_INVALID(Integer AGE_GROUP_INVALID) {
    this.AGE_GROUP_INVALID = AGE_GROUP_INVALID;
    return this;
  }

  /**
   * Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
   * @return AGE_GROUP_INVALID
  */
  
  @Schema(name = "AGE_GROUP_INVALID", description = "Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("AGE_GROUP_INVALID")
  public Integer getAGEGROUPINVALID() {
    return AGE_GROUP_INVALID;
  }

  public void setAGEGROUPINVALID(Integer AGE_GROUP_INVALID) {
    this.AGE_GROUP_INVALID = AGE_GROUP_INVALID;
  }

  public CatalogsFeedValidationWarnings SIZE_TYPE_INVALID(Integer SIZE_TYPE_INVALID) {
    this.SIZE_TYPE_INVALID = SIZE_TYPE_INVALID;
    return this;
  }

  /**
   * Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
   * @return SIZE_TYPE_INVALID
  */
  
  @Schema(name = "SIZE_TYPE_INVALID", description = "Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SIZE_TYPE_INVALID")
  public Integer getSIZETYPEINVALID() {
    return SIZE_TYPE_INVALID;
  }

  public void setSIZETYPEINVALID(Integer SIZE_TYPE_INVALID) {
    this.SIZE_TYPE_INVALID = SIZE_TYPE_INVALID;
  }

  public CatalogsFeedValidationWarnings SIZE_SYSTEM_INVALID(Integer SIZE_SYSTEM_INVALID) {
    this.SIZE_SYSTEM_INVALID = SIZE_SYSTEM_INVALID;
    return this;
  }

  /**
   * Some items have size system values which are not one of the supported size systems.
   * @return SIZE_SYSTEM_INVALID
  */
  
  @Schema(name = "SIZE_SYSTEM_INVALID", description = "Some items have size system values which are not one of the supported size systems.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SIZE_SYSTEM_INVALID")
  public Integer getSIZESYSTEMINVALID() {
    return SIZE_SYSTEM_INVALID;
  }

  public void setSIZESYSTEMINVALID(Integer SIZE_SYSTEM_INVALID) {
    this.SIZE_SYSTEM_INVALID = SIZE_SYSTEM_INVALID;
  }

  public CatalogsFeedValidationWarnings LINK_FORMAT_WARNING(Integer LINK_FORMAT_WARNING) {
    this.LINK_FORMAT_WARNING = LINK_FORMAT_WARNING;
    return this;
  }

  /**
   * Some items have an invalid product link which contains invalid UTM tracking paramaters.
   * @return LINK_FORMAT_WARNING
  */
  
  @Schema(name = "LINK_FORMAT_WARNING", description = "Some items have an invalid product link which contains invalid UTM tracking paramaters.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("LINK_FORMAT_WARNING")
  public Integer getLINKFORMATWARNING() {
    return LINK_FORMAT_WARNING;
  }

  public void setLINKFORMATWARNING(Integer LINK_FORMAT_WARNING) {
    this.LINK_FORMAT_WARNING = LINK_FORMAT_WARNING;
  }

  public CatalogsFeedValidationWarnings SALES_PRICE_INVALID(Integer SALES_PRICE_INVALID) {
    this.SALES_PRICE_INVALID = SALES_PRICE_INVALID;
    return this;
  }

  /**
   * Some items have sale price values that are higher than the original price of the item.
   * @return SALES_PRICE_INVALID
  */
  
  @Schema(name = "SALES_PRICE_INVALID", description = "Some items have sale price values that are higher than the original price of the item.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SALES_PRICE_INVALID")
  public Integer getSALESPRICEINVALID() {
    return SALES_PRICE_INVALID;
  }

  public void setSALESPRICEINVALID(Integer SALES_PRICE_INVALID) {
    this.SALES_PRICE_INVALID = SALES_PRICE_INVALID;
  }

  public CatalogsFeedValidationWarnings PRODUCT_CATEGORY_DEPTH_WARNING(Integer PRODUCT_CATEGORY_DEPTH_WARNING) {
    this.PRODUCT_CATEGORY_DEPTH_WARNING = PRODUCT_CATEGORY_DEPTH_WARNING;
    return this;
  }

  /**
   * Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences.
   * @return PRODUCT_CATEGORY_DEPTH_WARNING
  */
  
  @Schema(name = "PRODUCT_CATEGORY_DEPTH_WARNING", description = "Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("PRODUCT_CATEGORY_DEPTH_WARNING")
  public Integer getPRODUCTCATEGORYDEPTHWARNING() {
    return PRODUCT_CATEGORY_DEPTH_WARNING;
  }

  public void setPRODUCTCATEGORYDEPTHWARNING(Integer PRODUCT_CATEGORY_DEPTH_WARNING) {
    this.PRODUCT_CATEGORY_DEPTH_WARNING = PRODUCT_CATEGORY_DEPTH_WARNING;
  }

  public CatalogsFeedValidationWarnings ADWORDS_FORMAT_WARNING(Integer ADWORDS_FORMAT_WARNING) {
    this.ADWORDS_FORMAT_WARNING = ADWORDS_FORMAT_WARNING;
    return this;
  }

  /**
   * Some items have adwords_redirect links that are formatted incorrectly.
   * @return ADWORDS_FORMAT_WARNING
  */
  
  @Schema(name = "ADWORDS_FORMAT_WARNING", description = "Some items have adwords_redirect links that are formatted incorrectly.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ADWORDS_FORMAT_WARNING")
  public Integer getADWORDSFORMATWARNING() {
    return ADWORDS_FORMAT_WARNING;
  }

  public void setADWORDSFORMATWARNING(Integer ADWORDS_FORMAT_WARNING) {
    this.ADWORDS_FORMAT_WARNING = ADWORDS_FORMAT_WARNING;
  }

  public CatalogsFeedValidationWarnings ADWORDS_SAME_AS_LINK(Integer ADWORDS_SAME_AS_LINK) {
    this.ADWORDS_SAME_AS_LINK = ADWORDS_SAME_AS_LINK;
    return this;
  }

  /**
   * Some items have adwords_redirect URLs that are duplicates of the link URLs for those items.
   * @return ADWORDS_SAME_AS_LINK
  */
  
  @Schema(name = "ADWORDS_SAME_AS_LINK", description = "Some items have adwords_redirect URLs that are duplicates of the link URLs for those items.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ADWORDS_SAME_AS_LINK")
  public Integer getADWORDSSAMEASLINK() {
    return ADWORDS_SAME_AS_LINK;
  }

  public void setADWORDSSAMEASLINK(Integer ADWORDS_SAME_AS_LINK) {
    this.ADWORDS_SAME_AS_LINK = ADWORDS_SAME_AS_LINK;
  }

  public CatalogsFeedValidationWarnings DUPLICATE_HEADERS(Integer DUPLICATE_HEADERS) {
    this.DUPLICATE_HEADERS = DUPLICATE_HEADERS;
    return this;
  }

  /**
   * Your feed contains duplicate headers.
   * @return DUPLICATE_HEADERS
  */
  
  @Schema(name = "DUPLICATE_HEADERS", description = "Your feed contains duplicate headers.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("DUPLICATE_HEADERS")
  public Integer getDUPLICATEHEADERS() {
    return DUPLICATE_HEADERS;
  }

  public void setDUPLICATEHEADERS(Integer DUPLICATE_HEADERS) {
    this.DUPLICATE_HEADERS = DUPLICATE_HEADERS;
  }

  public CatalogsFeedValidationWarnings FETCH_SAME_SIGNATURE(FETCHSAMESIGNATUREEnum FETCH_SAME_SIGNATURE) {
    this.FETCH_SAME_SIGNATURE = FETCH_SAME_SIGNATURE;
    return this;
  }

  /**
   * Ingestion completed early because there are no changes to your feed since the last successful update.
   * @return FETCH_SAME_SIGNATURE
  */
  
  @Schema(name = "FETCH_SAME_SIGNATURE", description = "Ingestion completed early because there are no changes to your feed since the last successful update.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("FETCH_SAME_SIGNATURE")
  public FETCHSAMESIGNATUREEnum getFETCHSAMESIGNATURE() {
    return FETCH_SAME_SIGNATURE;
  }

  public void setFETCHSAMESIGNATURE(FETCHSAMESIGNATUREEnum FETCH_SAME_SIGNATURE) {
    this.FETCH_SAME_SIGNATURE = FETCH_SAME_SIGNATURE;
  }

  public CatalogsFeedValidationWarnings ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG(Integer ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG) {
    this.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG = ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * Some items have additional_image_link URLs that contain too many characters, so those items will not be published.
   * @return ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG
  */
  
  @Schema(name = "ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG", description = "Some items have additional_image_link URLs that contain too many characters, so those items will not be published.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG")
  public Integer getADDITIONALIMAGELINKLENGTHTOOLONG() {
    return ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG;
  }

  public void setADDITIONALIMAGELINKLENGTHTOOLONG(Integer ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG) {
    this.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG = ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG;
  }

  public CatalogsFeedValidationWarnings ADDITIONAL_IMAGE_LINK_WARNING(Integer ADDITIONAL_IMAGE_LINK_WARNING) {
    this.ADDITIONAL_IMAGE_LINK_WARNING = ADDITIONAL_IMAGE_LINK_WARNING;
    return this;
  }

  /**
   * Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items.
   * @return ADDITIONAL_IMAGE_LINK_WARNING
  */
  
  @Schema(name = "ADDITIONAL_IMAGE_LINK_WARNING", description = "Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ADDITIONAL_IMAGE_LINK_WARNING")
  public Integer getADDITIONALIMAGELINKWARNING() {
    return ADDITIONAL_IMAGE_LINK_WARNING;
  }

  public void setADDITIONALIMAGELINKWARNING(Integer ADDITIONAL_IMAGE_LINK_WARNING) {
    this.ADDITIONAL_IMAGE_LINK_WARNING = ADDITIONAL_IMAGE_LINK_WARNING;
  }

  public CatalogsFeedValidationWarnings IMAGE_LINK_WARNING(Integer IMAGE_LINK_WARNING) {
    this.IMAGE_LINK_WARNING = IMAGE_LINK_WARNING;
    return this;
  }

  /**
   * Some items have image_link URLs that are formatted incorrectly and will not be published with those items.
   * @return IMAGE_LINK_WARNING
  */
  
  @Schema(name = "IMAGE_LINK_WARNING", description = "Some items have image_link URLs that are formatted incorrectly and will not be published with those items.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IMAGE_LINK_WARNING")
  public Integer getIMAGELINKWARNING() {
    return IMAGE_LINK_WARNING;
  }

  public void setIMAGELINKWARNING(Integer IMAGE_LINK_WARNING) {
    this.IMAGE_LINK_WARNING = IMAGE_LINK_WARNING;
  }

  public CatalogsFeedValidationWarnings SHIPPING_INVALID(Integer SHIPPING_INVALID) {
    this.SHIPPING_INVALID = SHIPPING_INVALID;
    return this;
  }

  /**
   * Some items have shipping values that are formatted incorrectly.
   * @return SHIPPING_INVALID
  */
  
  @Schema(name = "SHIPPING_INVALID", description = "Some items have shipping values that are formatted incorrectly.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SHIPPING_INVALID")
  public Integer getSHIPPINGINVALID() {
    return SHIPPING_INVALID;
  }

  public void setSHIPPINGINVALID(Integer SHIPPING_INVALID) {
    this.SHIPPING_INVALID = SHIPPING_INVALID;
  }

  public CatalogsFeedValidationWarnings TAX_INVALID(Integer TAX_INVALID) {
    this.TAX_INVALID = TAX_INVALID;
    return this;
  }

  /**
   * Some items have tax values that are formatted incorrectly.
   * @return TAX_INVALID
  */
  
  @Schema(name = "TAX_INVALID", description = "Some items have tax values that are formatted incorrectly.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("TAX_INVALID")
  public Integer getTAXINVALID() {
    return TAX_INVALID;
  }

  public void setTAXINVALID(Integer TAX_INVALID) {
    this.TAX_INVALID = TAX_INVALID;
  }

  public CatalogsFeedValidationWarnings SHIPPING_WEIGHT_INVALID(Integer SHIPPING_WEIGHT_INVALID) {
    this.SHIPPING_WEIGHT_INVALID = SHIPPING_WEIGHT_INVALID;
    return this;
  }

  /**
   * Some items have invalid shipping_weight values.
   * @return SHIPPING_WEIGHT_INVALID
  */
  
  @Schema(name = "SHIPPING_WEIGHT_INVALID", description = "Some items have invalid shipping_weight values.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SHIPPING_WEIGHT_INVALID")
  public Integer getSHIPPINGWEIGHTINVALID() {
    return SHIPPING_WEIGHT_INVALID;
  }

  public void setSHIPPINGWEIGHTINVALID(Integer SHIPPING_WEIGHT_INVALID) {
    this.SHIPPING_WEIGHT_INVALID = SHIPPING_WEIGHT_INVALID;
  }

  public CatalogsFeedValidationWarnings EXPIRATION_DATE_INVALID(Integer EXPIRATION_DATE_INVALID) {
    this.EXPIRATION_DATE_INVALID = EXPIRATION_DATE_INVALID;
    return this;
  }

  /**
   * Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date.
   * @return EXPIRATION_DATE_INVALID
  */
  
  @Schema(name = "EXPIRATION_DATE_INVALID", description = "Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("EXPIRATION_DATE_INVALID")
  public Integer getEXPIRATIONDATEINVALID() {
    return EXPIRATION_DATE_INVALID;
  }

  public void setEXPIRATIONDATEINVALID(Integer EXPIRATION_DATE_INVALID) {
    this.EXPIRATION_DATE_INVALID = EXPIRATION_DATE_INVALID;
  }

  public CatalogsFeedValidationWarnings AVAILABILITY_DATE_INVALID(Integer AVAILABILITY_DATE_INVALID) {
    this.AVAILABILITY_DATE_INVALID = AVAILABILITY_DATE_INVALID;
    return this;
  }

  /**
   * Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date.
   * @return AVAILABILITY_DATE_INVALID
  */
  
  @Schema(name = "AVAILABILITY_DATE_INVALID", description = "Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("AVAILABILITY_DATE_INVALID")
  public Integer getAVAILABILITYDATEINVALID() {
    return AVAILABILITY_DATE_INVALID;
  }

  public void setAVAILABILITYDATEINVALID(Integer AVAILABILITY_DATE_INVALID) {
    this.AVAILABILITY_DATE_INVALID = AVAILABILITY_DATE_INVALID;
  }

  public CatalogsFeedValidationWarnings SALE_DATE_INVALID(Integer SALE_DATE_INVALID) {
    this.SALE_DATE_INVALID = SALE_DATE_INVALID;
    return this;
  }

  /**
   * Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date.
   * @return SALE_DATE_INVALID
  */
  
  @Schema(name = "SALE_DATE_INVALID", description = "Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SALE_DATE_INVALID")
  public Integer getSALEDATEINVALID() {
    return SALE_DATE_INVALID;
  }

  public void setSALEDATEINVALID(Integer SALE_DATE_INVALID) {
    this.SALE_DATE_INVALID = SALE_DATE_INVALID;
  }

  public CatalogsFeedValidationWarnings WEIGHT_UNIT_INVALID(Integer WEIGHT_UNIT_INVALID) {
    this.WEIGHT_UNIT_INVALID = WEIGHT_UNIT_INVALID;
    return this;
  }

  /**
   * Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit.
   * @return WEIGHT_UNIT_INVALID
  */
  
  @Schema(name = "WEIGHT_UNIT_INVALID", description = "Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("WEIGHT_UNIT_INVALID")
  public Integer getWEIGHTUNITINVALID() {
    return WEIGHT_UNIT_INVALID;
  }

  public void setWEIGHTUNITINVALID(Integer WEIGHT_UNIT_INVALID) {
    this.WEIGHT_UNIT_INVALID = WEIGHT_UNIT_INVALID;
  }

  public CatalogsFeedValidationWarnings IS_BUNDLE_INVALID(Integer IS_BUNDLE_INVALID) {
    this.IS_BUNDLE_INVALID = IS_BUNDLE_INVALID;
    return this;
  }

  /**
   * Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products.
   * @return IS_BUNDLE_INVALID
  */
  
  @Schema(name = "IS_BUNDLE_INVALID", description = "Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IS_BUNDLE_INVALID")
  public Integer getISBUNDLEINVALID() {
    return IS_BUNDLE_INVALID;
  }

  public void setISBUNDLEINVALID(Integer IS_BUNDLE_INVALID) {
    this.IS_BUNDLE_INVALID = IS_BUNDLE_INVALID;
  }

  public CatalogsFeedValidationWarnings UPDATED_TIME_INVALID(Integer UPDATED_TIME_INVALID) {
    this.UPDATED_TIME_INVALID = UPDATED_TIME_INVALID;
    return this;
  }

  /**
   * Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time.
   * @return UPDATED_TIME_INVALID
  */
  
  @Schema(name = "UPDATED_TIME_INVALID", description = "Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("UPDATED_TIME_INVALID")
  public Integer getUPDATEDTIMEINVALID() {
    return UPDATED_TIME_INVALID;
  }

  public void setUPDATEDTIMEINVALID(Integer UPDATED_TIME_INVALID) {
    this.UPDATED_TIME_INVALID = UPDATED_TIME_INVALID;
  }

  public CatalogsFeedValidationWarnings CUSTOM_LABEL_LENGTH_TOO_LONG(Integer CUSTOM_LABEL_LENGTH_TOO_LONG) {
    this.CUSTOM_LABEL_LENGTH_TOO_LONG = CUSTOM_LABEL_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * Some items have custom_label values that are too long, those items will be published without that custom label.
   * @return CUSTOM_LABEL_LENGTH_TOO_LONG
  */
  
  @Schema(name = "CUSTOM_LABEL_LENGTH_TOO_LONG", description = "Some items have custom_label values that are too long, those items will be published without that custom label.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("CUSTOM_LABEL_LENGTH_TOO_LONG")
  public Integer getCUSTOMLABELLENGTHTOOLONG() {
    return CUSTOM_LABEL_LENGTH_TOO_LONG;
  }

  public void setCUSTOMLABELLENGTHTOOLONG(Integer CUSTOM_LABEL_LENGTH_TOO_LONG) {
    this.CUSTOM_LABEL_LENGTH_TOO_LONG = CUSTOM_LABEL_LENGTH_TOO_LONG;
  }

  public CatalogsFeedValidationWarnings PRODUCT_TYPE_LENGTH_TOO_LONG(Integer PRODUCT_TYPE_LENGTH_TOO_LONG) {
    this.PRODUCT_TYPE_LENGTH_TOO_LONG = PRODUCT_TYPE_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * Some items have product_type values that are too long, those items will be published without that product type.
   * @return PRODUCT_TYPE_LENGTH_TOO_LONG
  */
  
  @Schema(name = "PRODUCT_TYPE_LENGTH_TOO_LONG", description = "Some items have product_type values that are too long, those items will be published without that product type.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("PRODUCT_TYPE_LENGTH_TOO_LONG")
  public Integer getPRODUCTTYPELENGTHTOOLONG() {
    return PRODUCT_TYPE_LENGTH_TOO_LONG;
  }

  public void setPRODUCTTYPELENGTHTOOLONG(Integer PRODUCT_TYPE_LENGTH_TOO_LONG) {
    this.PRODUCT_TYPE_LENGTH_TOO_LONG = PRODUCT_TYPE_LENGTH_TOO_LONG;
  }

  public CatalogsFeedValidationWarnings TOO_MANY_ADDITIONAL_IMAGE_LINKS(Integer TOO_MANY_ADDITIONAL_IMAGE_LINKS) {
    this.TOO_MANY_ADDITIONAL_IMAGE_LINKS = TOO_MANY_ADDITIONAL_IMAGE_LINKS;
    return this;
  }

  /**
   * Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images.
   * @return TOO_MANY_ADDITIONAL_IMAGE_LINKS
  */
  
  @Schema(name = "TOO_MANY_ADDITIONAL_IMAGE_LINKS", description = "Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("TOO_MANY_ADDITIONAL_IMAGE_LINKS")
  public Integer getTOOMANYADDITIONALIMAGELINKS() {
    return TOO_MANY_ADDITIONAL_IMAGE_LINKS;
  }

  public void setTOOMANYADDITIONALIMAGELINKS(Integer TOO_MANY_ADDITIONAL_IMAGE_LINKS) {
    this.TOO_MANY_ADDITIONAL_IMAGE_LINKS = TOO_MANY_ADDITIONAL_IMAGE_LINKS;
  }

  public CatalogsFeedValidationWarnings MULTIPACK_INVALID(Integer MULTIPACK_INVALID) {
    this.MULTIPACK_INVALID = MULTIPACK_INVALID;
    return this;
  }

  /**
   * Some items have invalid multipack values.
   * @return MULTIPACK_INVALID
  */
  
  @Schema(name = "MULTIPACK_INVALID", description = "Some items have invalid multipack values.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("MULTIPACK_INVALID")
  public Integer getMULTIPACKINVALID() {
    return MULTIPACK_INVALID;
  }

  public void setMULTIPACKINVALID(Integer MULTIPACK_INVALID) {
    this.MULTIPACK_INVALID = MULTIPACK_INVALID;
  }

  public CatalogsFeedValidationWarnings INDEXED_PRODUCT_COUNT_LARGE_DELTA(Integer INDEXED_PRODUCT_COUNT_LARGE_DELTA) {
    this.INDEXED_PRODUCT_COUNT_LARGE_DELTA = INDEXED_PRODUCT_COUNT_LARGE_DELTA;
    return this;
  }

  /**
   * The product count has increased or decreased significantly compared to the last successful ingestion.
   * @return INDEXED_PRODUCT_COUNT_LARGE_DELTA
  */
  
  @Schema(name = "INDEXED_PRODUCT_COUNT_LARGE_DELTA", description = "The product count has increased or decreased significantly compared to the last successful ingestion.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("INDEXED_PRODUCT_COUNT_LARGE_DELTA")
  public Integer getINDEXEDPRODUCTCOUNTLARGEDELTA() {
    return INDEXED_PRODUCT_COUNT_LARGE_DELTA;
  }

  public void setINDEXEDPRODUCTCOUNTLARGEDELTA(Integer INDEXED_PRODUCT_COUNT_LARGE_DELTA) {
    this.INDEXED_PRODUCT_COUNT_LARGE_DELTA = INDEXED_PRODUCT_COUNT_LARGE_DELTA;
  }

  public CatalogsFeedValidationWarnings ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE(Integer ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE) {
    this.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE = ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE;
    return this;
  }

  /**
   * Some items include additional_image_links that can't be found.
   * @return ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE
  */
  
  @Schema(name = "ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE", description = "Some items include additional_image_links that can't be found.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE")
  public Integer getITEMADDITIONALIMAGEDOWNLOADFAILURE() {
    return ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE;
  }

  public void setITEMADDITIONALIMAGEDOWNLOADFAILURE(Integer ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE) {
    this.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE = ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE;
  }

  public CatalogsFeedValidationWarnings OPTIONAL_PRODUCT_CATEGORY_MISSING(Integer OPTIONAL_PRODUCT_CATEGORY_MISSING) {
    this.OPTIONAL_PRODUCT_CATEGORY_MISSING = OPTIONAL_PRODUCT_CATEGORY_MISSING;
    return this;
  }

  /**
   * Some items are missing a google_product_category.
   * @return OPTIONAL_PRODUCT_CATEGORY_MISSING
  */
  
  @Schema(name = "OPTIONAL_PRODUCT_CATEGORY_MISSING", description = "Some items are missing a google_product_category.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("OPTIONAL_PRODUCT_CATEGORY_MISSING")
  public Integer getOPTIONALPRODUCTCATEGORYMISSING() {
    return OPTIONAL_PRODUCT_CATEGORY_MISSING;
  }

  public void setOPTIONALPRODUCTCATEGORYMISSING(Integer OPTIONAL_PRODUCT_CATEGORY_MISSING) {
    this.OPTIONAL_PRODUCT_CATEGORY_MISSING = OPTIONAL_PRODUCT_CATEGORY_MISSING;
  }

  public CatalogsFeedValidationWarnings OPTIONAL_PRODUCT_CATEGORY_INVALID(Integer OPTIONAL_PRODUCT_CATEGORY_INVALID) {
    this.OPTIONAL_PRODUCT_CATEGORY_INVALID = OPTIONAL_PRODUCT_CATEGORY_INVALID;
    return this;
  }

  /**
   * Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy.
   * @return OPTIONAL_PRODUCT_CATEGORY_INVALID
  */
  
  @Schema(name = "OPTIONAL_PRODUCT_CATEGORY_INVALID", description = "Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("OPTIONAL_PRODUCT_CATEGORY_INVALID")
  public Integer getOPTIONALPRODUCTCATEGORYINVALID() {
    return OPTIONAL_PRODUCT_CATEGORY_INVALID;
  }

  public void setOPTIONALPRODUCTCATEGORYINVALID(Integer OPTIONAL_PRODUCT_CATEGORY_INVALID) {
    this.OPTIONAL_PRODUCT_CATEGORY_INVALID = OPTIONAL_PRODUCT_CATEGORY_INVALID;
  }

  public CatalogsFeedValidationWarnings OPTIONAL_CONDITION_MISSING(Integer OPTIONAL_CONDITION_MISSING) {
    this.OPTIONAL_CONDITION_MISSING = OPTIONAL_CONDITION_MISSING;
    return this;
  }

  /**
   * Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences.
   * @return OPTIONAL_CONDITION_MISSING
  */
  
  @Schema(name = "OPTIONAL_CONDITION_MISSING", description = "Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("OPTIONAL_CONDITION_MISSING")
  public Integer getOPTIONALCONDITIONMISSING() {
    return OPTIONAL_CONDITION_MISSING;
  }

  public void setOPTIONALCONDITIONMISSING(Integer OPTIONAL_CONDITION_MISSING) {
    this.OPTIONAL_CONDITION_MISSING = OPTIONAL_CONDITION_MISSING;
  }

  public CatalogsFeedValidationWarnings OPTIONAL_CONDITION_INVALID(Integer OPTIONAL_CONDITION_INVALID) {
    this.OPTIONAL_CONDITION_INVALID = OPTIONAL_CONDITION_INVALID;
    return this;
  }

  /**
   * Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
   * @return OPTIONAL_CONDITION_INVALID
  */
  
  @Schema(name = "OPTIONAL_CONDITION_INVALID", description = "Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("OPTIONAL_CONDITION_INVALID")
  public Integer getOPTIONALCONDITIONINVALID() {
    return OPTIONAL_CONDITION_INVALID;
  }

  public void setOPTIONALCONDITIONINVALID(Integer OPTIONAL_CONDITION_INVALID) {
    this.OPTIONAL_CONDITION_INVALID = OPTIONAL_CONDITION_INVALID;
  }

  public CatalogsFeedValidationWarnings IOS_DEEP_LINK_INVALID(Integer IOS_DEEP_LINK_INVALID) {
    this.IOS_DEEP_LINK_INVALID = IOS_DEEP_LINK_INVALID;
    return this;
  }

  /**
   * Some items include invalid ios_deep_link values.
   * @return IOS_DEEP_LINK_INVALID
  */
  
  @Schema(name = "IOS_DEEP_LINK_INVALID", description = "Some items include invalid ios_deep_link values.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IOS_DEEP_LINK_INVALID")
  public Integer getIOSDEEPLINKINVALID() {
    return IOS_DEEP_LINK_INVALID;
  }

  public void setIOSDEEPLINKINVALID(Integer IOS_DEEP_LINK_INVALID) {
    this.IOS_DEEP_LINK_INVALID = IOS_DEEP_LINK_INVALID;
  }

  public CatalogsFeedValidationWarnings ANDROID_DEEP_LINK_INVALID(Integer ANDROID_DEEP_LINK_INVALID) {
    this.ANDROID_DEEP_LINK_INVALID = ANDROID_DEEP_LINK_INVALID;
    return this;
  }

  /**
   * Some items include invalid android_deep_link.
   * @return ANDROID_DEEP_LINK_INVALID
  */
  
  @Schema(name = "ANDROID_DEEP_LINK_INVALID", description = "Some items include invalid android_deep_link.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ANDROID_DEEP_LINK_INVALID")
  public Integer getANDROIDDEEPLINKINVALID() {
    return ANDROID_DEEP_LINK_INVALID;
  }

  public void setANDROIDDEEPLINKINVALID(Integer ANDROID_DEEP_LINK_INVALID) {
    this.ANDROID_DEEP_LINK_INVALID = ANDROID_DEEP_LINK_INVALID;
  }

  public CatalogsFeedValidationWarnings UTM_SOURCE_AUTO_CORRECTED(Integer UTM_SOURCE_AUTO_CORRECTED) {
    this.UTM_SOURCE_AUTO_CORRECTED = UTM_SOURCE_AUTO_CORRECTED;
    return this;
  }

  /**
   * Some items include utm_source values that are formatted incorrectly and have been automatically corrected.
   * @return UTM_SOURCE_AUTO_CORRECTED
  */
  
  @Schema(name = "UTM_SOURCE_AUTO_CORRECTED", description = "Some items include utm_source values that are formatted incorrectly and have been automatically corrected.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("UTM_SOURCE_AUTO_CORRECTED")
  public Integer getUTMSOURCEAUTOCORRECTED() {
    return UTM_SOURCE_AUTO_CORRECTED;
  }

  public void setUTMSOURCEAUTOCORRECTED(Integer UTM_SOURCE_AUTO_CORRECTED) {
    this.UTM_SOURCE_AUTO_CORRECTED = UTM_SOURCE_AUTO_CORRECTED;
  }

  public CatalogsFeedValidationWarnings COUNTRY_DOES_NOT_MAP_TO_CURRENCY(Integer COUNTRY_DOES_NOT_MAP_TO_CURRENCY) {
    this.COUNTRY_DOES_NOT_MAP_TO_CURRENCY = COUNTRY_DOES_NOT_MAP_TO_CURRENCY;
    return this;
  }

  /**
   * Some items include a currency that doesn't match the usual currency for the location where that product is sold or shipped.
   * @return COUNTRY_DOES_NOT_MAP_TO_CURRENCY
  */
  
  @Schema(name = "COUNTRY_DOES_NOT_MAP_TO_CURRENCY", description = "Some items include a currency that doesn't match the usual currency for the location where that product is sold or shipped.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("COUNTRY_DOES_NOT_MAP_TO_CURRENCY")
  public Integer getCOUNTRYDOESNOTMAPTOCURRENCY() {
    return COUNTRY_DOES_NOT_MAP_TO_CURRENCY;
  }

  public void setCOUNTRYDOESNOTMAPTOCURRENCY(Integer COUNTRY_DOES_NOT_MAP_TO_CURRENCY) {
    this.COUNTRY_DOES_NOT_MAP_TO_CURRENCY = COUNTRY_DOES_NOT_MAP_TO_CURRENCY;
  }

  public CatalogsFeedValidationWarnings MIN_AD_PRICE_INVALID(Integer MIN_AD_PRICE_INVALID) {
    this.MIN_AD_PRICE_INVALID = MIN_AD_PRICE_INVALID;
    return this;
  }

  /**
   * Some items include min_ad_price values that are formatted incorrectly.
   * @return MIN_AD_PRICE_INVALID
  */
  
  @Schema(name = "MIN_AD_PRICE_INVALID", description = "Some items include min_ad_price values that are formatted incorrectly.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("MIN_AD_PRICE_INVALID")
  public Integer getMINADPRICEINVALID() {
    return MIN_AD_PRICE_INVALID;
  }

  public void setMINADPRICEINVALID(Integer MIN_AD_PRICE_INVALID) {
    this.MIN_AD_PRICE_INVALID = MIN_AD_PRICE_INVALID;
  }

  public CatalogsFeedValidationWarnings GTIN_INVALID(Integer GTIN_INVALID) {
    this.GTIN_INVALID = GTIN_INVALID;
    return this;
  }

  /**
   * Some items include incorrectly formatted GTINs.
   * @return GTIN_INVALID
  */
  
  @Schema(name = "GTIN_INVALID", description = "Some items include incorrectly formatted GTINs.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("GTIN_INVALID")
  public Integer getGTININVALID() {
    return GTIN_INVALID;
  }

  public void setGTININVALID(Integer GTIN_INVALID) {
    this.GTIN_INVALID = GTIN_INVALID;
  }

  public CatalogsFeedValidationWarnings INCONSISTENT_CURRENCY_VALUES(Integer INCONSISTENT_CURRENCY_VALUES) {
    this.INCONSISTENT_CURRENCY_VALUES = INCONSISTENT_CURRENCY_VALUES;
    return this;
  }

  /**
   * Some items include inconsistent currencies in price fields.
   * @return INCONSISTENT_CURRENCY_VALUES
  */
  
  @Schema(name = "INCONSISTENT_CURRENCY_VALUES", description = "Some items include inconsistent currencies in price fields.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("INCONSISTENT_CURRENCY_VALUES")
  public Integer getINCONSISTENTCURRENCYVALUES() {
    return INCONSISTENT_CURRENCY_VALUES;
  }

  public void setINCONSISTENTCURRENCYVALUES(Integer INCONSISTENT_CURRENCY_VALUES) {
    this.INCONSISTENT_CURRENCY_VALUES = INCONSISTENT_CURRENCY_VALUES;
  }

  public CatalogsFeedValidationWarnings SALES_PRICE_TOO_LOW(Integer SALES_PRICE_TOO_LOW) {
    this.SALES_PRICE_TOO_LOW = SALES_PRICE_TOO_LOW;
    return this;
  }

  /**
   * Some items include sales price that is much lower than the list price.
   * @return SALES_PRICE_TOO_LOW
  */
  
  @Schema(name = "SALES_PRICE_TOO_LOW", description = "Some items include sales price that is much lower than the list price.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SALES_PRICE_TOO_LOW")
  public Integer getSALESPRICETOOLOW() {
    return SALES_PRICE_TOO_LOW;
  }

  public void setSALESPRICETOOLOW(Integer SALES_PRICE_TOO_LOW) {
    this.SALES_PRICE_TOO_LOW = SALES_PRICE_TOO_LOW;
  }

  public CatalogsFeedValidationWarnings SHIPPING_WIDTH_INVALID(Integer SHIPPING_WIDTH_INVALID) {
    this.SHIPPING_WIDTH_INVALID = SHIPPING_WIDTH_INVALID;
    return this;
  }

  /**
   * Some items include incorrectly formatted shipping_width.
   * @return SHIPPING_WIDTH_INVALID
  */
  
  @Schema(name = "SHIPPING_WIDTH_INVALID", description = "Some items include incorrectly formatted shipping_width.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SHIPPING_WIDTH_INVALID")
  public Integer getSHIPPINGWIDTHINVALID() {
    return SHIPPING_WIDTH_INVALID;
  }

  public void setSHIPPINGWIDTHINVALID(Integer SHIPPING_WIDTH_INVALID) {
    this.SHIPPING_WIDTH_INVALID = SHIPPING_WIDTH_INVALID;
  }

  public CatalogsFeedValidationWarnings SHIPPING_HEIGHT_INVALID(Integer SHIPPING_HEIGHT_INVALID) {
    this.SHIPPING_HEIGHT_INVALID = SHIPPING_HEIGHT_INVALID;
    return this;
  }

  /**
   * Some items include incorrectly formatted shipping_height.
   * @return SHIPPING_HEIGHT_INVALID
  */
  
  @Schema(name = "SHIPPING_HEIGHT_INVALID", description = "Some items include incorrectly formatted shipping_height.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SHIPPING_HEIGHT_INVALID")
  public Integer getSHIPPINGHEIGHTINVALID() {
    return SHIPPING_HEIGHT_INVALID;
  }

  public void setSHIPPINGHEIGHTINVALID(Integer SHIPPING_HEIGHT_INVALID) {
    this.SHIPPING_HEIGHT_INVALID = SHIPPING_HEIGHT_INVALID;
  }

  public CatalogsFeedValidationWarnings SALES_PRICE_TOO_HIGH(Integer SALES_PRICE_TOO_HIGH) {
    this.SALES_PRICE_TOO_HIGH = SALES_PRICE_TOO_HIGH;
    return this;
  }

  /**
   * Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price.
   * @return SALES_PRICE_TOO_HIGH
  */
  
  @Schema(name = "SALES_PRICE_TOO_HIGH", description = "Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SALES_PRICE_TOO_HIGH")
  public Integer getSALESPRICETOOHIGH() {
    return SALES_PRICE_TOO_HIGH;
  }

  public void setSALESPRICETOOHIGH(Integer SALES_PRICE_TOO_HIGH) {
    this.SALES_PRICE_TOO_HIGH = SALES_PRICE_TOO_HIGH;
  }

  public CatalogsFeedValidationWarnings MPN_INVALID(Integer MPN_INVALID) {
    this.MPN_INVALID = MPN_INVALID;
    return this;
  }

  /**
   * Some items include incorrectly formatted MPNs.
   * @return MPN_INVALID
  */
  
  @Schema(name = "MPN_INVALID", description = "Some items include incorrectly formatted MPNs.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("MPN_INVALID")
  public Integer getMPNINVALID() {
    return MPN_INVALID;
  }

  public void setMPNINVALID(Integer MPN_INVALID) {
    this.MPN_INVALID = MPN_INVALID;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsFeedValidationWarnings catalogsFeedValidationWarnings = (CatalogsFeedValidationWarnings) o;
    return Objects.equals(this.AD_LINK_FORMAT_WARNING, catalogsFeedValidationWarnings.AD_LINK_FORMAT_WARNING) &&
        Objects.equals(this.AD_LINK_SAME_AS_LINK, catalogsFeedValidationWarnings.AD_LINK_SAME_AS_LINK) &&
        Objects.equals(this.TITLE_LENGTH_TOO_LONG, catalogsFeedValidationWarnings.TITLE_LENGTH_TOO_LONG) &&
        Objects.equals(this.DESCRIPTION_LENGTH_TOO_LONG, catalogsFeedValidationWarnings.DESCRIPTION_LENGTH_TOO_LONG) &&
        Objects.equals(this.GENDER_INVALID, catalogsFeedValidationWarnings.GENDER_INVALID) &&
        Objects.equals(this.AGE_GROUP_INVALID, catalogsFeedValidationWarnings.AGE_GROUP_INVALID) &&
        Objects.equals(this.SIZE_TYPE_INVALID, catalogsFeedValidationWarnings.SIZE_TYPE_INVALID) &&
        Objects.equals(this.SIZE_SYSTEM_INVALID, catalogsFeedValidationWarnings.SIZE_SYSTEM_INVALID) &&
        Objects.equals(this.LINK_FORMAT_WARNING, catalogsFeedValidationWarnings.LINK_FORMAT_WARNING) &&
        Objects.equals(this.SALES_PRICE_INVALID, catalogsFeedValidationWarnings.SALES_PRICE_INVALID) &&
        Objects.equals(this.PRODUCT_CATEGORY_DEPTH_WARNING, catalogsFeedValidationWarnings.PRODUCT_CATEGORY_DEPTH_WARNING) &&
        Objects.equals(this.ADWORDS_FORMAT_WARNING, catalogsFeedValidationWarnings.ADWORDS_FORMAT_WARNING) &&
        Objects.equals(this.ADWORDS_SAME_AS_LINK, catalogsFeedValidationWarnings.ADWORDS_SAME_AS_LINK) &&
        Objects.equals(this.DUPLICATE_HEADERS, catalogsFeedValidationWarnings.DUPLICATE_HEADERS) &&
        Objects.equals(this.FETCH_SAME_SIGNATURE, catalogsFeedValidationWarnings.FETCH_SAME_SIGNATURE) &&
        Objects.equals(this.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG, catalogsFeedValidationWarnings.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG) &&
        Objects.equals(this.ADDITIONAL_IMAGE_LINK_WARNING, catalogsFeedValidationWarnings.ADDITIONAL_IMAGE_LINK_WARNING) &&
        Objects.equals(this.IMAGE_LINK_WARNING, catalogsFeedValidationWarnings.IMAGE_LINK_WARNING) &&
        Objects.equals(this.SHIPPING_INVALID, catalogsFeedValidationWarnings.SHIPPING_INVALID) &&
        Objects.equals(this.TAX_INVALID, catalogsFeedValidationWarnings.TAX_INVALID) &&
        Objects.equals(this.SHIPPING_WEIGHT_INVALID, catalogsFeedValidationWarnings.SHIPPING_WEIGHT_INVALID) &&
        Objects.equals(this.EXPIRATION_DATE_INVALID, catalogsFeedValidationWarnings.EXPIRATION_DATE_INVALID) &&
        Objects.equals(this.AVAILABILITY_DATE_INVALID, catalogsFeedValidationWarnings.AVAILABILITY_DATE_INVALID) &&
        Objects.equals(this.SALE_DATE_INVALID, catalogsFeedValidationWarnings.SALE_DATE_INVALID) &&
        Objects.equals(this.WEIGHT_UNIT_INVALID, catalogsFeedValidationWarnings.WEIGHT_UNIT_INVALID) &&
        Objects.equals(this.IS_BUNDLE_INVALID, catalogsFeedValidationWarnings.IS_BUNDLE_INVALID) &&
        Objects.equals(this.UPDATED_TIME_INVALID, catalogsFeedValidationWarnings.UPDATED_TIME_INVALID) &&
        Objects.equals(this.CUSTOM_LABEL_LENGTH_TOO_LONG, catalogsFeedValidationWarnings.CUSTOM_LABEL_LENGTH_TOO_LONG) &&
        Objects.equals(this.PRODUCT_TYPE_LENGTH_TOO_LONG, catalogsFeedValidationWarnings.PRODUCT_TYPE_LENGTH_TOO_LONG) &&
        Objects.equals(this.TOO_MANY_ADDITIONAL_IMAGE_LINKS, catalogsFeedValidationWarnings.TOO_MANY_ADDITIONAL_IMAGE_LINKS) &&
        Objects.equals(this.MULTIPACK_INVALID, catalogsFeedValidationWarnings.MULTIPACK_INVALID) &&
        Objects.equals(this.INDEXED_PRODUCT_COUNT_LARGE_DELTA, catalogsFeedValidationWarnings.INDEXED_PRODUCT_COUNT_LARGE_DELTA) &&
        Objects.equals(this.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE, catalogsFeedValidationWarnings.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE) &&
        Objects.equals(this.OPTIONAL_PRODUCT_CATEGORY_MISSING, catalogsFeedValidationWarnings.OPTIONAL_PRODUCT_CATEGORY_MISSING) &&
        Objects.equals(this.OPTIONAL_PRODUCT_CATEGORY_INVALID, catalogsFeedValidationWarnings.OPTIONAL_PRODUCT_CATEGORY_INVALID) &&
        Objects.equals(this.OPTIONAL_CONDITION_MISSING, catalogsFeedValidationWarnings.OPTIONAL_CONDITION_MISSING) &&
        Objects.equals(this.OPTIONAL_CONDITION_INVALID, catalogsFeedValidationWarnings.OPTIONAL_CONDITION_INVALID) &&
        Objects.equals(this.IOS_DEEP_LINK_INVALID, catalogsFeedValidationWarnings.IOS_DEEP_LINK_INVALID) &&
        Objects.equals(this.ANDROID_DEEP_LINK_INVALID, catalogsFeedValidationWarnings.ANDROID_DEEP_LINK_INVALID) &&
        Objects.equals(this.UTM_SOURCE_AUTO_CORRECTED, catalogsFeedValidationWarnings.UTM_SOURCE_AUTO_CORRECTED) &&
        Objects.equals(this.COUNTRY_DOES_NOT_MAP_TO_CURRENCY, catalogsFeedValidationWarnings.COUNTRY_DOES_NOT_MAP_TO_CURRENCY) &&
        Objects.equals(this.MIN_AD_PRICE_INVALID, catalogsFeedValidationWarnings.MIN_AD_PRICE_INVALID) &&
        Objects.equals(this.GTIN_INVALID, catalogsFeedValidationWarnings.GTIN_INVALID) &&
        Objects.equals(this.INCONSISTENT_CURRENCY_VALUES, catalogsFeedValidationWarnings.INCONSISTENT_CURRENCY_VALUES) &&
        Objects.equals(this.SALES_PRICE_TOO_LOW, catalogsFeedValidationWarnings.SALES_PRICE_TOO_LOW) &&
        Objects.equals(this.SHIPPING_WIDTH_INVALID, catalogsFeedValidationWarnings.SHIPPING_WIDTH_INVALID) &&
        Objects.equals(this.SHIPPING_HEIGHT_INVALID, catalogsFeedValidationWarnings.SHIPPING_HEIGHT_INVALID) &&
        Objects.equals(this.SALES_PRICE_TOO_HIGH, catalogsFeedValidationWarnings.SALES_PRICE_TOO_HIGH) &&
        Objects.equals(this.MPN_INVALID, catalogsFeedValidationWarnings.MPN_INVALID);
  }

  @Override
  public int hashCode() {
    return Objects.hash(AD_LINK_FORMAT_WARNING, AD_LINK_SAME_AS_LINK, TITLE_LENGTH_TOO_LONG, DESCRIPTION_LENGTH_TOO_LONG, GENDER_INVALID, AGE_GROUP_INVALID, SIZE_TYPE_INVALID, SIZE_SYSTEM_INVALID, LINK_FORMAT_WARNING, SALES_PRICE_INVALID, PRODUCT_CATEGORY_DEPTH_WARNING, ADWORDS_FORMAT_WARNING, ADWORDS_SAME_AS_LINK, DUPLICATE_HEADERS, FETCH_SAME_SIGNATURE, ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG, ADDITIONAL_IMAGE_LINK_WARNING, IMAGE_LINK_WARNING, SHIPPING_INVALID, TAX_INVALID, SHIPPING_WEIGHT_INVALID, EXPIRATION_DATE_INVALID, AVAILABILITY_DATE_INVALID, SALE_DATE_INVALID, WEIGHT_UNIT_INVALID, IS_BUNDLE_INVALID, UPDATED_TIME_INVALID, CUSTOM_LABEL_LENGTH_TOO_LONG, PRODUCT_TYPE_LENGTH_TOO_LONG, TOO_MANY_ADDITIONAL_IMAGE_LINKS, MULTIPACK_INVALID, INDEXED_PRODUCT_COUNT_LARGE_DELTA, ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE, OPTIONAL_PRODUCT_CATEGORY_MISSING, OPTIONAL_PRODUCT_CATEGORY_INVALID, OPTIONAL_CONDITION_MISSING, OPTIONAL_CONDITION_INVALID, IOS_DEEP_LINK_INVALID, ANDROID_DEEP_LINK_INVALID, UTM_SOURCE_AUTO_CORRECTED, COUNTRY_DOES_NOT_MAP_TO_CURRENCY, MIN_AD_PRICE_INVALID, GTIN_INVALID, INCONSISTENT_CURRENCY_VALUES, SALES_PRICE_TOO_LOW, SHIPPING_WIDTH_INVALID, SHIPPING_HEIGHT_INVALID, SALES_PRICE_TOO_HIGH, MPN_INVALID);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedValidationWarnings {\n");
    sb.append("    AD_LINK_FORMAT_WARNING: ").append(toIndentedString(AD_LINK_FORMAT_WARNING)).append("\n");
    sb.append("    AD_LINK_SAME_AS_LINK: ").append(toIndentedString(AD_LINK_SAME_AS_LINK)).append("\n");
    sb.append("    TITLE_LENGTH_TOO_LONG: ").append(toIndentedString(TITLE_LENGTH_TOO_LONG)).append("\n");
    sb.append("    DESCRIPTION_LENGTH_TOO_LONG: ").append(toIndentedString(DESCRIPTION_LENGTH_TOO_LONG)).append("\n");
    sb.append("    GENDER_INVALID: ").append(toIndentedString(GENDER_INVALID)).append("\n");
    sb.append("    AGE_GROUP_INVALID: ").append(toIndentedString(AGE_GROUP_INVALID)).append("\n");
    sb.append("    SIZE_TYPE_INVALID: ").append(toIndentedString(SIZE_TYPE_INVALID)).append("\n");
    sb.append("    SIZE_SYSTEM_INVALID: ").append(toIndentedString(SIZE_SYSTEM_INVALID)).append("\n");
    sb.append("    LINK_FORMAT_WARNING: ").append(toIndentedString(LINK_FORMAT_WARNING)).append("\n");
    sb.append("    SALES_PRICE_INVALID: ").append(toIndentedString(SALES_PRICE_INVALID)).append("\n");
    sb.append("    PRODUCT_CATEGORY_DEPTH_WARNING: ").append(toIndentedString(PRODUCT_CATEGORY_DEPTH_WARNING)).append("\n");
    sb.append("    ADWORDS_FORMAT_WARNING: ").append(toIndentedString(ADWORDS_FORMAT_WARNING)).append("\n");
    sb.append("    ADWORDS_SAME_AS_LINK: ").append(toIndentedString(ADWORDS_SAME_AS_LINK)).append("\n");
    sb.append("    DUPLICATE_HEADERS: ").append(toIndentedString(DUPLICATE_HEADERS)).append("\n");
    sb.append("    FETCH_SAME_SIGNATURE: ").append(toIndentedString(FETCH_SAME_SIGNATURE)).append("\n");
    sb.append("    ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG: ").append(toIndentedString(ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG)).append("\n");
    sb.append("    ADDITIONAL_IMAGE_LINK_WARNING: ").append(toIndentedString(ADDITIONAL_IMAGE_LINK_WARNING)).append("\n");
    sb.append("    IMAGE_LINK_WARNING: ").append(toIndentedString(IMAGE_LINK_WARNING)).append("\n");
    sb.append("    SHIPPING_INVALID: ").append(toIndentedString(SHIPPING_INVALID)).append("\n");
    sb.append("    TAX_INVALID: ").append(toIndentedString(TAX_INVALID)).append("\n");
    sb.append("    SHIPPING_WEIGHT_INVALID: ").append(toIndentedString(SHIPPING_WEIGHT_INVALID)).append("\n");
    sb.append("    EXPIRATION_DATE_INVALID: ").append(toIndentedString(EXPIRATION_DATE_INVALID)).append("\n");
    sb.append("    AVAILABILITY_DATE_INVALID: ").append(toIndentedString(AVAILABILITY_DATE_INVALID)).append("\n");
    sb.append("    SALE_DATE_INVALID: ").append(toIndentedString(SALE_DATE_INVALID)).append("\n");
    sb.append("    WEIGHT_UNIT_INVALID: ").append(toIndentedString(WEIGHT_UNIT_INVALID)).append("\n");
    sb.append("    IS_BUNDLE_INVALID: ").append(toIndentedString(IS_BUNDLE_INVALID)).append("\n");
    sb.append("    UPDATED_TIME_INVALID: ").append(toIndentedString(UPDATED_TIME_INVALID)).append("\n");
    sb.append("    CUSTOM_LABEL_LENGTH_TOO_LONG: ").append(toIndentedString(CUSTOM_LABEL_LENGTH_TOO_LONG)).append("\n");
    sb.append("    PRODUCT_TYPE_LENGTH_TOO_LONG: ").append(toIndentedString(PRODUCT_TYPE_LENGTH_TOO_LONG)).append("\n");
    sb.append("    TOO_MANY_ADDITIONAL_IMAGE_LINKS: ").append(toIndentedString(TOO_MANY_ADDITIONAL_IMAGE_LINKS)).append("\n");
    sb.append("    MULTIPACK_INVALID: ").append(toIndentedString(MULTIPACK_INVALID)).append("\n");
    sb.append("    INDEXED_PRODUCT_COUNT_LARGE_DELTA: ").append(toIndentedString(INDEXED_PRODUCT_COUNT_LARGE_DELTA)).append("\n");
    sb.append("    ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE: ").append(toIndentedString(ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE)).append("\n");
    sb.append("    OPTIONAL_PRODUCT_CATEGORY_MISSING: ").append(toIndentedString(OPTIONAL_PRODUCT_CATEGORY_MISSING)).append("\n");
    sb.append("    OPTIONAL_PRODUCT_CATEGORY_INVALID: ").append(toIndentedString(OPTIONAL_PRODUCT_CATEGORY_INVALID)).append("\n");
    sb.append("    OPTIONAL_CONDITION_MISSING: ").append(toIndentedString(OPTIONAL_CONDITION_MISSING)).append("\n");
    sb.append("    OPTIONAL_CONDITION_INVALID: ").append(toIndentedString(OPTIONAL_CONDITION_INVALID)).append("\n");
    sb.append("    IOS_DEEP_LINK_INVALID: ").append(toIndentedString(IOS_DEEP_LINK_INVALID)).append("\n");
    sb.append("    ANDROID_DEEP_LINK_INVALID: ").append(toIndentedString(ANDROID_DEEP_LINK_INVALID)).append("\n");
    sb.append("    UTM_SOURCE_AUTO_CORRECTED: ").append(toIndentedString(UTM_SOURCE_AUTO_CORRECTED)).append("\n");
    sb.append("    COUNTRY_DOES_NOT_MAP_TO_CURRENCY: ").append(toIndentedString(COUNTRY_DOES_NOT_MAP_TO_CURRENCY)).append("\n");
    sb.append("    MIN_AD_PRICE_INVALID: ").append(toIndentedString(MIN_AD_PRICE_INVALID)).append("\n");
    sb.append("    GTIN_INVALID: ").append(toIndentedString(GTIN_INVALID)).append("\n");
    sb.append("    INCONSISTENT_CURRENCY_VALUES: ").append(toIndentedString(INCONSISTENT_CURRENCY_VALUES)).append("\n");
    sb.append("    SALES_PRICE_TOO_LOW: ").append(toIndentedString(SALES_PRICE_TOO_LOW)).append("\n");
    sb.append("    SHIPPING_WIDTH_INVALID: ").append(toIndentedString(SHIPPING_WIDTH_INVALID)).append("\n");
    sb.append("    SHIPPING_HEIGHT_INVALID: ").append(toIndentedString(SHIPPING_HEIGHT_INVALID)).append("\n");
    sb.append("    SALES_PRICE_TOO_HIGH: ").append(toIndentedString(SALES_PRICE_TOO_HIGH)).append("\n");
    sb.append("    MPN_INVALID: ").append(toIndentedString(MPN_INVALID)).append("\n");
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

