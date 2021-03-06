#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIActionType.h"
#import "OAIAdGroupResponseAllOf.h"
#import "OAIAdGroupResponseAllOf1.h"
#import "OAIAdGroupSummaryStatus.h"
#import "OAIEntityStatus.h"
#import "OAIPacingDeliveryType.h"
#import "OAIPlacementGroupType.h"
#import "OAITrackingUrls.h"
@protocol OAIActionType;
@class OAIActionType;
@protocol OAIAdGroupResponseAllOf;
@class OAIAdGroupResponseAllOf;
@protocol OAIAdGroupResponseAllOf1;
@class OAIAdGroupResponseAllOf1;
@protocol OAIAdGroupSummaryStatus;
@class OAIAdGroupSummaryStatus;
@protocol OAIEntityStatus;
@class OAIEntityStatus;
@protocol OAIPacingDeliveryType;
@class OAIPacingDeliveryType;
@protocol OAIPlacementGroupType;
@class OAIPlacementGroupType;
@protocol OAITrackingUrls;
@class OAITrackingUrls;



@protocol OAIAdGroupResponse
@end

@interface OAIAdGroupResponse : OAIObject

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
/* Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. [optional]
 */
@property(nonatomic) NSString* budgetType;
/* Ad group start time. Unix timestamp in seconds. Defaults to current time. [optional]
 */
@property(nonatomic) NSNumber* startTime;
/* Ad group end time. Unix timestamp in seconds. [optional]
 */
@property(nonatomic) NSNumber* endTime;
/* Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}' [optional]
 */
@property(nonatomic) NSDictionary<NSString*, NSArray<NSString*>*>* targetingSpec;
/* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field. [optional]
 */
@property(nonatomic) NSNumber* lifetimeFrequencyCap;
/* Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>. [optional]
 */
@property(nonatomic) OAITrackingUrls* trackingUrls;
/* Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. [optional]
 */
@property(nonatomic) NSNumber* autoTargetingEnabled;
/* <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>. [optional]
 */
@property(nonatomic) OAIPlacementGroupType* placementGroup;
/* Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. [optional]
 */
@property(nonatomic) OAIPacingDeliveryType* pacingDeliveryType;
/* oCPM learn mode [optional]
 */
@property(nonatomic) NSString* conversionLearningModeType;
/* Ad group summary status. [optional]
 */
@property(nonatomic) OAIAdGroupSummaryStatus* summaryStatus;
/* Feed Profile ID associated to the adgroup. [optional]
 */
@property(nonatomic) NSString* feedProfileId;
/* Campaign ID of the ad group. [optional]
 */
@property(nonatomic) NSString* campaignId;

@property(nonatomic) OAIActionType* billableEvent;
/* Ad group ID. [optional]
 */
@property(nonatomic) NSString* _id;
/* Always \"adgroup\". [optional]
 */
@property(nonatomic) NSString* type;
/* Advertiser ID. [optional]
 */
@property(nonatomic) NSString* adAccountId;
/* Ad group creation time. Unix timestamp in seconds. [optional]
 */
@property(nonatomic) NSNumber* createdTime;
/* Ad group last update time. Unix timestamp in seconds. [optional]
 */
@property(nonatomic) NSNumber* updatedTime;

@end
