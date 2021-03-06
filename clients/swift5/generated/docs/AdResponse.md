# AdResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**adGroupId** | **String** | ID of the ad group that contains the ad. | [optional] 
**androidDeepLink** | **String** | Deep link URL for Android devices. Not currently available. Using this field will generate an error. | [optional] 
**carouselAndroidDeepLinks** | **[String]** | Comma-separated deep links for the carousel pin on Android. | [optional] 
**carouselDestinationUrls** | **[String]** | Comma-separated destination URLs for the carousel pin to promote. | [optional] 
**carouselIosDeepLinks** | **[String]** | Comma-separated deep links for the carousel pin on iOS. | [optional] 
**clickTrackingUrl** | **String** | Tracking url for the ad clicks. | [optional] 
**creativeType** | **String** | Ad creative type enum | [optional] 
**destinationUrl** | **String** | Destination URL. | [optional] 
**iosDeepLink** | **String** | Deep link URL for iOS devices. Not currently available. Using this field will generate an error. | [optional] 
**isPinDeleted** | **Bool** | Is original pin deleted? | [optional] 
**isRemovable** | **Bool** | Is pin repinnable? | [optional] 
**name** | **String** | Name of the ad - 255 chars max. | [optional] 
**pinId** | **String** | Pin ID. | [optional] 
**status** | [**EntityStatus**](EntityStatus.md) |  | [optional] 
**trackingUrls** | [**TrackingUrls**](TrackingUrls.md) |  | [optional] 
**viewTrackingUrl** | **String** | Tracking URL for ad impressions. | [optional] 
**adAccountId** | **String** | The ID of the advertiser that this ad belongs to. | [optional] 
**campaignId** | **String** | ID of the ad campaign that contains this ad. | [optional] 
**collectionItemsDestinationUrlTemplate** | **String** | Destination URL template for all items within a collections drawer. | [optional] 
**createdTime** | **Int** | Pin creation time. Unix timestamp in seconds. | [optional] 
**id** | **String** | The ID of this ad. | [optional] 
**rejectedReasons** | **[String]** | Enum reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;. | [optional] 
**rejectionLabels** | **[String]** | Text reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;. | [optional] 
**reviewStatus** | **String** | Ad review status | [optional] 
**type** | **String** | Always \&quot;ad\&quot;. | [optional] 
**updatedTime** | **Int** | Last update time. Unix timestamp in seconds. | [optional] 
**summaryStatus** | [**PinPromotionSummaryStatus**](PinPromotionSummaryStatus.md) | Ad summary status | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


