/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.IntegrationLog;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Batch of logs sent from an integration application.
 */
@JsonPropertyOrder({
  IntegrationLogsRequest.JSON_PROPERTY_LOGS
})
@JsonTypeName("IntegrationLogsRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class IntegrationLogsRequest {
    public static final String JSON_PROPERTY_LOGS = "logs";
    private List<@Valid IntegrationLog> logs = new ArrayList<>();

    public IntegrationLogsRequest(List<@Valid IntegrationLog> logs) {
        this.logs = logs;
    }

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
    @NotNull
    @JsonProperty(JSON_PROPERTY_LOGS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<@Valid IntegrationLog> getLogs() {
        return logs;
    }

    @JsonProperty(JSON_PROPERTY_LOGS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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

