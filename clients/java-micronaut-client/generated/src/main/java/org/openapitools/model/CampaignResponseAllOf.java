/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CampaignResponseAllOf
 */
@JsonPropertyOrder({
  CampaignResponseAllOf.JSON_PROPERTY_ID
})
@JsonTypeName("CampaignResponse_allOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-07T06:38:30.955411Z[Etc/UTC]")
@Introspected
public class CampaignResponseAllOf {
    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public CampaignResponseAllOf(String id) {
        this.id = id;
    }

    public CampaignResponseAllOf id(String id) {
        this.id = id;
        return this;
    }

    /**
     * Campaign ID.
     * @return id
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "549755885175", required = true, value = "Campaign ID.")
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getId() {
        return id;
    }

    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setId(String id) {
        this.id = id;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CampaignResponseAllOf campaignResponseAllOf = (CampaignResponseAllOf) o;
        return Objects.equals(this.id, campaignResponseAllOf.id);
    }

    @Override
    public int hashCode() {
        return Objects.hash(id);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CampaignResponseAllOf {\n");
        sb.append("    id: ").append(toIndentedString(id)).append("\n");
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
