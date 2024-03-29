package org.openapitools.model;

import org.openapitools.model.CatalogsFeedIngestionErrors;
import org.openapitools.model.CatalogsFeedIngestionInfo;
import org.openapitools.model.CatalogsFeedIngestionWarnings;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class CatalogsFeedIngestionDetails  {
  
  @ApiModelProperty(required = true, value = "")
  @Valid
  private CatalogsFeedIngestionErrors errors;

  @ApiModelProperty(required = true, value = "")
  @Valid
  private CatalogsFeedIngestionInfo info;

  @ApiModelProperty(required = true, value = "")
  @Valid
  private CatalogsFeedIngestionWarnings warnings;
 /**
   * Get errors
   * @return errors
  **/
  @JsonProperty("errors")
  @NotNull
  public CatalogsFeedIngestionErrors getErrors() {
    return errors;
  }

  public void setErrors(CatalogsFeedIngestionErrors errors) {
    this.errors = errors;
  }

  public CatalogsFeedIngestionDetails errors(CatalogsFeedIngestionErrors errors) {
    this.errors = errors;
    return this;
  }

 /**
   * Get info
   * @return info
  **/
  @JsonProperty("info")
  @NotNull
  public CatalogsFeedIngestionInfo getInfo() {
    return info;
  }

  public void setInfo(CatalogsFeedIngestionInfo info) {
    this.info = info;
  }

  public CatalogsFeedIngestionDetails info(CatalogsFeedIngestionInfo info) {
    this.info = info;
    return this;
  }

 /**
   * Get warnings
   * @return warnings
  **/
  @JsonProperty("warnings")
  @NotNull
  public CatalogsFeedIngestionWarnings getWarnings() {
    return warnings;
  }

  public void setWarnings(CatalogsFeedIngestionWarnings warnings) {
    this.warnings = warnings;
  }

  public CatalogsFeedIngestionDetails warnings(CatalogsFeedIngestionWarnings warnings) {
    this.warnings = warnings;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsFeedIngestionDetails catalogsFeedIngestionDetails = (CatalogsFeedIngestionDetails) o;
    return Objects.equals(this.errors, catalogsFeedIngestionDetails.errors) &&
        Objects.equals(this.info, catalogsFeedIngestionDetails.info) &&
        Objects.equals(this.warnings, catalogsFeedIngestionDetails.warnings);
  }

  @Override
  public int hashCode() {
    return Objects.hash(errors, info, warnings);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedIngestionDetails {\n");
    
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    info: ").append(toIndentedString(info)).append("\n");
    sb.append("    warnings: ").append(toIndentedString(warnings)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

