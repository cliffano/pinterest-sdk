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


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * CatalogsFeedIngestionInfo
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-05-07T06:37:33.786272Z[Etc/UTC]")
public class CatalogsFeedIngestionInfo {
  public static final String SERIALIZED_NAME_IN_STOCK = "in_stock";
  @SerializedName(SERIALIZED_NAME_IN_STOCK)
  private Integer inStock;

  public static final String SERIALIZED_NAME_OUT_OF_STOCK = "out_of_stock";
  @SerializedName(SERIALIZED_NAME_OUT_OF_STOCK)
  private Integer outOfStock;

  public static final String SERIALIZED_NAME_PREORDER = "preorder";
  @SerializedName(SERIALIZED_NAME_PREORDER)
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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getInStock() {
    return inStock;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getOutOfStock() {
    return outOfStock;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getPreorder() {
    return preorder;
  }


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

