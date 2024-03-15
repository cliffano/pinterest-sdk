# OAICampaignResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **NSString*** | Campaign ID. | [optional] 
**adAccountId** | **NSString*** | Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. | [optional] 
**name** | **NSString*** | Campaign name. | [optional] 
**status** | [**OAIEntityStatus***](OAIEntityStatus.md) |  | [optional] 
**lifetimeSpendCap** | **NSNumber*** | Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time. | [optional] 
**dailySpendCap** | **NSNumber*** | Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time. | [optional] 
**orderLineId** | **NSString*** | Order line ID that appears on the invoice. | [optional] 
**trackingUrls** | [**OAIAdCommonTrackingUrls***](OAIAdCommonTrackingUrls.md) |  | [optional] 
**startTime** | **NSNumber*** | Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. | [optional] 
**endTime** | **NSNumber*** | Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. | [optional] 
**summaryStatus** | [**OAICampaignSummaryStatus***](OAICampaignSummaryStatus.md) |  | [optional] 
**objectiveType** | [**OAIObjectiveType***](OAIObjectiveType.md) |  | [optional] 
**createdTime** | **NSNumber*** | Campaign creation time. Unix timestamp in seconds. | [optional] 
**updatedTime** | **NSNumber*** | UTC timestamp. Last update time. | [optional] 
**type** | **NSString*** | Always \&quot;campaign\&quot;. | [optional] 
**isFlexibleDailyBudgets** | **NSNumber*** | Determines if a campaign has flexible daily budgets setup. | [optional] 
**isCampaignBudgetOptimization** | **NSNumber*** | Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

