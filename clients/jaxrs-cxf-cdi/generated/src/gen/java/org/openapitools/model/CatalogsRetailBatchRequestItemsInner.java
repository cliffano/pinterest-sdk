package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonSubTypes;
import com.fasterxml.jackson.annotation.JsonTypeInfo;
import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsCreateRetailItem;
import org.openapitools.model.CatalogsDeleteRetailItem;
import org.openapitools.model.CatalogsUpdateRetailItem;
import org.openapitools.model.CatalogsUpsertRetailItem;
import org.openapitools.model.ItemAttributes;
import org.openapitools.model.UpdateMaskFieldType;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;


@JsonTypeInfo(use = JsonTypeInfo.Id.NAME, include = JsonTypeInfo.As.PROPERTY, property = "operation", visible = true)
@JsonSubTypes({
  @JsonSubTypes.Type(value = CatalogsCreateRetailItem.class, name = "CREATE"),
  @JsonSubTypes.Type(value = CatalogsDeleteRetailItem.class, name = "DELETE"),
  @JsonSubTypes.Type(value = CatalogsUpdateRetailItem.class, name = "UPDATE"),
  @JsonSubTypes.Type(value = CatalogsUpsertRetailItem.class, name = "UPSERT"),
})

public class CatalogsRetailBatchRequestItemsInner   {
  
  private String itemId;


public enum OperationEnum {

    @JsonProperty("CREATE") CREATE(String.valueOf("CREATE")), @JsonProperty("UPDATE") UPDATE(String.valueOf("UPDATE")), @JsonProperty("UPSERT") UPSERT(String.valueOf("UPSERT")), @JsonProperty("DELETE") DELETE(String.valueOf("DELETE"));


    private String value;

    OperationEnum(String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static OperationEnum fromValue(String value) {
        for (OperationEnum b : OperationEnum.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}

  private OperationEnum operation;

  private ItemAttributes attributes;

  private List<UpdateMaskFieldType> updateMask;

  /**
   * The catalog item id in the merchant namespace
   **/
  public CatalogsRetailBatchRequestItemsInner itemId(String itemId) {
    this.itemId = itemId;
    return this;
  }

  
  @ApiModelProperty(example = "DS0294-M", required = true, value = "The catalog item id in the merchant namespace")
  @JsonProperty("item_id")
  @NotNull
  public String getItemId() {
    return itemId;
  }
  public void setItemId(String itemId) {
    this.itemId = itemId;
  }


  /**
   **/
  public CatalogsRetailBatchRequestItemsInner operation(OperationEnum operation) {
    this.operation = operation;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("operation")
  @NotNull
  public OperationEnum getOperation() {
    return operation;
  }
  public void setOperation(OperationEnum operation) {
    this.operation = operation;
  }


  /**
   **/
  public CatalogsRetailBatchRequestItemsInner attributes(ItemAttributes attributes) {
    this.attributes = attributes;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("attributes")
  @NotNull
  public ItemAttributes getAttributes() {
    return attributes;
  }
  public void setAttributes(ItemAttributes attributes) {
    this.attributes = attributes;
  }


  /**
   * The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.
   **/
  public CatalogsRetailBatchRequestItemsInner updateMask(List<UpdateMaskFieldType> updateMask) {
    this.updateMask = updateMask;
    return this;
  }

  
  @ApiModelProperty(example = "[ad_link, adult, age_group, availability, average_review_rating, brand, checkout_enabled, color, condition, custom_label_0, custom_label_1, custom_label_2, custom_label_3, custom_label_4, description, free_shipping_label, free_shipping_limit, gender, google_product_category, gtin, item_group_id, last_updated_time, link, material, min_ad_price, mpn, number_of_ratings, number_of_reviews, pattern, price, product_type, sale_price, shipping, shipping_height, shipping_weight, shipping_width, size, size_system, size_type, tax, title, variant_names, variant_values]", value = "The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.")
  @JsonProperty("update_mask")
  public List<UpdateMaskFieldType> getUpdateMask() {
    return updateMask;
  }
  public void setUpdateMask(List<UpdateMaskFieldType> updateMask) {
    this.updateMask = updateMask;
  }

  public CatalogsRetailBatchRequestItemsInner addUpdateMaskItem(UpdateMaskFieldType updateMaskItem) {
    if (this.updateMask == null) {
      this.updateMask = new ArrayList<>();
    }
    this.updateMask.add(updateMaskItem);
    return this;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsRetailBatchRequestItemsInner catalogsRetailBatchRequestItemsInner = (CatalogsRetailBatchRequestItemsInner) o;
    return Objects.equals(this.itemId, catalogsRetailBatchRequestItemsInner.itemId) &&
        Objects.equals(this.operation, catalogsRetailBatchRequestItemsInner.operation) &&
        Objects.equals(this.attributes, catalogsRetailBatchRequestItemsInner.attributes) &&
        Objects.equals(this.updateMask, catalogsRetailBatchRequestItemsInner.updateMask);
  }

  @Override
  public int hashCode() {
    return Objects.hash(itemId, operation, attributes, updateMask);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsRetailBatchRequestItemsInner {\n");
    
    sb.append("    itemId: ").append(toIndentedString(itemId)).append("\n");
    sb.append("    operation: ").append(toIndentedString(operation)).append("\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
    sb.append("    updateMask: ").append(toIndentedString(updateMask)).append("\n");
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

