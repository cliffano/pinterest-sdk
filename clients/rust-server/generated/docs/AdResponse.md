# AdResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ad_group_id** | **String** | ID of the ad group that contains the ad. | [optional] [default to None]
**android_deep_link** | **String** | Deep link URL for Android devices. Not currently available. Using this field will generate an error. | [optional] [default to None]
**carousel_android_deep_links** | **Vec<String>** | Comma-separated deep links for the carousel pin on Android. | [optional] [default to None]
**carousel_destination_urls** | **Vec<String>** | Comma-separated destination URLs for the carousel pin to promote. | [optional] [default to None]
**carousel_ios_deep_links** | **Vec<String>** | Comma-separated deep links for the carousel pin on iOS. | [optional] [default to None]
**click_tracking_url** | **String** | Tracking url for the ad clicks. | [optional] [default to None]
**creative_type** | [***models::CreativeType**](CreativeType.md) |  | [optional] [default to None]
**destination_url** | **String** | Destination URL. | [optional] [default to None]
**ios_deep_link** | **String** | Deep link URL for iOS devices. Not currently available. Using this field will generate an error. | [optional] [default to None]
**is_pin_deleted** | **bool** | Is original pin deleted? | [optional] [default to None]
**is_removable** | **bool** | Is pin repinnable? | [optional] [default to None]
**name** | **String** | Name of the ad - 255 chars max. | [optional] [default to None]
**status** | [***models::EntityStatus**](EntityStatus.md) |  | [optional] [default to None]
**tracking_urls** | [***models::AdCommonTrackingUrls**](AdCommon_tracking_urls.md) |  | [optional] [default to None]
**view_tracking_url** | **String** | Tracking URL for ad impressions. | [optional] [default to None]
**lead_form_id** | **String** | Lead form ID for lead ad generation. | [optional] [default to None]
**grid_click_type** | [***models::GridClickType**](GridClickType.md) |  | [optional] [default to None]
**customizable_cta_type** | **String** | Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only) | [optional] [default to None]
**quiz_pin_data** | [***models::AdCommonQuizPinData**](AdCommon_quiz_pin_data.md) |  | [optional] [default to None]
**pin_id** | **String** | Pin ID. | [optional] [default to None]
**ad_account_id** | **String** | The ID of the advertiser that this ad belongs to. | [optional] [default to None]
**campaign_id** | **String** | ID of the ad campaign that contains this ad. | [optional] [default to None]
**collection_items_destination_url_template** | **String** | Destination URL template for all items within a collections drawer. | [optional] [default to None]
**created_time** | **i32** | Pin creation time. Unix timestamp in seconds. | [optional] [default to None]
**id** | **String** | The ID of this ad. | [optional] [default to None]
**rejected_reasons** | **Vec<String>** | Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". | [optional] [default to None]
**rejection_labels** | **Vec<String>** | Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". | [optional] [default to None]
**review_status** | **String** | Ad review status | [optional] [default to None]
**r#type** | **String** | Always \"ad\". | [optional] [default to None]
**updated_time** | **i32** | Last update time. Unix timestamp in seconds. | [optional] [default to None]
**summary_status** | [***models::PinPromotionSummaryStatus**](PinPromotionSummaryStatus.md) | Ad summary status | [optional] [default to None]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


