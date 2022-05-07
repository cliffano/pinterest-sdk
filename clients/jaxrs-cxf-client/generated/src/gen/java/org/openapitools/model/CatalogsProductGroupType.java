package org.openapitools.model;

import io.swagger.annotations.ApiModel;


/**
 * Catalog product group type
 */
public enum CatalogsProductGroupType {
  
  MERCHANT_CREATED("MERCHANT_CREATED"),
  
  ALL_PRODUCTS("ALL_PRODUCTS"),
  
  BEST_DEALS("BEST_DEALS"),
  
  PINNER_FAVORITES("PINNER_FAVORITES"),
  
  TOP_SELLERS("TOP_SELLERS"),
  
  BACK_IN_STOCK("BACK_IN_STOCK"),
  
  NEW_ARRIVALS("NEW_ARRIVALS");

  private String value;

  CatalogsProductGroupType(String value) {
    this.value = value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static CatalogsProductGroupType fromValue(String value) {
    for (CatalogsProductGroupType b : CatalogsProductGroupType.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

}

