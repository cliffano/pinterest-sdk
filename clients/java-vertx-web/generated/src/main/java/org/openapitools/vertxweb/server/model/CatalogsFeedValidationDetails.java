package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.vertxweb.server.model.CatalogsFeedValidationErrors;
import org.openapitools.vertxweb.server.model.CatalogsFeedValidationWarnings;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class CatalogsFeedValidationDetails   {
  
  private CatalogsFeedValidationErrors errors;
  private CatalogsFeedValidationWarnings warnings;

  public CatalogsFeedValidationDetails () {

  }

  public CatalogsFeedValidationDetails (CatalogsFeedValidationErrors errors, CatalogsFeedValidationWarnings warnings) {
    this.errors = errors;
    this.warnings = warnings;
  }

    
  @JsonProperty("errors")
  public CatalogsFeedValidationErrors getErrors() {
    return errors;
  }
  public void setErrors(CatalogsFeedValidationErrors errors) {
    this.errors = errors;
  }

    
  @JsonProperty("warnings")
  public CatalogsFeedValidationWarnings getWarnings() {
    return warnings;
  }
  public void setWarnings(CatalogsFeedValidationWarnings warnings) {
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
    CatalogsFeedValidationDetails catalogsFeedValidationDetails = (CatalogsFeedValidationDetails) o;
    return Objects.equals(errors, catalogsFeedValidationDetails.errors) &&
        Objects.equals(warnings, catalogsFeedValidationDetails.warnings);
  }

  @Override
  public int hashCode() {
    return Objects.hash(errors, warnings);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedValidationDetails {\n");
    
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
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
