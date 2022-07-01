#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol OAIItemAttributes
@end

@interface OAIItemAttributes : OAIObject

/* Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. [optional]
 */
@property(nonatomic) NSString* adLink;
/* The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https:// [optional]
 */
@property(nonatomic) NSArray<NSString*>* additionalImageLink;
/* Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest. [optional]
 */
@property(nonatomic) NSNumber* adult;
/* The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’. [optional]
 */
@property(nonatomic) NSString* ageGroup;
/* The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’. [optional]
 */
@property(nonatomic) NSString* availability;
/* Average reviews for the item. Can be a number from 1-5. [optional]
 */
@property(nonatomic) NSNumber* averageReviewRating;
/* The brand of the product. [optional]
 */
@property(nonatomic) NSString* brand;
/* The primary color of the product. [optional]
 */
@property(nonatomic) NSString* color;
/* The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’. [optional]
 */
@property(nonatomic) NSString* condition;
/* Custom grouping of products. [optional]
 */
@property(nonatomic) NSString* customLabel0;
/* Custom grouping of products. [optional]
 */
@property(nonatomic) NSString* customLabel1;
/* Custom grouping of products. [optional]
 */
@property(nonatomic) NSString* customLabel2;
/* Custom grouping of products. [optional]
 */
@property(nonatomic) NSString* customLabel3;
/* Custom grouping of products. [optional]
 */
@property(nonatomic) NSString* customLabel4;
/* The description of the product. [optional]
 */
@property(nonatomic) NSString* _description;
/* The item is free to ship. [optional]
 */
@property(nonatomic) NSNumber* freeShippingLabel;
/* The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. [optional]
 */
@property(nonatomic) NSString* freeShippingLimit;
/* The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’. [optional]
 */
@property(nonatomic) NSString* gender;
/* The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. [optional]
 */
@property(nonatomic) NSString* googleProductCategory;
/* The unique universal product identifier. [optional]
 */
@property(nonatomic) NSNumber* gtin;
/* The user-created unique ID that represents the product. Only Unicode characters are accepted. [optional]
 */
@property(nonatomic) NSString* _id;
/* The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https:// [optional]
 */
@property(nonatomic) NSArray<NSString*>* imageLink;
/* The parent ID of the product. [optional]
 */
@property(nonatomic) NSString* itemGroupId;
/* The millisecond timestamp when the item was lastly modified by the merchant. [optional]
 */
@property(nonatomic) NSNumber* lastUpdatedTime;
/* The landing page for the product. [optional]
 */
@property(nonatomic) NSString* link;
/* The material used to make the product. [optional]
 */
@property(nonatomic) NSString* material;
/* The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars. [optional]
 */
@property(nonatomic) NSString* minAdPrice;
/* The mobile-optimized version of your landing page. Must begin with http:// or https://. [optional]
 */
@property(nonatomic) NSString* mobileLink;
/* Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer. [optional]
 */
@property(nonatomic) NSString* mpn;
/* The number of ratings for the item. [optional]
 */
@property(nonatomic) NSNumber* numberOfRatings;
/* The number of reviews available for the item. [optional]
 */
@property(nonatomic) NSNumber* numberOfReviews;
/* The description of the pattern used for the product. [optional]
 */
@property(nonatomic) NSString* pattern;
/* The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars. [optional]
 */
@property(nonatomic) NSString* price;
/* The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe. [optional]
 */
@property(nonatomic) NSString* productType;
/* The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars. [optional]
 */
@property(nonatomic) NSString* salePrice;
/* Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required. [optional]
 */
@property(nonatomic) NSString* shipping;
/* The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. [optional]
 */
@property(nonatomic) NSString* shippingHeight;
/* The weight of the product. Ensure there is a space between the numeric string and the metric. [optional]
 */
@property(nonatomic) NSString* shippingWeight;
/* The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. [optional]
 */
@property(nonatomic) NSString* shippingWidth;
/* The size of the product. [optional]
 */
@property(nonatomic) NSString* size;
/* Indicates the country’s sizing system in which you are submitting your product. [optional]
 */
@property(nonatomic) NSString* sizeSystem;
/* Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’. [optional]
 */
@property(nonatomic) NSString* sizeType;
/* Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. [optional]
 */
@property(nonatomic) NSString* tax;
/* The name of the product. [optional]
 */
@property(nonatomic) NSString* title;

@end
