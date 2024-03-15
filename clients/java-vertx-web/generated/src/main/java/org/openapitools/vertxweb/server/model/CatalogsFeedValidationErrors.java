package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class CatalogsFeedValidationErrors   {
  
  private Integer FETCH_ERROR;
  private Integer FETCH_INACTIVE_FEED_ERROR;
  private Integer ENCODING_ERROR;
  private Integer DELIMITER_ERROR;
  private Integer REQUIRED_COLUMNS_MISSING;
  private Integer DUPLICATE_PRODUCTS;
  private Integer IMAGE_LINK_INVALID;
  private Integer ITEMID_MISSING;
  private Integer TITLE_MISSING;
  private Integer DESCRIPTION_MISSING;
  private Integer PRODUCT_LINK_MISSING;
  private Integer IMAGE_LINK_MISSING;
  private Integer AVAILABILITY_INVALID;
  private Integer PRODUCT_PRICE_INVALID;
  private Integer LINK_FORMAT_INVALID;
  private Integer PARSE_LINE_ERROR;
  private Integer ADWORDS_FORMAT_INVALID;
  private Integer INTERNAL_SERVICE_ERROR;
  private Integer NO_VERIFIED_DOMAIN;
  private Integer ADULT_INVALID;
  private Integer IMAGE_LINK_LENGTH_TOO_LONG;
  private Integer INVALID_DOMAIN;
  private Integer FEED_LENGTH_TOO_LONG;
  private Integer LINK_LENGTH_TOO_LONG;
  private Integer MALFORMED_XML;
  private Integer PRICE_MISSING;
  private Integer FEED_TOO_SMALL;
  private Integer MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED;
  private Integer ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE;
  private Integer PINJOIN_CONTENT_UNSAFE;
  private Integer BLOCKLISTED_IMAGE_SIGNATURE;
  private Integer LIST_PRICE_INVALID;
  private Integer PRICE_CANNOT_BE_DETERMINED;

  public CatalogsFeedValidationErrors () {

  }

  public CatalogsFeedValidationErrors (Integer FETCH_ERROR, Integer FETCH_INACTIVE_FEED_ERROR, Integer ENCODING_ERROR, Integer DELIMITER_ERROR, Integer REQUIRED_COLUMNS_MISSING, Integer DUPLICATE_PRODUCTS, Integer IMAGE_LINK_INVALID, Integer ITEMID_MISSING, Integer TITLE_MISSING, Integer DESCRIPTION_MISSING, Integer PRODUCT_LINK_MISSING, Integer IMAGE_LINK_MISSING, Integer AVAILABILITY_INVALID, Integer PRODUCT_PRICE_INVALID, Integer LINK_FORMAT_INVALID, Integer PARSE_LINE_ERROR, Integer ADWORDS_FORMAT_INVALID, Integer INTERNAL_SERVICE_ERROR, Integer NO_VERIFIED_DOMAIN, Integer ADULT_INVALID, Integer IMAGE_LINK_LENGTH_TOO_LONG, Integer INVALID_DOMAIN, Integer FEED_LENGTH_TOO_LONG, Integer LINK_LENGTH_TOO_LONG, Integer MALFORMED_XML, Integer PRICE_MISSING, Integer FEED_TOO_SMALL, Integer MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED, Integer ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE, Integer PINJOIN_CONTENT_UNSAFE, Integer BLOCKLISTED_IMAGE_SIGNATURE, Integer LIST_PRICE_INVALID, Integer PRICE_CANNOT_BE_DETERMINED) {
    this.FETCH_ERROR = FETCH_ERROR;
    this.FETCH_INACTIVE_FEED_ERROR = FETCH_INACTIVE_FEED_ERROR;
    this.ENCODING_ERROR = ENCODING_ERROR;
    this.DELIMITER_ERROR = DELIMITER_ERROR;
    this.REQUIRED_COLUMNS_MISSING = REQUIRED_COLUMNS_MISSING;
    this.DUPLICATE_PRODUCTS = DUPLICATE_PRODUCTS;
    this.IMAGE_LINK_INVALID = IMAGE_LINK_INVALID;
    this.ITEMID_MISSING = ITEMID_MISSING;
    this.TITLE_MISSING = TITLE_MISSING;
    this.DESCRIPTION_MISSING = DESCRIPTION_MISSING;
    this.PRODUCT_LINK_MISSING = PRODUCT_LINK_MISSING;
    this.IMAGE_LINK_MISSING = IMAGE_LINK_MISSING;
    this.AVAILABILITY_INVALID = AVAILABILITY_INVALID;
    this.PRODUCT_PRICE_INVALID = PRODUCT_PRICE_INVALID;
    this.LINK_FORMAT_INVALID = LINK_FORMAT_INVALID;
    this.PARSE_LINE_ERROR = PARSE_LINE_ERROR;
    this.ADWORDS_FORMAT_INVALID = ADWORDS_FORMAT_INVALID;
    this.INTERNAL_SERVICE_ERROR = INTERNAL_SERVICE_ERROR;
    this.NO_VERIFIED_DOMAIN = NO_VERIFIED_DOMAIN;
    this.ADULT_INVALID = ADULT_INVALID;
    this.IMAGE_LINK_LENGTH_TOO_LONG = IMAGE_LINK_LENGTH_TOO_LONG;
    this.INVALID_DOMAIN = INVALID_DOMAIN;
    this.FEED_LENGTH_TOO_LONG = FEED_LENGTH_TOO_LONG;
    this.LINK_LENGTH_TOO_LONG = LINK_LENGTH_TOO_LONG;
    this.MALFORMED_XML = MALFORMED_XML;
    this.PRICE_MISSING = PRICE_MISSING;
    this.FEED_TOO_SMALL = FEED_TOO_SMALL;
    this.MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED = MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED;
    this.ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE = ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE;
    this.PINJOIN_CONTENT_UNSAFE = PINJOIN_CONTENT_UNSAFE;
    this.BLOCKLISTED_IMAGE_SIGNATURE = BLOCKLISTED_IMAGE_SIGNATURE;
    this.LIST_PRICE_INVALID = LIST_PRICE_INVALID;
    this.PRICE_CANNOT_BE_DETERMINED = PRICE_CANNOT_BE_DETERMINED;
  }

    
  @JsonProperty("FETCH_ERROR")
  public Integer getFETCHERROR() {
    return FETCH_ERROR;
  }
  public void setFETCHERROR(Integer FETCH_ERROR) {
    this.FETCH_ERROR = FETCH_ERROR;
  }

    
  @JsonProperty("FETCH_INACTIVE_FEED_ERROR")
  public Integer getFETCHINACTIVEFEEDERROR() {
    return FETCH_INACTIVE_FEED_ERROR;
  }
  public void setFETCHINACTIVEFEEDERROR(Integer FETCH_INACTIVE_FEED_ERROR) {
    this.FETCH_INACTIVE_FEED_ERROR = FETCH_INACTIVE_FEED_ERROR;
  }

    
  @JsonProperty("ENCODING_ERROR")
  public Integer getENCODINGERROR() {
    return ENCODING_ERROR;
  }
  public void setENCODINGERROR(Integer ENCODING_ERROR) {
    this.ENCODING_ERROR = ENCODING_ERROR;
  }

    
  @JsonProperty("DELIMITER_ERROR")
  public Integer getDELIMITERERROR() {
    return DELIMITER_ERROR;
  }
  public void setDELIMITERERROR(Integer DELIMITER_ERROR) {
    this.DELIMITER_ERROR = DELIMITER_ERROR;
  }

    
  @JsonProperty("REQUIRED_COLUMNS_MISSING")
  public Integer getREQUIREDCOLUMNSMISSING() {
    return REQUIRED_COLUMNS_MISSING;
  }
  public void setREQUIREDCOLUMNSMISSING(Integer REQUIRED_COLUMNS_MISSING) {
    this.REQUIRED_COLUMNS_MISSING = REQUIRED_COLUMNS_MISSING;
  }

    
  @JsonProperty("DUPLICATE_PRODUCTS")
  public Integer getDUPLICATEPRODUCTS() {
    return DUPLICATE_PRODUCTS;
  }
  public void setDUPLICATEPRODUCTS(Integer DUPLICATE_PRODUCTS) {
    this.DUPLICATE_PRODUCTS = DUPLICATE_PRODUCTS;
  }

    
  @JsonProperty("IMAGE_LINK_INVALID")
  public Integer getIMAGELINKINVALID() {
    return IMAGE_LINK_INVALID;
  }
  public void setIMAGELINKINVALID(Integer IMAGE_LINK_INVALID) {
    this.IMAGE_LINK_INVALID = IMAGE_LINK_INVALID;
  }

    
  @JsonProperty("ITEMID_MISSING")
  public Integer getITEMIDMISSING() {
    return ITEMID_MISSING;
  }
  public void setITEMIDMISSING(Integer ITEMID_MISSING) {
    this.ITEMID_MISSING = ITEMID_MISSING;
  }

    
  @JsonProperty("TITLE_MISSING")
  public Integer getTITLEMISSING() {
    return TITLE_MISSING;
  }
  public void setTITLEMISSING(Integer TITLE_MISSING) {
    this.TITLE_MISSING = TITLE_MISSING;
  }

    
  @JsonProperty("DESCRIPTION_MISSING")
  public Integer getDESCRIPTIONMISSING() {
    return DESCRIPTION_MISSING;
  }
  public void setDESCRIPTIONMISSING(Integer DESCRIPTION_MISSING) {
    this.DESCRIPTION_MISSING = DESCRIPTION_MISSING;
  }

    
  @JsonProperty("PRODUCT_LINK_MISSING")
  public Integer getPRODUCTLINKMISSING() {
    return PRODUCT_LINK_MISSING;
  }
  public void setPRODUCTLINKMISSING(Integer PRODUCT_LINK_MISSING) {
    this.PRODUCT_LINK_MISSING = PRODUCT_LINK_MISSING;
  }

    
  @JsonProperty("IMAGE_LINK_MISSING")
  public Integer getIMAGELINKMISSING() {
    return IMAGE_LINK_MISSING;
  }
  public void setIMAGELINKMISSING(Integer IMAGE_LINK_MISSING) {
    this.IMAGE_LINK_MISSING = IMAGE_LINK_MISSING;
  }

    
  @JsonProperty("AVAILABILITY_INVALID")
  public Integer getAVAILABILITYINVALID() {
    return AVAILABILITY_INVALID;
  }
  public void setAVAILABILITYINVALID(Integer AVAILABILITY_INVALID) {
    this.AVAILABILITY_INVALID = AVAILABILITY_INVALID;
  }

    
  @JsonProperty("PRODUCT_PRICE_INVALID")
  public Integer getPRODUCTPRICEINVALID() {
    return PRODUCT_PRICE_INVALID;
  }
  public void setPRODUCTPRICEINVALID(Integer PRODUCT_PRICE_INVALID) {
    this.PRODUCT_PRICE_INVALID = PRODUCT_PRICE_INVALID;
  }

    
  @JsonProperty("LINK_FORMAT_INVALID")
  public Integer getLINKFORMATINVALID() {
    return LINK_FORMAT_INVALID;
  }
  public void setLINKFORMATINVALID(Integer LINK_FORMAT_INVALID) {
    this.LINK_FORMAT_INVALID = LINK_FORMAT_INVALID;
  }

    
  @JsonProperty("PARSE_LINE_ERROR")
  public Integer getPARSELINEERROR() {
    return PARSE_LINE_ERROR;
  }
  public void setPARSELINEERROR(Integer PARSE_LINE_ERROR) {
    this.PARSE_LINE_ERROR = PARSE_LINE_ERROR;
  }

    
  @JsonProperty("ADWORDS_FORMAT_INVALID")
  public Integer getADWORDSFORMATINVALID() {
    return ADWORDS_FORMAT_INVALID;
  }
  public void setADWORDSFORMATINVALID(Integer ADWORDS_FORMAT_INVALID) {
    this.ADWORDS_FORMAT_INVALID = ADWORDS_FORMAT_INVALID;
  }

    
  @JsonProperty("INTERNAL_SERVICE_ERROR")
  public Integer getINTERNALSERVICEERROR() {
    return INTERNAL_SERVICE_ERROR;
  }
  public void setINTERNALSERVICEERROR(Integer INTERNAL_SERVICE_ERROR) {
    this.INTERNAL_SERVICE_ERROR = INTERNAL_SERVICE_ERROR;
  }

    
  @JsonProperty("NO_VERIFIED_DOMAIN")
  public Integer getNOVERIFIEDDOMAIN() {
    return NO_VERIFIED_DOMAIN;
  }
  public void setNOVERIFIEDDOMAIN(Integer NO_VERIFIED_DOMAIN) {
    this.NO_VERIFIED_DOMAIN = NO_VERIFIED_DOMAIN;
  }

    
  @JsonProperty("ADULT_INVALID")
  public Integer getADULTINVALID() {
    return ADULT_INVALID;
  }
  public void setADULTINVALID(Integer ADULT_INVALID) {
    this.ADULT_INVALID = ADULT_INVALID;
  }

    
  @JsonProperty("IMAGE_LINK_LENGTH_TOO_LONG")
  public Integer getIMAGELINKLENGTHTOOLONG() {
    return IMAGE_LINK_LENGTH_TOO_LONG;
  }
  public void setIMAGELINKLENGTHTOOLONG(Integer IMAGE_LINK_LENGTH_TOO_LONG) {
    this.IMAGE_LINK_LENGTH_TOO_LONG = IMAGE_LINK_LENGTH_TOO_LONG;
  }

    
  @JsonProperty("INVALID_DOMAIN")
  public Integer getINVALIDDOMAIN() {
    return INVALID_DOMAIN;
  }
  public void setINVALIDDOMAIN(Integer INVALID_DOMAIN) {
    this.INVALID_DOMAIN = INVALID_DOMAIN;
  }

    
  @JsonProperty("FEED_LENGTH_TOO_LONG")
  public Integer getFEEDLENGTHTOOLONG() {
    return FEED_LENGTH_TOO_LONG;
  }
  public void setFEEDLENGTHTOOLONG(Integer FEED_LENGTH_TOO_LONG) {
    this.FEED_LENGTH_TOO_LONG = FEED_LENGTH_TOO_LONG;
  }

    
  @JsonProperty("LINK_LENGTH_TOO_LONG")
  public Integer getLINKLENGTHTOOLONG() {
    return LINK_LENGTH_TOO_LONG;
  }
  public void setLINKLENGTHTOOLONG(Integer LINK_LENGTH_TOO_LONG) {
    this.LINK_LENGTH_TOO_LONG = LINK_LENGTH_TOO_LONG;
  }

    
  @JsonProperty("MALFORMED_XML")
  public Integer getMALFORMEDXML() {
    return MALFORMED_XML;
  }
  public void setMALFORMEDXML(Integer MALFORMED_XML) {
    this.MALFORMED_XML = MALFORMED_XML;
  }

    
  @JsonProperty("PRICE_MISSING")
  public Integer getPRICEMISSING() {
    return PRICE_MISSING;
  }
  public void setPRICEMISSING(Integer PRICE_MISSING) {
    this.PRICE_MISSING = PRICE_MISSING;
  }

    
  @JsonProperty("FEED_TOO_SMALL")
  public Integer getFEEDTOOSMALL() {
    return FEED_TOO_SMALL;
  }
  public void setFEEDTOOSMALL(Integer FEED_TOO_SMALL) {
    this.FEED_TOO_SMALL = FEED_TOO_SMALL;
  }

    
  @JsonProperty("MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED")
  public Integer getMAXITEMSPERITEMGROUPEXCEEDED() {
    return MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED;
  }
  public void setMAXITEMSPERITEMGROUPEXCEEDED(Integer MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED) {
    this.MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED = MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED;
  }

    
  @JsonProperty("ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE")
  public Integer getITEMMAINIMAGEDOWNLOADFAILURE() {
    return ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE;
  }
  public void setITEMMAINIMAGEDOWNLOADFAILURE(Integer ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE) {
    this.ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE = ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE;
  }

    
  @JsonProperty("PINJOIN_CONTENT_UNSAFE")
  public Integer getPINJOINCONTENTUNSAFE() {
    return PINJOIN_CONTENT_UNSAFE;
  }
  public void setPINJOINCONTENTUNSAFE(Integer PINJOIN_CONTENT_UNSAFE) {
    this.PINJOIN_CONTENT_UNSAFE = PINJOIN_CONTENT_UNSAFE;
  }

    
  @JsonProperty("BLOCKLISTED_IMAGE_SIGNATURE")
  public Integer getBLOCKLISTEDIMAGESIGNATURE() {
    return BLOCKLISTED_IMAGE_SIGNATURE;
  }
  public void setBLOCKLISTEDIMAGESIGNATURE(Integer BLOCKLISTED_IMAGE_SIGNATURE) {
    this.BLOCKLISTED_IMAGE_SIGNATURE = BLOCKLISTED_IMAGE_SIGNATURE;
  }

    
  @JsonProperty("LIST_PRICE_INVALID")
  public Integer getLISTPRICEINVALID() {
    return LIST_PRICE_INVALID;
  }
  public void setLISTPRICEINVALID(Integer LIST_PRICE_INVALID) {
    this.LIST_PRICE_INVALID = LIST_PRICE_INVALID;
  }

    
  @JsonProperty("PRICE_CANNOT_BE_DETERMINED")
  public Integer getPRICECANNOTBEDETERMINED() {
    return PRICE_CANNOT_BE_DETERMINED;
  }
  public void setPRICECANNOTBEDETERMINED(Integer PRICE_CANNOT_BE_DETERMINED) {
    this.PRICE_CANNOT_BE_DETERMINED = PRICE_CANNOT_BE_DETERMINED;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsFeedValidationErrors catalogsFeedValidationErrors = (CatalogsFeedValidationErrors) o;
    return Objects.equals(FETCH_ERROR, catalogsFeedValidationErrors.FETCH_ERROR) &&
        Objects.equals(FETCH_INACTIVE_FEED_ERROR, catalogsFeedValidationErrors.FETCH_INACTIVE_FEED_ERROR) &&
        Objects.equals(ENCODING_ERROR, catalogsFeedValidationErrors.ENCODING_ERROR) &&
        Objects.equals(DELIMITER_ERROR, catalogsFeedValidationErrors.DELIMITER_ERROR) &&
        Objects.equals(REQUIRED_COLUMNS_MISSING, catalogsFeedValidationErrors.REQUIRED_COLUMNS_MISSING) &&
        Objects.equals(DUPLICATE_PRODUCTS, catalogsFeedValidationErrors.DUPLICATE_PRODUCTS) &&
        Objects.equals(IMAGE_LINK_INVALID, catalogsFeedValidationErrors.IMAGE_LINK_INVALID) &&
        Objects.equals(ITEMID_MISSING, catalogsFeedValidationErrors.ITEMID_MISSING) &&
        Objects.equals(TITLE_MISSING, catalogsFeedValidationErrors.TITLE_MISSING) &&
        Objects.equals(DESCRIPTION_MISSING, catalogsFeedValidationErrors.DESCRIPTION_MISSING) &&
        Objects.equals(PRODUCT_LINK_MISSING, catalogsFeedValidationErrors.PRODUCT_LINK_MISSING) &&
        Objects.equals(IMAGE_LINK_MISSING, catalogsFeedValidationErrors.IMAGE_LINK_MISSING) &&
        Objects.equals(AVAILABILITY_INVALID, catalogsFeedValidationErrors.AVAILABILITY_INVALID) &&
        Objects.equals(PRODUCT_PRICE_INVALID, catalogsFeedValidationErrors.PRODUCT_PRICE_INVALID) &&
        Objects.equals(LINK_FORMAT_INVALID, catalogsFeedValidationErrors.LINK_FORMAT_INVALID) &&
        Objects.equals(PARSE_LINE_ERROR, catalogsFeedValidationErrors.PARSE_LINE_ERROR) &&
        Objects.equals(ADWORDS_FORMAT_INVALID, catalogsFeedValidationErrors.ADWORDS_FORMAT_INVALID) &&
        Objects.equals(INTERNAL_SERVICE_ERROR, catalogsFeedValidationErrors.INTERNAL_SERVICE_ERROR) &&
        Objects.equals(NO_VERIFIED_DOMAIN, catalogsFeedValidationErrors.NO_VERIFIED_DOMAIN) &&
        Objects.equals(ADULT_INVALID, catalogsFeedValidationErrors.ADULT_INVALID) &&
        Objects.equals(IMAGE_LINK_LENGTH_TOO_LONG, catalogsFeedValidationErrors.IMAGE_LINK_LENGTH_TOO_LONG) &&
        Objects.equals(INVALID_DOMAIN, catalogsFeedValidationErrors.INVALID_DOMAIN) &&
        Objects.equals(FEED_LENGTH_TOO_LONG, catalogsFeedValidationErrors.FEED_LENGTH_TOO_LONG) &&
        Objects.equals(LINK_LENGTH_TOO_LONG, catalogsFeedValidationErrors.LINK_LENGTH_TOO_LONG) &&
        Objects.equals(MALFORMED_XML, catalogsFeedValidationErrors.MALFORMED_XML) &&
        Objects.equals(PRICE_MISSING, catalogsFeedValidationErrors.PRICE_MISSING) &&
        Objects.equals(FEED_TOO_SMALL, catalogsFeedValidationErrors.FEED_TOO_SMALL) &&
        Objects.equals(MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED, catalogsFeedValidationErrors.MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED) &&
        Objects.equals(ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE, catalogsFeedValidationErrors.ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE) &&
        Objects.equals(PINJOIN_CONTENT_UNSAFE, catalogsFeedValidationErrors.PINJOIN_CONTENT_UNSAFE) &&
        Objects.equals(BLOCKLISTED_IMAGE_SIGNATURE, catalogsFeedValidationErrors.BLOCKLISTED_IMAGE_SIGNATURE) &&
        Objects.equals(LIST_PRICE_INVALID, catalogsFeedValidationErrors.LIST_PRICE_INVALID) &&
        Objects.equals(PRICE_CANNOT_BE_DETERMINED, catalogsFeedValidationErrors.PRICE_CANNOT_BE_DETERMINED);
  }

  @Override
  public int hashCode() {
    return Objects.hash(FETCH_ERROR, FETCH_INACTIVE_FEED_ERROR, ENCODING_ERROR, DELIMITER_ERROR, REQUIRED_COLUMNS_MISSING, DUPLICATE_PRODUCTS, IMAGE_LINK_INVALID, ITEMID_MISSING, TITLE_MISSING, DESCRIPTION_MISSING, PRODUCT_LINK_MISSING, IMAGE_LINK_MISSING, AVAILABILITY_INVALID, PRODUCT_PRICE_INVALID, LINK_FORMAT_INVALID, PARSE_LINE_ERROR, ADWORDS_FORMAT_INVALID, INTERNAL_SERVICE_ERROR, NO_VERIFIED_DOMAIN, ADULT_INVALID, IMAGE_LINK_LENGTH_TOO_LONG, INVALID_DOMAIN, FEED_LENGTH_TOO_LONG, LINK_LENGTH_TOO_LONG, MALFORMED_XML, PRICE_MISSING, FEED_TOO_SMALL, MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED, ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE, PINJOIN_CONTENT_UNSAFE, BLOCKLISTED_IMAGE_SIGNATURE, LIST_PRICE_INVALID, PRICE_CANNOT_BE_DETERMINED);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedValidationErrors {\n");
    
    sb.append("    FETCH_ERROR: ").append(toIndentedString(FETCH_ERROR)).append("\n");
    sb.append("    FETCH_INACTIVE_FEED_ERROR: ").append(toIndentedString(FETCH_INACTIVE_FEED_ERROR)).append("\n");
    sb.append("    ENCODING_ERROR: ").append(toIndentedString(ENCODING_ERROR)).append("\n");
    sb.append("    DELIMITER_ERROR: ").append(toIndentedString(DELIMITER_ERROR)).append("\n");
    sb.append("    REQUIRED_COLUMNS_MISSING: ").append(toIndentedString(REQUIRED_COLUMNS_MISSING)).append("\n");
    sb.append("    DUPLICATE_PRODUCTS: ").append(toIndentedString(DUPLICATE_PRODUCTS)).append("\n");
    sb.append("    IMAGE_LINK_INVALID: ").append(toIndentedString(IMAGE_LINK_INVALID)).append("\n");
    sb.append("    ITEMID_MISSING: ").append(toIndentedString(ITEMID_MISSING)).append("\n");
    sb.append("    TITLE_MISSING: ").append(toIndentedString(TITLE_MISSING)).append("\n");
    sb.append("    DESCRIPTION_MISSING: ").append(toIndentedString(DESCRIPTION_MISSING)).append("\n");
    sb.append("    PRODUCT_LINK_MISSING: ").append(toIndentedString(PRODUCT_LINK_MISSING)).append("\n");
    sb.append("    IMAGE_LINK_MISSING: ").append(toIndentedString(IMAGE_LINK_MISSING)).append("\n");
    sb.append("    AVAILABILITY_INVALID: ").append(toIndentedString(AVAILABILITY_INVALID)).append("\n");
    sb.append("    PRODUCT_PRICE_INVALID: ").append(toIndentedString(PRODUCT_PRICE_INVALID)).append("\n");
    sb.append("    LINK_FORMAT_INVALID: ").append(toIndentedString(LINK_FORMAT_INVALID)).append("\n");
    sb.append("    PARSE_LINE_ERROR: ").append(toIndentedString(PARSE_LINE_ERROR)).append("\n");
    sb.append("    ADWORDS_FORMAT_INVALID: ").append(toIndentedString(ADWORDS_FORMAT_INVALID)).append("\n");
    sb.append("    INTERNAL_SERVICE_ERROR: ").append(toIndentedString(INTERNAL_SERVICE_ERROR)).append("\n");
    sb.append("    NO_VERIFIED_DOMAIN: ").append(toIndentedString(NO_VERIFIED_DOMAIN)).append("\n");
    sb.append("    ADULT_INVALID: ").append(toIndentedString(ADULT_INVALID)).append("\n");
    sb.append("    IMAGE_LINK_LENGTH_TOO_LONG: ").append(toIndentedString(IMAGE_LINK_LENGTH_TOO_LONG)).append("\n");
    sb.append("    INVALID_DOMAIN: ").append(toIndentedString(INVALID_DOMAIN)).append("\n");
    sb.append("    FEED_LENGTH_TOO_LONG: ").append(toIndentedString(FEED_LENGTH_TOO_LONG)).append("\n");
    sb.append("    LINK_LENGTH_TOO_LONG: ").append(toIndentedString(LINK_LENGTH_TOO_LONG)).append("\n");
    sb.append("    MALFORMED_XML: ").append(toIndentedString(MALFORMED_XML)).append("\n");
    sb.append("    PRICE_MISSING: ").append(toIndentedString(PRICE_MISSING)).append("\n");
    sb.append("    FEED_TOO_SMALL: ").append(toIndentedString(FEED_TOO_SMALL)).append("\n");
    sb.append("    MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED: ").append(toIndentedString(MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED)).append("\n");
    sb.append("    ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE: ").append(toIndentedString(ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE)).append("\n");
    sb.append("    PINJOIN_CONTENT_UNSAFE: ").append(toIndentedString(PINJOIN_CONTENT_UNSAFE)).append("\n");
    sb.append("    BLOCKLISTED_IMAGE_SIGNATURE: ").append(toIndentedString(BLOCKLISTED_IMAGE_SIGNATURE)).append("\n");
    sb.append("    LIST_PRICE_INVALID: ").append(toIndentedString(LIST_PRICE_INVALID)).append("\n");
    sb.append("    PRICE_CANNOT_BE_DETERMINED: ").append(toIndentedString(PRICE_CANNOT_BE_DETERMINED)).append("\n");
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
