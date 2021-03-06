/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';

export class ItemAttributes {
    /**
    * Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.
    */
    'adLink'?: string;
    /**
    * The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https://
    */
    'additionalImageLink'?: Array<string>;
    /**
    * Set this attribute to TRUE if you\'re submitting items that are considered “adult”. These will not be shown on Pinterest.
    */
    'adult'?: boolean;
    /**
    * The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’.
    */
    'ageGroup'?: string;
    /**
    * The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’.
    */
    'availability'?: string;
    /**
    * Average reviews for the item. Can be a number from 1-5.
    */
    'averageReviewRating'?: number;
    /**
    * The brand of the product.
    */
    'brand'?: string;
    /**
    * The primary color of the product.
    */
    'color'?: string;
    /**
    * The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’.
    */
    'condition'?: string;
    /**
    * Custom grouping of products.
    */
    'customLabel0'?: string;
    /**
    * Custom grouping of products.
    */
    'customLabel1'?: string;
    /**
    * Custom grouping of products.
    */
    'customLabel2'?: string;
    /**
    * Custom grouping of products.
    */
    'customLabel3'?: string;
    /**
    * Custom grouping of products.
    */
    'customLabel4'?: string;
    /**
    * The description of the product.
    */
    'description'?: string;
    /**
    * The item is free to ship.
    */
    'freeShippingLabel'?: boolean;
    /**
    * The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.
    */
    'freeShippingLimit'?: string;
    /**
    * The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’.
    */
    'gender'?: string;
    /**
    * The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.
    */
    'googleProductCategory'?: string;
    /**
    * The unique universal product identifier.
    */
    'gtin'?: number;
    /**
    * The user-created unique ID that represents the product. Only Unicode characters are accepted.
    */
    'id'?: string;
    /**
    * The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://
    */
    'imageLink'?: Array<string>;
    /**
    * The parent ID of the product.
    */
    'itemGroupId'?: string;
    /**
    * The millisecond timestamp when the item was lastly modified by the merchant.
    */
    'lastUpdatedTime'?: number;
    /**
    * The landing page for the product.
    */
    'link'?: string;
    /**
    * The material used to make the product.
    */
    'material'?: string;
    /**
    * The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars.
    */
    'minAdPrice'?: string;
    /**
    * The mobile-optimized version of your landing page. Must begin with http:// or https://.
    */
    'mobileLink'?: string;
    /**
    * Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.
    */
    'mpn'?: string;
    /**
    * The number of ratings for the item.
    */
    'numberOfRatings'?: number;
    /**
    * The number of reviews available for the item.
    */
    'numberOfReviews'?: number;
    /**
    * The description of the pattern used for the product.
    */
    'pattern'?: string;
    /**
    * The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars.
    */
    'price'?: string;
    /**
    * The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.
    */
    'productType'?: string;
    /**
    * The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars.
    */
    'salePrice'?: string;
    /**
    * Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.
    */
    'shipping'?: string;
    /**
    * The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
    */
    'shippingHeight'?: string;
    /**
    * The weight of the product. Ensure there is a space between the numeric string and the metric.
    */
    'shippingWeight'?: string;
    /**
    * The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
    */
    'shippingWidth'?: string;
    /**
    * The size of the product.
    */
    'size'?: string;
    /**
    * Indicates the country’s sizing system in which you are submitting your product.
    */
    'sizeSystem'?: string;
    /**
    * Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’.
    */
    'sizeType'?: string;
    /**
    * Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.
    */
    'tax'?: string;
    /**
    * The name of the product.
    */
    'title'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "adLink",
            "baseName": "ad_link",
            "type": "string"
        },
        {
            "name": "additionalImageLink",
            "baseName": "additional_image_link",
            "type": "Array<string>"
        },
        {
            "name": "adult",
            "baseName": "adult",
            "type": "boolean"
        },
        {
            "name": "ageGroup",
            "baseName": "age_group",
            "type": "string"
        },
        {
            "name": "availability",
            "baseName": "availability",
            "type": "string"
        },
        {
            "name": "averageReviewRating",
            "baseName": "average_review_rating",
            "type": "number"
        },
        {
            "name": "brand",
            "baseName": "brand",
            "type": "string"
        },
        {
            "name": "color",
            "baseName": "color",
            "type": "string"
        },
        {
            "name": "condition",
            "baseName": "condition",
            "type": "string"
        },
        {
            "name": "customLabel0",
            "baseName": "custom_label_0",
            "type": "string"
        },
        {
            "name": "customLabel1",
            "baseName": "custom_label_1",
            "type": "string"
        },
        {
            "name": "customLabel2",
            "baseName": "custom_label_2",
            "type": "string"
        },
        {
            "name": "customLabel3",
            "baseName": "custom_label_3",
            "type": "string"
        },
        {
            "name": "customLabel4",
            "baseName": "custom_label_4",
            "type": "string"
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string"
        },
        {
            "name": "freeShippingLabel",
            "baseName": "free_shipping_label",
            "type": "boolean"
        },
        {
            "name": "freeShippingLimit",
            "baseName": "free_shipping_limit",
            "type": "string"
        },
        {
            "name": "gender",
            "baseName": "gender",
            "type": "string"
        },
        {
            "name": "googleProductCategory",
            "baseName": "google_product_category",
            "type": "string"
        },
        {
            "name": "gtin",
            "baseName": "gtin",
            "type": "number"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "imageLink",
            "baseName": "image_link",
            "type": "Array<string>"
        },
        {
            "name": "itemGroupId",
            "baseName": "item_group_id",
            "type": "string"
        },
        {
            "name": "lastUpdatedTime",
            "baseName": "last_updated_time",
            "type": "number"
        },
        {
            "name": "link",
            "baseName": "link",
            "type": "string"
        },
        {
            "name": "material",
            "baseName": "material",
            "type": "string"
        },
        {
            "name": "minAdPrice",
            "baseName": "min_ad_price",
            "type": "string"
        },
        {
            "name": "mobileLink",
            "baseName": "mobile_link",
            "type": "string"
        },
        {
            "name": "mpn",
            "baseName": "mpn",
            "type": "string"
        },
        {
            "name": "numberOfRatings",
            "baseName": "number_of_ratings",
            "type": "number"
        },
        {
            "name": "numberOfReviews",
            "baseName": "number_of_reviews",
            "type": "number"
        },
        {
            "name": "pattern",
            "baseName": "pattern",
            "type": "string"
        },
        {
            "name": "price",
            "baseName": "price",
            "type": "string"
        },
        {
            "name": "productType",
            "baseName": "product_type",
            "type": "string"
        },
        {
            "name": "salePrice",
            "baseName": "sale_price",
            "type": "string"
        },
        {
            "name": "shipping",
            "baseName": "shipping",
            "type": "string"
        },
        {
            "name": "shippingHeight",
            "baseName": "shipping_height",
            "type": "string"
        },
        {
            "name": "shippingWeight",
            "baseName": "shipping_weight",
            "type": "string"
        },
        {
            "name": "shippingWidth",
            "baseName": "shipping_width",
            "type": "string"
        },
        {
            "name": "size",
            "baseName": "size",
            "type": "string"
        },
        {
            "name": "sizeSystem",
            "baseName": "size_system",
            "type": "string"
        },
        {
            "name": "sizeType",
            "baseName": "size_type",
            "type": "string"
        },
        {
            "name": "tax",
            "baseName": "tax",
            "type": "string"
        },
        {
            "name": "title",
            "baseName": "title",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return ItemAttributes.attributeTypeMap;
    }
}

