package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import org.openapitools.model.CatalogsFeedIngestionDetails;
import org.openapitools.model.CatalogsFeedProcessingStatus;
import org.openapitools.model.CatalogsFeedProductCounts;
import org.openapitools.model.CatalogsFeedValidationDetails;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * CatalogsFeedProcessingResultFields
 */

@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2022-05-08T00:42:02.037116Z[Etc/UTC]")
public class CatalogsFeedProcessingResultFields   {

  @JsonProperty("ingestion_details")
  private CatalogsFeedIngestionDetails ingestionDetails;

  @JsonProperty("status")
  private CatalogsFeedProcessingStatus status;

  @JsonProperty("product_counts")
  private JsonNullable<CatalogsFeedProductCounts> productCounts = JsonNullable.undefined();

  @JsonProperty("validation_details")
  private CatalogsFeedValidationDetails validationDetails;

  public CatalogsFeedProcessingResultFields ingestionDetails(CatalogsFeedIngestionDetails ingestionDetails) {
    this.ingestionDetails = ingestionDetails;
    return this;
  }

  /**
   * Get ingestionDetails
   * @return ingestionDetails
  */
  @NotNull @Valid 
  @Schema(name = "ingestion_details", required = true)
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
  */
  @NotNull @Valid 
  @Schema(name = "status", required = true)
  public CatalogsFeedProcessingStatus getStatus() {
    return status;
  }

  public void setStatus(CatalogsFeedProcessingStatus status) {
    this.status = status;
  }

  public CatalogsFeedProcessingResultFields productCounts(CatalogsFeedProductCounts productCounts) {
    this.productCounts = JsonNullable.of(productCounts);
    return this;
  }

  /**
   * Get productCounts
   * @return productCounts
  */
  @NotNull @Valid 
  @Schema(name = "product_counts", required = true)
  public JsonNullable<CatalogsFeedProductCounts> getProductCounts() {
    return productCounts;
  }

  public void setProductCounts(JsonNullable<CatalogsFeedProductCounts> productCounts) {
    this.productCounts = productCounts;
  }

  public CatalogsFeedProcessingResultFields validationDetails(CatalogsFeedValidationDetails validationDetails) {
    this.validationDetails = validationDetails;
    return this;
  }

  /**
   * Get validationDetails
   * @return validationDetails
  */
  @NotNull @Valid 
  @Schema(name = "validation_details", required = true)
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

