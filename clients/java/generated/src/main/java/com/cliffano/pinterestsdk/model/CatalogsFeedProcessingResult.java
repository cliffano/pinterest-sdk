/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.cliffano.pinterestsdk.model.CatalogsDbItem;
import com.cliffano.pinterestsdk.model.CatalogsFeedIngestionDetails;
import com.cliffano.pinterestsdk.model.CatalogsFeedProcessingResultFields;
import com.cliffano.pinterestsdk.model.CatalogsFeedProcessingStatus;
import com.cliffano.pinterestsdk.model.CatalogsFeedProductCounts;
import com.cliffano.pinterestsdk.model.CatalogsFeedValidationDetails;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import org.threeten.bp.OffsetDateTime;

/**
 * CatalogsFeedProcessingResult
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-05-07T06:37:33.786272Z[Etc/UTC]")
public class CatalogsFeedProcessingResult {
  public static final String SERIALIZED_NAME_CREATED_AT = "created_at";
  @SerializedName(SERIALIZED_NAME_CREATED_AT)
  private OffsetDateTime createdAt;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_UPDATED_AT = "updated_at";
  @SerializedName(SERIALIZED_NAME_UPDATED_AT)
  private OffsetDateTime updatedAt;

  public static final String SERIALIZED_NAME_INGESTION_DETAILS = "ingestion_details";
  @SerializedName(SERIALIZED_NAME_INGESTION_DETAILS)
  private CatalogsFeedIngestionDetails ingestionDetails;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private CatalogsFeedProcessingStatus status;

  public static final String SERIALIZED_NAME_PRODUCT_COUNTS = "product_counts";
  @SerializedName(SERIALIZED_NAME_PRODUCT_COUNTS)
  private CatalogsFeedProductCounts productCounts;

  public static final String SERIALIZED_NAME_VALIDATION_DETAILS = "validation_details";
  @SerializedName(SERIALIZED_NAME_VALIDATION_DETAILS)
  private CatalogsFeedValidationDetails validationDetails;

  public CatalogsFeedProcessingResult() { 
  }

  public CatalogsFeedProcessingResult createdAt(OffsetDateTime createdAt) {
    
    this.createdAt = createdAt;
    return this;
  }

   /**
   * Get createdAt
   * @return createdAt
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "2022-03-14T15:15:22Z", value = "")

  public OffsetDateTime getCreatedAt() {
    return createdAt;
  }


  public void setCreatedAt(OffsetDateTime createdAt) {
    this.createdAt = createdAt;
  }


  public CatalogsFeedProcessingResult id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public CatalogsFeedProcessingResult updatedAt(OffsetDateTime updatedAt) {
    
    this.updatedAt = updatedAt;
    return this;
  }

   /**
   * Get updatedAt
   * @return updatedAt
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "2022-03-14T15:16:34Z", value = "")

  public OffsetDateTime getUpdatedAt() {
    return updatedAt;
  }


  public void setUpdatedAt(OffsetDateTime updatedAt) {
    this.updatedAt = updatedAt;
  }


  public CatalogsFeedProcessingResult ingestionDetails(CatalogsFeedIngestionDetails ingestionDetails) {
    
    this.ingestionDetails = ingestionDetails;
    return this;
  }

   /**
   * Get ingestionDetails
   * @return ingestionDetails
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public CatalogsFeedIngestionDetails getIngestionDetails() {
    return ingestionDetails;
  }


  public void setIngestionDetails(CatalogsFeedIngestionDetails ingestionDetails) {
    this.ingestionDetails = ingestionDetails;
  }


  public CatalogsFeedProcessingResult status(CatalogsFeedProcessingStatus status) {
    
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public CatalogsFeedProcessingStatus getStatus() {
    return status;
  }


  public void setStatus(CatalogsFeedProcessingStatus status) {
    this.status = status;
  }


  public CatalogsFeedProcessingResult productCounts(CatalogsFeedProductCounts productCounts) {
    
    this.productCounts = productCounts;
    return this;
  }

   /**
   * Get productCounts
   * @return productCounts
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(required = true, value = "")

  public CatalogsFeedProductCounts getProductCounts() {
    return productCounts;
  }


  public void setProductCounts(CatalogsFeedProductCounts productCounts) {
    this.productCounts = productCounts;
  }


  public CatalogsFeedProcessingResult validationDetails(CatalogsFeedValidationDetails validationDetails) {
    
    this.validationDetails = validationDetails;
    return this;
  }

   /**
   * Get validationDetails
   * @return validationDetails
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public CatalogsFeedValidationDetails getValidationDetails() {
    return validationDetails;
  }


  public void setValidationDetails(CatalogsFeedValidationDetails validationDetails) {
    this.validationDetails = validationDetails;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsFeedProcessingResult catalogsFeedProcessingResult = (CatalogsFeedProcessingResult) o;
    return Objects.equals(this.createdAt, catalogsFeedProcessingResult.createdAt) &&
        Objects.equals(this.id, catalogsFeedProcessingResult.id) &&
        Objects.equals(this.updatedAt, catalogsFeedProcessingResult.updatedAt) &&
        Objects.equals(this.ingestionDetails, catalogsFeedProcessingResult.ingestionDetails) &&
        Objects.equals(this.status, catalogsFeedProcessingResult.status) &&
        Objects.equals(this.productCounts, catalogsFeedProcessingResult.productCounts) &&
        Objects.equals(this.validationDetails, catalogsFeedProcessingResult.validationDetails);
  }

  @Override
  public int hashCode() {
    return Objects.hash(createdAt, id, updatedAt, ingestionDetails, status, productCounts, validationDetails);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedProcessingResult {\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
    sb.append("    ingestionDetails: ").append(toIndentedString(ingestionDetails)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    productCounts: ").append(toIndentedString(productCounts)).append("\n");
    sb.append("    validationDetails: ").append(toIndentedString(validationDetails)).append("\n");
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

