package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;



@JsonTypeName("ConversionEvents_data_inner_custom_data_contents_inner")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2024-03-14T23:05:05.545684373Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class ConversionEventsDataInnerCustomDataContentsInner   {
  private @Valid String id;
  private @Valid String itemPrice;
  private @Valid Long quantity;
  private @Valid String itemName;
  private @Valid String itemCategory;
  private @Valid String itemBrand;

  /**
   * The id of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\&quot; target&#x3D;\&quot;_blank\&quot;&gt;here&lt;/a&gt; (Install the Pinterest tag section).
   **/
  public ConversionEventsDataInnerCustomDataContentsInner id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "red-pinterest-shirt-logo-1", value = "The id of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).")
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  @JsonProperty("id")
  public void setId(String id) {
    this.id = id;
  }

  /**
   * The price of a product. Accepted as a string in the request; it will be parsed into a double. This is the original item value before any discount. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\&quot; target&#x3D;\&quot;_blank\&quot;&gt;here&lt;/a&gt; (Install the Pinterest tag section).
   **/
  public ConversionEventsDataInnerCustomDataContentsInner itemPrice(String itemPrice) {
    this.itemPrice = itemPrice;
    return this;
  }

  
  @ApiModelProperty(example = "1325.12", value = "The price of a product. Accepted as a string in the request; it will be parsed into a double. This is the original item value before any discount. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).")
  @JsonProperty("item_price")
  public String getItemPrice() {
    return itemPrice;
  }

  @JsonProperty("item_price")
  public void setItemPrice(String itemPrice) {
    this.itemPrice = itemPrice;
  }

  /**
   * The amount of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\&quot; target&#x3D;\&quot;_blank\&quot;&gt;here&lt;/a&gt; (Install the Pinterest tag section).
   **/
  public ConversionEventsDataInnerCustomDataContentsInner quantity(Long quantity) {
    this.quantity = quantity;
    return this;
  }

  
  @ApiModelProperty(example = "5", value = "The amount of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).")
  @JsonProperty("quantity")
  public Long getQuantity() {
    return quantity;
  }

  @JsonProperty("quantity")
  public void setQuantity(Long quantity) {
    this.quantity = quantity;
  }

  /**
   * The name of a product.
   **/
  public ConversionEventsDataInnerCustomDataContentsInner itemName(String itemName) {
    this.itemName = itemName;
    return this;
  }

  
  @ApiModelProperty(example = "pinterest-clothing-shirt", value = "The name of a product.")
  @JsonProperty("item_name")
  public String getItemName() {
    return itemName;
  }

  @JsonProperty("item_name")
  public void setItemName(String itemName) {
    this.itemName = itemName;
  }

  /**
   * The category of a product.
   **/
  public ConversionEventsDataInnerCustomDataContentsInner itemCategory(String itemCategory) {
    this.itemCategory = itemCategory;
    return this;
  }

  
  @ApiModelProperty(example = "pinterest-entertainment", value = "The category of a product.")
  @JsonProperty("item_category")
  public String getItemCategory() {
    return itemCategory;
  }

  @JsonProperty("item_category")
  public void setItemCategory(String itemCategory) {
    this.itemCategory = itemCategory;
  }

  /**
   * The brand of a product.
   **/
  public ConversionEventsDataInnerCustomDataContentsInner itemBrand(String itemBrand) {
    this.itemBrand = itemBrand;
    return this;
  }

  
  @ApiModelProperty(example = "pinterest", value = "The brand of a product.")
  @JsonProperty("item_brand")
  public String getItemBrand() {
    return itemBrand;
  }

  @JsonProperty("item_brand")
  public void setItemBrand(String itemBrand) {
    this.itemBrand = itemBrand;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConversionEventsDataInnerCustomDataContentsInner conversionEventsDataInnerCustomDataContentsInner = (ConversionEventsDataInnerCustomDataContentsInner) o;
    return Objects.equals(this.id, conversionEventsDataInnerCustomDataContentsInner.id) &&
        Objects.equals(this.itemPrice, conversionEventsDataInnerCustomDataContentsInner.itemPrice) &&
        Objects.equals(this.quantity, conversionEventsDataInnerCustomDataContentsInner.quantity) &&
        Objects.equals(this.itemName, conversionEventsDataInnerCustomDataContentsInner.itemName) &&
        Objects.equals(this.itemCategory, conversionEventsDataInnerCustomDataContentsInner.itemCategory) &&
        Objects.equals(this.itemBrand, conversionEventsDataInnerCustomDataContentsInner.itemBrand);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, itemPrice, quantity, itemName, itemCategory, itemBrand);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConversionEventsDataInnerCustomDataContentsInner {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    itemPrice: ").append(toIndentedString(itemPrice)).append("\n");
    sb.append("    quantity: ").append(toIndentedString(quantity)).append("\n");
    sb.append("    itemName: ").append(toIndentedString(itemName)).append("\n");
    sb.append("    itemCategory: ").append(toIndentedString(itemCategory)).append("\n");
    sb.append("    itemBrand: ").append(toIndentedString(itemBrand)).append("\n");
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

