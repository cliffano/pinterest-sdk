/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class ItemAttributes : IEquatable<ItemAttributes>
    {
        /// <summary>
        /// Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.
        /// </summary>
        /// <value>Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.</value>
        [DataMember(Name="ad_link", EmitDefaultValue=false)]
        public string AdLink { get; set; }

        /// <summary>
        /// The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https://
        /// </summary>
        /// <value>The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https://</value>
        [DataMember(Name="additional_image_link", EmitDefaultValue=false)]
        public List<string> AdditionalImageLink { get; set; }

        /// <summary>
        /// Set this attribute to TRUE if you&#39;re submitting items that are considered “adult”. These will not be shown on Pinterest.
        /// </summary>
        /// <value>Set this attribute to TRUE if you&#39;re submitting items that are considered “adult”. These will not be shown on Pinterest.</value>
        [DataMember(Name="adult", EmitDefaultValue=false)]
        public bool Adult { get; set; }

        /// <summary>
        /// The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’.
        /// </summary>
        /// <value>The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’.</value>
        [DataMember(Name="age_group", EmitDefaultValue=false)]
        public string AgeGroup { get; set; }

        /// <summary>
        /// The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’.
        /// </summary>
        /// <value>The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’.</value>
        [DataMember(Name="availability", EmitDefaultValue=false)]
        public string Availability { get; set; }

        /// <summary>
        /// Average reviews for the item. Can be a number from 1-5.
        /// </summary>
        /// <value>Average reviews for the item. Can be a number from 1-5.</value>
        [DataMember(Name="average_review_rating", EmitDefaultValue=false)]
        public decimal AverageReviewRating { get; set; }

        /// <summary>
        /// The brand of the product.
        /// </summary>
        /// <value>The brand of the product.</value>
        [DataMember(Name="brand", EmitDefaultValue=false)]
        public string Brand { get; set; }

        /// <summary>
        /// The primary color of the product.
        /// </summary>
        /// <value>The primary color of the product.</value>
        [DataMember(Name="color", EmitDefaultValue=false)]
        public string Color { get; set; }

        /// <summary>
        /// The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’.
        /// </summary>
        /// <value>The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’.</value>
        [DataMember(Name="condition", EmitDefaultValue=false)]
        public string Condition { get; set; }

        /// <summary>
        /// Custom grouping of products.
        /// </summary>
        /// <value>Custom grouping of products.</value>
        [MaxLength(1000)]
        [DataMember(Name="custom_label_0", EmitDefaultValue=false)]
        public string CustomLabel0 { get; set; }

        /// <summary>
        /// Custom grouping of products.
        /// </summary>
        /// <value>Custom grouping of products.</value>
        [MaxLength(1000)]
        [DataMember(Name="custom_label_1", EmitDefaultValue=false)]
        public string CustomLabel1 { get; set; }

        /// <summary>
        /// Custom grouping of products.
        /// </summary>
        /// <value>Custom grouping of products.</value>
        [MaxLength(1000)]
        [DataMember(Name="custom_label_2", EmitDefaultValue=false)]
        public string CustomLabel2 { get; set; }

        /// <summary>
        /// Custom grouping of products.
        /// </summary>
        /// <value>Custom grouping of products.</value>
        [MaxLength(1000)]
        [DataMember(Name="custom_label_3", EmitDefaultValue=false)]
        public string CustomLabel3 { get; set; }

        /// <summary>
        /// Custom grouping of products.
        /// </summary>
        /// <value>Custom grouping of products.</value>
        [MaxLength(1000)]
        [DataMember(Name="custom_label_4", EmitDefaultValue=false)]
        public string CustomLabel4 { get; set; }

        /// <summary>
        /// The description of the product.
        /// </summary>
        /// <value>The description of the product.</value>
        [MaxLength(10000)]
        [DataMember(Name="description", EmitDefaultValue=false)]
        public string Description { get; set; }

        /// <summary>
        /// The item is free to ship.
        /// </summary>
        /// <value>The item is free to ship.</value>
        [DataMember(Name="free_shipping_label", EmitDefaultValue=false)]
        public bool FreeShippingLabel { get; set; }

        /// <summary>
        /// The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.
        /// </summary>
        /// <value>The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.</value>
        [DataMember(Name="free_shipping_limit", EmitDefaultValue=false)]
        public string FreeShippingLimit { get; set; }

        /// <summary>
        /// The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’.
        /// </summary>
        /// <value>The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’.</value>
        [DataMember(Name="gender", EmitDefaultValue=false)]
        public string Gender { get; set; }

        /// <summary>
        /// The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.
        /// </summary>
        /// <value>The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.</value>
        [DataMember(Name="google_product_category", EmitDefaultValue=false)]
        public string GoogleProductCategory { get; set; }

        /// <summary>
        /// The unique universal product identifier.
        /// </summary>
        /// <value>The unique universal product identifier.</value>
        [DataMember(Name="gtin", EmitDefaultValue=false)]
        public int Gtin { get; set; }

        /// <summary>
        /// The user-created unique ID that represents the product. Only Unicode characters are accepted.
        /// </summary>
        /// <value>The user-created unique ID that represents the product. Only Unicode characters are accepted.</value>
        [MaxLength(127)]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://
        /// </summary>
        /// <value>The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://</value>
        [DataMember(Name="image_link", EmitDefaultValue=false)]
        public List<string> ImageLink { get; set; }

        /// <summary>
        /// The parent ID of the product.
        /// </summary>
        /// <value>The parent ID of the product.</value>
        [MaxLength(127)]
        [DataMember(Name="item_group_id", EmitDefaultValue=false)]
        public string ItemGroupId { get; set; }

        /// <summary>
        /// The millisecond timestamp when the item was lastly modified by the merchant.
        /// </summary>
        /// <value>The millisecond timestamp when the item was lastly modified by the merchant.</value>
        [DataMember(Name="last_updated_time", EmitDefaultValue=false)]
        public long LastUpdatedTime { get; set; }

        /// <summary>
        /// The landing page for the product.
        /// </summary>
        /// <value>The landing page for the product.</value>
        [MaxLength(511)]
        [DataMember(Name="link", EmitDefaultValue=false)]
        public string Link { get; set; }

        /// <summary>
        /// The material used to make the product.
        /// </summary>
        /// <value>The material used to make the product.</value>
        [DataMember(Name="material", EmitDefaultValue=false)]
        public string Material { get; set; }

        /// <summary>
        /// The minimum advertised price of the product. It supports the following formats, \&quot;19.99 USD\&quot;, \&quot;19.99USD\&quot; and \&quot;19.99\&quot;. If the currency is not included, we default to US dollars.
        /// </summary>
        /// <value>The minimum advertised price of the product. It supports the following formats, \&quot;19.99 USD\&quot;, \&quot;19.99USD\&quot; and \&quot;19.99\&quot;. If the currency is not included, we default to US dollars.</value>
        [DataMember(Name="min_ad_price", EmitDefaultValue=false)]
        public string MinAdPrice { get; set; }

        /// <summary>
        /// The mobile-optimized version of your landing page. Must begin with http:// or https://.
        /// </summary>
        /// <value>The mobile-optimized version of your landing page. Must begin with http:// or https://.</value>
        [DataMember(Name="mobile_link", EmitDefaultValue=false)]
        public string MobileLink { get; set; }

        /// <summary>
        /// Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.
        /// </summary>
        /// <value>Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.</value>
        [DataMember(Name="mpn", EmitDefaultValue=false)]
        public string Mpn { get; set; }

        /// <summary>
        /// The number of ratings for the item.
        /// </summary>
        /// <value>The number of ratings for the item.</value>
        [DataMember(Name="number_of_ratings", EmitDefaultValue=false)]
        public int NumberOfRatings { get; set; }

        /// <summary>
        /// The number of reviews available for the item.
        /// </summary>
        /// <value>The number of reviews available for the item.</value>
        [DataMember(Name="number_of_reviews", EmitDefaultValue=false)]
        public int NumberOfReviews { get; set; }

        /// <summary>
        /// The description of the pattern used for the product.
        /// </summary>
        /// <value>The description of the pattern used for the product.</value>
        [DataMember(Name="pattern", EmitDefaultValue=false)]
        public string Pattern { get; set; }

        /// <summary>
        /// The price of the product. It supports the following formats, \&quot;24.99 USD\&quot;, \&quot;24.99USD\&quot; and \&quot;24.99\&quot;. If the currency is not included, we default to US dollars.
        /// </summary>
        /// <value>The price of the product. It supports the following formats, \&quot;24.99 USD\&quot;, \&quot;24.99USD\&quot; and \&quot;24.99\&quot;. If the currency is not included, we default to US dollars.</value>
        [DataMember(Name="price", EmitDefaultValue=false)]
        public string Price { get; set; }

        /// <summary>
        /// The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ &gt; “. The &gt; must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.
        /// </summary>
        /// <value>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ &gt; “. The &gt; must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</value>
        [MaxLength(1000)]
        [DataMember(Name="product_type", EmitDefaultValue=false)]
        public string ProductType { get; set; }

        /// <summary>
        /// The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \&quot;14.99 USD\&quot;, \&quot;14.99USD\&quot; and \&quot;14.99\&quot;. If the currency is not included, we default to US dollars.
        /// </summary>
        /// <value>The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \&quot;14.99 USD\&quot;, \&quot;14.99USD\&quot; and \&quot;14.99\&quot;. If the currency is not included, we default to US dollars.</value>
        [DataMember(Name="sale_price", EmitDefaultValue=false)]
        public string SalePrice { get; set; }

        /// <summary>
        /// Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.
        /// </summary>
        /// <value>Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.</value>
        [DataMember(Name="shipping", EmitDefaultValue=false)]
        public string Shipping { get; set; }

        /// <summary>
        /// The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
        /// </summary>
        /// <value>The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.</value>
        [DataMember(Name="shipping_height", EmitDefaultValue=false)]
        public string ShippingHeight { get; set; }

        /// <summary>
        /// The weight of the product. Ensure there is a space between the numeric string and the metric.
        /// </summary>
        /// <value>The weight of the product. Ensure there is a space between the numeric string and the metric.</value>
        [DataMember(Name="shipping_weight", EmitDefaultValue=false)]
        public string ShippingWeight { get; set; }

        /// <summary>
        /// The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
        /// </summary>
        /// <value>The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.</value>
        [DataMember(Name="shipping_width", EmitDefaultValue=false)]
        public string ShippingWidth { get; set; }

        /// <summary>
        /// The size of the product.
        /// </summary>
        /// <value>The size of the product.</value>
        [DataMember(Name="size", EmitDefaultValue=false)]
        public string Size { get; set; }

        /// <summary>
        /// Indicates the country’s sizing system in which you are submitting your product.
        /// </summary>
        /// <value>Indicates the country’s sizing system in which you are submitting your product.</value>
        [DataMember(Name="size_system", EmitDefaultValue=false)]
        public string SizeSystem { get; set; }

        /// <summary>
        /// Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’.
        /// </summary>
        /// <value>Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’.</value>
        [DataMember(Name="size_type", EmitDefaultValue=false)]
        public string SizeType { get; set; }

        /// <summary>
        /// Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.
        /// </summary>
        /// <value>Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.</value>
        [DataMember(Name="tax", EmitDefaultValue=false)]
        public string Tax { get; set; }

        /// <summary>
        /// The name of the product.
        /// </summary>
        /// <value>The name of the product.</value>
        [MaxLength(500)]
        [DataMember(Name="title", EmitDefaultValue=false)]
        public string Title { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ItemAttributes {\n");
            sb.Append("  AdLink: ").Append(AdLink).Append("\n");
            sb.Append("  AdditionalImageLink: ").Append(AdditionalImageLink).Append("\n");
            sb.Append("  Adult: ").Append(Adult).Append("\n");
            sb.Append("  AgeGroup: ").Append(AgeGroup).Append("\n");
            sb.Append("  Availability: ").Append(Availability).Append("\n");
            sb.Append("  AverageReviewRating: ").Append(AverageReviewRating).Append("\n");
            sb.Append("  Brand: ").Append(Brand).Append("\n");
            sb.Append("  Color: ").Append(Color).Append("\n");
            sb.Append("  Condition: ").Append(Condition).Append("\n");
            sb.Append("  CustomLabel0: ").Append(CustomLabel0).Append("\n");
            sb.Append("  CustomLabel1: ").Append(CustomLabel1).Append("\n");
            sb.Append("  CustomLabel2: ").Append(CustomLabel2).Append("\n");
            sb.Append("  CustomLabel3: ").Append(CustomLabel3).Append("\n");
            sb.Append("  CustomLabel4: ").Append(CustomLabel4).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  FreeShippingLabel: ").Append(FreeShippingLabel).Append("\n");
            sb.Append("  FreeShippingLimit: ").Append(FreeShippingLimit).Append("\n");
            sb.Append("  Gender: ").Append(Gender).Append("\n");
            sb.Append("  GoogleProductCategory: ").Append(GoogleProductCategory).Append("\n");
            sb.Append("  Gtin: ").Append(Gtin).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  ImageLink: ").Append(ImageLink).Append("\n");
            sb.Append("  ItemGroupId: ").Append(ItemGroupId).Append("\n");
            sb.Append("  LastUpdatedTime: ").Append(LastUpdatedTime).Append("\n");
            sb.Append("  Link: ").Append(Link).Append("\n");
            sb.Append("  Material: ").Append(Material).Append("\n");
            sb.Append("  MinAdPrice: ").Append(MinAdPrice).Append("\n");
            sb.Append("  MobileLink: ").Append(MobileLink).Append("\n");
            sb.Append("  Mpn: ").Append(Mpn).Append("\n");
            sb.Append("  NumberOfRatings: ").Append(NumberOfRatings).Append("\n");
            sb.Append("  NumberOfReviews: ").Append(NumberOfReviews).Append("\n");
            sb.Append("  Pattern: ").Append(Pattern).Append("\n");
            sb.Append("  Price: ").Append(Price).Append("\n");
            sb.Append("  ProductType: ").Append(ProductType).Append("\n");
            sb.Append("  SalePrice: ").Append(SalePrice).Append("\n");
            sb.Append("  Shipping: ").Append(Shipping).Append("\n");
            sb.Append("  ShippingHeight: ").Append(ShippingHeight).Append("\n");
            sb.Append("  ShippingWeight: ").Append(ShippingWeight).Append("\n");
            sb.Append("  ShippingWidth: ").Append(ShippingWidth).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  SizeSystem: ").Append(SizeSystem).Append("\n");
            sb.Append("  SizeType: ").Append(SizeType).Append("\n");
            sb.Append("  Tax: ").Append(Tax).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((ItemAttributes)obj);
        }

        /// <summary>
        /// Returns true if ItemAttributes instances are equal
        /// </summary>
        /// <param name="other">Instance of ItemAttributes to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ItemAttributes other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AdLink == other.AdLink ||
                    AdLink != null &&
                    AdLink.Equals(other.AdLink)
                ) && 
                (
                    AdditionalImageLink == other.AdditionalImageLink ||
                    AdditionalImageLink != null &&
                    other.AdditionalImageLink != null &&
                    AdditionalImageLink.SequenceEqual(other.AdditionalImageLink)
                ) && 
                (
                    Adult == other.Adult ||
                    
                    Adult.Equals(other.Adult)
                ) && 
                (
                    AgeGroup == other.AgeGroup ||
                    AgeGroup != null &&
                    AgeGroup.Equals(other.AgeGroup)
                ) && 
                (
                    Availability == other.Availability ||
                    Availability != null &&
                    Availability.Equals(other.Availability)
                ) && 
                (
                    AverageReviewRating == other.AverageReviewRating ||
                    
                    AverageReviewRating.Equals(other.AverageReviewRating)
                ) && 
                (
                    Brand == other.Brand ||
                    Brand != null &&
                    Brand.Equals(other.Brand)
                ) && 
                (
                    Color == other.Color ||
                    Color != null &&
                    Color.Equals(other.Color)
                ) && 
                (
                    Condition == other.Condition ||
                    Condition != null &&
                    Condition.Equals(other.Condition)
                ) && 
                (
                    CustomLabel0 == other.CustomLabel0 ||
                    CustomLabel0 != null &&
                    CustomLabel0.Equals(other.CustomLabel0)
                ) && 
                (
                    CustomLabel1 == other.CustomLabel1 ||
                    CustomLabel1 != null &&
                    CustomLabel1.Equals(other.CustomLabel1)
                ) && 
                (
                    CustomLabel2 == other.CustomLabel2 ||
                    CustomLabel2 != null &&
                    CustomLabel2.Equals(other.CustomLabel2)
                ) && 
                (
                    CustomLabel3 == other.CustomLabel3 ||
                    CustomLabel3 != null &&
                    CustomLabel3.Equals(other.CustomLabel3)
                ) && 
                (
                    CustomLabel4 == other.CustomLabel4 ||
                    CustomLabel4 != null &&
                    CustomLabel4.Equals(other.CustomLabel4)
                ) && 
                (
                    Description == other.Description ||
                    Description != null &&
                    Description.Equals(other.Description)
                ) && 
                (
                    FreeShippingLabel == other.FreeShippingLabel ||
                    
                    FreeShippingLabel.Equals(other.FreeShippingLabel)
                ) && 
                (
                    FreeShippingLimit == other.FreeShippingLimit ||
                    FreeShippingLimit != null &&
                    FreeShippingLimit.Equals(other.FreeShippingLimit)
                ) && 
                (
                    Gender == other.Gender ||
                    Gender != null &&
                    Gender.Equals(other.Gender)
                ) && 
                (
                    GoogleProductCategory == other.GoogleProductCategory ||
                    GoogleProductCategory != null &&
                    GoogleProductCategory.Equals(other.GoogleProductCategory)
                ) && 
                (
                    Gtin == other.Gtin ||
                    
                    Gtin.Equals(other.Gtin)
                ) && 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    ImageLink == other.ImageLink ||
                    ImageLink != null &&
                    other.ImageLink != null &&
                    ImageLink.SequenceEqual(other.ImageLink)
                ) && 
                (
                    ItemGroupId == other.ItemGroupId ||
                    ItemGroupId != null &&
                    ItemGroupId.Equals(other.ItemGroupId)
                ) && 
                (
                    LastUpdatedTime == other.LastUpdatedTime ||
                    
                    LastUpdatedTime.Equals(other.LastUpdatedTime)
                ) && 
                (
                    Link == other.Link ||
                    Link != null &&
                    Link.Equals(other.Link)
                ) && 
                (
                    Material == other.Material ||
                    Material != null &&
                    Material.Equals(other.Material)
                ) && 
                (
                    MinAdPrice == other.MinAdPrice ||
                    MinAdPrice != null &&
                    MinAdPrice.Equals(other.MinAdPrice)
                ) && 
                (
                    MobileLink == other.MobileLink ||
                    MobileLink != null &&
                    MobileLink.Equals(other.MobileLink)
                ) && 
                (
                    Mpn == other.Mpn ||
                    Mpn != null &&
                    Mpn.Equals(other.Mpn)
                ) && 
                (
                    NumberOfRatings == other.NumberOfRatings ||
                    
                    NumberOfRatings.Equals(other.NumberOfRatings)
                ) && 
                (
                    NumberOfReviews == other.NumberOfReviews ||
                    
                    NumberOfReviews.Equals(other.NumberOfReviews)
                ) && 
                (
                    Pattern == other.Pattern ||
                    Pattern != null &&
                    Pattern.Equals(other.Pattern)
                ) && 
                (
                    Price == other.Price ||
                    Price != null &&
                    Price.Equals(other.Price)
                ) && 
                (
                    ProductType == other.ProductType ||
                    ProductType != null &&
                    ProductType.Equals(other.ProductType)
                ) && 
                (
                    SalePrice == other.SalePrice ||
                    SalePrice != null &&
                    SalePrice.Equals(other.SalePrice)
                ) && 
                (
                    Shipping == other.Shipping ||
                    Shipping != null &&
                    Shipping.Equals(other.Shipping)
                ) && 
                (
                    ShippingHeight == other.ShippingHeight ||
                    ShippingHeight != null &&
                    ShippingHeight.Equals(other.ShippingHeight)
                ) && 
                (
                    ShippingWeight == other.ShippingWeight ||
                    ShippingWeight != null &&
                    ShippingWeight.Equals(other.ShippingWeight)
                ) && 
                (
                    ShippingWidth == other.ShippingWidth ||
                    ShippingWidth != null &&
                    ShippingWidth.Equals(other.ShippingWidth)
                ) && 
                (
                    Size == other.Size ||
                    Size != null &&
                    Size.Equals(other.Size)
                ) && 
                (
                    SizeSystem == other.SizeSystem ||
                    SizeSystem != null &&
                    SizeSystem.Equals(other.SizeSystem)
                ) && 
                (
                    SizeType == other.SizeType ||
                    SizeType != null &&
                    SizeType.Equals(other.SizeType)
                ) && 
                (
                    Tax == other.Tax ||
                    Tax != null &&
                    Tax.Equals(other.Tax)
                ) && 
                (
                    Title == other.Title ||
                    Title != null &&
                    Title.Equals(other.Title)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (AdLink != null)
                    hashCode = hashCode * 59 + AdLink.GetHashCode();
                    if (AdditionalImageLink != null)
                    hashCode = hashCode * 59 + AdditionalImageLink.GetHashCode();
                    
                    hashCode = hashCode * 59 + Adult.GetHashCode();
                    if (AgeGroup != null)
                    hashCode = hashCode * 59 + AgeGroup.GetHashCode();
                    if (Availability != null)
                    hashCode = hashCode * 59 + Availability.GetHashCode();
                    
                    hashCode = hashCode * 59 + AverageReviewRating.GetHashCode();
                    if (Brand != null)
                    hashCode = hashCode * 59 + Brand.GetHashCode();
                    if (Color != null)
                    hashCode = hashCode * 59 + Color.GetHashCode();
                    if (Condition != null)
                    hashCode = hashCode * 59 + Condition.GetHashCode();
                    if (CustomLabel0 != null)
                    hashCode = hashCode * 59 + CustomLabel0.GetHashCode();
                    if (CustomLabel1 != null)
                    hashCode = hashCode * 59 + CustomLabel1.GetHashCode();
                    if (CustomLabel2 != null)
                    hashCode = hashCode * 59 + CustomLabel2.GetHashCode();
                    if (CustomLabel3 != null)
                    hashCode = hashCode * 59 + CustomLabel3.GetHashCode();
                    if (CustomLabel4 != null)
                    hashCode = hashCode * 59 + CustomLabel4.GetHashCode();
                    if (Description != null)
                    hashCode = hashCode * 59 + Description.GetHashCode();
                    
                    hashCode = hashCode * 59 + FreeShippingLabel.GetHashCode();
                    if (FreeShippingLimit != null)
                    hashCode = hashCode * 59 + FreeShippingLimit.GetHashCode();
                    if (Gender != null)
                    hashCode = hashCode * 59 + Gender.GetHashCode();
                    if (GoogleProductCategory != null)
                    hashCode = hashCode * 59 + GoogleProductCategory.GetHashCode();
                    
                    hashCode = hashCode * 59 + Gtin.GetHashCode();
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    if (ImageLink != null)
                    hashCode = hashCode * 59 + ImageLink.GetHashCode();
                    if (ItemGroupId != null)
                    hashCode = hashCode * 59 + ItemGroupId.GetHashCode();
                    
                    hashCode = hashCode * 59 + LastUpdatedTime.GetHashCode();
                    if (Link != null)
                    hashCode = hashCode * 59 + Link.GetHashCode();
                    if (Material != null)
                    hashCode = hashCode * 59 + Material.GetHashCode();
                    if (MinAdPrice != null)
                    hashCode = hashCode * 59 + MinAdPrice.GetHashCode();
                    if (MobileLink != null)
                    hashCode = hashCode * 59 + MobileLink.GetHashCode();
                    if (Mpn != null)
                    hashCode = hashCode * 59 + Mpn.GetHashCode();
                    
                    hashCode = hashCode * 59 + NumberOfRatings.GetHashCode();
                    
                    hashCode = hashCode * 59 + NumberOfReviews.GetHashCode();
                    if (Pattern != null)
                    hashCode = hashCode * 59 + Pattern.GetHashCode();
                    if (Price != null)
                    hashCode = hashCode * 59 + Price.GetHashCode();
                    if (ProductType != null)
                    hashCode = hashCode * 59 + ProductType.GetHashCode();
                    if (SalePrice != null)
                    hashCode = hashCode * 59 + SalePrice.GetHashCode();
                    if (Shipping != null)
                    hashCode = hashCode * 59 + Shipping.GetHashCode();
                    if (ShippingHeight != null)
                    hashCode = hashCode * 59 + ShippingHeight.GetHashCode();
                    if (ShippingWeight != null)
                    hashCode = hashCode * 59 + ShippingWeight.GetHashCode();
                    if (ShippingWidth != null)
                    hashCode = hashCode * 59 + ShippingWidth.GetHashCode();
                    if (Size != null)
                    hashCode = hashCode * 59 + Size.GetHashCode();
                    if (SizeSystem != null)
                    hashCode = hashCode * 59 + SizeSystem.GetHashCode();
                    if (SizeType != null)
                    hashCode = hashCode * 59 + SizeType.GetHashCode();
                    if (Tax != null)
                    hashCode = hashCode * 59 + Tax.GetHashCode();
                    if (Title != null)
                    hashCode = hashCode * 59 + Title.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ItemAttributes left, ItemAttributes right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ItemAttributes left, ItemAttributes right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
