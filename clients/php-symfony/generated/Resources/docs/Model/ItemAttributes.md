# ItemAttributes

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**adLink** | **string** | Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. | [optional] 
**additionalImageLink** | **string** | The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https:// | [optional] 
**adult** | **bool** | Set this attribute to TRUE if you&#39;re submitting items that are considered “adult”. These will not be shown on Pinterest. | [optional] 
**ageGroup** | **string** | The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’. | [optional] 
**availability** | **string** | The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’. | [optional] 
**averageReviewRating** | **float** | Average reviews for the item. Can be a number from 1-5. | [optional] 
**brand** | **string** | The brand of the product. | [optional] 
**color** | **string** | The primary color of the product. | [optional] 
**condition** | **string** | The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’. | [optional] 
**customLabel0** | **string** | Custom grouping of products. | [optional] 
**customLabel1** | **string** | Custom grouping of products. | [optional] 
**customLabel2** | **string** | Custom grouping of products. | [optional] 
**customLabel3** | **string** | Custom grouping of products. | [optional] 
**customLabel4** | **string** | Custom grouping of products. | [optional] 
**description** | **string** | The description of the product. | [optional] 
**freeShippingLabel** | **bool** | The item is free to ship. | [optional] 
**freeShippingLimit** | **string** | The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. | [optional] 
**gender** | **string** | The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’. | [optional] 
**googleProductCategory** | **string** | The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. | [optional] 
**gtin** | **int** | The unique universal product identifier. | [optional] 
**id** | **string** | The user-created unique ID that represents the product. Only Unicode characters are accepted. | [optional] 
**imageLink** | **string** | The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https:// | [optional] 
**itemGroupId** | **string** | The parent ID of the product. | [optional] 
**lastUpdatedTime** | **int** | The millisecond timestamp when the item was lastly modified by the merchant. | [optional] 
**link** | **string** | The landing page for the product. | [optional] 
**material** | **string** | The material used to make the product. | [optional] 
**minAdPrice** | **string** | The minimum advertised price of the product. It supports the following formats, \&quot;19.99 USD\&quot;, \&quot;19.99USD\&quot; and \&quot;19.99\&quot;. If the currency is not included, we default to US dollars. | [optional] 
**mobileLink** | **string** | The mobile-optimized version of your landing page. Must begin with http:// or https://. | [optional] 
**mpn** | **string** | Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer. | [optional] 
**numberOfRatings** | **int** | The number of ratings for the item. | [optional] 
**numberOfReviews** | **int** | The number of reviews available for the item. | [optional] 
**pattern** | **string** | The description of the pattern used for the product. | [optional] 
**price** | **string** | The price of the product. It supports the following formats, \&quot;24.99 USD\&quot;, \&quot;24.99USD\&quot; and \&quot;24.99\&quot;. If the currency is not included, we default to US dollars. | [optional] 
**productType** | **string** | The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ &gt; “. The &gt; must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe. | [optional] 
**salePrice** | **string** | The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \&quot;14.99 USD\&quot;, \&quot;14.99USD\&quot; and \&quot;14.99\&quot;. If the currency is not included, we default to US dollars. | [optional] 
**shipping** | **string** | Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required. | [optional] 
**shippingHeight** | **string** | The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. | [optional] 
**shippingWeight** | **string** | The weight of the product. Ensure there is a space between the numeric string and the metric. | [optional] 
**shippingWidth** | **string** | The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. | [optional] 
**size** | **string** | The size of the product. | [optional] 
**sizeSystem** | **string** | Indicates the country’s sizing system in which you are submitting your product. | [optional] 
**sizeType** | **string** | Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’. | [optional] 
**tax** | **string** | Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. | [optional] 
**title** | **string** | The name of the product. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


