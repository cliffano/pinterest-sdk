#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIEntityStatus.h"
#import "OAITrackingUrls.h"
@protocol OAIEntityStatus;
@class OAIEntityStatus;
@protocol OAITrackingUrls;
@class OAITrackingUrls;



@protocol OAICampaignCommon
@end

@interface OAICampaignCommon : OAIObject

/* Campaign's Advertiser ID. 
 */
@property(nonatomic) NSString* adAccountId;
/* Campaign name. [optional]
 */
@property(nonatomic) NSString* name;

@property(nonatomic) OAIEntityStatus* status;
/* Campaign total spending cap. [optional]
 */
@property(nonatomic) NSNumber* lifetimeSpendCap;
/* Campaign daily spending cap. [optional]
 */
@property(nonatomic) NSNumber* dailySpendCap;
/* Order line ID that appears on the invoice. [optional]
 */
@property(nonatomic) NSString* orderLineId;

@property(nonatomic) OAITrackingUrls* trackingUrls;
/* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. [optional]
 */
@property(nonatomic) NSNumber* startTime;
/* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. [optional]
 */
@property(nonatomic) NSNumber* endTime;

@end
