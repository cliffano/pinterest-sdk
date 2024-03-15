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
import org.openapitools.model.SSIOAccountItem;
import org.openapitools.model.SSIOAccountPMPName;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * SSIOAccountResponse
 */
@JsonPropertyOrder({
  SSIOAccountResponse.JSON_PROPERTY_ELIGIBLE,
  SSIOAccountResponse.JSON_PROPERTY_CAN_EDIT,
  SSIOAccountResponse.JSON_PROPERTY_BILLTO_INFOS,
  SSIOAccountResponse.JSON_PROPERTY_CURRENCY,
  SSIOAccountResponse.JSON_PROPERTY_PMP_NAMES,
  SSIOAccountResponse.JSON_PROPERTY_ERROR
})
@JsonTypeName("SSIOAccountResponse")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class SSIOAccountResponse {
    public static final String JSON_PROPERTY_ELIGIBLE = "eligible";
    private Boolean eligible;

    public static final String JSON_PROPERTY_CAN_EDIT = "can_edit";
    private Boolean canEdit;

    public static final String JSON_PROPERTY_BILLTO_INFOS = "billto_infos";
    private List<@Valid SSIOAccountItem> billtoInfos = null;

    public static final String JSON_PROPERTY_CURRENCY = "currency";
    private String currency;

    public static final String JSON_PROPERTY_PMP_NAMES = "pmp_names";
    private List<@Valid SSIOAccountPMPName> pmpNames = null;

    public static final String JSON_PROPERTY_ERROR = "error";
    private String error;

    public SSIOAccountResponse() {
    }

    public SSIOAccountResponse eligible(Boolean eligible) {
        this.eligible = eligible;
        return this;
    }

    /**
     * Advertiser eligible to create order lines
     * @return eligible
     **/
    @Nullable
    @Schema(name = "eligible", example = "true", description = "Advertiser eligible to create order lines", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ELIGIBLE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getEligible() {
        return eligible;
    }

    @JsonProperty(JSON_PROPERTY_ELIGIBLE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setEligible(Boolean eligible) {
        this.eligible = eligible;
    }

    public SSIOAccountResponse canEdit(Boolean canEdit) {
        this.canEdit = canEdit;
        return this;
    }

    /**
     * Advertiser eligible to update order lines
     * @return canEdit
     **/
    @Nullable
    @Schema(name = "can_edit", example = "true", description = "Advertiser eligible to update order lines", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CAN_EDIT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getCanEdit() {
        return canEdit;
    }

    @JsonProperty(JSON_PROPERTY_CAN_EDIT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCanEdit(Boolean canEdit) {
        this.canEdit = canEdit;
    }

    public SSIOAccountResponse billtoInfos(List<@Valid SSIOAccountItem> billtoInfos) {
        this.billtoInfos = billtoInfos;
        return this;
    }

    public SSIOAccountResponse addBilltoInfosItem(SSIOAccountItem billtoInfosItem) {
        if (this.billtoInfos == null) {
            this.billtoInfos = new ArrayList<>();
        }
        this.billtoInfos.add(billtoInfosItem);
        return this;
    }

    /**
     * An array of Salesforce account information that includes address, io terms, etc.
     * @return billtoInfos
     **/
    @Nullable
    @Schema(name = "billto_infos", description = "An array of Salesforce account information that includes address, io terms, etc.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_BILLTO_INFOS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid SSIOAccountItem> getBilltoInfos() {
        return billtoInfos;
    }

    @JsonProperty(JSON_PROPERTY_BILLTO_INFOS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBilltoInfos(List<@Valid SSIOAccountItem> billtoInfos) {
        this.billtoInfos = billtoInfos;
    }

    public SSIOAccountResponse currency(String currency) {
        this.currency = currency;
        return this;
    }

    /**
     * Get currency
     * @return currency
     **/
    @Nullable
    @Schema(name = "currency", example = "USD", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCurrency() {
        return currency;
    }

    @JsonProperty(JSON_PROPERTY_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCurrency(String currency) {
        this.currency = currency;
    }

    public SSIOAccountResponse pmpNames(List<@Valid SSIOAccountPMPName> pmpNames) {
        this.pmpNames = pmpNames;
        return this;
    }

    public SSIOAccountResponse addPmpNamesItem(SSIOAccountPMPName pmpNamesItem) {
        if (this.pmpNames == null) {
            this.pmpNames = new ArrayList<>();
        }
        this.pmpNames.add(pmpNamesItem);
        return this;
    }

    /**
     * Get pmpNames
     * @return pmpNames
     **/
    @Nullable
    @Schema(name = "pmp_names", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_PMP_NAMES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid SSIOAccountPMPName> getPmpNames() {
        return pmpNames;
    }

    @JsonProperty(JSON_PROPERTY_PMP_NAMES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPmpNames(List<@Valid SSIOAccountPMPName> pmpNames) {
        this.pmpNames = pmpNames;
    }

    public SSIOAccountResponse error(String error) {
        this.error = error;
        return this;
    }

    /**
     * Error indicator from Salesforce which could be \&quot;No Error\&quot;
     * @return error
     **/
    @Nullable
    @Schema(name = "error", example = "No Error", description = "Error indicator from Salesforce which could be \"No Error\"", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ERROR)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getError() {
        return error;
    }

    @JsonProperty(JSON_PROPERTY_ERROR)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setError(String error) {
        this.error = error;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        SSIOAccountResponse ssIOAccountResponse = (SSIOAccountResponse) o;
        return Objects.equals(this.eligible, ssIOAccountResponse.eligible) &&
            Objects.equals(this.canEdit, ssIOAccountResponse.canEdit) &&
            Objects.equals(this.billtoInfos, ssIOAccountResponse.billtoInfos) &&
            Objects.equals(this.currency, ssIOAccountResponse.currency) &&
            Objects.equals(this.pmpNames, ssIOAccountResponse.pmpNames) &&
            Objects.equals(this.error, ssIOAccountResponse.error);
    }

    @Override
    public int hashCode() {
        return Objects.hash(eligible, canEdit, billtoInfos, currency, pmpNames, error);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class SSIOAccountResponse {\n");
        sb.append("    eligible: ").append(toIndentedString(eligible)).append("\n");
        sb.append("    canEdit: ").append(toIndentedString(canEdit)).append("\n");
        sb.append("    billtoInfos: ").append(toIndentedString(billtoInfos)).append("\n");
        sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
        sb.append("    pmpNames: ").append(toIndentedString(pmpNames)).append("\n");
        sb.append("    error: ").append(toIndentedString(error)).append("\n");
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

