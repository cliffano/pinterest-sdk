# CatalogsFeedValidationWarnings

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ad_link_format_warning** | Option<**i32**> | Some items have ad links that are formatted incorrectly. | [optional]
**ad_link_same_as_link** | Option<**i32**> | Some items have ad link URLs that are duplicates of the link URLs for those items. | [optional]
**title_length_too_long** | Option<**i32**> | The title for some items were truncated because they contain too many characters. | [optional]
**description_length_too_long** | Option<**i32**> | The description for some items were truncated because they contain too many characters. | [optional]
**gender_invalid** | Option<**i32**> | Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. | [optional]
**age_group_invalid** | Option<**i32**> | Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. | [optional]
**size_type_invalid** | Option<**i32**> | Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. | [optional]
**size_system_invalid** | Option<**i32**> | Some items have size system values which are not one of the supported size systems. | [optional]
**link_format_warning** | Option<**i32**> | Some items have an invalid product link which contains invalid UTM tracking paramaters. | [optional]
**sales_price_invalid** | Option<**i32**> | Some items have sale price values that are higher than the original price of the item. | [optional]
**product_category_depth_warning** | Option<**i32**> | Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences. | [optional]
**adwords_format_warning** | Option<**i32**> | Some items have adwords_redirect links that are formatted incorrectly. | [optional]
**adwords_same_as_link** | Option<**i32**> | Some items have adwords_redirect URLs that are duplicates of the link URLs for those items. | [optional]
**duplicate_headers** | Option<**i32**> | Your feed contains duplicate headers. | [optional]
**fetch_same_signature** | Option<**i32**> | Ingestion completed early because there are no changes to your feed since the last successful update. | [optional]
**additional_image_link_length_too_long** | Option<**i32**> | Some items have additional_image_link URLs that contain too many characters, so those items will not be published. | [optional]
**additional_image_link_warning** | Option<**i32**> | Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items. | [optional]
**image_link_warning** | Option<**i32**> | Some items have image_link URLs that are formatted incorrectly and will not be published with those items. | [optional]
**shipping_invalid** | Option<**i32**> | Some items have shipping values that are formatted incorrectly. | [optional]
**tax_invalid** | Option<**i32**> | Some items have tax values that are formatted incorrectly. | [optional]
**shipping_weight_invalid** | Option<**i32**> | Some items have invalid shipping_weight values. | [optional]
**expiration_date_invalid** | Option<**i32**> | Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date. | [optional]
**availability_date_invalid** | Option<**i32**> | Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date. | [optional]
**sale_date_invalid** | Option<**i32**> | Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date. | [optional]
**weight_unit_invalid** | Option<**i32**> | Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit. | [optional]
**is_bundle_invalid** | Option<**i32**> | Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products. | [optional]
**updated_time_invalid** | Option<**i32**> | Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time. | [optional]
**custom_label_length_too_long** | Option<**i32**> | Some items have custom_label values that are too long, those items will be published without that custom label. | [optional]
**product_type_length_too_long** | Option<**i32**> | Some items have product_type values that are too long, those items will be published without that product type. | [optional]
**too_many_additional_image_links** | Option<**i32**> | Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images. | [optional]
**multipack_invalid** | Option<**i32**> | Some items have invalid multipack values. | [optional]
**indexed_product_count_large_delta** | Option<**i32**> | The product count has increased or decreased significantly compared to the last successful ingestion. | [optional]
**item_additional_image_download_failure** | Option<**i32**> | Some items include additional_image_links that can't be found. | [optional]
**optional_product_category_missing** | Option<**i32**> | Some items are missing a google_product_category. | [optional]
**optional_product_category_invalid** | Option<**i32**> | Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy. | [optional]
**optional_condition_missing** | Option<**i32**> | Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences. | [optional]
**optional_condition_invalid** | Option<**i32**> | Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. | [optional]
**ios_deep_link_invalid** | Option<**i32**> | Some items include invalid ios_deep_link values. | [optional]
**android_deep_link_invalid** | Option<**i32**> | Some items include invalid android_deep_link. | [optional]
**utm_source_auto_corrected** | Option<**i32**> | Some items include utm_source values that are formatted incorrectly and have been automatically corrected. | [optional]
**country_does_not_map_to_currency** | Option<**i32**> | Some items include a currency that doesn't match the usual currency for the location where that product is sold or shipped. | [optional]
**min_ad_price_invalid** | Option<**i32**> | Some items include min_ad_price values that are formatted incorrectly. | [optional]
**gtin_invalid** | Option<**i32**> | Some items include incorrectly formatted GTINs. | [optional]
**inconsistent_currency_values** | Option<**i32**> | Some items include inconsistent currencies in price fields. | [optional]
**sales_price_too_low** | Option<**i32**> | Some items include sales price that is much lower than the list price. | [optional]
**shipping_width_invalid** | Option<**i32**> | Some items include incorrectly formatted shipping_width. | [optional]
**shipping_height_invalid** | Option<**i32**> | Some items include incorrectly formatted shipping_height. | [optional]
**sales_price_too_high** | Option<**i32**> | Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price. | [optional]
**mpn_invalid** | Option<**i32**> | Some items include incorrectly formatted MPNs. | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


