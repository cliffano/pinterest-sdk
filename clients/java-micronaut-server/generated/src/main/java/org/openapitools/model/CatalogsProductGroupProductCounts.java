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
 * Product counts for a CatalogsProductGroup
 */
@Schema(name = "CatalogsProductGroupProductCounts", description = "Product counts for a CatalogsProductGroup")
@JsonPropertyOrder({
  CatalogsProductGroupProductCounts.JSON_PROPERTY_IN_STOCK,
  CatalogsProductGroupProductCounts.JSON_PROPERTY_OUT_OF_STOCK,
  CatalogsProductGroupProductCounts.JSON_PROPERTY_PREORDER,
  CatalogsProductGroupProductCounts.JSON_PROPERTY_TOTAL
})
@JsonTypeName("CatalogsProductGroupProductCounts")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsProductGroupProductCounts {
    public static final String JSON_PROPERTY_IN_STOCK = "in_stock";
    private BigDecimal inStock;

    public static final String JSON_PROPERTY_OUT_OF_STOCK = "out_of_stock";
    private BigDecimal outOfStock;

    public static final String JSON_PROPERTY_PREORDER = "preorder";
    private BigDecimal preorder;

    public static final String JSON_PROPERTY_TOTAL = "total";
    private BigDecimal total;

    public CatalogsProductGroupProductCounts(BigDecimal inStock, BigDecimal outOfStock, BigDecimal preorder, BigDecimal total) {
        this.inStock = inStock;
        this.outOfStock = outOfStock;
        this.preorder = preorder;
        this.total = total;
    }

    public CatalogsProductGroupProductCounts inStock(BigDecimal inStock) {
        this.inStock = inStock;
        return this;
    }

    /**
     * Get inStock
     * minimum: 0
     * @return inStock
     **/
    @NotNull
    @DecimalMin("0")
    @Schema(name = "in_stock", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_IN_STOCK)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public BigDecimal getInStock() {
        return inStock;
    }

    @JsonProperty(JSON_PROPERTY_IN_STOCK)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setInStock(BigDecimal inStock) {
        this.inStock = inStock;
    }

    public CatalogsProductGroupProductCounts outOfStock(BigDecimal outOfStock) {
        this.outOfStock = outOfStock;
        return this;
    }

    /**
     * Get outOfStock
     * minimum: 0
     * @return outOfStock
     **/
    @NotNull
    @DecimalMin("0")
    @Schema(name = "out_of_stock", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_OUT_OF_STOCK)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public BigDecimal getOutOfStock() {
        return outOfStock;
    }

    @JsonProperty(JSON_PROPERTY_OUT_OF_STOCK)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setOutOfStock(BigDecimal outOfStock) {
        this.outOfStock = outOfStock;
    }

    public CatalogsProductGroupProductCounts preorder(BigDecimal preorder) {
        this.preorder = preorder;
        return this;
    }

    /**
     * Get preorder
     * minimum: 0
     * @return preorder
     **/
    @NotNull
    @DecimalMin("0")
    @Schema(name = "preorder", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_PREORDER)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public BigDecimal getPreorder() {
        return preorder;
    }

    @JsonProperty(JSON_PROPERTY_PREORDER)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setPreorder(BigDecimal preorder) {
        this.preorder = preorder;
    }

    public CatalogsProductGroupProductCounts total(BigDecimal total) {
        this.total = total;
        return this;
    }

    /**
     * Get total
     * minimum: 0
     * @return total
     **/
    @NotNull
    @DecimalMin("0")
    @Schema(name = "total", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_TOTAL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public BigDecimal getTotal() {
        return total;
    }

    @JsonProperty(JSON_PROPERTY_TOTAL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setTotal(BigDecimal total) {
        this.total = total;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsProductGroupProductCounts catalogsProductGroupProductCounts = (CatalogsProductGroupProductCounts) o;
        return Objects.equals(this.inStock, catalogsProductGroupProductCounts.inStock) &&
            Objects.equals(this.outOfStock, catalogsProductGroupProductCounts.outOfStock) &&
            Objects.equals(this.preorder, catalogsProductGroupProductCounts.preorder) &&
            Objects.equals(this.total, catalogsProductGroupProductCounts.total);
    }

    @Override
    public int hashCode() {
        return Objects.hash(inStock, outOfStock, preorder, total);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsProductGroupProductCounts {\n");
        sb.append("    inStock: ").append(toIndentedString(inStock)).append("\n");
        sb.append("    outOfStock: ").append(toIndentedString(outOfStock)).append("\n");
        sb.append("    preorder: ").append(toIndentedString(preorder)).append("\n");
        sb.append("    total: ").append(toIndentedString(total)).append("\n");
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

