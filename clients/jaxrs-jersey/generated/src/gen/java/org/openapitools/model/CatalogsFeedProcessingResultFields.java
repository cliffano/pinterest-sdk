/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsFeedIngestionDetails;
import org.openapitools.model.CatalogsFeedProcessingStatus;
import org.openapitools.model.CatalogsFeedProductCounts;
import org.openapitools.model.CatalogsFeedValidationDetails;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * CatalogsFeedProcessingResultFields
 */
@JsonPropertyOrder({
  CatalogsFeedProcessingResultFields.JSON_PROPERTY_INGESTION_DETAILS,
  CatalogsFeedProcessingResultFields.JSON_PROPERTY_STATUS,
  CatalogsFeedProcessingResultFields.JSON_PROPERTY_PRODUCT_COUNTS,
  CatalogsFeedProcessingResultFields.JSON_PROPERTY_VALIDATION_DETAILS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-07-01T12:00:52.037403Z[Etc/UTC]")
public class CatalogsFeedProcessingResultFields   {
  public static final String JSON_PROPERTY_INGESTION_DETAILS = "ingestion_details";
  @JsonProperty(JSON_PROPERTY_INGESTION_DETAILS)
  private CatalogsFeedIngestionDetails ingestionDetails;

  public static final String JSON_PROPERTY_STATUS = "status";
  @JsonProperty(JSON_PROPERTY_STATUS)
  private CatalogsFeedProcessingStatus status;

  public static final String JSON_PROPERTY_PRODUCT_COUNTS = "product_counts";
  @JsonProperty(JSON_PROPERTY_PRODUCT_COUNTS)
  private CatalogsFeedProductCounts productCounts;

  public static final String JSON_PROPERTY_VALIDATION_DETAILS = "validation_details";
  @JsonProperty(JSON_PROPERTY_VALIDATION_DETAILS)
  private CatalogsFeedValidationDetails validationDetails;

  public CatalogsFeedProcessingResultFields ingestionDetails(CatalogsFeedIngestionDetails ingestionDetails) {
    this.ingestionDetails = ingestionDetails;
    return this;
  }

  /**
   * Get ingestionDetails
   * @return ingestionDetails
   **/
  @JsonProperty(value = "ingestion_details")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsFeedIngestionDetails getIngestionDetails() {
    return ingestionDetails;
  }

  public void setIngestionDetails(CatalogsFeedIngestionDetails ingestionDetails) {
    this.ingestionDetails = ingestionDetails;
  }

  public CatalogsFeedProcessingResultFields status(CatalogsFeedProcessingStatus status) {
    this.status = status;
    return this;
  }

  /**
   * Get status
   * @return status
   **/
  @JsonProperty(value = "status")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsFeedProcessingStatus getStatus() {
    return status;
  }

  public void setStatus(CatalogsFeedProcessingStatus status) {
    this.status = status;
  }

  public CatalogsFeedProcessingResultFields productCounts(CatalogsFeedProductCounts productCounts) {
    this.productCounts = productCounts;
    return this;
  }

  /**
   * Get productCounts
   * @return productCounts
   **/
  @JsonProperty(value = "product_counts")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsFeedProductCounts getProductCounts() {
    return productCounts;
  }

  public void setProductCounts(CatalogsFeedProductCounts productCounts) {
    this.productCounts = productCounts;
  }

  public CatalogsFeedProcessingResultFields validationDetails(CatalogsFeedValidationDetails validationDetails) {
    this.validationDetails = validationDetails;
    return this;
  }

  /**
   * Get validationDetails
   * @return validationDetails
   **/
  @JsonProperty(value = "validation_details")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
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
    CatalogsFeedProcessingResultFields catalogsFeedProcessingResultFields = (CatalogsFeedProcessingResultFields) o;
    return Objects.equals(this.ingestionDetails, catalogsFeedProcessingResultFields.ingestionDetails) &&
        Objects.equals(this.status, catalogsFeedProcessingResultFields.status) &&
        Objects.equals(this.productCounts, catalogsFeedProcessingResultFields.productCounts) &&
        Objects.equals(this.validationDetails, catalogsFeedProcessingResultFields.validationDetails);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ingestionDetails, status, productCounts, validationDetails);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedProcessingResultFields {\n");
    
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

