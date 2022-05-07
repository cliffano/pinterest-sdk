package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;

@Canonical
class ItemAttributes {
    /* Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. */
    String adLink
    /* The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https:// */
    List<String> additionalImageLink = new ArrayList<String>()
    /* Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest. */
    Boolean adult
    /* The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’. */
    String ageGroup
    /* The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’. */
    String availability
    /* Average reviews for the item. Can be a number from 1-5. */
    BigDecimal averageReviewRating
    /* The brand of the product. */
    String brand
    /* The primary color of the product. */
    String color
    /* The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’. */
    String condition
    /* Custom grouping of products. */
    String customLabel0
    /* Custom grouping of products. */
    String customLabel1
    /* Custom grouping of products. */
    String customLabel2
    /* Custom grouping of products. */
    String customLabel3
    /* Custom grouping of products. */
    String customLabel4
    /* The description of the product. */
    String description
    /* The item is free to ship. */
    Boolean freeShippingLabel
    /* The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. */
    String freeShippingLimit
    /* The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’. */
    String gender
    /* The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. */
    String googleProductCategory
    /* The unique universal product identifier. */
    Integer gtin
    /* The user-created unique ID that represents the product. Only Unicode characters are accepted. */
    String id
    /* The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https:// */
    List<String> imageLink = new ArrayList<String>()
    /* The parent ID of the product. */
    String itemGroupId
    /* The millisecond timestamp when the item was lastly modified by the merchant. */
    Long lastUpdatedTime
    /* The landing page for the product. */
    String link
    /* The material used to make the product. */
    String material
    /* The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars. */
    String minAdPrice
    /* The mobile-optimized version of your landing page. Must begin with http:// or https://. */
    String mobileLink
    /* Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer. */
    String mpn
    /* The number of ratings for the item. */
    Integer numberOfRatings
    /* The number of reviews available for the item. */
    Integer numberOfReviews
    /* The description of the pattern used for the product. */
    String pattern
    /* The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars. */
    String price
    /* The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe. */
    String productType
    /* The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars. */
    String salePrice
    /* Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required. */
    String shipping
    /* The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
    String shippingHeight
    /* The weight of the product. Ensure there is a space between the numeric string and the metric. */
    String shippingWeight
    /* The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
    String shippingWidth
    /* The size of the product. */
    String size
    /* Indicates the country’s sizing system in which you are submitting your product. */
    String sizeSystem
    /* Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’. */
    String sizeType
    /* Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. */
    String tax
    /* The name of the product. */
    String title
}
