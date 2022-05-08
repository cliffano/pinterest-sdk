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
 * CatalogsFeedIngestionInfo
 */
@JsonPropertyOrder({
  CatalogsFeedIngestionInfo.JSON_PROPERTY_IN_STOCK,
  CatalogsFeedIngestionInfo.JSON_PROPERTY_OUT_OF_STOCK,
  CatalogsFeedIngestionInfo.JSON_PROPERTY_PREORDER
})
@JsonTypeName("CatalogsFeedIngestionInfo")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class CatalogsFeedIngestionInfo {
    public static final String JSON_PROPERTY_IN_STOCK = "in_stock";
    private Integer inStock;

    public static final String JSON_PROPERTY_OUT_OF_STOCK = "out_of_stock";
    private Integer outOfStock;

    public static final String JSON_PROPERTY_PREORDER = "preorder";
    private Integer preorder;

    public CatalogsFeedIngestionInfo() {
    }

    public CatalogsFeedIngestionInfo inStock(Integer inStock) {
        this.inStock = inStock;
        return this;
    }

    /**
     * Get inStock
     * @return inStock
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_IN_STOCK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getInStock() {
        return inStock;
    }

    @JsonProperty(JSON_PROPERTY_IN_STOCK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setInStock(Integer inStock) {
        this.inStock = inStock;
    }

    public CatalogsFeedIngestionInfo outOfStock(Integer outOfStock) {
        this.outOfStock = outOfStock;
        return this;
    }

    /**
     * Get outOfStock
     * @return outOfStock
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_OUT_OF_STOCK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getOutOfStock() {
        return outOfStock;
    }

    @JsonProperty(JSON_PROPERTY_OUT_OF_STOCK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setOutOfStock(Integer outOfStock) {
        this.outOfStock = outOfStock;
    }

    public CatalogsFeedIngestionInfo preorder(Integer preorder) {
        this.preorder = preorder;
        return this;
    }

    /**
     * Get preorder
     * @return preorder
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_PREORDER)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getPreorder() {
        return preorder;
    }

    @JsonProperty(JSON_PROPERTY_PREORDER)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setPreorder(Integer preorder) {
        this.preorder = preorder;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsFeedIngestionInfo catalogsFeedIngestionInfo = (CatalogsFeedIngestionInfo) o;
        return Objects.equals(this.inStock, catalogsFeedIngestionInfo.inStock) &&
            Objects.equals(this.outOfStock, catalogsFeedIngestionInfo.outOfStock) &&
            Objects.equals(this.preorder, catalogsFeedIngestionInfo.preorder);
    }

    @Override
    public int hashCode() {
        return Objects.hash(inStock, outOfStock, preorder);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsFeedIngestionInfo {\n");
        sb.append("    inStock: ").append(toIndentedString(inStock)).append("\n");
        sb.append("    outOfStock: ").append(toIndentedString(outOfStock)).append("\n");
        sb.append("    preorder: ").append(toIndentedString(preorder)).append("\n");
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
