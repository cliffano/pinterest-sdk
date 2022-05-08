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
import com.cliffano.pinterestsdk.model.NonNullableCatalogsCurrency;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * CatalogsProductGroupCurrencyCriteria
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-05-08T00:26:51.345731Z[Etc/UTC]")
public class CatalogsProductGroupCurrencyCriteria {
  public static final String SERIALIZED_NAME_VALUES = "values";
  @SerializedName(SERIALIZED_NAME_VALUES)
  private NonNullableCatalogsCurrency values;

  public static final String SERIALIZED_NAME_NEGATED = "negated";
  @SerializedName(SERIALIZED_NAME_NEGATED)
  private Boolean negated;

  public CatalogsProductGroupCurrencyCriteria() { 
  }

  public CatalogsProductGroupCurrencyCriteria values(NonNullableCatalogsCurrency values) {
    
    this.values = values;
    return this;
  }

   /**
   * Get values
   * @return values
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public NonNullableCatalogsCurrency getValues() {
    return values;
  }


  public void setValues(NonNullableCatalogsCurrency values) {
    this.values = values;
  }


  public CatalogsProductGroupCurrencyCriteria negated(Boolean negated) {
    
    this.negated = negated;
    return this;
  }

   /**
   * Get negated
   * @return negated
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Boolean getNegated() {
    return negated;
  }


  public void setNegated(Boolean negated) {
    this.negated = negated;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsProductGroupCurrencyCriteria catalogsProductGroupCurrencyCriteria = (CatalogsProductGroupCurrencyCriteria) o;
    return Objects.equals(this.values, catalogsProductGroupCurrencyCriteria.values) &&
        Objects.equals(this.negated, catalogsProductGroupCurrencyCriteria.negated);
  }

  @Override
  public int hashCode() {
    return Objects.hash(values, negated);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsProductGroupCurrencyCriteria {\n");
    sb.append("    values: ").append(toIndentedString(values)).append("\n");
    sb.append("    negated: ").append(toIndentedString(negated)).append("\n");
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

