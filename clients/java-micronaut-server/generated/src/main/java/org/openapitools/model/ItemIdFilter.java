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
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * ItemIdFilter
 */
@JsonPropertyOrder({
  ItemIdFilter.JSON_PROPERTY_I_T_E_M_I_D
})
@JsonTypeName("ItemIdFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class ItemIdFilter {
    public static final String JSON_PROPERTY_I_T_E_M_I_D = "ITEM_ID";
    private CatalogsProductGroupMultipleStringCriteria ITEM_ID;

    public ItemIdFilter(CatalogsProductGroupMultipleStringCriteria ITEM_ID) {
        this.ITEM_ID = ITEM_ID;
    }

    public ItemIdFilter ITEM_ID(CatalogsProductGroupMultipleStringCriteria ITEM_ID) {
        this.ITEM_ID = ITEM_ID;
        return this;
    }

    /**
     * Get ITEM_ID
     * @return ITEM_ID
     **/
    @NotNull
    @Schema(name = "ITEM_ID", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_I_T_E_M_I_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public CatalogsProductGroupMultipleStringCriteria getITEMID() {
        return ITEM_ID;
    }

    @JsonProperty(JSON_PROPERTY_I_T_E_M_I_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setITEMID(CatalogsProductGroupMultipleStringCriteria ITEM_ID) {
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

