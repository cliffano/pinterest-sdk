/**
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

package org.openapitools.client.model;

import java.math.BigDecimal;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ItemAttributes {
  
  @SerializedName("ad_link")
  private String adLink = null;
  @SerializedName("adult")
  private Boolean adult = null;
  @SerializedName("age_group")
  private String ageGroup = null;
  @SerializedName("availability")
  private String availability = null;
  @SerializedName("average_review_rating")
  private BigDecimal averageReviewRating = null;
  @SerializedName("brand")
  private String brand = null;
  @SerializedName("checkout_enabled")
  private Boolean checkoutEnabled = null;
  @SerializedName("color")
  private String color = null;
  @SerializedName("condition")
  private String condition = null;
  @SerializedName("custom_label_0")
  private String customLabel0 = null;
  @SerializedName("custom_label_1")
  private String customLabel1 = null;
  @SerializedName("custom_label_2")
  private String customLabel2 = null;
  @SerializedName("custom_label_3")
  private String customLabel3 = null;
  @SerializedName("custom_label_4")
  private String customLabel4 = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("free_shipping_label")
  private Boolean freeShippingLabel = null;
  @SerializedName("free_shipping_limit")
  private String freeShippingLimit = null;
  @SerializedName("gender")
  private String gender = null;
  @SerializedName("google_product_category")
  private String googleProductCategory = null;
  @SerializedName("gtin")
  private Integer gtin = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("item_group_id")
  private String itemGroupId = null;
  @SerializedName("last_updated_time")
  private Long lastUpdatedTime = null;
  @SerializedName("link")
  private String link = null;
  @SerializedName("material")
  private String material = null;
  @SerializedName("min_ad_price")
  private String minAdPrice = null;
  @SerializedName("mobile_link")
  private String mobileLink = null;
  @SerializedName("mpn")
  private String mpn = null;
  @SerializedName("number_of_ratings")
  private Integer numberOfRatings = null;
  @SerializedName("number_of_reviews")
  private Integer numberOfReviews = null;
  @SerializedName("pattern")
  private String pattern = null;
  @SerializedName("price")
  private String price = null;
  @SerializedName("product_type")
  private String productType = null;
  @SerializedName("sale_price")
  private String salePrice = null;
  @SerializedName("shipping")
  private String shipping = null;
  @SerializedName("shipping_height")
  private String shippingHeight = null;
  @SerializedName("shipping_weight")
  private String shippingWeight = null;
  @SerializedName("shipping_width")
  private String shippingWidth = null;
  @SerializedName("size")
  private String size = null;
  @SerializedName("size_system")
  private String sizeSystem = null;
  @SerializedName("size_type")
  private String sizeType = null;
  @SerializedName("tax")
  private String tax = null;
  @SerializedName("title")
  private String title = null;
  @SerializedName("variant_names")
  private List<String> variantNames = null;
  @SerializedName("variant_values")
  private List<String> variantValues = null;
  @SerializedName("additional_image_link")
  private List<String> additionalImageLink = null;
  @SerializedName("image_link")
  private List<String> imageLink = null;

  /**
   * Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.
   **/
  @ApiModelProperty(value = "Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.")
  public String getAdLink() {
    return adLink;
  }
  public void setAdLink(String adLink) {
    this.adLink = adLink;
  }

  /**
   * Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest.
   **/
  @ApiModelProperty(value = "Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest.")
  public Boolean getAdult() {
    return adult;
  }
  public void setAdult(Boolean adult) {
    this.adult = adult;
  }

  /**
   * The age group to apply a demographic range to the product. Must be one of the following values (upper or lowercased): ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, or ‘adult’.
   **/
  @ApiModelProperty(value = "The age group to apply a demographic range to the product. Must be one of the following values (upper or lowercased): ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, or ‘adult’.")
  public String getAgeGroup() {
    return ageGroup;
  }
  public void setAgeGroup(String ageGroup) {
    this.ageGroup = ageGroup;
  }

  /**
   * The availability of the product. Must be one of the following values (upper or lowercased): ‘in stock’, ‘out of stock’, ‘preorder’.
   **/
  @ApiModelProperty(value = "The availability of the product. Must be one of the following values (upper or lowercased): ‘in stock’, ‘out of stock’, ‘preorder’.")
  public String getAvailability() {
    return availability;
  }
  public void setAvailability(String availability) {
    this.availability = availability;
  }

  /**
   * Average reviews for the item. Can be a number from 1-5.
   **/
  @ApiModelProperty(value = "Average reviews for the item. Can be a number from 1-5.")
  public BigDecimal getAverageReviewRating() {
    return averageReviewRating;
  }
  public void setAverageReviewRating(BigDecimal averageReviewRating) {
    this.averageReviewRating = averageReviewRating;
  }

  /**
   * The brand of the product.
   **/
  @ApiModelProperty(value = "The brand of the product.")
  public String getBrand() {
    return brand;
  }
  public void setBrand(String brand) {
    this.brand = brand;
  }

  /**
   * This attribute is not supported anymore.
   **/
  @ApiModelProperty(value = "This attribute is not supported anymore.")
  public Boolean getCheckoutEnabled() {
    return checkoutEnabled;
  }
  public void setCheckoutEnabled(Boolean checkoutEnabled) {
    this.checkoutEnabled = checkoutEnabled;
  }

  /**
   * The primary color of the product.
   **/
  @ApiModelProperty(value = "The primary color of the product.")
  public String getColor() {
    return color;
  }
  public void setColor(String color) {
    this.color = color;
  }

  /**
   * The condition of the product. Must be one of the following values (upper or lowercased): ‘new’, ‘used’, or ‘refurbished’.
   **/
  @ApiModelProperty(value = "The condition of the product. Must be one of the following values (upper or lowercased): ‘new’, ‘used’, or ‘refurbished’.")
  public String getCondition() {
    return condition;
  }
  public void setCondition(String condition) {
    this.condition = condition;
  }

  /**
   * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
   **/
  @ApiModelProperty(value = "<p><= 1000 characters</p> <p>Custom grouping of products.</p>")
  public String getCustomLabel0() {
    return customLabel0;
  }
  public void setCustomLabel0(String customLabel0) {
    this.customLabel0 = customLabel0;
  }

  /**
   * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
   **/
  @ApiModelProperty(value = "<p><= 1000 characters</p> <p>Custom grouping of products.</p>")
  public String getCustomLabel1() {
    return customLabel1;
  }
  public void setCustomLabel1(String customLabel1) {
    this.customLabel1 = customLabel1;
  }

  /**
   * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
   **/
  @ApiModelProperty(value = "<p><= 1000 characters</p> <p>Custom grouping of products.</p>")
  public String getCustomLabel2() {
    return customLabel2;
  }
  public void setCustomLabel2(String customLabel2) {
    this.customLabel2 = customLabel2;
  }

  /**
   * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
   **/
  @ApiModelProperty(value = "<p><= 1000 characters</p> <p>Custom grouping of products.</p>")
  public String getCustomLabel3() {
    return customLabel3;
  }
  public void setCustomLabel3(String customLabel3) {
    this.customLabel3 = customLabel3;
  }

  /**
   * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
   **/
  @ApiModelProperty(value = "<p><= 1000 characters</p> <p>Custom grouping of products.</p>")
  public String getCustomLabel4() {
    return customLabel4;
  }
  public void setCustomLabel4(String customLabel4) {
    this.customLabel4 = customLabel4;
  }

  /**
   * <p><= 10000 characters</p> <p>The description of the product.</p>
   **/
  @ApiModelProperty(value = "<p><= 10000 characters</p> <p>The description of the product.</p>")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   * The item is free to ship.
   **/
  @ApiModelProperty(value = "The item is free to ship.")
  public Boolean getFreeShippingLabel() {
    return freeShippingLabel;
  }
  public void setFreeShippingLabel(Boolean freeShippingLabel) {
    this.freeShippingLabel = freeShippingLabel;
  }

  /**
   * The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.
   **/
  @ApiModelProperty(value = "The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.")
  public String getFreeShippingLimit() {
    return freeShippingLimit;
  }
  public void setFreeShippingLimit(String freeShippingLimit) {
    this.freeShippingLimit = freeShippingLimit;
  }

  /**
   * The gender associated with the product. Must be one of the following values (upper or lowercased): ‘male’, ‘female’, or ‘unisex’.
   **/
  @ApiModelProperty(value = "The gender associated with the product. Must be one of the following values (upper or lowercased): ‘male’, ‘female’, or ‘unisex’.")
  public String getGender() {
    return gender;
  }
  public void setGender(String gender) {
    this.gender = gender;
  }

  /**
   * The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.
   **/
  @ApiModelProperty(value = "The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.")
  public String getGoogleProductCategory() {
    return googleProductCategory;
  }
  public void setGoogleProductCategory(String googleProductCategory) {
    this.googleProductCategory = googleProductCategory;
  }

  /**
   * The unique universal product identifier.
   **/
  @ApiModelProperty(value = "The unique universal product identifier.")
  public Integer getGtin() {
    return gtin;
  }
  public void setGtin(Integer gtin) {
    this.gtin = gtin;
  }

  /**
   * <p><= 127 characters</p> <p>The user-created unique ID that represents the product. Only Unicode characters are accepted.</p>
   **/
  @ApiModelProperty(value = "<p><= 127 characters</p> <p>The user-created unique ID that represents the product. Only Unicode characters are accepted.</p>")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * <p><= 127 characters</p> <p>The parent ID of the product.</p>
   **/
  @ApiModelProperty(value = "<p><= 127 characters</p> <p>The parent ID of the product.</p>")
  public String getItemGroupId() {
    return itemGroupId;
  }
  public void setItemGroupId(String itemGroupId) {
    this.itemGroupId = itemGroupId;
  }

  /**
   * The millisecond timestamp when the item was lastly modified by the merchant.
   **/
  @ApiModelProperty(value = "The millisecond timestamp when the item was lastly modified by the merchant.")
  public Long getLastUpdatedTime() {
    return lastUpdatedTime;
  }
  public void setLastUpdatedTime(Long lastUpdatedTime) {
    this.lastUpdatedTime = lastUpdatedTime;
  }

  /**
   * <p><= 511 characters</p> <p>The landing page for the product.</p>
   **/
  @ApiModelProperty(value = "<p><= 511 characters</p> <p>The landing page for the product.</p>")
  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * The material used to make the product.
   **/
  @ApiModelProperty(value = "The material used to make the product.")
  public String getMaterial() {
    return material;
  }
  public void setMaterial(String material) {
    this.material = material;
  }

  /**
   * The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars.
   **/
  @ApiModelProperty(value = "The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars.")
  public String getMinAdPrice() {
    return minAdPrice;
  }
  public void setMinAdPrice(String minAdPrice) {
    this.minAdPrice = minAdPrice;
  }

  /**
   * The mobile-optimized version of your landing page. Must begin with http:// or https://.
   **/
  @ApiModelProperty(value = "The mobile-optimized version of your landing page. Must begin with http:// or https://.")
  public String getMobileLink() {
    return mobileLink;
  }
  public void setMobileLink(String mobileLink) {
    this.mobileLink = mobileLink;
  }

  /**
   * Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.
   **/
  @ApiModelProperty(value = "Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.")
  public String getMpn() {
    return mpn;
  }
  public void setMpn(String mpn) {
    this.mpn = mpn;
  }

  /**
   * The number of ratings for the item.
   **/
  @ApiModelProperty(value = "The number of ratings for the item.")
  public Integer getNumberOfRatings() {
    return numberOfRatings;
  }
  public void setNumberOfRatings(Integer numberOfRatings) {
    this.numberOfRatings = numberOfRatings;
  }

  /**
   * The number of reviews available for the item.
   **/
  @ApiModelProperty(value = "The number of reviews available for the item.")
  public Integer getNumberOfReviews() {
    return numberOfReviews;
  }
  public void setNumberOfReviews(Integer numberOfReviews) {
    this.numberOfReviews = numberOfReviews;
  }

  /**
   * The description of the pattern used for the product.
   **/
  @ApiModelProperty(value = "The description of the pattern used for the product.")
  public String getPattern() {
    return pattern;
  }
  public void setPattern(String pattern) {
    this.pattern = pattern;
  }

  /**
   * The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars.
   **/
  @ApiModelProperty(value = "The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars.")
  public String getPrice() {
    return price;
  }
  public void setPrice(String price) {
    this.price = price;
  }

  /**
   * <p><= 1000 characters</p> <p>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</p>
   **/
  @ApiModelProperty(value = "<p><= 1000 characters</p> <p>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</p>")
  public String getProductType() {
    return productType;
  }
  public void setProductType(String productType) {
    this.productType = productType;
  }

  /**
   * The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars.
   **/
  @ApiModelProperty(value = "The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars.")
  public String getSalePrice() {
    return salePrice;
  }
  public void setSalePrice(String salePrice) {
    this.salePrice = salePrice;
  }

  /**
   * Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.
   **/
  @ApiModelProperty(value = "Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.")
  public String getShipping() {
    return shipping;
  }
  public void setShipping(String shipping) {
    this.shipping = shipping;
  }

  /**
   * The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
   **/
  @ApiModelProperty(value = "The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.")
  public String getShippingHeight() {
    return shippingHeight;
  }
  public void setShippingHeight(String shippingHeight) {
    this.shippingHeight = shippingHeight;
  }

  /**
   * The weight of the product. Ensure there is a space between the numeric string and the metric.
   **/
  @ApiModelProperty(value = "The weight of the product. Ensure there is a space between the numeric string and the metric.")
  public String getShippingWeight() {
    return shippingWeight;
  }
  public void setShippingWeight(String shippingWeight) {
    this.shippingWeight = shippingWeight;
  }

  /**
   * The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
   **/
  @ApiModelProperty(value = "The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.")
  public String getShippingWidth() {
    return shippingWidth;
  }
  public void setShippingWidth(String shippingWidth) {
    this.shippingWidth = shippingWidth;
  }

  /**
   * The size of the product.
   **/
  @ApiModelProperty(value = "The size of the product.")
  public String getSize() {
    return size;
  }
  public void setSize(String size) {
    this.size = size;
  }

  /**
   * Indicates the country’s sizing system in which you are submitting your product. Must be one of the following values (upper or lowercased): ‘US’, ‘UK’, ‘EU’, ‘DE’, ‘FR’, ‘JP’, ‘CN’, ‘IT’, ‘BR’, ‘MEX’, or ‘AU’.
   **/
  @ApiModelProperty(value = "Indicates the country’s sizing system in which you are submitting your product. Must be one of the following values (upper or lowercased): ‘US’, ‘UK’, ‘EU’, ‘DE’, ‘FR’, ‘JP’, ‘CN’, ‘IT’, ‘BR’, ‘MEX’, or ‘AU’.")
  public String getSizeSystem() {
    return sizeSystem;
  }
  public void setSizeSystem(String sizeSystem) {
    this.sizeSystem = sizeSystem;
  }

  /**
   * Additional description for the size. Must be one of the following values (upper or lowercased): ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, or ‘maternity’.
   **/
  @ApiModelProperty(value = "Additional description for the size. Must be one of the following values (upper or lowercased): ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, or ‘maternity’.")
  public String getSizeType() {
    return sizeType;
  }
  public void setSizeType(String sizeType) {
    this.sizeType = sizeType;
  }

  /**
   * Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.
   **/
  @ApiModelProperty(value = "Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.")
  public String getTax() {
    return tax;
  }
  public void setTax(String tax) {
    this.tax = tax;
  }

  /**
   * <p><= 500 characters</p> <p>The name of the product.</p>
   **/
  @ApiModelProperty(value = "<p><= 500 characters</p> <p>The name of the product.</p>")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   * Options for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed.
   **/
  @ApiModelProperty(value = "Options for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed.")
  public List<String> getVariantNames() {
    return variantNames;
  }
  public void setVariantNames(List<String> variantNames) {
    this.variantNames = variantNames;
  }

  /**
   * Option values for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. The order of the variant values must be consistent with the order of the variant names.
   **/
  @ApiModelProperty(value = "Option values for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. The order of the variant values must be consistent with the order of the variant names.")
  public List<String> getVariantValues() {
    return variantValues;
  }
  public void setVariantValues(List<String> variantValues) {
    this.variantValues = variantValues;
  }

  /**
   * <p><= 2000 characters</p> <p>The links to additional images for your product. Up to ten additional images can be used to show a product from different angles or to show different stages. Must begin with http:// or https://.</p>
   **/
  @ApiModelProperty(value = "<p><= 2000 characters</p> <p>The links to additional images for your product. Up to ten additional images can be used to show a product from different angles or to show different stages. Must begin with http:// or https://.</p>")
  public List<String> getAdditionalImageLink() {
    return additionalImageLink;
  }
  public void setAdditionalImageLink(List<String> additionalImageLink) {
    this.additionalImageLink = additionalImageLink;
  }

  /**
   * <p><= 2000 characters</p> <p>The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://.</p>
   **/
  @ApiModelProperty(value = "<p><= 2000 characters</p> <p>The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://.</p>")
  public List<String> getImageLink() {
    return imageLink;
  }
  public void setImageLink(List<String> imageLink) {
    this.imageLink = imageLink;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ItemAttributes itemAttributes = (ItemAttributes) o;
    return (this.adLink == null ? itemAttributes.adLink == null : this.adLink.equals(itemAttributes.adLink)) &&
        (this.adult == null ? itemAttributes.adult == null : this.adult.equals(itemAttributes.adult)) &&
        (this.ageGroup == null ? itemAttributes.ageGroup == null : this.ageGroup.equals(itemAttributes.ageGroup)) &&
        (this.availability == null ? itemAttributes.availability == null : this.availability.equals(itemAttributes.availability)) &&
        (this.averageReviewRating == null ? itemAttributes.averageReviewRating == null : this.averageReviewRating.equals(itemAttributes.averageReviewRating)) &&
        (this.brand == null ? itemAttributes.brand == null : this.brand.equals(itemAttributes.brand)) &&
        (this.checkoutEnabled == null ? itemAttributes.checkoutEnabled == null : this.checkoutEnabled.equals(itemAttributes.checkoutEnabled)) &&
        (this.color == null ? itemAttributes.color == null : this.color.equals(itemAttributes.color)) &&
        (this.condition == null ? itemAttributes.condition == null : this.condition.equals(itemAttributes.condition)) &&
        (this.customLabel0 == null ? itemAttributes.customLabel0 == null : this.customLabel0.equals(itemAttributes.customLabel0)) &&
        (this.customLabel1 == null ? itemAttributes.customLabel1 == null : this.customLabel1.equals(itemAttributes.customLabel1)) &&
        (this.customLabel2 == null ? itemAttributes.customLabel2 == null : this.customLabel2.equals(itemAttributes.customLabel2)) &&
        (this.customLabel3 == null ? itemAttributes.customLabel3 == null : this.customLabel3.equals(itemAttributes.customLabel3)) &&
        (this.customLabel4 == null ? itemAttributes.customLabel4 == null : this.customLabel4.equals(itemAttributes.customLabel4)) &&
        (this.description == null ? itemAttributes.description == null : this.description.equals(itemAttributes.description)) &&
        (this.freeShippingLabel == null ? itemAttributes.freeShippingLabel == null : this.freeShippingLabel.equals(itemAttributes.freeShippingLabel)) &&
        (this.freeShippingLimit == null ? itemAttributes.freeShippingLimit == null : this.freeShippingLimit.equals(itemAttributes.freeShippingLimit)) &&
        (this.gender == null ? itemAttributes.gender == null : this.gender.equals(itemAttributes.gender)) &&
        (this.googleProductCategory == null ? itemAttributes.googleProductCategory == null : this.googleProductCategory.equals(itemAttributes.googleProductCategory)) &&
        (this.gtin == null ? itemAttributes.gtin == null : this.gtin.equals(itemAttributes.gtin)) &&
        (this.id == null ? itemAttributes.id == null : this.id.equals(itemAttributes.id)) &&
        (this.itemGroupId == null ? itemAttributes.itemGroupId == null : this.itemGroupId.equals(itemAttributes.itemGroupId)) &&
        (this.lastUpdatedTime == null ? itemAttributes.lastUpdatedTime == null : this.lastUpdatedTime.equals(itemAttributes.lastUpdatedTime)) &&
        (this.link == null ? itemAttributes.link == null : this.link.equals(itemAttributes.link)) &&
        (this.material == null ? itemAttributes.material == null : this.material.equals(itemAttributes.material)) &&
        (this.minAdPrice == null ? itemAttributes.minAdPrice == null : this.minAdPrice.equals(itemAttributes.minAdPrice)) &&
        (this.mobileLink == null ? itemAttributes.mobileLink == null : this.mobileLink.equals(itemAttributes.mobileLink)) &&
        (this.mpn == null ? itemAttributes.mpn == null : this.mpn.equals(itemAttributes.mpn)) &&
        (this.numberOfRatings == null ? itemAttributes.numberOfRatings == null : this.numberOfRatings.equals(itemAttributes.numberOfRatings)) &&
        (this.numberOfReviews == null ? itemAttributes.numberOfReviews == null : this.numberOfReviews.equals(itemAttributes.numberOfReviews)) &&
        (this.pattern == null ? itemAttributes.pattern == null : this.pattern.equals(itemAttributes.pattern)) &&
        (this.price == null ? itemAttributes.price == null : this.price.equals(itemAttributes.price)) &&
        (this.productType == null ? itemAttributes.productType == null : this.productType.equals(itemAttributes.productType)) &&
        (this.salePrice == null ? itemAttributes.salePrice == null : this.salePrice.equals(itemAttributes.salePrice)) &&
        (this.shipping == null ? itemAttributes.shipping == null : this.shipping.equals(itemAttributes.shipping)) &&
        (this.shippingHeight == null ? itemAttributes.shippingHeight == null : this.shippingHeight.equals(itemAttributes.shippingHeight)) &&
        (this.shippingWeight == null ? itemAttributes.shippingWeight == null : this.shippingWeight.equals(itemAttributes.shippingWeight)) &&
        (this.shippingWidth == null ? itemAttributes.shippingWidth == null : this.shippingWidth.equals(itemAttributes.shippingWidth)) &&
        (this.size == null ? itemAttributes.size == null : this.size.equals(itemAttributes.size)) &&
        (this.sizeSystem == null ? itemAttributes.sizeSystem == null : this.sizeSystem.equals(itemAttributes.sizeSystem)) &&
        (this.sizeType == null ? itemAttributes.sizeType == null : this.sizeType.equals(itemAttributes.sizeType)) &&
        (this.tax == null ? itemAttributes.tax == null : this.tax.equals(itemAttributes.tax)) &&
        (this.title == null ? itemAttributes.title == null : this.title.equals(itemAttributes.title)) &&
        (this.variantNames == null ? itemAttributes.variantNames == null : this.variantNames.equals(itemAttributes.variantNames)) &&
        (this.variantValues == null ? itemAttributes.variantValues == null : this.variantValues.equals(itemAttributes.variantValues)) &&
        (this.additionalImageLink == null ? itemAttributes.additionalImageLink == null : this.additionalImageLink.equals(itemAttributes.additionalImageLink)) &&
        (this.imageLink == null ? itemAttributes.imageLink == null : this.imageLink.equals(itemAttributes.imageLink));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.adLink == null ? 0: this.adLink.hashCode());
    result = 31 * result + (this.adult == null ? 0: this.adult.hashCode());
    result = 31 * result + (this.ageGroup == null ? 0: this.ageGroup.hashCode());
    result = 31 * result + (this.availability == null ? 0: this.availability.hashCode());
    result = 31 * result + (this.averageReviewRating == null ? 0: this.averageReviewRating.hashCode());
    result = 31 * result + (this.brand == null ? 0: this.brand.hashCode());
    result = 31 * result + (this.checkoutEnabled == null ? 0: this.checkoutEnabled.hashCode());
    result = 31 * result + (this.color == null ? 0: this.color.hashCode());
    result = 31 * result + (this.condition == null ? 0: this.condition.hashCode());
    result = 31 * result + (this.customLabel0 == null ? 0: this.customLabel0.hashCode());
    result = 31 * result + (this.customLabel1 == null ? 0: this.customLabel1.hashCode());
    result = 31 * result + (this.customLabel2 == null ? 0: this.customLabel2.hashCode());
    result = 31 * result + (this.customLabel3 == null ? 0: this.customLabel3.hashCode());
    result = 31 * result + (this.customLabel4 == null ? 0: this.customLabel4.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.freeShippingLabel == null ? 0: this.freeShippingLabel.hashCode());
    result = 31 * result + (this.freeShippingLimit == null ? 0: this.freeShippingLimit.hashCode());
    result = 31 * result + (this.gender == null ? 0: this.gender.hashCode());
    result = 31 * result + (this.googleProductCategory == null ? 0: this.googleProductCategory.hashCode());
    result = 31 * result + (this.gtin == null ? 0: this.gtin.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.itemGroupId == null ? 0: this.itemGroupId.hashCode());
    result = 31 * result + (this.lastUpdatedTime == null ? 0: this.lastUpdatedTime.hashCode());
    result = 31 * result + (this.link == null ? 0: this.link.hashCode());
    result = 31 * result + (this.material == null ? 0: this.material.hashCode());
    result = 31 * result + (this.minAdPrice == null ? 0: this.minAdPrice.hashCode());
    result = 31 * result + (this.mobileLink == null ? 0: this.mobileLink.hashCode());
    result = 31 * result + (this.mpn == null ? 0: this.mpn.hashCode());
    result = 31 * result + (this.numberOfRatings == null ? 0: this.numberOfRatings.hashCode());
    result = 31 * result + (this.numberOfReviews == null ? 0: this.numberOfReviews.hashCode());
    result = 31 * result + (this.pattern == null ? 0: this.pattern.hashCode());
    result = 31 * result + (this.price == null ? 0: this.price.hashCode());
    result = 31 * result + (this.productType == null ? 0: this.productType.hashCode());
    result = 31 * result + (this.salePrice == null ? 0: this.salePrice.hashCode());
    result = 31 * result + (this.shipping == null ? 0: this.shipping.hashCode());
    result = 31 * result + (this.shippingHeight == null ? 0: this.shippingHeight.hashCode());
    result = 31 * result + (this.shippingWeight == null ? 0: this.shippingWeight.hashCode());
    result = 31 * result + (this.shippingWidth == null ? 0: this.shippingWidth.hashCode());
    result = 31 * result + (this.size == null ? 0: this.size.hashCode());
    result = 31 * result + (this.sizeSystem == null ? 0: this.sizeSystem.hashCode());
    result = 31 * result + (this.sizeType == null ? 0: this.sizeType.hashCode());
    result = 31 * result + (this.tax == null ? 0: this.tax.hashCode());
    result = 31 * result + (this.title == null ? 0: this.title.hashCode());
    result = 31 * result + (this.variantNames == null ? 0: this.variantNames.hashCode());
    result = 31 * result + (this.variantValues == null ? 0: this.variantValues.hashCode());
    result = 31 * result + (this.additionalImageLink == null ? 0: this.additionalImageLink.hashCode());
    result = 31 * result + (this.imageLink == null ? 0: this.imageLink.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemAttributes {\n");
    
    sb.append("  adLink: ").append(adLink).append("\n");
    sb.append("  adult: ").append(adult).append("\n");
    sb.append("  ageGroup: ").append(ageGroup).append("\n");
    sb.append("  availability: ").append(availability).append("\n");
    sb.append("  averageReviewRating: ").append(averageReviewRating).append("\n");
    sb.append("  brand: ").append(brand).append("\n");
    sb.append("  checkoutEnabled: ").append(checkoutEnabled).append("\n");
    sb.append("  color: ").append(color).append("\n");
    sb.append("  condition: ").append(condition).append("\n");
    sb.append("  customLabel0: ").append(customLabel0).append("\n");
    sb.append("  customLabel1: ").append(customLabel1).append("\n");
    sb.append("  customLabel2: ").append(customLabel2).append("\n");
    sb.append("  customLabel3: ").append(customLabel3).append("\n");
    sb.append("  customLabel4: ").append(customLabel4).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  freeShippingLabel: ").append(freeShippingLabel).append("\n");
    sb.append("  freeShippingLimit: ").append(freeShippingLimit).append("\n");
    sb.append("  gender: ").append(gender).append("\n");
    sb.append("  googleProductCategory: ").append(googleProductCategory).append("\n");
    sb.append("  gtin: ").append(gtin).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  itemGroupId: ").append(itemGroupId).append("\n");
    sb.append("  lastUpdatedTime: ").append(lastUpdatedTime).append("\n");
    sb.append("  link: ").append(link).append("\n");
    sb.append("  material: ").append(material).append("\n");
    sb.append("  minAdPrice: ").append(minAdPrice).append("\n");
    sb.append("  mobileLink: ").append(mobileLink).append("\n");
    sb.append("  mpn: ").append(mpn).append("\n");
    sb.append("  numberOfRatings: ").append(numberOfRatings).append("\n");
    sb.append("  numberOfReviews: ").append(numberOfReviews).append("\n");
    sb.append("  pattern: ").append(pattern).append("\n");
    sb.append("  price: ").append(price).append("\n");
    sb.append("  productType: ").append(productType).append("\n");
    sb.append("  salePrice: ").append(salePrice).append("\n");
    sb.append("  shipping: ").append(shipping).append("\n");
    sb.append("  shippingHeight: ").append(shippingHeight).append("\n");
    sb.append("  shippingWeight: ").append(shippingWeight).append("\n");
    sb.append("  shippingWidth: ").append(shippingWidth).append("\n");
    sb.append("  size: ").append(size).append("\n");
    sb.append("  sizeSystem: ").append(sizeSystem).append("\n");
    sb.append("  sizeType: ").append(sizeType).append("\n");
    sb.append("  tax: ").append(tax).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  variantNames: ").append(variantNames).append("\n");
    sb.append("  variantValues: ").append(variantValues).append("\n");
    sb.append("  additionalImageLink: ").append(additionalImageLink).append("\n");
    sb.append("  imageLink: ").append(imageLink).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
