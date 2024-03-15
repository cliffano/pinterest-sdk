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


#import "OAIActionType.h"
#import "OAIAdGroupCommonOptimizationGoalMetadata.h"
#import "OAIAdGroupCommonTrackingUrls.h"
#import "OAIBudgetType.h"
#import "OAIEntityStatus.h"
#import "OAIPacingDeliveryType.h"
#import "OAIPlacementGroupType.h"
#import "OAITargetingSpec.h"
@protocol OAIActionType;
@class OAIActionType;
@protocol OAIAdGroupCommonOptimizationGoalMetadata;
@class OAIAdGroupCommonOptimizationGoalMetadata;
@protocol OAIAdGroupCommonTrackingUrls;
@class OAIAdGroupCommonTrackingUrls;
@protocol OAIBudgetType;
@class OAIBudgetType;
@protocol OAIEntityStatus;
@class OAIEntityStatus;
@protocol OAIPacingDeliveryType;
@class OAIPacingDeliveryType;
@protocol OAIPlacementGroupType;
@class OAIPlacementGroupType;
@protocol OAITargetingSpec;
@class OAITargetingSpec;



@protocol OAIAdGroupCommon
@end

@interface OAIAdGroupCommon : OAIObject

/* Ad group name. [optional]
 */
@property(nonatomic) NSString* name;
/* Ad group/entity status. [optional]
 */
@property(nonatomic) OAIEntityStatus* status;
/* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. [optional]
 */
@property(nonatomic) NSNumber* budgetInMicroCurrency;
/* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. [optional]
 */
@property(nonatomic) NSNumber* bidInMicroCurrency;

@property(nonatomic) OAIAdGroupCommonOptimizationGoalMetadata* optimizationGoalMetadata;

@property(nonatomic) OAIBudgetType* budgetType;
/* Ad group start time. Unix timestamp in seconds. Defaults to current time. [optional]
 */
@property(nonatomic) NSNumber* startTime;
/* Ad group end time. Unix timestamp in seconds. [optional]
 */
@property(nonatomic) NSNumber* endTime;

@property(nonatomic) OAITargetingSpec* targetingSpec;
/* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field. [optional]
 */
@property(nonatomic) NSNumber* lifetimeFrequencyCap;

@property(nonatomic) OAIAdGroupCommonTrackingUrls* trackingUrls;
/* Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. [optional]
 */
@property(nonatomic) NSNumber* autoTargetingEnabled;
/* <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>. [optional]
 */
@property(nonatomic) OAIPlacementGroupType* placementGroup;

@property(nonatomic) OAIPacingDeliveryType* pacingDeliveryType;
/* Campaign ID of the ad group. [optional]
 */
@property(nonatomic) NSString* campaignId;

@property(nonatomic) OAIActionType* billableEvent;
/* Bid strategy type [optional]
 */
@property(nonatomic) NSString* bidStrategyType;

@end
