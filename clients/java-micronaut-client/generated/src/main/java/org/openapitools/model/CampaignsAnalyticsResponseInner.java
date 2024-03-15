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
import com.fasterxml.jackson.annotation.JsonTypeName;
import java.time.LocalDate;
import java.util.HashMap;
import java.util.Map;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CampaignsAnalyticsResponseInner
 */
@JsonPropertyOrder({
  CampaignsAnalyticsResponseInner.JSON_PROPERTY_C_A_M_P_A_I_G_N_I_D,
  CampaignsAnalyticsResponseInner.JSON_PROPERTY_D_A_T_E
})
@JsonTypeName("CampaignsAnalyticsResponse_inner")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CampaignsAnalyticsResponseInner extends HashMap<String, Object> {
    public static final String JSON_PROPERTY_C_A_M_P_A_I_G_N_I_D = "CAMPAIGN_ID";
    private String CAMPAIGN_ID;

    public static final String JSON_PROPERTY_D_A_T_E = "DATE";
    private LocalDate DATE;

    public CampaignsAnalyticsResponseInner(String CAMPAIGN_ID) {
        super();
        this.CAMPAIGN_ID = CAMPAIGN_ID;
    }

    public CampaignsAnalyticsResponseInner CAMPAIGN_ID(String CAMPAIGN_ID) {
        this.CAMPAIGN_ID = CAMPAIGN_ID;
        return this;
    }

    /**
     * The ID of the campaing that this metrics belongs to.
     * @return CAMPAIGN_ID
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @JsonProperty(JSON_PROPERTY_C_A_M_P_A_I_G_N_I_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getCAMPAIGNID() {
        return CAMPAIGN_ID;
    }

    @JsonProperty(JSON_PROPERTY_C_A_M_P_A_I_G_N_I_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setCAMPAIGNID(String CAMPAIGN_ID) {
        this.CAMPAIGN_ID = CAMPAIGN_ID;
    }

    public CampaignsAnalyticsResponseInner DATE(LocalDate DATE) {
        this.DATE = DATE;
        return this;
    }

    /**
     * Current metrics date. Only returned when granularity is a time-based value (&#x60;DAY&#x60;, &#x60;HOUR&#x60;, &#x60;WEEK&#x60;, &#x60;MONTH&#x60;)
     * @return DATE
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_D_A_T_E)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    @JsonFormat(shape = JsonFormat.Shape.STRING, pattern = "yyyy-MM-dd")
    public LocalDate getDATE() {
        return DATE;
    }

    @JsonProperty(JSON_PROPERTY_D_A_T_E)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    @JsonFormat(shape = JsonFormat.Shape.STRING, pattern = "yyyy-MM-dd")
    public void setDATE(LocalDate DATE) {
        this.DATE = DATE;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CampaignsAnalyticsResponseInner campaignsAnalyticsResponseInner = (CampaignsAnalyticsResponseInner) o;
        return Objects.equals(this.CAMPAIGN_ID, campaignsAnalyticsResponseInner.CAMPAIGN_ID) &&
            Objects.equals(this.DATE, campaignsAnalyticsResponseInner.DATE) &&
            super.equals(o);
    }

    @Override
    public int hashCode() {
        return Objects.hash(CAMPAIGN_ID, DATE, super.hashCode());
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CampaignsAnalyticsResponseInner {\n");
        sb.append("    ").append(toIndentedString(super.toString())).append("\n");
        sb.append("    CAMPAIGN_ID: ").append(toIndentedString(CAMPAIGN_ID)).append("\n");
        sb.append("    DATE: ").append(toIndentedString(DATE)).append("\n");
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
