package apimodels;

import apimodels.AdGroupResponse;
import apimodels.Exception;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
import javax.validation.Valid;
/**
 * AdGroupArrayResponseElement
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2024-03-14T23:02:53.026613321Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class AdGroupArrayResponseElement   {
  @JsonProperty("data")
  @Valid

  private AdGroupResponse data;

  @JsonProperty("exceptions")
  @Valid

  private List<@Valid Exception> exceptions = null;

  public AdGroupArrayResponseElement data(AdGroupResponse data) {
    this.data = data;
    return this;
  }

   /**
   * Get data
   * @return data
  **/
  public AdGroupResponse getData() {
    return data;
  }

  public void setData(AdGroupResponse data) {
    this.data = data;
  }

  public AdGroupArrayResponseElement exceptions(List<@Valid Exception> exceptions) {
    this.exceptions = exceptions;
    return this;
  }

  public AdGroupArrayResponseElement addExceptionsItem(Exception exceptionsItem) {
    if (this.exceptions == null) {
      this.exceptions = new ArrayList<>();
    }
    this.exceptions.add(exceptionsItem);
    return this;
  }

   /**
   * Get exceptions
   * @return exceptions
  **/
  public List<@Valid Exception> getExceptions() {
    return exceptions;
  }

  public void setExceptions(List<@Valid Exception> exceptions) {
    this.exceptions = exceptions;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdGroupArrayResponseElement adGroupArrayResponseElement = (AdGroupArrayResponseElement) o;
    return Objects.equals(data, adGroupArrayResponseElement.data) &&
        Objects.equals(exceptions, adGroupArrayResponseElement.exceptions);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data, exceptions);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupArrayResponseElement {\n");
    
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("    exceptions: ").append(toIndentedString(exceptions)).append("\n");
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

