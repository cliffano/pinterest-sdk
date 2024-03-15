# WWW::OpenAPIClient::Object::AdGroupResponse

## Load the model package
```perl
use WWW::OpenAPIClient::Object::AdGroupResponse;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **string** | Ad group name. | [optional] 
**status** | [**EntityStatus**](EntityStatus.md) | Ad group/entity status. | [optional] 
**budget_in_micro_currency** | **int** | Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. | [optional] 
**bid_in_micro_currency** | **int** | Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. | [optional] 
**optimization_goal_metadata** | [**AdGroupCommonOptimizationGoalMetadata**](AdGroupCommonOptimizationGoalMetadata.md) |  | [optional] 
**budget_type** | [**BudgetType**](BudgetType.md) |  | [optional] 
**start_time** | **int** | Ad group start time. Unix timestamp in seconds. Defaults to current time. | [optional] 
**end_time** | **int** | Ad group end time. Unix timestamp in seconds. | [optional] 
**targeting_spec** | [**TargetingSpec**](TargetingSpec.md) |  | [optional] 
**lifetime_frequency_cap** | **int** | Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Billable-event\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field. | [optional] 
**tracking_urls** | [**AdGroupCommonTrackingUrls**](AdGroupCommonTrackingUrls.md) |  | [optional] 
**auto_targeting_enabled** | **boolean** | Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;. | [optional] 
**placement_group** | [**PlacementGroupType**](PlacementGroupType.md) | &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;. | [optional] 
**pacing_delivery_type** | [**PacingDeliveryType**](PacingDeliveryType.md) |  | [optional] 
**campaign_id** | **string** | Campaign ID of the ad group. | [optional] 
**billable_event** | [**ActionType**](ActionType.md) |  | [optional] 
**bid_strategy_type** | **string** | Bid strategy type | [optional] 
**id** | **string** | Ad group ID. | [optional] 
**ad_account_id** | **string** | Advertiser ID. | [optional] 
**created_time** | **int** | Ad group creation time. Unix timestamp in seconds. | [optional] 
**updated_time** | **int** | Ad group last update time. Unix timestamp in seconds. | [optional] 
**type** | **string** | Always \&quot;adgroup\&quot;. | [optional] [default to &#39;adgroup&#39;]
**conversion_learning_mode_type** | **string** | oCPM learn mode | [optional] 
**summary_status** | [**AdGroupSummaryStatus**](AdGroupSummaryStatus.md) | Ad group summary status. | [optional] 
**feed_profile_id** | **string** | Feed Profile ID associated to the adgroup. | [optional] 
**dca_assets** | **object** | [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

