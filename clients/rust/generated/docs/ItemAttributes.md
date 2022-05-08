# ItemAttributes

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ad_link** | Option<**String**> | Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. | [optional]
**additional_image_link** | Option<**Vec<String>**> | The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https:// | [optional]
**adult** | Option<**bool**> | Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest. | [optional]
**age_group** | Option<**String**> | The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’. | [optional]
**availability** | Option<**String**> | The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’. | [optional]
**average_review_rating** | Option<**f32**> | Average reviews for the item. Can be a number from 1-5. | [optional]
**brand** | Option<**String**> | The brand of the product. | [optional]
**color** | Option<**String**> | The primary color of the product. | [optional]
**condition** | Option<**String**> | The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’. | [optional]
**custom_label_0** | Option<**String**> | Custom grouping of products. | [optional]
**custom_label_1** | Option<**String**> | Custom grouping of products. | [optional]
**custom_label_2** | Option<**String**> | Custom grouping of products. | [optional]
**custom_label_3** | Option<**String**> | Custom grouping of products. | [optional]
**custom_label_4** | Option<**String**> | Custom grouping of products. | [optional]
**description** | Option<**String**> | The description of the product. | [optional]
**free_shipping_label** | Option<**bool**> | The item is free to ship. | [optional]
**free_shipping_limit** | Option<**String**> | The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. | [optional]
**gender** | Option<**String**> | The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’. | [optional]
**google_product_category** | Option<**String**> | The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. | [optional]
**gtin** | Option<**i32**> | The unique universal product identifier. | [optional]
**id** | Option<**String**> | The user-created unique ID that represents the product. Only Unicode characters are accepted. | [optional]
**image_link** | Option<**Vec<String>**> | The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https:// | [optional]
**item_group_id** | Option<**String**> | The parent ID of the product. | [optional]
**last_updated_time** | Option<**i64**> | The millisecond timestamp when the item was lastly modified by the merchant. | [optional]
**link** | Option<**String**> | The landing page for the product. | [optional]
**material** | Option<**String**> | The material used to make the product. | [optional]
**min_ad_price** | Option<**String**> | The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars. | [optional]
**mobile_link** | Option<**String**> | The mobile-optimized version of your landing page. Must begin with http:// or https://. | [optional]
**mpn** | Option<**String**> | Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer. | [optional]
**number_of_ratings** | Option<**i32**> | The number of ratings for the item. | [optional]
**number_of_reviews** | Option<**i32**> | The number of reviews available for the item. | [optional]
**pattern** | Option<**String**> | The description of the pattern used for the product. | [optional]
**price** | Option<**String**> | The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars. | [optional]
**product_type** | Option<**String**> | The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe. | [optional]
**sale_price** | Option<**String**> | The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars. | [optional]
**shipping** | Option<**String**> | Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required. | [optional]
**shipping_height** | Option<**String**> | The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. | [optional]
**shipping_weight** | Option<**String**> | The weight of the product. Ensure there is a space between the numeric string and the metric. | [optional]
**shipping_width** | Option<**String**> | The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. | [optional]
**size** | Option<**String**> | The size of the product. | [optional]
**size_system** | Option<**String**> | Indicates the country’s sizing system in which you are submitting your product. | [optional]
**size_type** | Option<**String**> | Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’. | [optional]
**tax** | Option<**String**> | Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. | [optional]
**title** | Option<**String**> | The name of the product. | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

