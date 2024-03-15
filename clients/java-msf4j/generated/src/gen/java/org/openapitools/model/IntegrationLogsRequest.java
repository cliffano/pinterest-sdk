package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.IntegrationLog;

/**
 * Batch of logs sent from an integration application.
 */
@ApiModel(description = "Batch of logs sent from an integration application.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2024-03-14T23:02:29.393275857Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class IntegrationLogsRequest   {
  @JsonProperty("logs")
  private List<@Valid IntegrationLog> logs = new ArrayList<>();

  public IntegrationLogsRequest logs(List<@Valid IntegrationLog> logs) {
    this.logs = logs;
    return this;
  }

  public IntegrationLogsRequest addLogsItem(IntegrationLog logsItem) {
    this.logs.add(logsItem);
    return this;
  }

   /**
   * Get logs
   * @return logs
  **/
  @ApiModelProperty(required = true, value = "")
  public List<@Valid IntegrationLog> getLogs() {
    return logs;
  }

  public void setLogs(List<@Valid IntegrationLog> logs) {
    this.logs = logs;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IntegrationLogsRequest integrationLogsRequest = (IntegrationLogsRequest) o;
    return Objects.equals(this.logs, integrationLogsRequest.logs);
  }

  @Override
  public int hashCode() {
    return Objects.hash(logs);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IntegrationLogsRequest {\n");
    
    sb.append("    logs: ").append(toIndentedString(logs)).append("\n");
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

