goog.provide('API.Client.UpdatableItemAttributes');

/**
 * @record
 */
API.Client.UpdatableItemAttributes = function() {}

/**
 * Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.adLink;

/**
 * Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest.
 * @type {!boolean}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.adult;

/**
 * The age group to apply a demographic range to the product. Must be one of the following values (upper or lowercased): ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, or ‘adult’.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.ageGroup;

/**
 * The availability of the product. Must be one of the following values (upper or lowercased): ‘in stock’, ‘out of stock’, ‘preorder’.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.availability;

/**
 * Average reviews for the item. Can be a number from 1-5.
 * @type {!number}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.averageReviewRating;

/**
 * The brand of the product.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.brand;

/**
 * This attribute is not supported anymore.
 * @type {!boolean}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.checkoutEnabled;

/**
 * The primary color of the product.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.color;

/**
 * The condition of the product. Must be one of the following values (upper or lowercased): ‘new’, ‘used’, or ‘refurbished’.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.condition;

/**
 * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.customLabel0;

/**
 * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.customLabel1;

/**
 * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.customLabel2;

/**
 * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.customLabel3;

/**
 * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.customLabel4;

/**
 * <p><= 10000 characters</p> <p>The description of the product.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.description;

/**
 * The item is free to ship.
 * @type {!boolean}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.freeShippingLabel;

/**
 * The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.freeShippingLimit;

/**
 * The gender associated with the product. Must be one of the following values (upper or lowercased): ‘male’, ‘female’, or ‘unisex’.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.gender;

/**
 * The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.googleProductCategory;

/**
 * The unique universal product identifier.
 * @type {!number}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.gtin;

/**
 * <p><= 127 characters</p> <p>The user-created unique ID that represents the product. Only Unicode characters are accepted.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.id;

/**
 * <p><= 127 characters</p> <p>The parent ID of the product.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.itemGroupId;

/**
 * The millisecond timestamp when the item was lastly modified by the merchant.
 * @type {!number}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.lastUpdatedTime;

/**
 * <p><= 511 characters</p> <p>The landing page for the product.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.link;

/**
 * The material used to make the product.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.material;

/**
 * The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.minAdPrice;

/**
 * The mobile-optimized version of your landing page. Must begin with http:// or https://.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.mobileLink;

/**
 * Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.mpn;

/**
 * The number of ratings for the item.
 * @type {!number}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.numberOfRatings;

/**
 * The number of reviews available for the item.
 * @type {!number}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.numberOfReviews;

/**
 * The description of the pattern used for the product.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.pattern;

/**
 * The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.price;

/**
 * <p><= 1000 characters</p> <p>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.productType;

/**
 * The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.salePrice;

/**
 * Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.shipping;

/**
 * The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.shippingHeight;

/**
 * The weight of the product. Ensure there is a space between the numeric string and the metric.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.shippingWeight;

/**
 * The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.shippingWidth;

/**
 * The size of the product.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.size;

/**
 * Indicates the country’s sizing system in which you are submitting your product. Must be one of the following values (upper or lowercased): ‘US’, ‘UK’, ‘EU’, ‘DE’, ‘FR’, ‘JP’, ‘CN’, ‘IT’, ‘BR’, ‘MEX’, or ‘AU’.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.sizeSystem;

/**
 * Additional description for the size. Must be one of the following values (upper or lowercased): ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, or ‘maternity’.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.sizeType;

/**
 * Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.tax;

/**
 * <p><= 500 characters</p> <p>The name of the product.</p>
 * @type {!string}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.title;

/**
 * Options for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed.
 * @type {!Array<!string>}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.variantNames;

/**
 * Option values for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. The order of the variant values must be consistent with the order of the variant names.
 * @type {!Array<!string>}
 * @export
 */
API.Client.UpdatableItemAttributes.prototype.variantValues;

