#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIAdCommonTrackingUrls.h"
#import "OAICampaignSummaryStatus.h"
#import "OAIEntityStatus.h"
@protocol OAIAdCommonTrackingUrls;
@class OAIAdCommonTrackingUrls;
@protocol OAICampaignSummaryStatus;
@class OAICampaignSummaryStatus;
@protocol OAIEntityStatus;
@class OAIEntityStatus;



@protocol OAICampaignCreateCommon
@end

@interface OAICampaignCreateCommon : OAIObject

/* Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. [optional]
 */
@property(nonatomic) NSString* adAccountId;
/* Campaign name. [optional]
 */
@property(nonatomic) NSString* name;

@property(nonatomic) OAIEntityStatus* status;
/* Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time. [optional]
 */
@property(nonatomic) NSNumber* lifetimeSpendCap;
/* Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time. [optional]
 */
@property(nonatomic) NSNumber* dailySpendCap;
/* Order line ID that appears on the invoice. [optional]
 */
@property(nonatomic) NSString* orderLineId;

@property(nonatomic) OAIAdCommonTrackingUrls* trackingUrls;
/* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. [optional]
 */
@property(nonatomic) NSNumber* startTime;
/* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. [optional]
 */
@property(nonatomic) NSNumber* endTime;

@property(nonatomic) OAICampaignSummaryStatus* summaryStatus;
/* Determine if a campaign has flexible daily budgets setup. [optional]
 */
@property(nonatomic) NSNumber* isFlexibleDailyBudgets;
/* When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account. [optional]
 */
@property(nonatomic) NSNumber* defaultAdGroupBudgetInMicroCurrency;
/* Specifies whether the campaign was created in the automated campaign flow [optional]
 */
@property(nonatomic) NSNumber* isAutomatedCampaign;

@end
