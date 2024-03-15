package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.CatalogsItemValidationDetails;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * CatalogsItemValidationWarnings
 */

@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2024-03-14T23:15:39.458648915Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsItemValidationWarnings {

  private CatalogsItemValidationDetails AD_LINK_FORMAT_WARNING;

  private CatalogsItemValidationDetails AD_LINK_SAME_AS_LINK;

  private CatalogsItemValidationDetails ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG;

  private CatalogsItemValidationDetails ADDITIONAL_IMAGE_LINK_WARNING;

  private CatalogsItemValidationDetails ADWORDS_FORMAT_WARNING;

  private CatalogsItemValidationDetails ADWORDS_SAME_AS_LINK;

  private CatalogsItemValidationDetails AGE_GROUP_INVALID;

  private CatalogsItemValidationDetails SIZE_SYSTEM_INVALID;

  private CatalogsItemValidationDetails ANDROID_DEEP_LINK_INVALID;

  private CatalogsItemValidationDetails AVAILABILITY_DATE_INVALID;

  private CatalogsItemValidationDetails COUNTRY_DOES_NOT_MAP_TO_CURRENCY;

  private CatalogsItemValidationDetails CUSTOM_LABEL_LENGTH_TOO_LONG;

  private CatalogsItemValidationDetails DESCRIPTION_LENGTH_TOO_LONG;

  private CatalogsItemValidationDetails EXPIRATION_DATE_INVALID;

  private CatalogsItemValidationDetails GENDER_INVALID;

  private CatalogsItemValidationDetails GTIN_INVALID;

  private CatalogsItemValidationDetails IMAGE_LINK_WARNING;

  private CatalogsItemValidationDetails IOS_DEEP_LINK_INVALID;

  private CatalogsItemValidationDetails IS_BUNDLE_INVALID;

  private CatalogsItemValidationDetails ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE;

  private CatalogsItemValidationDetails LINK_FORMAT_WARNING;

  private CatalogsItemValidationDetails MIN_AD_PRICE_INVALID;

  private CatalogsItemValidationDetails MPN_INVALID;

  private CatalogsItemValidationDetails MULTIPACK_INVALID;

  private CatalogsItemValidationDetails OPTIONAL_CONDITION_INVALID;

  private CatalogsItemValidationDetails OPTIONAL_CONDITION_MISSING;

  private CatalogsItemValidationDetails OPTIONAL_PRODUCT_CATEGORY_INVALID;

  private CatalogsItemValidationDetails OPTIONAL_PRODUCT_CATEGORY_MISSING;

  private CatalogsItemValidationDetails PRODUCT_CATEGORY_DEPTH_WARNING;

  private CatalogsItemValidationDetails PRODUCT_TYPE_LENGTH_TOO_LONG;

  private CatalogsItemValidationDetails SALES_PRICE_INVALID;

  private CatalogsItemValidationDetails SALES_PRICE_TOO_LOW;

  private CatalogsItemValidationDetails SALES_PRICE_TOO_HIGH;

  private CatalogsItemValidationDetails SALE_DATE_INVALID;

  private CatalogsItemValidationDetails SHIPPING_INVALID;

  private CatalogsItemValidationDetails SHIPPING_HEIGHT_INVALID;

  private CatalogsItemValidationDetails SHIPPING_WEIGHT_INVALID;

  private CatalogsItemValidationDetails SHIPPING_WIDTH_INVALID;

  private CatalogsItemValidationDetails SIZE_TYPE_INVALID;

  private CatalogsItemValidationDetails TAX_INVALID;

  private CatalogsItemValidationDetails TITLE_LENGTH_TOO_LONG;

  private CatalogsItemValidationDetails TOO_MANY_ADDITIONAL_IMAGE_LINKS;

  private CatalogsItemValidationDetails UTM_SOURCE_AUTO_CORRECTED;

  private CatalogsItemValidationDetails WEIGHT_UNIT_INVALID;

  public CatalogsItemValidationWarnings AD_LINK_FORMAT_WARNING(CatalogsItemValidationDetails AD_LINK_FORMAT_WARNING) {
    this.AD_LINK_FORMAT_WARNING = AD_LINK_FORMAT_WARNING;
    return this;
  }

  /**
   * Get AD_LINK_FORMAT_WARNING
   * @return AD_LINK_FORMAT_WARNING
  */
  @Valid 
  @Schema(name = "AD_LINK_FORMAT_WARNING", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("AD_LINK_FORMAT_WARNING")
  public CatalogsItemValidationDetails getADLINKFORMATWARNING() {
    return AD_LINK_FORMAT_WARNING;
  }

  public void setADLINKFORMATWARNING(CatalogsItemValidationDetails AD_LINK_FORMAT_WARNING) {
    this.AD_LINK_FORMAT_WARNING = AD_LINK_FORMAT_WARNING;
  }

  public CatalogsItemValidationWarnings AD_LINK_SAME_AS_LINK(CatalogsItemValidationDetails AD_LINK_SAME_AS_LINK) {
    this.AD_LINK_SAME_AS_LINK = AD_LINK_SAME_AS_LINK;
    return this;
  }

  /**
   * Get AD_LINK_SAME_AS_LINK
   * @return AD_LINK_SAME_AS_LINK
  */
  @Valid 
  @Schema(name = "AD_LINK_SAME_AS_LINK", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("AD_LINK_SAME_AS_LINK")
  public CatalogsItemValidationDetails getADLINKSAMEASLINK() {
    return AD_LINK_SAME_AS_LINK;
  }

  public void setADLINKSAMEASLINK(CatalogsItemValidationDetails AD_LINK_SAME_AS_LINK) {
    this.AD_LINK_SAME_AS_LINK = AD_LINK_SAME_AS_LINK;
  }

  public CatalogsItemValidationWarnings ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG(CatalogsItemValidationDetails ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG) {
    this.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG = ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * Get ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG
   * @return ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG
  */
  @Valid 
  @Schema(name = "ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG")
  public CatalogsItemValidationDetails getADDITIONALIMAGELINKLENGTHTOOLONG() {
    return ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG;
  }

  public void setADDITIONALIMAGELINKLENGTHTOOLONG(CatalogsItemValidationDetails ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG) {
    this.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG = ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG;
  }

  public CatalogsItemValidationWarnings ADDITIONAL_IMAGE_LINK_WARNING(CatalogsItemValidationDetails ADDITIONAL_IMAGE_LINK_WARNING) {
    this.ADDITIONAL_IMAGE_LINK_WARNING = ADDITIONAL_IMAGE_LINK_WARNING;
    return this;
  }

  /**
   * Get ADDITIONAL_IMAGE_LINK_WARNING
   * @return ADDITIONAL_IMAGE_LINK_WARNING
  */
  @Valid 
  @Schema(name = "ADDITIONAL_IMAGE_LINK_WARNING", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ADDITIONAL_IMAGE_LINK_WARNING")
  public CatalogsItemValidationDetails getADDITIONALIMAGELINKWARNING() {
    return ADDITIONAL_IMAGE_LINK_WARNING;
  }

  public void setADDITIONALIMAGELINKWARNING(CatalogsItemValidationDetails ADDITIONAL_IMAGE_LINK_WARNING) {
    this.ADDITIONAL_IMAGE_LINK_WARNING = ADDITIONAL_IMAGE_LINK_WARNING;
  }

  public CatalogsItemValidationWarnings ADWORDS_FORMAT_WARNING(CatalogsItemValidationDetails ADWORDS_FORMAT_WARNING) {
    this.ADWORDS_FORMAT_WARNING = ADWORDS_FORMAT_WARNING;
    return this;
  }

  /**
   * Get ADWORDS_FORMAT_WARNING
   * @return ADWORDS_FORMAT_WARNING
  */
  @Valid 
  @Schema(name = "ADWORDS_FORMAT_WARNING", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ADWORDS_FORMAT_WARNING")
  public CatalogsItemValidationDetails getADWORDSFORMATWARNING() {
    return ADWORDS_FORMAT_WARNING;
  }

  public void setADWORDSFORMATWARNING(CatalogsItemValidationDetails ADWORDS_FORMAT_WARNING) {
    this.ADWORDS_FORMAT_WARNING = ADWORDS_FORMAT_WARNING;
  }

  public CatalogsItemValidationWarnings ADWORDS_SAME_AS_LINK(CatalogsItemValidationDetails ADWORDS_SAME_AS_LINK) {
    this.ADWORDS_SAME_AS_LINK = ADWORDS_SAME_AS_LINK;
    return this;
  }

  /**
   * Get ADWORDS_SAME_AS_LINK
   * @return ADWORDS_SAME_AS_LINK
  */
  @Valid 
  @Schema(name = "ADWORDS_SAME_AS_LINK", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ADWORDS_SAME_AS_LINK")
  public CatalogsItemValidationDetails getADWORDSSAMEASLINK() {
    return ADWORDS_SAME_AS_LINK;
  }

  public void setADWORDSSAMEASLINK(CatalogsItemValidationDetails ADWORDS_SAME_AS_LINK) {
    this.ADWORDS_SAME_AS_LINK = ADWORDS_SAME_AS_LINK;
  }

  public CatalogsItemValidationWarnings AGE_GROUP_INVALID(CatalogsItemValidationDetails AGE_GROUP_INVALID) {
    this.AGE_GROUP_INVALID = AGE_GROUP_INVALID;
    return this;
  }

  /**
   * Get AGE_GROUP_INVALID
   * @return AGE_GROUP_INVALID
  */
  @Valid 
  @Schema(name = "AGE_GROUP_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("AGE_GROUP_INVALID")
  public CatalogsItemValidationDetails getAGEGROUPINVALID() {
    return AGE_GROUP_INVALID;
  }

  public void setAGEGROUPINVALID(CatalogsItemValidationDetails AGE_GROUP_INVALID) {
    this.AGE_GROUP_INVALID = AGE_GROUP_INVALID;
  }

  public CatalogsItemValidationWarnings SIZE_SYSTEM_INVALID(CatalogsItemValidationDetails SIZE_SYSTEM_INVALID) {
    this.SIZE_SYSTEM_INVALID = SIZE_SYSTEM_INVALID;
    return this;
  }

  /**
   * Get SIZE_SYSTEM_INVALID
   * @return SIZE_SYSTEM_INVALID
  */
  @Valid 
  @Schema(name = "SIZE_SYSTEM_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SIZE_SYSTEM_INVALID")
  public CatalogsItemValidationDetails getSIZESYSTEMINVALID() {
    return SIZE_SYSTEM_INVALID;
  }

  public void setSIZESYSTEMINVALID(CatalogsItemValidationDetails SIZE_SYSTEM_INVALID) {
    this.SIZE_SYSTEM_INVALID = SIZE_SYSTEM_INVALID;
  }

  public CatalogsItemValidationWarnings ANDROID_DEEP_LINK_INVALID(CatalogsItemValidationDetails ANDROID_DEEP_LINK_INVALID) {
    this.ANDROID_DEEP_LINK_INVALID = ANDROID_DEEP_LINK_INVALID;
    return this;
  }

  /**
   * Get ANDROID_DEEP_LINK_INVALID
   * @return ANDROID_DEEP_LINK_INVALID
  */
  @Valid 
  @Schema(name = "ANDROID_DEEP_LINK_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ANDROID_DEEP_LINK_INVALID")
  public CatalogsItemValidationDetails getANDROIDDEEPLINKINVALID() {
    return ANDROID_DEEP_LINK_INVALID;
  }

  public void setANDROIDDEEPLINKINVALID(CatalogsItemValidationDetails ANDROID_DEEP_LINK_INVALID) {
    this.ANDROID_DEEP_LINK_INVALID = ANDROID_DEEP_LINK_INVALID;
  }

  public CatalogsItemValidationWarnings AVAILABILITY_DATE_INVALID(CatalogsItemValidationDetails AVAILABILITY_DATE_INVALID) {
    this.AVAILABILITY_DATE_INVALID = AVAILABILITY_DATE_INVALID;
    return this;
  }

  /**
   * Get AVAILABILITY_DATE_INVALID
   * @return AVAILABILITY_DATE_INVALID
  */
  @Valid 
  @Schema(name = "AVAILABILITY_DATE_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("AVAILABILITY_DATE_INVALID")
  public CatalogsItemValidationDetails getAVAILABILITYDATEINVALID() {
    return AVAILABILITY_DATE_INVALID;
  }

  public void setAVAILABILITYDATEINVALID(CatalogsItemValidationDetails AVAILABILITY_DATE_INVALID) {
    this.AVAILABILITY_DATE_INVALID = AVAILABILITY_DATE_INVALID;
  }

  public CatalogsItemValidationWarnings COUNTRY_DOES_NOT_MAP_TO_CURRENCY(CatalogsItemValidationDetails COUNTRY_DOES_NOT_MAP_TO_CURRENCY) {
    this.COUNTRY_DOES_NOT_MAP_TO_CURRENCY = COUNTRY_DOES_NOT_MAP_TO_CURRENCY;
    return this;
  }

  /**
   * Get COUNTRY_DOES_NOT_MAP_TO_CURRENCY
   * @return COUNTRY_DOES_NOT_MAP_TO_CURRENCY
  */
  @Valid 
  @Schema(name = "COUNTRY_DOES_NOT_MAP_TO_CURRENCY", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("COUNTRY_DOES_NOT_MAP_TO_CURRENCY")
  public CatalogsItemValidationDetails getCOUNTRYDOESNOTMAPTOCURRENCY() {
    return COUNTRY_DOES_NOT_MAP_TO_CURRENCY;
  }

  public void setCOUNTRYDOESNOTMAPTOCURRENCY(CatalogsItemValidationDetails COUNTRY_DOES_NOT_MAP_TO_CURRENCY) {
    this.COUNTRY_DOES_NOT_MAP_TO_CURRENCY = COUNTRY_DOES_NOT_MAP_TO_CURRENCY;
  }

  public CatalogsItemValidationWarnings CUSTOM_LABEL_LENGTH_TOO_LONG(CatalogsItemValidationDetails CUSTOM_LABEL_LENGTH_TOO_LONG) {
    this.CUSTOM_LABEL_LENGTH_TOO_LONG = CUSTOM_LABEL_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * Get CUSTOM_LABEL_LENGTH_TOO_LONG
   * @return CUSTOM_LABEL_LENGTH_TOO_LONG
  */
  @Valid 
  @Schema(name = "CUSTOM_LABEL_LENGTH_TOO_LONG", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("CUSTOM_LABEL_LENGTH_TOO_LONG")
  public CatalogsItemValidationDetails getCUSTOMLABELLENGTHTOOLONG() {
    return CUSTOM_LABEL_LENGTH_TOO_LONG;
  }

  public void setCUSTOMLABELLENGTHTOOLONG(CatalogsItemValidationDetails CUSTOM_LABEL_LENGTH_TOO_LONG) {
    this.CUSTOM_LABEL_LENGTH_TOO_LONG = CUSTOM_LABEL_LENGTH_TOO_LONG;
  }

  public CatalogsItemValidationWarnings DESCRIPTION_LENGTH_TOO_LONG(CatalogsItemValidationDetails DESCRIPTION_LENGTH_TOO_LONG) {
    this.DESCRIPTION_LENGTH_TOO_LONG = DESCRIPTION_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * Get DESCRIPTION_LENGTH_TOO_LONG
   * @return DESCRIPTION_LENGTH_TOO_LONG
  */
  @Valid 
  @Schema(name = "DESCRIPTION_LENGTH_TOO_LONG", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("DESCRIPTION_LENGTH_TOO_LONG")
  public CatalogsItemValidationDetails getDESCRIPTIONLENGTHTOOLONG() {
    return DESCRIPTION_LENGTH_TOO_LONG;
  }

  public void setDESCRIPTIONLENGTHTOOLONG(CatalogsItemValidationDetails DESCRIPTION_LENGTH_TOO_LONG) {
    this.DESCRIPTION_LENGTH_TOO_LONG = DESCRIPTION_LENGTH_TOO_LONG;
  }

  public CatalogsItemValidationWarnings EXPIRATION_DATE_INVALID(CatalogsItemValidationDetails EXPIRATION_DATE_INVALID) {
    this.EXPIRATION_DATE_INVALID = EXPIRATION_DATE_INVALID;
    return this;
  }

  /**
   * Get EXPIRATION_DATE_INVALID
   * @return EXPIRATION_DATE_INVALID
  */
  @Valid 
  @Schema(name = "EXPIRATION_DATE_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("EXPIRATION_DATE_INVALID")
  public CatalogsItemValidationDetails getEXPIRATIONDATEINVALID() {
    return EXPIRATION_DATE_INVALID;
  }

  public void setEXPIRATIONDATEINVALID(CatalogsItemValidationDetails EXPIRATION_DATE_INVALID) {
    this.EXPIRATION_DATE_INVALID = EXPIRATION_DATE_INVALID;
  }

  public CatalogsItemValidationWarnings GENDER_INVALID(CatalogsItemValidationDetails GENDER_INVALID) {
    this.GENDER_INVALID = GENDER_INVALID;
    return this;
  }

  /**
   * Get GENDER_INVALID
   * @return GENDER_INVALID
  */
  @Valid 
  @Schema(name = "GENDER_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("GENDER_INVALID")
  public CatalogsItemValidationDetails getGENDERINVALID() {
    return GENDER_INVALID;
  }

  public void setGENDERINVALID(CatalogsItemValidationDetails GENDER_INVALID) {
    this.GENDER_INVALID = GENDER_INVALID;
  }

  public CatalogsItemValidationWarnings GTIN_INVALID(CatalogsItemValidationDetails GTIN_INVALID) {
    this.GTIN_INVALID = GTIN_INVALID;
    return this;
  }

  /**
   * Get GTIN_INVALID
   * @return GTIN_INVALID
  */
  @Valid 
  @Schema(name = "GTIN_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("GTIN_INVALID")
  public CatalogsItemValidationDetails getGTININVALID() {
    return GTIN_INVALID;
  }

  public void setGTININVALID(CatalogsItemValidationDetails GTIN_INVALID) {
    this.GTIN_INVALID = GTIN_INVALID;
  }

  public CatalogsItemValidationWarnings IMAGE_LINK_WARNING(CatalogsItemValidationDetails IMAGE_LINK_WARNING) {
    this.IMAGE_LINK_WARNING = IMAGE_LINK_WARNING;
    return this;
  }

  /**
   * Get IMAGE_LINK_WARNING
   * @return IMAGE_LINK_WARNING
  */
  @Valid 
  @Schema(name = "IMAGE_LINK_WARNING", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IMAGE_LINK_WARNING")
  public CatalogsItemValidationDetails getIMAGELINKWARNING() {
    return IMAGE_LINK_WARNING;
  }

  public void setIMAGELINKWARNING(CatalogsItemValidationDetails IMAGE_LINK_WARNING) {
    this.IMAGE_LINK_WARNING = IMAGE_LINK_WARNING;
  }

  public CatalogsItemValidationWarnings IOS_DEEP_LINK_INVALID(CatalogsItemValidationDetails IOS_DEEP_LINK_INVALID) {
    this.IOS_DEEP_LINK_INVALID = IOS_DEEP_LINK_INVALID;
    return this;
  }

  /**
   * Get IOS_DEEP_LINK_INVALID
   * @return IOS_DEEP_LINK_INVALID
  */
  @Valid 
  @Schema(name = "IOS_DEEP_LINK_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IOS_DEEP_LINK_INVALID")
  public CatalogsItemValidationDetails getIOSDEEPLINKINVALID() {
    return IOS_DEEP_LINK_INVALID;
  }

  public void setIOSDEEPLINKINVALID(CatalogsItemValidationDetails IOS_DEEP_LINK_INVALID) {
    this.IOS_DEEP_LINK_INVALID = IOS_DEEP_LINK_INVALID;
  }

  public CatalogsItemValidationWarnings IS_BUNDLE_INVALID(CatalogsItemValidationDetails IS_BUNDLE_INVALID) {
    this.IS_BUNDLE_INVALID = IS_BUNDLE_INVALID;
    return this;
  }

  /**
   * Get IS_BUNDLE_INVALID
   * @return IS_BUNDLE_INVALID
  */
  @Valid 
  @Schema(name = "IS_BUNDLE_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IS_BUNDLE_INVALID")
  public CatalogsItemValidationDetails getISBUNDLEINVALID() {
    return IS_BUNDLE_INVALID;
  }

  public void setISBUNDLEINVALID(CatalogsItemValidationDetails IS_BUNDLE_INVALID) {
    this.IS_BUNDLE_INVALID = IS_BUNDLE_INVALID;
  }

  public CatalogsItemValidationWarnings ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE(CatalogsItemValidationDetails ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE) {
    this.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE = ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE;
    return this;
  }

  /**
   * Get ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE
   * @return ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE
  */
  @Valid 
  @Schema(name = "ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE")
  public CatalogsItemValidationDetails getITEMADDITIONALIMAGEDOWNLOADFAILURE() {
    return ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE;
  }

  public void setITEMADDITIONALIMAGEDOWNLOADFAILURE(CatalogsItemValidationDetails ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE) {
    this.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE = ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE;
  }

  public CatalogsItemValidationWarnings LINK_FORMAT_WARNING(CatalogsItemValidationDetails LINK_FORMAT_WARNING) {
    this.LINK_FORMAT_WARNING = LINK_FORMAT_WARNING;
    return this;
  }

  /**
   * Get LINK_FORMAT_WARNING
   * @return LINK_FORMAT_WARNING
  */
  @Valid 
  @Schema(name = "LINK_FORMAT_WARNING", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("LINK_FORMAT_WARNING")
  public CatalogsItemValidationDetails getLINKFORMATWARNING() {
    return LINK_FORMAT_WARNING;
  }

  public void setLINKFORMATWARNING(CatalogsItemValidationDetails LINK_FORMAT_WARNING) {
    this.LINK_FORMAT_WARNING = LINK_FORMAT_WARNING;
  }

  public CatalogsItemValidationWarnings MIN_AD_PRICE_INVALID(CatalogsItemValidationDetails MIN_AD_PRICE_INVALID) {
    this.MIN_AD_PRICE_INVALID = MIN_AD_PRICE_INVALID;
    return this;
  }

  /**
   * Get MIN_AD_PRICE_INVALID
   * @return MIN_AD_PRICE_INVALID
  */
  @Valid 
  @Schema(name = "MIN_AD_PRICE_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("MIN_AD_PRICE_INVALID")
  public CatalogsItemValidationDetails getMINADPRICEINVALID() {
    return MIN_AD_PRICE_INVALID;
  }

  public void setMINADPRICEINVALID(CatalogsItemValidationDetails MIN_AD_PRICE_INVALID) {
    this.MIN_AD_PRICE_INVALID = MIN_AD_PRICE_INVALID;
  }

  public CatalogsItemValidationWarnings MPN_INVALID(CatalogsItemValidationDetails MPN_INVALID) {
    this.MPN_INVALID = MPN_INVALID;
    return this;
  }

  /**
   * Get MPN_INVALID
   * @return MPN_INVALID
  */
  @Valid 
  @Schema(name = "MPN_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("MPN_INVALID")
  public CatalogsItemValidationDetails getMPNINVALID() {
    return MPN_INVALID;
  }

  public void setMPNINVALID(CatalogsItemValidationDetails MPN_INVALID) {
    this.MPN_INVALID = MPN_INVALID;
  }

  public CatalogsItemValidationWarnings MULTIPACK_INVALID(CatalogsItemValidationDetails MULTIPACK_INVALID) {
    this.MULTIPACK_INVALID = MULTIPACK_INVALID;
    return this;
  }

  /**
   * Get MULTIPACK_INVALID
   * @return MULTIPACK_INVALID
  */
  @Valid 
  @Schema(name = "MULTIPACK_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("MULTIPACK_INVALID")
  public CatalogsItemValidationDetails getMULTIPACKINVALID() {
    return MULTIPACK_INVALID;
  }

  public void setMULTIPACKINVALID(CatalogsItemValidationDetails MULTIPACK_INVALID) {
    this.MULTIPACK_INVALID = MULTIPACK_INVALID;
  }

  public CatalogsItemValidationWarnings OPTIONAL_CONDITION_INVALID(CatalogsItemValidationDetails OPTIONAL_CONDITION_INVALID) {
    this.OPTIONAL_CONDITION_INVALID = OPTIONAL_CONDITION_INVALID;
    return this;
  }

  /**
   * Get OPTIONAL_CONDITION_INVALID
   * @return OPTIONAL_CONDITION_INVALID
  */
  @Valid 
  @Schema(name = "OPTIONAL_CONDITION_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("OPTIONAL_CONDITION_INVALID")
  public CatalogsItemValidationDetails getOPTIONALCONDITIONINVALID() {
    return OPTIONAL_CONDITION_INVALID;
  }

  public void setOPTIONALCONDITIONINVALID(CatalogsItemValidationDetails OPTIONAL_CONDITION_INVALID) {
    this.OPTIONAL_CONDITION_INVALID = OPTIONAL_CONDITION_INVALID;
  }

  public CatalogsItemValidationWarnings OPTIONAL_CONDITION_MISSING(CatalogsItemValidationDetails OPTIONAL_CONDITION_MISSING) {
    this.OPTIONAL_CONDITION_MISSING = OPTIONAL_CONDITION_MISSING;
    return this;
  }

  /**
   * Get OPTIONAL_CONDITION_MISSING
   * @return OPTIONAL_CONDITION_MISSING
  */
  @Valid 
  @Schema(name = "OPTIONAL_CONDITION_MISSING", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("OPTIONAL_CONDITION_MISSING")
  public CatalogsItemValidationDetails getOPTIONALCONDITIONMISSING() {
    return OPTIONAL_CONDITION_MISSING;
  }

  public void setOPTIONALCONDITIONMISSING(CatalogsItemValidationDetails OPTIONAL_CONDITION_MISSING) {
    this.OPTIONAL_CONDITION_MISSING = OPTIONAL_CONDITION_MISSING;
  }

  public CatalogsItemValidationWarnings OPTIONAL_PRODUCT_CATEGORY_INVALID(CatalogsItemValidationDetails OPTIONAL_PRODUCT_CATEGORY_INVALID) {
    this.OPTIONAL_PRODUCT_CATEGORY_INVALID = OPTIONAL_PRODUCT_CATEGORY_INVALID;
    return this;
  }

  /**
   * Get OPTIONAL_PRODUCT_CATEGORY_INVALID
   * @return OPTIONAL_PRODUCT_CATEGORY_INVALID
  */
  @Valid 
  @Schema(name = "OPTIONAL_PRODUCT_CATEGORY_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("OPTIONAL_PRODUCT_CATEGORY_INVALID")
  public CatalogsItemValidationDetails getOPTIONALPRODUCTCATEGORYINVALID() {
    return OPTIONAL_PRODUCT_CATEGORY_INVALID;
  }

  public void setOPTIONALPRODUCTCATEGORYINVALID(CatalogsItemValidationDetails OPTIONAL_PRODUCT_CATEGORY_INVALID) {
    this.OPTIONAL_PRODUCT_CATEGORY_INVALID = OPTIONAL_PRODUCT_CATEGORY_INVALID;
  }

  public CatalogsItemValidationWarnings OPTIONAL_PRODUCT_CATEGORY_MISSING(CatalogsItemValidationDetails OPTIONAL_PRODUCT_CATEGORY_MISSING) {
    this.OPTIONAL_PRODUCT_CATEGORY_MISSING = OPTIONAL_PRODUCT_CATEGORY_MISSING;
    return this;
  }

  /**
   * Get OPTIONAL_PRODUCT_CATEGORY_MISSING
   * @return OPTIONAL_PRODUCT_CATEGORY_MISSING
  */
  @Valid 
  @Schema(name = "OPTIONAL_PRODUCT_CATEGORY_MISSING", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("OPTIONAL_PRODUCT_CATEGORY_MISSING")
  public CatalogsItemValidationDetails getOPTIONALPRODUCTCATEGORYMISSING() {
    return OPTIONAL_PRODUCT_CATEGORY_MISSING;
  }

  public void setOPTIONALPRODUCTCATEGORYMISSING(CatalogsItemValidationDetails OPTIONAL_PRODUCT_CATEGORY_MISSING) {
    this.OPTIONAL_PRODUCT_CATEGORY_MISSING = OPTIONAL_PRODUCT_CATEGORY_MISSING;
  }

  public CatalogsItemValidationWarnings PRODUCT_CATEGORY_DEPTH_WARNING(CatalogsItemValidationDetails PRODUCT_CATEGORY_DEPTH_WARNING) {
    this.PRODUCT_CATEGORY_DEPTH_WARNING = PRODUCT_CATEGORY_DEPTH_WARNING;
    return this;
  }

  /**
   * Get PRODUCT_CATEGORY_DEPTH_WARNING
   * @return PRODUCT_CATEGORY_DEPTH_WARNING
  */
  @Valid 
  @Schema(name = "PRODUCT_CATEGORY_DEPTH_WARNING", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("PRODUCT_CATEGORY_DEPTH_WARNING")
  public CatalogsItemValidationDetails getPRODUCTCATEGORYDEPTHWARNING() {
    return PRODUCT_CATEGORY_DEPTH_WARNING;
  }

  public void setPRODUCTCATEGORYDEPTHWARNING(CatalogsItemValidationDetails PRODUCT_CATEGORY_DEPTH_WARNING) {
    this.PRODUCT_CATEGORY_DEPTH_WARNING = PRODUCT_CATEGORY_DEPTH_WARNING;
  }

  public CatalogsItemValidationWarnings PRODUCT_TYPE_LENGTH_TOO_LONG(CatalogsItemValidationDetails PRODUCT_TYPE_LENGTH_TOO_LONG) {
    this.PRODUCT_TYPE_LENGTH_TOO_LONG = PRODUCT_TYPE_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * Get PRODUCT_TYPE_LENGTH_TOO_LONG
   * @return PRODUCT_TYPE_LENGTH_TOO_LONG
  */
  @Valid 
  @Schema(name = "PRODUCT_TYPE_LENGTH_TOO_LONG", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("PRODUCT_TYPE_LENGTH_TOO_LONG")
  public CatalogsItemValidationDetails getPRODUCTTYPELENGTHTOOLONG() {
    return PRODUCT_TYPE_LENGTH_TOO_LONG;
  }

  public void setPRODUCTTYPELENGTHTOOLONG(CatalogsItemValidationDetails PRODUCT_TYPE_LENGTH_TOO_LONG) {
    this.PRODUCT_TYPE_LENGTH_TOO_LONG = PRODUCT_TYPE_LENGTH_TOO_LONG;
  }

  public CatalogsItemValidationWarnings SALES_PRICE_INVALID(CatalogsItemValidationDetails SALES_PRICE_INVALID) {
    this.SALES_PRICE_INVALID = SALES_PRICE_INVALID;
    return this;
  }

  /**
   * Get SALES_PRICE_INVALID
   * @return SALES_PRICE_INVALID
  */
  @Valid 
  @Schema(name = "SALES_PRICE_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SALES_PRICE_INVALID")
  public CatalogsItemValidationDetails getSALESPRICEINVALID() {
    return SALES_PRICE_INVALID;
  }

  public void setSALESPRICEINVALID(CatalogsItemValidationDetails SALES_PRICE_INVALID) {
    this.SALES_PRICE_INVALID = SALES_PRICE_INVALID;
  }

  public CatalogsItemValidationWarnings SALES_PRICE_TOO_LOW(CatalogsItemValidationDetails SALES_PRICE_TOO_LOW) {
    this.SALES_PRICE_TOO_LOW = SALES_PRICE_TOO_LOW;
    return this;
  }

  /**
   * Get SALES_PRICE_TOO_LOW
   * @return SALES_PRICE_TOO_LOW
  */
  @Valid 
  @Schema(name = "SALES_PRICE_TOO_LOW", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SALES_PRICE_TOO_LOW")
  public CatalogsItemValidationDetails getSALESPRICETOOLOW() {
    return SALES_PRICE_TOO_LOW;
  }

  public void setSALESPRICETOOLOW(CatalogsItemValidationDetails SALES_PRICE_TOO_LOW) {
    this.SALES_PRICE_TOO_LOW = SALES_PRICE_TOO_LOW;
  }

  public CatalogsItemValidationWarnings SALES_PRICE_TOO_HIGH(CatalogsItemValidationDetails SALES_PRICE_TOO_HIGH) {
    this.SALES_PRICE_TOO_HIGH = SALES_PRICE_TOO_HIGH;
    return this;
  }

  /**
   * Get SALES_PRICE_TOO_HIGH
   * @return SALES_PRICE_TOO_HIGH
  */
  @Valid 
  @Schema(name = "SALES_PRICE_TOO_HIGH", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SALES_PRICE_TOO_HIGH")
  public CatalogsItemValidationDetails getSALESPRICETOOHIGH() {
    return SALES_PRICE_TOO_HIGH;
  }

  public void setSALESPRICETOOHIGH(CatalogsItemValidationDetails SALES_PRICE_TOO_HIGH) {
    this.SALES_PRICE_TOO_HIGH = SALES_PRICE_TOO_HIGH;
  }

  public CatalogsItemValidationWarnings SALE_DATE_INVALID(CatalogsItemValidationDetails SALE_DATE_INVALID) {
    this.SALE_DATE_INVALID = SALE_DATE_INVALID;
    return this;
  }

  /**
   * Get SALE_DATE_INVALID
   * @return SALE_DATE_INVALID
  */
  @Valid 
  @Schema(name = "SALE_DATE_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SALE_DATE_INVALID")
  public CatalogsItemValidationDetails getSALEDATEINVALID() {
    return SALE_DATE_INVALID;
  }

  public void setSALEDATEINVALID(CatalogsItemValidationDetails SALE_DATE_INVALID) {
    this.SALE_DATE_INVALID = SALE_DATE_INVALID;
  }

  public CatalogsItemValidationWarnings SHIPPING_INVALID(CatalogsItemValidationDetails SHIPPING_INVALID) {
    this.SHIPPING_INVALID = SHIPPING_INVALID;
    return this;
  }

  /**
   * Get SHIPPING_INVALID
   * @return SHIPPING_INVALID
  */
  @Valid 
  @Schema(name = "SHIPPING_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SHIPPING_INVALID")
  public CatalogsItemValidationDetails getSHIPPINGINVALID() {
    return SHIPPING_INVALID;
  }

  public void setSHIPPINGINVALID(CatalogsItemValidationDetails SHIPPING_INVALID) {
    this.SHIPPING_INVALID = SHIPPING_INVALID;
  }

  public CatalogsItemValidationWarnings SHIPPING_HEIGHT_INVALID(CatalogsItemValidationDetails SHIPPING_HEIGHT_INVALID) {
    this.SHIPPING_HEIGHT_INVALID = SHIPPING_HEIGHT_INVALID;
    return this;
  }

  /**
   * Get SHIPPING_HEIGHT_INVALID
   * @return SHIPPING_HEIGHT_INVALID
  */
  @Valid 
  @Schema(name = "SHIPPING_HEIGHT_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SHIPPING_HEIGHT_INVALID")
  public CatalogsItemValidationDetails getSHIPPINGHEIGHTINVALID() {
    return SHIPPING_HEIGHT_INVALID;
  }

  public void setSHIPPINGHEIGHTINVALID(CatalogsItemValidationDetails SHIPPING_HEIGHT_INVALID) {
    this.SHIPPING_HEIGHT_INVALID = SHIPPING_HEIGHT_INVALID;
  }

  public CatalogsItemValidationWarnings SHIPPING_WEIGHT_INVALID(CatalogsItemValidationDetails SHIPPING_WEIGHT_INVALID) {
    this.SHIPPING_WEIGHT_INVALID = SHIPPING_WEIGHT_INVALID;
    return this;
  }

  /**
   * Get SHIPPING_WEIGHT_INVALID
   * @return SHIPPING_WEIGHT_INVALID
  */
  @Valid 
  @Schema(name = "SHIPPING_WEIGHT_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SHIPPING_WEIGHT_INVALID")
  public CatalogsItemValidationDetails getSHIPPINGWEIGHTINVALID() {
    return SHIPPING_WEIGHT_INVALID;
  }

  public void setSHIPPINGWEIGHTINVALID(CatalogsItemValidationDetails SHIPPING_WEIGHT_INVALID) {
    this.SHIPPING_WEIGHT_INVALID = SHIPPING_WEIGHT_INVALID;
  }

  public CatalogsItemValidationWarnings SHIPPING_WIDTH_INVALID(CatalogsItemValidationDetails SHIPPING_WIDTH_INVALID) {
    this.SHIPPING_WIDTH_INVALID = SHIPPING_WIDTH_INVALID;
    return this;
  }

  /**
   * Get SHIPPING_WIDTH_INVALID
   * @return SHIPPING_WIDTH_INVALID
  */
  @Valid 
  @Schema(name = "SHIPPING_WIDTH_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SHIPPING_WIDTH_INVALID")
  public CatalogsItemValidationDetails getSHIPPINGWIDTHINVALID() {
    return SHIPPING_WIDTH_INVALID;
  }

  public void setSHIPPINGWIDTHINVALID(CatalogsItemValidationDetails SHIPPING_WIDTH_INVALID) {
    this.SHIPPING_WIDTH_INVALID = SHIPPING_WIDTH_INVALID;
  }

  public CatalogsItemValidationWarnings SIZE_TYPE_INVALID(CatalogsItemValidationDetails SIZE_TYPE_INVALID) {
    this.SIZE_TYPE_INVALID = SIZE_TYPE_INVALID;
    return this;
  }

  /**
   * Get SIZE_TYPE_INVALID
   * @return SIZE_TYPE_INVALID
  */
  @Valid 
  @Schema(name = "SIZE_TYPE_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("SIZE_TYPE_INVALID")
  public CatalogsItemValidationDetails getSIZETYPEINVALID() {
    return SIZE_TYPE_INVALID;
  }

  public void setSIZETYPEINVALID(CatalogsItemValidationDetails SIZE_TYPE_INVALID) {
    this.SIZE_TYPE_INVALID = SIZE_TYPE_INVALID;
  }

  public CatalogsItemValidationWarnings TAX_INVALID(CatalogsItemValidationDetails TAX_INVALID) {
    this.TAX_INVALID = TAX_INVALID;
    return this;
  }

  /**
   * Get TAX_INVALID
   * @return TAX_INVALID
  */
  @Valid 
  @Schema(name = "TAX_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("TAX_INVALID")
  public CatalogsItemValidationDetails getTAXINVALID() {
    return TAX_INVALID;
  }

  public void setTAXINVALID(CatalogsItemValidationDetails TAX_INVALID) {
    this.TAX_INVALID = TAX_INVALID;
  }

  public CatalogsItemValidationWarnings TITLE_LENGTH_TOO_LONG(CatalogsItemValidationDetails TITLE_LENGTH_TOO_LONG) {
    this.TITLE_LENGTH_TOO_LONG = TITLE_LENGTH_TOO_LONG;
    return this;
  }

  /**
   * Get TITLE_LENGTH_TOO_LONG
   * @return TITLE_LENGTH_TOO_LONG
  */
  @Valid 
  @Schema(name = "TITLE_LENGTH_TOO_LONG", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("TITLE_LENGTH_TOO_LONG")
  public CatalogsItemValidationDetails getTITLELENGTHTOOLONG() {
    return TITLE_LENGTH_TOO_LONG;
  }

  public void setTITLELENGTHTOOLONG(CatalogsItemValidationDetails TITLE_LENGTH_TOO_LONG) {
    this.TITLE_LENGTH_TOO_LONG = TITLE_LENGTH_TOO_LONG;
  }

  public CatalogsItemValidationWarnings TOO_MANY_ADDITIONAL_IMAGE_LINKS(CatalogsItemValidationDetails TOO_MANY_ADDITIONAL_IMAGE_LINKS) {
    this.TOO_MANY_ADDITIONAL_IMAGE_LINKS = TOO_MANY_ADDITIONAL_IMAGE_LINKS;
    return this;
  }

  /**
   * Get TOO_MANY_ADDITIONAL_IMAGE_LINKS
   * @return TOO_MANY_ADDITIONAL_IMAGE_LINKS
  */
  @Valid 
  @Schema(name = "TOO_MANY_ADDITIONAL_IMAGE_LINKS", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("TOO_MANY_ADDITIONAL_IMAGE_LINKS")
  public CatalogsItemValidationDetails getTOOMANYADDITIONALIMAGELINKS() {
    return TOO_MANY_ADDITIONAL_IMAGE_LINKS;
  }

  public void setTOOMANYADDITIONALIMAGELINKS(CatalogsItemValidationDetails TOO_MANY_ADDITIONAL_IMAGE_LINKS) {
    this.TOO_MANY_ADDITIONAL_IMAGE_LINKS = TOO_MANY_ADDITIONAL_IMAGE_LINKS;
  }

  public CatalogsItemValidationWarnings UTM_SOURCE_AUTO_CORRECTED(CatalogsItemValidationDetails UTM_SOURCE_AUTO_CORRECTED) {
    this.UTM_SOURCE_AUTO_CORRECTED = UTM_SOURCE_AUTO_CORRECTED;
    return this;
  }

  /**
   * Get UTM_SOURCE_AUTO_CORRECTED
   * @return UTM_SOURCE_AUTO_CORRECTED
  */
  @Valid 
  @Schema(name = "UTM_SOURCE_AUTO_CORRECTED", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("UTM_SOURCE_AUTO_CORRECTED")
  public CatalogsItemValidationDetails getUTMSOURCEAUTOCORRECTED() {
    return UTM_SOURCE_AUTO_CORRECTED;
  }

  public void setUTMSOURCEAUTOCORRECTED(CatalogsItemValidationDetails UTM_SOURCE_AUTO_CORRECTED) {
    this.UTM_SOURCE_AUTO_CORRECTED = UTM_SOURCE_AUTO_CORRECTED;
  }

  public CatalogsItemValidationWarnings WEIGHT_UNIT_INVALID(CatalogsItemValidationDetails WEIGHT_UNIT_INVALID) {
    this.WEIGHT_UNIT_INVALID = WEIGHT_UNIT_INVALID;
    return this;
  }

  /**
   * Get WEIGHT_UNIT_INVALID
   * @return WEIGHT_UNIT_INVALID
  */
  @Valid 
  @Schema(name = "WEIGHT_UNIT_INVALID", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("WEIGHT_UNIT_INVALID")
  public CatalogsItemValidationDetails getWEIGHTUNITINVALID() {
    return WEIGHT_UNIT_INVALID;
  }

  public void setWEIGHTUNITINVALID(CatalogsItemValidationDetails WEIGHT_UNIT_INVALID) {
    this.WEIGHT_UNIT_INVALID = WEIGHT_UNIT_INVALID;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsItemValidationWarnings catalogsItemValidationWarnings = (CatalogsItemValidationWarnings) o;
    return Objects.equals(this.AD_LINK_FORMAT_WARNING, catalogsItemValidationWarnings.AD_LINK_FORMAT_WARNING) &&
        Objects.equals(this.AD_LINK_SAME_AS_LINK, catalogsItemValidationWarnings.AD_LINK_SAME_AS_LINK) &&
        Objects.equals(this.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG, catalogsItemValidationWarnings.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG) &&
        Objects.equals(this.ADDITIONAL_IMAGE_LINK_WARNING, catalogsItemValidationWarnings.ADDITIONAL_IMAGE_LINK_WARNING) &&
        Objects.equals(this.ADWORDS_FORMAT_WARNING, catalogsItemValidationWarnings.ADWORDS_FORMAT_WARNING) &&
        Objects.equals(this.ADWORDS_SAME_AS_LINK, catalogsItemValidationWarnings.ADWORDS_SAME_AS_LINK) &&
        Objects.equals(this.AGE_GROUP_INVALID, catalogsItemValidationWarnings.AGE_GROUP_INVALID) &&
        Objects.equals(this.SIZE_SYSTEM_INVALID, catalogsItemValidationWarnings.SIZE_SYSTEM_INVALID) &&
        Objects.equals(this.ANDROID_DEEP_LINK_INVALID, catalogsItemValidationWarnings.ANDROID_DEEP_LINK_INVALID) &&
        Objects.equals(this.AVAILABILITY_DATE_INVALID, catalogsItemValidationWarnings.AVAILABILITY_DATE_INVALID) &&
        Objects.equals(this.COUNTRY_DOES_NOT_MAP_TO_CURRENCY, catalogsItemValidationWarnings.COUNTRY_DOES_NOT_MAP_TO_CURRENCY) &&
        Objects.equals(this.CUSTOM_LABEL_LENGTH_TOO_LONG, catalogsItemValidationWarnings.CUSTOM_LABEL_LENGTH_TOO_LONG) &&
        Objects.equals(this.DESCRIPTION_LENGTH_TOO_LONG, catalogsItemValidationWarnings.DESCRIPTION_LENGTH_TOO_LONG) &&
        Objects.equals(this.EXPIRATION_DATE_INVALID, catalogsItemValidationWarnings.EXPIRATION_DATE_INVALID) &&
        Objects.equals(this.GENDER_INVALID, catalogsItemValidationWarnings.GENDER_INVALID) &&
        Objects.equals(this.GTIN_INVALID, catalogsItemValidationWarnings.GTIN_INVALID) &&
        Objects.equals(this.IMAGE_LINK_WARNING, catalogsItemValidationWarnings.IMAGE_LINK_WARNING) &&
        Objects.equals(this.IOS_DEEP_LINK_INVALID, catalogsItemValidationWarnings.IOS_DEEP_LINK_INVALID) &&
        Objects.equals(this.IS_BUNDLE_INVALID, catalogsItemValidationWarnings.IS_BUNDLE_INVALID) &&
        Objects.equals(this.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE, catalogsItemValidationWarnings.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE) &&
        Objects.equals(this.LINK_FORMAT_WARNING, catalogsItemValidationWarnings.LINK_FORMAT_WARNING) &&
        Objects.equals(this.MIN_AD_PRICE_INVALID, catalogsItemValidationWarnings.MIN_AD_PRICE_INVALID) &&
        Objects.equals(this.MPN_INVALID, catalogsItemValidationWarnings.MPN_INVALID) &&
        Objects.equals(this.MULTIPACK_INVALID, catalogsItemValidationWarnings.MULTIPACK_INVALID) &&
        Objects.equals(this.OPTIONAL_CONDITION_INVALID, catalogsItemValidationWarnings.OPTIONAL_CONDITION_INVALID) &&
        Objects.equals(this.OPTIONAL_CONDITION_MISSING, catalogsItemValidationWarnings.OPTIONAL_CONDITION_MISSING) &&
        Objects.equals(this.OPTIONAL_PRODUCT_CATEGORY_INVALID, catalogsItemValidationWarnings.OPTIONAL_PRODUCT_CATEGORY_INVALID) &&
        Objects.equals(this.OPTIONAL_PRODUCT_CATEGORY_MISSING, catalogsItemValidationWarnings.OPTIONAL_PRODUCT_CATEGORY_MISSING) &&
        Objects.equals(this.PRODUCT_CATEGORY_DEPTH_WARNING, catalogsItemValidationWarnings.PRODUCT_CATEGORY_DEPTH_WARNING) &&
        Objects.equals(this.PRODUCT_TYPE_LENGTH_TOO_LONG, catalogsItemValidationWarnings.PRODUCT_TYPE_LENGTH_TOO_LONG) &&
        Objects.equals(this.SALES_PRICE_INVALID, catalogsItemValidationWarnings.SALES_PRICE_INVALID) &&
        Objects.equals(this.SALES_PRICE_TOO_LOW, catalogsItemValidationWarnings.SALES_PRICE_TOO_LOW) &&
        Objects.equals(this.SALES_PRICE_TOO_HIGH, catalogsItemValidationWarnings.SALES_PRICE_TOO_HIGH) &&
        Objects.equals(this.SALE_DATE_INVALID, catalogsItemValidationWarnings.SALE_DATE_INVALID) &&
        Objects.equals(this.SHIPPING_INVALID, catalogsItemValidationWarnings.SHIPPING_INVALID) &&
        Objects.equals(this.SHIPPING_HEIGHT_INVALID, catalogsItemValidationWarnings.SHIPPING_HEIGHT_INVALID) &&
        Objects.equals(this.SHIPPING_WEIGHT_INVALID, catalogsItemValidationWarnings.SHIPPING_WEIGHT_INVALID) &&
        Objects.equals(this.SHIPPING_WIDTH_INVALID, catalogsItemValidationWarnings.SHIPPING_WIDTH_INVALID) &&
        Objects.equals(this.SIZE_TYPE_INVALID, catalogsItemValidationWarnings.SIZE_TYPE_INVALID) &&
        Objects.equals(this.TAX_INVALID, catalogsItemValidationWarnings.TAX_INVALID) &&
        Objects.equals(this.TITLE_LENGTH_TOO_LONG, catalogsItemValidationWarnings.TITLE_LENGTH_TOO_LONG) &&
        Objects.equals(this.TOO_MANY_ADDITIONAL_IMAGE_LINKS, catalogsItemValidationWarnings.TOO_MANY_ADDITIONAL_IMAGE_LINKS) &&
        Objects.equals(this.UTM_SOURCE_AUTO_CORRECTED, catalogsItemValidationWarnings.UTM_SOURCE_AUTO_CORRECTED) &&
        Objects.equals(this.WEIGHT_UNIT_INVALID, catalogsItemValidationWarnings.WEIGHT_UNIT_INVALID);
  }

  @Override
  public int hashCode() {
    return Objects.hash(AD_LINK_FORMAT_WARNING, AD_LINK_SAME_AS_LINK, ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG, ADDITIONAL_IMAGE_LINK_WARNING, ADWORDS_FORMAT_WARNING, ADWORDS_SAME_AS_LINK, AGE_GROUP_INVALID, SIZE_SYSTEM_INVALID, ANDROID_DEEP_LINK_INVALID, AVAILABILITY_DATE_INVALID, COUNTRY_DOES_NOT_MAP_TO_CURRENCY, CUSTOM_LABEL_LENGTH_TOO_LONG, DESCRIPTION_LENGTH_TOO_LONG, EXPIRATION_DATE_INVALID, GENDER_INVALID, GTIN_INVALID, IMAGE_LINK_WARNING, IOS_DEEP_LINK_INVALID, IS_BUNDLE_INVALID, ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE, LINK_FORMAT_WARNING, MIN_AD_PRICE_INVALID, MPN_INVALID, MULTIPACK_INVALID, OPTIONAL_CONDITION_INVALID, OPTIONAL_CONDITION_MISSING, OPTIONAL_PRODUCT_CATEGORY_INVALID, OPTIONAL_PRODUCT_CATEGORY_MISSING, PRODUCT_CATEGORY_DEPTH_WARNING, PRODUCT_TYPE_LENGTH_TOO_LONG, SALES_PRICE_INVALID, SALES_PRICE_TOO_LOW, SALES_PRICE_TOO_HIGH, SALE_DATE_INVALID, SHIPPING_INVALID, SHIPPING_HEIGHT_INVALID, SHIPPING_WEIGHT_INVALID, SHIPPING_WIDTH_INVALID, SIZE_TYPE_INVALID, TAX_INVALID, TITLE_LENGTH_TOO_LONG, TOO_MANY_ADDITIONAL_IMAGE_LINKS, UTM_SOURCE_AUTO_CORRECTED, WEIGHT_UNIT_INVALID);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItemValidationWarnings {\n");
    sb.append("    AD_LINK_FORMAT_WARNING: ").append(toIndentedString(AD_LINK_FORMAT_WARNING)).append("\n");
    sb.append("    AD_LINK_SAME_AS_LINK: ").append(toIndentedString(AD_LINK_SAME_AS_LINK)).append("\n");
    sb.append("    ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG: ").append(toIndentedString(ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG)).append("\n");
    sb.append("    ADDITIONAL_IMAGE_LINK_WARNING: ").append(toIndentedString(ADDITIONAL_IMAGE_LINK_WARNING)).append("\n");
    sb.append("    ADWORDS_FORMAT_WARNING: ").append(toIndentedString(ADWORDS_FORMAT_WARNING)).append("\n");
    sb.append("    ADWORDS_SAME_AS_LINK: ").append(toIndentedString(ADWORDS_SAME_AS_LINK)).append("\n");
    sb.append("    AGE_GROUP_INVALID: ").append(toIndentedString(AGE_GROUP_INVALID)).append("\n");
    sb.append("    SIZE_SYSTEM_INVALID: ").append(toIndentedString(SIZE_SYSTEM_INVALID)).append("\n");
    sb.append("    ANDROID_DEEP_LINK_INVALID: ").append(toIndentedString(ANDROID_DEEP_LINK_INVALID)).append("\n");
    sb.append("    AVAILABILITY_DATE_INVALID: ").append(toIndentedString(AVAILABILITY_DATE_INVALID)).append("\n");
    sb.append("    COUNTRY_DOES_NOT_MAP_TO_CURRENCY: ").append(toIndentedString(COUNTRY_DOES_NOT_MAP_TO_CURRENCY)).append("\n");
    sb.append("    CUSTOM_LABEL_LENGTH_TOO_LONG: ").append(toIndentedString(CUSTOM_LABEL_LENGTH_TOO_LONG)).append("\n");
    sb.append("    DESCRIPTION_LENGTH_TOO_LONG: ").append(toIndentedString(DESCRIPTION_LENGTH_TOO_LONG)).append("\n");
    sb.append("    EXPIRATION_DATE_INVALID: ").append(toIndentedString(EXPIRATION_DATE_INVALID)).append("\n");
    sb.append("    GENDER_INVALID: ").append(toIndentedString(GENDER_INVALID)).append("\n");
    sb.append("    GTIN_INVALID: ").append(toIndentedString(GTIN_INVALID)).append("\n");
    sb.append("    IMAGE_LINK_WARNING: ").append(toIndentedString(IMAGE_LINK_WARNING)).append("\n");
    sb.append("    IOS_DEEP_LINK_INVALID: ").append(toIndentedString(IOS_DEEP_LINK_INVALID)).append("\n");
    sb.append("    IS_BUNDLE_INVALID: ").append(toIndentedString(IS_BUNDLE_INVALID)).append("\n");
    sb.append("    ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE: ").append(toIndentedString(ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE)).append("\n");
    sb.append("    LINK_FORMAT_WARNING: ").append(toIndentedString(LINK_FORMAT_WARNING)).append("\n");
    sb.append("    MIN_AD_PRICE_INVALID: ").append(toIndentedString(MIN_AD_PRICE_INVALID)).append("\n");
    sb.append("    MPN_INVALID: ").append(toIndentedString(MPN_INVALID)).append("\n");
    sb.append("    MULTIPACK_INVALID: ").append(toIndentedString(MULTIPACK_INVALID)).append("\n");
    sb.append("    OPTIONAL_CONDITION_INVALID: ").append(toIndentedString(OPTIONAL_CONDITION_INVALID)).append("\n");
    sb.append("    OPTIONAL_CONDITION_MISSING: ").append(toIndentedString(OPTIONAL_CONDITION_MISSING)).append("\n");
    sb.append("    OPTIONAL_PRODUCT_CATEGORY_INVALID: ").append(toIndentedString(OPTIONAL_PRODUCT_CATEGORY_INVALID)).append("\n");
    sb.append("    OPTIONAL_PRODUCT_CATEGORY_MISSING: ").append(toIndentedString(OPTIONAL_PRODUCT_CATEGORY_MISSING)).append("\n");
    sb.append("    PRODUCT_CATEGORY_DEPTH_WARNING: ").append(toIndentedString(PRODUCT_CATEGORY_DEPTH_WARNING)).append("\n");
    sb.append("    PRODUCT_TYPE_LENGTH_TOO_LONG: ").append(toIndentedString(PRODUCT_TYPE_LENGTH_TOO_LONG)).append("\n");
    sb.append("    SALES_PRICE_INVALID: ").append(toIndentedString(SALES_PRICE_INVALID)).append("\n");
    sb.append("    SALES_PRICE_TOO_LOW: ").append(toIndentedString(SALES_PRICE_TOO_LOW)).append("\n");
    sb.append("    SALES_PRICE_TOO_HIGH: ").append(toIndentedString(SALES_PRICE_TOO_HIGH)).append("\n");
    sb.append("    SALE_DATE_INVALID: ").append(toIndentedString(SALE_DATE_INVALID)).append("\n");
    sb.append("    SHIPPING_INVALID: ").append(toIndentedString(SHIPPING_INVALID)).append("\n");
    sb.append("    SHIPPING_HEIGHT_INVALID: ").append(toIndentedString(SHIPPING_HEIGHT_INVALID)).append("\n");
    sb.append("    SHIPPING_WEIGHT_INVALID: ").append(toIndentedString(SHIPPING_WEIGHT_INVALID)).append("\n");
    sb.append("    SHIPPING_WIDTH_INVALID: ").append(toIndentedString(SHIPPING_WIDTH_INVALID)).append("\n");
    sb.append("    SIZE_TYPE_INVALID: ").append(toIndentedString(SIZE_TYPE_INVALID)).append("\n");
    sb.append("    TAX_INVALID: ").append(toIndentedString(TAX_INVALID)).append("\n");
    sb.append("    TITLE_LENGTH_TOO_LONG: ").append(toIndentedString(TITLE_LENGTH_TOO_LONG)).append("\n");
    sb.append("    TOO_MANY_ADDITIONAL_IMAGE_LINKS: ").append(toIndentedString(TOO_MANY_ADDITIONAL_IMAGE_LINKS)).append("\n");
    sb.append("    UTM_SOURCE_AUTO_CORRECTED: ").append(toIndentedString(UTM_SOURCE_AUTO_CORRECTED)).append("\n");
    sb.append("    WEIGHT_UNIT_INVALID: ").append(toIndentedString(WEIGHT_UNIT_INVALID)).append("\n");
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

