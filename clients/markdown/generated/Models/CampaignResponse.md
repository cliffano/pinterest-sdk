# CampaignResponse
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | Campaign ID. | [default to null]
**ad\_account\_id** | **String** | Campaign&#39;s Advertiser ID. | [default to null]
**name** | **String** | Campaign name. | [optional] [default to null]
**status** | [**EntityStatus**](EntityStatus.md) |  | [optional] [default to ACTIVE]
**lifetime\_spend\_cap** | **Integer** | Campaign total spending cap. | [optional] [default to null]
**daily\_spend\_cap** | **Integer** | Campaign daily spending cap. | [optional] [default to null]
**order\_line\_id** | **String** | Order line ID that appears on the invoice. | [optional] [default to null]
**tracking\_urls** | [**TrackingUrls**](TrackingUrls.md) |  | [optional] [default to null]
**start\_time** | **Integer** | Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. | [optional] [default to null]
**end\_time** | **Integer** | Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. | [optional] [default to null]
**objective\_type** | [**ObjectiveType**](ObjectiveType.md) |  | [optional] [default to null]
**created\_time** | **Integer** | Campaign creation time. Unix timestamp in seconds. | [optional] [default to null]
**updated\_time** | **Integer** | UTC timestamp. Last update time. | [optional] [default to null]
**type** | **String** | Always \&quot;campaign\&quot;. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

