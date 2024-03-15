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
import org.openapitools.model.MatchTypeResponse;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * KeywordsCommon
 */
@JsonPropertyOrder({
  KeywordsCommon.JSON_PROPERTY_BID,
  KeywordsCommon.JSON_PROPERTY_MATCH_TYPE,
  KeywordsCommon.JSON_PROPERTY_VALUE
})
@JsonTypeName("KeywordsCommon")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class KeywordsCommon {
    public static final String JSON_PROPERTY_BID = "bid";
    private Integer bid;

    public static final String JSON_PROPERTY_MATCH_TYPE = "match_type";
    private MatchTypeResponse matchType;

    public static final String JSON_PROPERTY_VALUE = "value";
    private String value;

    public KeywordsCommon(MatchTypeResponse matchType, String value) {
        this.matchType = matchType;
        this.value = value;
    }

    public KeywordsCommon bid(Integer bid) {
        this.bid = bid;
        return this;
    }

    /**
     * Keyword custom bid in microcurrency - null if inherited from parent ad group.
     * @return bid
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_BID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Integer getBid() {
        return bid;
    }

    @JsonProperty(JSON_PROPERTY_BID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBid(Integer bid) {
        this.bid = bid;
    }

    public KeywordsCommon matchType(MatchTypeResponse matchType) {
        this.matchType = matchType;
        return this;
    }

    /**
     * Get matchType
     * @return matchType
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_MATCH_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public MatchTypeResponse getMatchType() {
        return matchType;
    }

    @JsonProperty(JSON_PROPERTY_MATCH_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setMatchType(MatchTypeResponse matchType) {
        this.matchType = matchType;
    }

    public KeywordsCommon value(String value) {
        this.value = value;
        return this;
    }

    /**
     * Keyword value (120 chars max).
     * @return value
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_VALUE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getValue() {
        return value;
    }

    @JsonProperty(JSON_PROPERTY_VALUE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setValue(String value) {
        this.value = value;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        KeywordsCommon keywordsCommon = (KeywordsCommon) o;
        return Objects.equals(this.bid, keywordsCommon.bid) &&
            Objects.equals(this.matchType, keywordsCommon.matchType) &&
            Objects.equals(this.value, keywordsCommon.value);
    }

    @Override
    public int hashCode() {
        return Objects.hash(bid, matchType, value);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class KeywordsCommon {\n");
        sb.append("    bid: ").append(toIndentedString(bid)).append("\n");
        sb.append("    matchType: ").append(toIndentedString(matchType)).append("\n");
        sb.append("    value: ").append(toIndentedString(value)).append("\n");
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

