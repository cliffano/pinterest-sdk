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
import org.openapitools.model.CatalogsProductGroupCurrencyCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * ItemIdFilter
 */
@JsonPropertyOrder({
  ItemIdFilter.JSON_PROPERTY_I_T_E_M_I_D
})
@JsonTypeName("ItemIdFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class ItemIdFilter {
    public static final String JSON_PROPERTY_I_T_E_M_I_D = "ITEM_ID";
    private CatalogsProductGroupCurrencyCriteria ITEM_ID;

    public ItemIdFilter(CatalogsProductGroupCurrencyCriteria ITEM_ID) {
        this.ITEM_ID = ITEM_ID;
    }

    public ItemIdFilter ITEM_ID(CatalogsProductGroupCurrencyCriteria ITEM_ID) {
        this.ITEM_ID = ITEM_ID;
        return this;
    }

    /**
     * Get ITEM_ID
     * @return ITEM_ID
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_I_T_E_M_I_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupCurrencyCriteria getITEMID() {
        return ITEM_ID;
    }

    @JsonProperty(JSON_PROPERTY_I_T_E_M_I_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setITEMID(CatalogsProductGroupCurrencyCriteria ITEM_ID) {
        this.ITEM_ID = ITEM_ID;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ItemIdFilter itemIdFilter = (ItemIdFilter) o;
        return Objects.equals(this.ITEM_ID, itemIdFilter.ITEM_ID);
    }

    @Override
    public int hashCode() {
        return Objects.hash(ITEM_ID);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ItemIdFilter {\n");
        sb.append("    ITEM_ID: ").append(toIndentedString(ITEM_ID)).append("\n");
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