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
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * ItemGroupIdFilter
 */
@JsonPropertyOrder({
  ItemGroupIdFilter.JSON_PROPERTY_I_T_E_M_G_R_O_U_P_I_D
})
@JsonTypeName("ItemGroupIdFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-08T00:31:09.924165Z[Etc/UTC]")
@Introspected
public class ItemGroupIdFilter {
    public static final String JSON_PROPERTY_I_T_E_M_G_R_O_U_P_I_D = "ITEM_GROUP_ID";
    private CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID;

    public ItemGroupIdFilter(CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID) {
        this.ITEM_GROUP_ID = ITEM_GROUP_ID;
    }

    public ItemGroupIdFilter ITEM_GROUP_ID(CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID) {
        this.ITEM_GROUP_ID = ITEM_GROUP_ID;
        return this;
    }

    /**
     * Get ITEM_GROUP_ID
     * @return ITEM_GROUP_ID
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_I_T_E_M_G_R_O_U_P_I_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupMultipleStringCriteria getITEMGROUPID() {
        return ITEM_GROUP_ID;
    }

    @JsonProperty(JSON_PROPERTY_I_T_E_M_G_R_O_U_P_I_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setITEMGROUPID(CatalogsProductGroupMultipleStringCriteria ITEM_GROUP_ID) {
        this.ITEM_GROUP_ID = ITEM_GROUP_ID;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ItemGroupIdFilter itemGroupIdFilter = (ItemGroupIdFilter) o;
        return Objects.equals(this.ITEM_GROUP_ID, itemGroupIdFilter.ITEM_GROUP_ID);
    }

    @Override
    public int hashCode() {
        return Objects.hash(ITEM_GROUP_ID);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ItemGroupIdFilter {\n");
        sb.append("    ITEM_GROUP_ID: ").append(toIndentedString(ITEM_GROUP_ID)).append("\n");
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
