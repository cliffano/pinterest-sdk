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
 * CatalogsFeedIngestionErrors
 */

@Generated(value = "org.openapitools.codegen.languages.JavaCamelServerCodegen", date = "2024-03-14T23:03:40.689435566Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsFeedIngestionErrors {

  private Integer LINE_LEVEL_INTERNAL_ERROR;

  /**
   * The product count has decreased by more than 99% compared to the last successful ingestion.
   */
  public enum LARGEPRODUCTCOUNTDECREASEEnum {
    NUMBER_1(1);

    private Integer value;

    LARGEPRODUCTCOUNTDECREASEEnum(Integer value) {
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
    public static LARGEPRODUCTCOUNTDECREASEEnum fromValue(Integer value) {
      for (LARGEPRODUCTCOUNTDECREASEEnum b : LARGEPRODUCTCOUNTDECREASEEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
  }

  private LARGEPRODUCTCOUNTDECREASEEnum LARGE_PRODUCT_COUNT_DECREASE;

  private Integer ACCOUNT_FLAGGED;

  private Integer IMAGE_LEVEL_INTERNAL_ERROR;

  private Integer IMAGE_FILE_NOT_ACCESSIBLE;

  private Integer IMAGE_MALFORMED_URL;

  private Integer IMAGE_FILE_NOT_FOUND;

  private Integer IMAGE_INVALID_FILE;

  public CatalogsFeedIngestionErrors LINE_LEVEL_INTERNAL_ERROR(Integer LINE_LEVEL_INTERNAL_ERROR) {
    this.LINE_LEVEL_INTERNAL_ERROR = LINE_LEVEL_INTERNAL_ERROR;
    return this;
  }

  /**
   * We experienced a technical difficulty and were unable to ingest this some items. The next ingestion will happen in 24 hours.
   * @return LINE_LEVEL_INTERNAL_ERROR
  */
  
  @Schema(name = "LINE_LEVEL_INTERNAL_ERROR", description = "We experienced a technical difficulty and were unable to ingest this some items. The next ingestion will happen in 24 hours.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("LINE_LEVEL_INTERNAL_ERROR")
  public Integer getLINELEVELINTERNALERROR() {
    return LINE_LEVEL_INTERNAL_ERROR;
  }

  public void setLINELEVELINTERNALERROR(Integer LINE_LEVEL_INTERNAL_ERROR) {
    this.LINE_LEVEL_INTERNAL_ERROR = LINE_LEVEL_INTERNAL_ERROR;
  }

  public CatalogsFeedIngestionErrors LARGE_PRODUCT_COUNT_DECREASE(LARGEPRODUCTCOUNTDECREASEEnum LARGE_PRODUCT_COUNT_DECREASE) {
    this.LARGE_PRODUCT_COUNT_DECREASE = LARGE_PRODUCT_COUNT_DECREASE;
    return this;
  }

  /**
   * The product count has decreased by more than 99% compared to the last successful ingestion.
   * @return LARGE_PRODUCT_COUNT_DECREASE
  */
  
  @Schema(name = "LARGE_PRODUCT_COUNT_DECREASE", description = "The product count has decreased by more than 99% compared to the last successful ingestion.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("LARGE_PRODUCT_COUNT_DECREASE")
  public LARGEPRODUCTCOUNTDECREASEEnum getLARGEPRODUCTCOUNTDECREASE() {
    return LARGE_PRODUCT_COUNT_DECREASE;
  }

  public void setLARGEPRODUCTCOUNTDECREASE(LARGEPRODUCTCOUNTDECREASEEnum LARGE_PRODUCT_COUNT_DECREASE) {
    this.LARGE_PRODUCT_COUNT_DECREASE = LARGE_PRODUCT_COUNT_DECREASE;
  }

  public CatalogsFeedIngestionErrors ACCOUNT_FLAGGED(Integer ACCOUNT_FLAGGED) {
    this.ACCOUNT_FLAGGED = ACCOUNT_FLAGGED;
    return this;
  }

  /**
   * We detected an issue with your account and are not currently ingesting your items. Please review our policies at policy.pinterest.com/community-guidelines#section-spam or contact us at help.pinterest.com/contact for more information.
   * @return ACCOUNT_FLAGGED
  */
  
  @Schema(name = "ACCOUNT_FLAGGED", description = "We detected an issue with your account and are not currently ingesting your items. Please review our policies at policy.pinterest.com/community-guidelines#section-spam or contact us at help.pinterest.com/contact for more information.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("ACCOUNT_FLAGGED")
  public Integer getACCOUNTFLAGGED() {
    return ACCOUNT_FLAGGED;
  }

  public void setACCOUNTFLAGGED(Integer ACCOUNT_FLAGGED) {
    this.ACCOUNT_FLAGGED = ACCOUNT_FLAGGED;
  }

  public CatalogsFeedIngestionErrors IMAGE_LEVEL_INTERNAL_ERROR(Integer IMAGE_LEVEL_INTERNAL_ERROR) {
    this.IMAGE_LEVEL_INTERNAL_ERROR = IMAGE_LEVEL_INTERNAL_ERROR;
    return this;
  }

  /**
   * We experienced a technical difficulty and were unable to download some images. The next download attempt will happen in 24 hours.
   * @return IMAGE_LEVEL_INTERNAL_ERROR
  */
  
  @Schema(name = "IMAGE_LEVEL_INTERNAL_ERROR", description = "We experienced a technical difficulty and were unable to download some images. The next download attempt will happen in 24 hours.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IMAGE_LEVEL_INTERNAL_ERROR")
  public Integer getIMAGELEVELINTERNALERROR() {
    return IMAGE_LEVEL_INTERNAL_ERROR;
  }

  public void setIMAGELEVELINTERNALERROR(Integer IMAGE_LEVEL_INTERNAL_ERROR) {
    this.IMAGE_LEVEL_INTERNAL_ERROR = IMAGE_LEVEL_INTERNAL_ERROR;
  }

  public CatalogsFeedIngestionErrors IMAGE_FILE_NOT_ACCESSIBLE(Integer IMAGE_FILE_NOT_ACCESSIBLE) {
    this.IMAGE_FILE_NOT_ACCESSIBLE = IMAGE_FILE_NOT_ACCESSIBLE;
    return this;
  }

  /**
   * Image files are unreadable. Please upload new files to continue.
   * @return IMAGE_FILE_NOT_ACCESSIBLE
  */
  
  @Schema(name = "IMAGE_FILE_NOT_ACCESSIBLE", description = "Image files are unreadable. Please upload new files to continue.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IMAGE_FILE_NOT_ACCESSIBLE")
  public Integer getIMAGEFILENOTACCESSIBLE() {
    return IMAGE_FILE_NOT_ACCESSIBLE;
  }

  public void setIMAGEFILENOTACCESSIBLE(Integer IMAGE_FILE_NOT_ACCESSIBLE) {
    this.IMAGE_FILE_NOT_ACCESSIBLE = IMAGE_FILE_NOT_ACCESSIBLE;
  }

  public CatalogsFeedIngestionErrors IMAGE_MALFORMED_URL(Integer IMAGE_MALFORMED_URL) {
    this.IMAGE_MALFORMED_URL = IMAGE_MALFORMED_URL;
    return this;
  }

  /**
   * Image files are unreadable. Please check your link and upload new files to continue.
   * @return IMAGE_MALFORMED_URL
  */
  
  @Schema(name = "IMAGE_MALFORMED_URL", description = "Image files are unreadable. Please check your link and upload new files to continue.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IMAGE_MALFORMED_URL")
  public Integer getIMAGEMALFORMEDURL() {
    return IMAGE_MALFORMED_URL;
  }

  public void setIMAGEMALFORMEDURL(Integer IMAGE_MALFORMED_URL) {
    this.IMAGE_MALFORMED_URL = IMAGE_MALFORMED_URL;
  }

  public CatalogsFeedIngestionErrors IMAGE_FILE_NOT_FOUND(Integer IMAGE_FILE_NOT_FOUND) {
    this.IMAGE_FILE_NOT_FOUND = IMAGE_FILE_NOT_FOUND;
    return this;
  }

  /**
   * Image files are unreadable. Please upload new files to continue.
   * @return IMAGE_FILE_NOT_FOUND
  */
  
  @Schema(name = "IMAGE_FILE_NOT_FOUND", description = "Image files are unreadable. Please upload new files to continue.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IMAGE_FILE_NOT_FOUND")
  public Integer getIMAGEFILENOTFOUND() {
    return IMAGE_FILE_NOT_FOUND;
  }

  public void setIMAGEFILENOTFOUND(Integer IMAGE_FILE_NOT_FOUND) {
    this.IMAGE_FILE_NOT_FOUND = IMAGE_FILE_NOT_FOUND;
  }

  public CatalogsFeedIngestionErrors IMAGE_INVALID_FILE(Integer IMAGE_INVALID_FILE) {
    this.IMAGE_INVALID_FILE = IMAGE_INVALID_FILE;
    return this;
  }

  /**
   * Image files are unreadable. Please upload new files to continue.
   * @return IMAGE_INVALID_FILE
  */
  
  @Schema(name = "IMAGE_INVALID_FILE", description = "Image files are unreadable. Please upload new files to continue.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("IMAGE_INVALID_FILE")
  public Integer getIMAGEINVALIDFILE() {
    return IMAGE_INVALID_FILE;
  }

  public void setIMAGEINVALIDFILE(Integer IMAGE_INVALID_FILE) {
    this.IMAGE_INVALID_FILE = IMAGE_INVALID_FILE;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsFeedIngestionErrors catalogsFeedIngestionErrors = (CatalogsFeedIngestionErrors) o;
    return Objects.equals(this.LINE_LEVEL_INTERNAL_ERROR, catalogsFeedIngestionErrors.LINE_LEVEL_INTERNAL_ERROR) &&
        Objects.equals(this.LARGE_PRODUCT_COUNT_DECREASE, catalogsFeedIngestionErrors.LARGE_PRODUCT_COUNT_DECREASE) &&
        Objects.equals(this.ACCOUNT_FLAGGED, catalogsFeedIngestionErrors.ACCOUNT_FLAGGED) &&
        Objects.equals(this.IMAGE_LEVEL_INTERNAL_ERROR, catalogsFeedIngestionErrors.IMAGE_LEVEL_INTERNAL_ERROR) &&
        Objects.equals(this.IMAGE_FILE_NOT_ACCESSIBLE, catalogsFeedIngestionErrors.IMAGE_FILE_NOT_ACCESSIBLE) &&
        Objects.equals(this.IMAGE_MALFORMED_URL, catalogsFeedIngestionErrors.IMAGE_MALFORMED_URL) &&
        Objects.equals(this.IMAGE_FILE_NOT_FOUND, catalogsFeedIngestionErrors.IMAGE_FILE_NOT_FOUND) &&
        Objects.equals(this.IMAGE_INVALID_FILE, catalogsFeedIngestionErrors.IMAGE_INVALID_FILE);
  }

  @Override
  public int hashCode() {
    return Objects.hash(LINE_LEVEL_INTERNAL_ERROR, LARGE_PRODUCT_COUNT_DECREASE, ACCOUNT_FLAGGED, IMAGE_LEVEL_INTERNAL_ERROR, IMAGE_FILE_NOT_ACCESSIBLE, IMAGE_MALFORMED_URL, IMAGE_FILE_NOT_FOUND, IMAGE_INVALID_FILE);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedIngestionErrors {\n");
    sb.append("    LINE_LEVEL_INTERNAL_ERROR: ").append(toIndentedString(LINE_LEVEL_INTERNAL_ERROR)).append("\n");
    sb.append("    LARGE_PRODUCT_COUNT_DECREASE: ").append(toIndentedString(LARGE_PRODUCT_COUNT_DECREASE)).append("\n");
    sb.append("    ACCOUNT_FLAGGED: ").append(toIndentedString(ACCOUNT_FLAGGED)).append("\n");
    sb.append("    IMAGE_LEVEL_INTERNAL_ERROR: ").append(toIndentedString(IMAGE_LEVEL_INTERNAL_ERROR)).append("\n");
    sb.append("    IMAGE_FILE_NOT_ACCESSIBLE: ").append(toIndentedString(IMAGE_FILE_NOT_ACCESSIBLE)).append("\n");
    sb.append("    IMAGE_MALFORMED_URL: ").append(toIndentedString(IMAGE_MALFORMED_URL)).append("\n");
    sb.append("    IMAGE_FILE_NOT_FOUND: ").append(toIndentedString(IMAGE_FILE_NOT_FOUND)).append("\n");
    sb.append("    IMAGE_INVALID_FILE: ").append(toIndentedString(IMAGE_INVALID_FILE)).append("\n");
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

