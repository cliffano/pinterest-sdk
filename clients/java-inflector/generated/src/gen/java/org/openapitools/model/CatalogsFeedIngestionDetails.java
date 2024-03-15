package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsFeedIngestionErrors;
import org.openapitools.model.CatalogsFeedIngestionInfo;
import org.openapitools.model.CatalogsFeedIngestionWarnings;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2024-03-14T23:01:39.171456580Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsFeedIngestionDetails   {
  @JsonProperty("errors")
  private CatalogsFeedIngestionErrors errors;

  @JsonProperty("info")
  private CatalogsFeedIngestionInfo info;

  @JsonProperty("warnings")
  private CatalogsFeedIngestionWarnings warnings;

  /**
   **/
  public CatalogsFeedIngestionDetails errors(CatalogsFeedIngestionErrors errors) {
    this.errors = errors;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("errors")
  public CatalogsFeedIngestionErrors getErrors() {
    return errors;
  }
  public void setErrors(CatalogsFeedIngestionErrors errors) {
    this.errors = errors;
  }

  /**
   **/
  public CatalogsFeedIngestionDetails info(CatalogsFeedIngestionInfo info) {
    this.info = info;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("info")
  public CatalogsFeedIngestionInfo getInfo() {
    return info;
  }
  public void setInfo(CatalogsFeedIngestionInfo info) {
    this.info = info;
  }

  /**
   **/
  public CatalogsFeedIngestionDetails warnings(CatalogsFeedIngestionWarnings warnings) {
    this.warnings = warnings;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("warnings")
  public CatalogsFeedIngestionWarnings getWarnings() {
    return warnings;
  }
  public void setWarnings(CatalogsFeedIngestionWarnings warnings) {
    this.warnings = warnings;
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
    return Objects.equals(errors, catalogsFeedIngestionDetails.errors) &&
        Objects.equals(info, catalogsFeedIngestionDetails.info) &&
        Objects.equals(warnings, catalogsFeedIngestionDetails.warnings);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

