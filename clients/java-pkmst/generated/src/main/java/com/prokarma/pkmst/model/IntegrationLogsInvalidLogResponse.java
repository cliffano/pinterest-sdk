package com.prokarma.pkmst.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.prokarma.pkmst.model.IntegrationLogsInvalidLogResponseRejectedLogsInner;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
/**
 * Response class to be returned by Api
 * @author pkmst
 *
 */
/**
 * Schema describing the response when a log has invalid fields.
 */
@ApiModel(description = "Schema describing the response when a log has invalid fields.")

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2024-03-14T23:02:40.880156196Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class IntegrationLogsInvalidLogResponse   {
  @JsonProperty("rejected_logs")
  
  private List<IntegrationLogsInvalidLogResponseRejectedLogsInner> rejectedLogs = null;

  public IntegrationLogsInvalidLogResponse rejectedLogs(List<IntegrationLogsInvalidLogResponseRejectedLogsInner> rejectedLogs) {
    this.rejectedLogs = rejectedLogs;
    return this;
  }

  public IntegrationLogsInvalidLogResponse addRejectedLogsItem(IntegrationLogsInvalidLogResponseRejectedLogsInner rejectedLogsItem) {
    if (this.rejectedLogs == null) {
      this.rejectedLogs = new ArrayList<>();
    }
    this.rejectedLogs.add(rejectedLogsItem);
    return this;
  }

   /**
   * Get rejectedLogs
   * @return rejectedLogs
  **/
  @ApiModelProperty(value = "")
  public List<IntegrationLogsInvalidLogResponseRejectedLogsInner> getRejectedLogs() {
    return rejectedLogs;
  }

  public void setRejectedLogs(List<IntegrationLogsInvalidLogResponseRejectedLogsInner> rejectedLogs) {
    this.rejectedLogs = rejectedLogs;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IntegrationLogsInvalidLogResponse integrationLogsInvalidLogResponse = (IntegrationLogsInvalidLogResponse) o;
    return Objects.equals(this.rejectedLogs, integrationLogsInvalidLogResponse.rejectedLogs);
  }

  @Override
  public int hashCode() {
    return Objects.hash(rejectedLogs);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IntegrationLogsInvalidLogResponse {\n");
    
    sb.append("    rejectedLogs: ").append(toIndentedString(rejectedLogs)).append("\n");
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

