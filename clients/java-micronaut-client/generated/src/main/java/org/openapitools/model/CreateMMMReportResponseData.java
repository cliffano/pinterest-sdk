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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.BulkReportingJobStatus;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CreateMMMReportResponseData
 */
@JsonPropertyOrder({
  CreateMMMReportResponseData.JSON_PROPERTY_REPORT_STATUS,
  CreateMMMReportResponseData.JSON_PROPERTY_TOKEN,
  CreateMMMReportResponseData.JSON_PROPERTY_MESSAGE,
  CreateMMMReportResponseData.JSON_PROPERTY_STATUS
})
@JsonTypeName("CreateMMMReportResponseData")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CreateMMMReportResponseData {
    public static final String JSON_PROPERTY_REPORT_STATUS = "report_status";
    private BulkReportingJobStatus reportStatus;

    public static final String JSON_PROPERTY_TOKEN = "token";
    private String token;

    public static final String JSON_PROPERTY_MESSAGE = "message";
    private String message;

    public static final String JSON_PROPERTY_STATUS = "status";
    private String status;

    public CreateMMMReportResponseData() {
    }

    public CreateMMMReportResponseData reportStatus(BulkReportingJobStatus reportStatus) {
        this.reportStatus = reportStatus;
        return this;
    }

    /**
     * Get reportStatus
     * @return reportStatus
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_REPORT_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BulkReportingJobStatus getReportStatus() {
        return reportStatus;
    }

    @JsonProperty(JSON_PROPERTY_REPORT_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setReportStatus(BulkReportingJobStatus reportStatus) {
        this.reportStatus = reportStatus;
    }

    public CreateMMMReportResponseData token(String token) {
        this.token = token;
        return this;
    }

    /**
     * Get token
     * @return token
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_TOKEN)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getToken() {
        return token;
    }

    @JsonProperty(JSON_PROPERTY_TOKEN)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setToken(String token) {
        this.token = token;
    }

    public CreateMMMReportResponseData message(String message) {
        this.message = message;
        return this;
    }

    /**
     * Get message
     * @return message
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_MESSAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getMessage() {
        return message;
    }

    @JsonProperty(JSON_PROPERTY_MESSAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setMessage(String message) {
        this.message = message;
    }

    public CreateMMMReportResponseData status(String status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setStatus(String status) {
        this.status = status;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CreateMMMReportResponseData createMMMReportResponseData = (CreateMMMReportResponseData) o;
        return Objects.equals(this.reportStatus, createMMMReportResponseData.reportStatus) &&
            Objects.equals(this.token, createMMMReportResponseData.token) &&
            Objects.equals(this.message, createMMMReportResponseData.message) &&
            Objects.equals(this.status, createMMMReportResponseData.status);
    }

    @Override
    public int hashCode() {
        return Objects.hash(reportStatus, token, message, status);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CreateMMMReportResponseData {\n");
        sb.append("    reportStatus: ").append(toIndentedString(reportStatus)).append("\n");
        sb.append("    token: ").append(toIndentedString(token)).append("\n");
        sb.append("    message: ").append(toIndentedString(message)).append("\n");
        sb.append("    status: ").append(toIndentedString(status)).append("\n");
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

