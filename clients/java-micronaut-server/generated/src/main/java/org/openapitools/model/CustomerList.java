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
import java.math.BigDecimal;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * CustomerList
 */
@JsonPropertyOrder({
  CustomerList.JSON_PROPERTY_AD_ACCOUNT_ID,
  CustomerList.JSON_PROPERTY_CREATED_TIME,
  CustomerList.JSON_PROPERTY_ID,
  CustomerList.JSON_PROPERTY_NAME,
  CustomerList.JSON_PROPERTY_NUM_BATCHES,
  CustomerList.JSON_PROPERTY_NUM_REMOVED_USER_RECORDS,
  CustomerList.JSON_PROPERTY_NUM_UPLOADED_USER_RECORDS,
  CustomerList.JSON_PROPERTY_STATUS,
  CustomerList.JSON_PROPERTY_TYPE,
  CustomerList.JSON_PROPERTY_UPDATED_TIME,
  CustomerList.JSON_PROPERTY_EXCEPTIONS
})
@JsonTypeName("CustomerList")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CustomerList {
    public static final String JSON_PROPERTY_AD_ACCOUNT_ID = "ad_account_id";
    private String adAccountId;

    public static final String JSON_PROPERTY_CREATED_TIME = "created_time";
    private BigDecimal createdTime;

    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_NUM_BATCHES = "num_batches";
    private BigDecimal numBatches;

    public static final String JSON_PROPERTY_NUM_REMOVED_USER_RECORDS = "num_removed_user_records";
    private BigDecimal numRemovedUserRecords;

    public static final String JSON_PROPERTY_NUM_UPLOADED_USER_RECORDS = "num_uploaded_user_records";
    private BigDecimal numUploadedUserRecords;

    /**
     * Customer list status. TOO_SMALL - the list has less than 100 Pinterest users.
     */
    public enum StatusEnum {
        PROCESSING("PROCESSING"),
        READY("READY"),
        TOO_SMALL("TOO_SMALL"),
        UPLOADING("UPLOADING");

        private String value;

        StatusEnum(String value) {
            this.value = value;
        }

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static StatusEnum fromValue(String value) {
            for (StatusEnum b : StatusEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_STATUS = "status";
    private StatusEnum status;

    public static final String JSON_PROPERTY_TYPE = "type";
    private String type;

    public static final String JSON_PROPERTY_UPDATED_TIME = "updated_time";
    private BigDecimal updatedTime;

    public static final String JSON_PROPERTY_EXCEPTIONS = "exceptions";
    private Object exceptions;

    public CustomerList() {
    }

    public CustomerList adAccountId(String adAccountId) {
        this.adAccountId = adAccountId;
        return this;
    }

    /**
     * Associated ad account ID.
     * @return adAccountId
     **/
    @Nullable
    @Schema(name = "ad_account_id", example = "549756359984", description = "Associated ad account ID.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getAdAccountId() {
        return adAccountId;
    }

    @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAdAccountId(String adAccountId) {
        this.adAccountId = adAccountId;
    }

    public CustomerList createdTime(BigDecimal createdTime) {
        this.createdTime = createdTime;
        return this;
    }

    /**
     * Creation time. Unix timestamp in seconds.
     * @return createdTime
     **/
    @Nullable
    @Schema(name = "created_time", example = "1452208622", description = "Creation time. Unix timestamp in seconds.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CREATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getCreatedTime() {
        return createdTime;
    }

    @JsonProperty(JSON_PROPERTY_CREATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCreatedTime(BigDecimal createdTime) {
        this.createdTime = createdTime;
    }

    public CustomerList id(String id) {
        this.id = id;
        return this;
    }

    /**
     * Customer list ID.
     * @return id
     **/
    @Nullable
    @Schema(name = "id", example = "643", description = "Customer list ID.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getId() {
        return id;
    }

    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setId(String id) {
        this.id = id;
    }

    public CustomerList name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Customer list name.
     * @return name
     **/
    @Nullable
    @Schema(name = "name", example = "The Glengarry Glen Ross leads", description = "Customer list name.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setName(String name) {
        this.name = name;
    }

    public CustomerList numBatches(BigDecimal numBatches) {
        this.numBatches = numBatches;
        return this;
    }

    /**
     * Total number of list updates.  List creation counts as one batch. Each &lt;a href&#x3D;\&quot;/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\&quot;&gt;Append&lt;/a&gt; or &lt;a href&#x3D;\&quot;/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\&quot;&gt;Remove API&lt;/a&gt; call counts as another. List creation via the Ads Manager UI could result in more than one batch since the UI breaks up large lists.
     * @return numBatches
     **/
    @Nullable
    @Schema(name = "num_batches", example = "2", description = "Total number of list updates.  List creation counts as one batch. Each <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append</a> or <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call counts as another. List creation via the Ads Manager UI could result in more than one batch since the UI breaks up large lists.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_NUM_BATCHES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getNumBatches() {
        return numBatches;
    }

    @JsonProperty(JSON_PROPERTY_NUM_BATCHES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setNumBatches(BigDecimal numBatches) {
        this.numBatches = numBatches;
    }

    public CustomerList numRemovedUserRecords(BigDecimal numRemovedUserRecords) {
        this.numRemovedUserRecords = numRemovedUserRecords;
        return this;
    }

    /**
     * Number of removed user records. In a &lt;a href&#x3D;\&quot;/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\&quot;&gt;Remove API&lt;/a&gt; call, this counter increases even if the user is not found in the list.
     * @return numRemovedUserRecords
     **/
    @Nullable
    @Schema(name = "num_removed_user_records", example = "0", description = "Number of removed user records. In a <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call, this counter increases even if the user is not found in the list.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_NUM_REMOVED_USER_RECORDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getNumRemovedUserRecords() {
        return numRemovedUserRecords;
    }

    @JsonProperty(JSON_PROPERTY_NUM_REMOVED_USER_RECORDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setNumRemovedUserRecords(BigDecimal numRemovedUserRecords) {
        this.numRemovedUserRecords = numRemovedUserRecords;
    }

    public CustomerList numUploadedUserRecords(BigDecimal numUploadedUserRecords) {
        this.numUploadedUserRecords = numUploadedUserRecords;
        return this;
    }

    /**
     * Number of uploaded user records. In an &lt;a href&#x3D;\&quot;/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\&quot;&gt;Append API&lt;/a&gt; call, this counter increases even if the uploaded user is already in the list.
     * @return numUploadedUserRecords
     **/
    @Nullable
    @Schema(name = "num_uploaded_user_records", example = "11", description = "Number of uploaded user records. In an <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append API</a> call, this counter increases even if the uploaded user is already in the list.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_NUM_UPLOADED_USER_RECORDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getNumUploadedUserRecords() {
        return numUploadedUserRecords;
    }

    @JsonProperty(JSON_PROPERTY_NUM_UPLOADED_USER_RECORDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setNumUploadedUserRecords(BigDecimal numUploadedUserRecords) {
        this.numUploadedUserRecords = numUploadedUserRecords;
    }

    public CustomerList status(StatusEnum status) {
        this.status = status;
        return this;
    }

    /**
     * Customer list status. TOO_SMALL - the list has less than 100 Pinterest users.
     * @return status
     **/
    @Nullable
    @Schema(name = "status", example = "PROCESSING", description = "Customer list status. TOO_SMALL - the list has less than 100 Pinterest users.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public StatusEnum getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setStatus(StatusEnum status) {
        this.status = status;
    }

    public CustomerList type(String type) {
        this.type = type;
        return this;
    }

    /**
     * Always \&quot;customerlist\&quot;.
     * @return type
     **/
    @Nullable
    @Schema(name = "type", example = "customerlist", description = "Always \"customerlist\".", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getType() {
        return type;
    }

    @JsonProperty(JSON_PROPERTY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setType(String type) {
        this.type = type;
    }

    public CustomerList updatedTime(BigDecimal updatedTime) {
        this.updatedTime = updatedTime;
        return this;
    }

    /**
     * Last update time. Unix timestamp in seconds.
     * @return updatedTime
     **/
    @Nullable
    @Schema(name = "updated_time", example = "1461269616", description = "Last update time. Unix timestamp in seconds.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_UPDATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getUpdatedTime() {
        return updatedTime;
    }

    @JsonProperty(JSON_PROPERTY_UPDATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setUpdatedTime(BigDecimal updatedTime) {
        this.updatedTime = updatedTime;
    }

    public CustomerList exceptions(Object exceptions) {
        this.exceptions = exceptions;
        return this;
    }

    /**
     * Customer list errors
     * @return exceptions
     **/
    @Nullable
    @Schema(name = "exceptions", description = "Customer list errors", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_EXCEPTIONS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Object getExceptions() {
        return exceptions;
    }

    @JsonProperty(JSON_PROPERTY_EXCEPTIONS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setExceptions(Object exceptions) {
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
        CustomerList customerList = (CustomerList) o;
        return Objects.equals(this.adAccountId, customerList.adAccountId) &&
            Objects.equals(this.createdTime, customerList.createdTime) &&
            Objects.equals(this.id, customerList.id) &&
            Objects.equals(this.name, customerList.name) &&
            Objects.equals(this.numBatches, customerList.numBatches) &&
            Objects.equals(this.numRemovedUserRecords, customerList.numRemovedUserRecords) &&
            Objects.equals(this.numUploadedUserRecords, customerList.numUploadedUserRecords) &&
            Objects.equals(this.status, customerList.status) &&
            Objects.equals(this.type, customerList.type) &&
            Objects.equals(this.updatedTime, customerList.updatedTime) &&
            Objects.equals(this.exceptions, customerList.exceptions);
    }

    @Override
    public int hashCode() {
        return Objects.hash(adAccountId, createdTime, id, name, numBatches, numRemovedUserRecords, numUploadedUserRecords, status, type, updatedTime, exceptions);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CustomerList {\n");
        sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
        sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
        sb.append("    id: ").append(toIndentedString(id)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    numBatches: ").append(toIndentedString(numBatches)).append("\n");
        sb.append("    numRemovedUserRecords: ").append(toIndentedString(numRemovedUserRecords)).append("\n");
        sb.append("    numUploadedUserRecords: ").append(toIndentedString(numUploadedUserRecords)).append("\n");
        sb.append("    status: ").append(toIndentedString(status)).append("\n");
        sb.append("    type: ").append(toIndentedString(type)).append("\n");
        sb.append("    updatedTime: ").append(toIndentedString(updatedTime)).append("\n");
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

