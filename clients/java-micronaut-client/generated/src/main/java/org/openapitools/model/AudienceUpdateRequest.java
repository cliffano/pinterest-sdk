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
import org.openapitools.model.AudienceRule;
import org.openapitools.model.AudienceUpdateOperationType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AudienceUpdateRequest
 */
@JsonPropertyOrder({
  AudienceUpdateRequest.JSON_PROPERTY_AD_ACCOUNT_ID,
  AudienceUpdateRequest.JSON_PROPERTY_NAME,
  AudienceUpdateRequest.JSON_PROPERTY_RULE,
  AudienceUpdateRequest.JSON_PROPERTY_DESCRIPTION,
  AudienceUpdateRequest.JSON_PROPERTY_OPERATION_TYPE
})
@JsonTypeName("AudienceUpdateRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AudienceUpdateRequest {
    public static final String JSON_PROPERTY_AD_ACCOUNT_ID = "ad_account_id";
    private String adAccountId;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_RULE = "rule";
    private AudienceRule rule;

    public static final String JSON_PROPERTY_DESCRIPTION = "description";
    private String description;

    public static final String JSON_PROPERTY_OPERATION_TYPE = "operation_type";
    private AudienceUpdateOperationType operationType = AudienceUpdateOperationType.UPDATE;

    public AudienceUpdateRequest() {
    }

    public AudienceUpdateRequest adAccountId(String adAccountId) {
        this.adAccountId = adAccountId;
        return this;
    }

    /**
     * Ad account ID.
     * @return adAccountId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
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

    public AudienceUpdateRequest name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Audience name.
     * @return name
     **/
    @Nullable
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

    public AudienceUpdateRequest rule(AudienceRule rule) {
        this.rule = rule;
        return this;
    }

    /**
     * Get rule
     * @return rule
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_RULE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public AudienceRule getRule() {
        return rule;
    }

    @JsonProperty(JSON_PROPERTY_RULE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setRule(AudienceRule rule) {
        this.rule = rule;
    }

    public AudienceUpdateRequest description(String description) {
        this.description = description;
        return this;
    }

    /**
     * Audience description.
     * @return description
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DESCRIPTION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDescription() {
        return description;
    }

    @JsonProperty(JSON_PROPERTY_DESCRIPTION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDescription(String description) {
        this.description = description;
    }

    public AudienceUpdateRequest operationType(AudienceUpdateOperationType operationType) {
        this.operationType = operationType;
        return this;
    }

    /**
     * Get operationType
     * @return operationType
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_OPERATION_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public AudienceUpdateOperationType getOperationType() {
        return operationType;
    }

    @JsonProperty(JSON_PROPERTY_OPERATION_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setOperationType(AudienceUpdateOperationType operationType) {
        this.operationType = operationType;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AudienceUpdateRequest audienceUpdateRequest = (AudienceUpdateRequest) o;
        return Objects.equals(this.adAccountId, audienceUpdateRequest.adAccountId) &&
            Objects.equals(this.name, audienceUpdateRequest.name) &&
            Objects.equals(this.rule, audienceUpdateRequest.rule) &&
            Objects.equals(this.description, audienceUpdateRequest.description) &&
            Objects.equals(this.operationType, audienceUpdateRequest.operationType);
    }

    @Override
    public int hashCode() {
        return Objects.hash(adAccountId, name, rule, description, operationType);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AudienceUpdateRequest {\n");
        sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    rule: ").append(toIndentedString(rule)).append("\n");
        sb.append("    description: ").append(toIndentedString(description)).append("\n");
        sb.append("    operationType: ").append(toIndentedString(operationType)).append("\n");
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

