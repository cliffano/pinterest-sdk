/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { HttpFile } from '../http/http';

export class ItemAttributes {
    /**
    * Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.
    */
    'adLink'?: string | null;
    /**
    * Set this attribute to TRUE if you\'re submitting items that are considered “adult”. These will not be shown on Pinterest.
    */
    'adult'?: boolean | null;
    /**
    * The age group to apply a demographic range to the product. Must be one of the following values (upper or lowercased): ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, or ‘adult’.
    */
    'ageGroup'?: string | null;
    /**
    * The availability of the product. Must be one of the following values (upper or lowercased): ‘in stock’, ‘out of stock’, ‘preorder’.
    */
    'availability'?: string;
    /**
    * Average reviews for the item. Can be a number from 1-5.
    */
    'averageReviewRating'?: number | null;
    /**
    * The brand of the product.
    */
    'brand'?: string | null;
    /**
    * This attribute is not supported anymore.
    */
    'checkoutEnabled'?: boolean | null;
    /**
    * The primary color of the product.
    */
    'color'?: string | null;
    /**
    * The condition of the product. Must be one of the following values (upper or lowercased): ‘new’, ‘used’, or ‘refurbished’.
    */
    'condition'?: string | null;
    /**
    * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
    */
    'customLabel0'?: string | null;
    /**
    * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
    */
    'customLabel1'?: string | null;
    /**
    * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
    */
    'customLabel2'?: string | null;
    /**
    * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
    */
    'customLabel3'?: string | null;
    /**
    * <p><= 1000 characters</p> <p>Custom grouping of products.</p>
    */
    'customLabel4'?: string | null;
    /**
    * <p><= 10000 characters</p> <p>The description of the product.</p>
    */
    'description'?: string;
    /**
    * The item is free to ship.
    */
    'freeShippingLabel'?: boolean | null;
    /**
    * The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.
    */
    'freeShippingLimit'?: string | null;
    /**
    * The gender associated with the product. Must be one of the following values (upper or lowercased): ‘male’, ‘female’, or ‘unisex’.
    */
    'gender'?: string | null;
    /**
    * The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.
    */
    'googleProductCategory'?: string | null;
    /**
    * The unique universal product identifier.
    */
    'gtin'?: number | null;
    /**
    * <p><= 127 characters</p> <p>The user-created unique ID that represents the product. Only Unicode characters are accepted.</p>
    */
    'id'?: string;
    /**
    * <p><= 127 characters</p> <p>The parent ID of the product.</p>
    */
    'itemGroupId'?: string | null;
    /**
    * The millisecond timestamp when the item was lastly modified by the merchant.
    */
    'lastUpdatedTime'?: number | null;
    /**
    * <p><= 511 characters</p> <p>The landing page for the product.</p>
    */
    'link'?: string;
    /**
    * The material used to make the product.
    */
    'material'?: string | null;
    /**
    * The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars.
    */
    'minAdPrice'?: string | null;
    /**
    * The mobile-optimized version of your landing page. Must begin with http:// or https://.
    */
    'mobileLink'?: string | null;
    /**
    * Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.
    */
    'mpn'?: string | null;
    /**
    * The number of ratings for the item.
    */
    'numberOfRatings'?: number | null;
    /**
    * The number of reviews available for the item.
    */
    'numberOfReviews'?: number | null;
    /**
    * The description of the pattern used for the product.
    */
    'pattern'?: string | null;
    /**
    * The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars.
    */
    'price'?: string;
    /**
    * <p><= 1000 characters</p> <p>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</p>
    */
    'productType'?: string | null;
    /**
    * The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars.
    */
    'salePrice'?: string | null;
    /**
    * Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.
    */
    'shipping'?: string | null;
    /**
    * The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
    */
    'shippingHeight'?: string | null;
    /**
    * The weight of the product. Ensure there is a space between the numeric string and the metric.
    */
    'shippingWeight'?: string | null;
    /**
    * The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
    */
    'shippingWidth'?: string | null;
    /**
    * The size of the product.
    */
    'size'?: string | null;
    /**
    * Indicates the country’s sizing system in which you are submitting your product. Must be one of the following values (upper or lowercased): ‘US’, ‘UK’, ‘EU’, ‘DE’, ‘FR’, ‘JP’, ‘CN’, ‘IT’, ‘BR’, ‘MEX’, or ‘AU’.
    */
    'sizeSystem'?: string | null;
    /**
    * Additional description for the size. Must be one of the following values (upper or lowercased): ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, or ‘maternity’.
    */
    'sizeType'?: string | null;
    /**
    * Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.
    */
    'tax'?: string | null;
    /**
    * <p><= 500 characters</p> <p>The name of the product.</p>
    */
    'title'?: string;
    /**
    * Options for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed.
    */
    'variantNames'?: Array<string> | null;
    /**
    * Option values for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. The order of the variant values must be consistent with the order of the variant names.
    */
    'variantValues'?: Array<string> | null;
    /**
    * <p><= 2000 characters</p> <p>The links to additional images for your product. Up to ten additional images can be used to show a product from different angles or to show different stages. Must begin with http:// or https://.</p>
    */
    'additionalImageLink'?: Array<string> | null;
    /**
    * <p><= 2000 characters</p> <p>The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://.</p>
    */
    'imageLink'?: Array<string>;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "adLink",
            "baseName": "ad_link",
            "type": "string",
            "format": ""
        },
        {
            "name": "adult",
            "baseName": "adult",
            "type": "boolean",
            "format": ""
        },
        {
            "name": "ageGroup",
            "baseName": "age_group",
            "type": "string",
            "format": ""
        },
        {
            "name": "availability",
            "baseName": "availability",
            "type": "string",
            "format": ""
        },
        {
            "name": "averageReviewRating",
            "baseName": "average_review_rating",
            "type": "number",
            "format": ""
        },
        {
            "name": "brand",
            "baseName": "brand",
            "type": "string",
            "format": ""
        },
        {
            "name": "checkoutEnabled",
            "baseName": "checkout_enabled",
            "type": "boolean",
            "format": ""
        },
        {
            "name": "color",
            "baseName": "color",
            "type": "string",
            "format": ""
        },
        {
            "name": "condition",
            "baseName": "condition",
            "type": "string",
            "format": ""
        },
        {
            "name": "customLabel0",
            "baseName": "custom_label_0",
            "type": "string",
            "format": ""
        },
        {
            "name": "customLabel1",
            "baseName": "custom_label_1",
            "type": "string",
            "format": ""
        },
        {
            "name": "customLabel2",
            "baseName": "custom_label_2",
            "type": "string",
            "format": ""
        },
        {
            "name": "customLabel3",
            "baseName": "custom_label_3",
            "type": "string",
            "format": ""
        },
        {
            "name": "customLabel4",
            "baseName": "custom_label_4",
            "type": "string",
            "format": ""
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string",
            "format": ""
        },
        {
            "name": "freeShippingLabel",
            "baseName": "free_shipping_label",
            "type": "boolean",
            "format": ""
        },
        {
            "name": "freeShippingLimit",
            "baseName": "free_shipping_limit",
            "type": "string",
            "format": ""
        },
        {
            "name": "gender",
            "baseName": "gender",
            "type": "string",
            "format": ""
        },
        {
            "name": "googleProductCategory",
            "baseName": "google_product_category",
            "type": "string",
            "format": ""
        },
        {
            "name": "gtin",
            "baseName": "gtin",
            "type": "number",
            "format": ""
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string",
            "format": ""
        },
        {
            "name": "itemGroupId",
            "baseName": "item_group_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "lastUpdatedTime",
            "baseName": "last_updated_time",
            "type": "number",
            "format": "int64"
        },
        {
            "name": "link",
            "baseName": "link",
            "type": "string",
            "format": ""
        },
        {
            "name": "material",
            "baseName": "material",
            "type": "string",
            "format": ""
        },
        {
            "name": "minAdPrice",
            "baseName": "min_ad_price",
            "type": "string",
            "format": ""
        },
        {
            "name": "mobileLink",
            "baseName": "mobile_link",
            "type": "string",
            "format": ""
        },
        {
            "name": "mpn",
            "baseName": "mpn",
            "type": "string",
            "format": ""
        },
        {
            "name": "numberOfRatings",
            "baseName": "number_of_ratings",
            "type": "number",
            "format": ""
        },
        {
            "name": "numberOfReviews",
            "baseName": "number_of_reviews",
            "type": "number",
            "format": ""
        },
        {
            "name": "pattern",
            "baseName": "pattern",
            "type": "string",
            "format": ""
        },
        {
            "name": "price",
            "baseName": "price",
            "type": "string",
            "format": ""
        },
        {
            "name": "productType",
            "baseName": "product_type",
            "type": "string",
            "format": ""
        },
        {
            "name": "salePrice",
            "baseName": "sale_price",
            "type": "string",
            "format": ""
        },
        {
            "name": "shipping",
            "baseName": "shipping",
            "type": "string",
            "format": ""
        },
        {
            "name": "shippingHeight",
            "baseName": "shipping_height",
            "type": "string",
            "format": ""
        },
        {
            "name": "shippingWeight",
            "baseName": "shipping_weight",
            "type": "string",
            "format": ""
        },
        {
            "name": "shippingWidth",
            "baseName": "shipping_width",
            "type": "string",
            "format": ""
        },
        {
            "name": "size",
            "baseName": "size",
            "type": "string",
            "format": ""
        },
        {
            "name": "sizeSystem",
            "baseName": "size_system",
            "type": "string",
            "format": ""
        },
        {
            "name": "sizeType",
            "baseName": "size_type",
            "type": "string",
            "format": ""
        },
        {
            "name": "tax",
            "baseName": "tax",
            "type": "string",
            "format": ""
        },
        {
            "name": "title",
            "baseName": "title",
            "type": "string",
            "format": ""
        },
        {
            "name": "variantNames",
            "baseName": "variant_names",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "variantValues",
            "baseName": "variant_values",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "additionalImageLink",
            "baseName": "additional_image_link",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "imageLink",
            "baseName": "image_link",
            "type": "Array<string>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ItemAttributes.attributeTypeMap;
    }

    public constructor() {
    }
}

