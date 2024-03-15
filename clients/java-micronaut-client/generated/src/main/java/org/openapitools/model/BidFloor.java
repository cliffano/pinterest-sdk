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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * BidFloor
 */
@JsonPropertyOrder({
  BidFloor.JSON_PROPERTY_BID_FLOORS,
  BidFloor.JSON_PROPERTY_TYPE
})
@JsonTypeName("BidFloor")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class BidFloor {
    public static final String JSON_PROPERTY_BID_FLOORS = "bid_floors";
    private List<Integer> bidFloors = null;

    public static final String JSON_PROPERTY_TYPE = "type";
    private String type = "bidfloor";

    public BidFloor() {
    }

    public BidFloor bidFloors(List<Integer> bidFloors) {
        this.bidFloors = bidFloors;
        return this;
    }

    public BidFloor addBidFloorsItem(Integer bidFloorsItem) {
        if (this.bidFloors == null) {
            this.bidFloors = new ArrayList<>();
        }
        this.bidFloors.add(bidFloorsItem);
        return this;
    }

    /**
     * A list of bid floors in micro currency. For example, [100000, 200000]
     * @return bidFloors
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_BID_FLOORS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<Integer> getBidFloors() {
        return bidFloors;
    }

    @JsonProperty(JSON_PROPERTY_BID_FLOORS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBidFloors(List<Integer> bidFloors) {
        this.bidFloors = bidFloors;
    }

    public BidFloor type(String type) {
        this.type = type;
        return this;
    }

    /**
     * Always the string &#39;bidfloor&#39;
     * @return type
     **/
    @Nullable
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

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        BidFloor bidFloor = (BidFloor) o;
        return Objects.equals(this.bidFloors, bidFloor.bidFloors) &&
            Objects.equals(this.type, bidFloor.type);
    }

    @Override
    public int hashCode() {
        return Objects.hash(bidFloors, type);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class BidFloor {\n");
        sb.append("    bidFloors: ").append(toIndentedString(bidFloors)).append("\n");
        sb.append("    type: ").append(toIndentedString(type)).append("\n");
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

