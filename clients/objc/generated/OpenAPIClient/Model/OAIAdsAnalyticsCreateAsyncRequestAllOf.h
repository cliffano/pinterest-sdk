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


#import "OAIConversionAttributionWindowDays.h"
#import "OAIConversionReportAttributionType.h"
#import "OAIConversionReportTimeType.h"
#import "OAIGranularity.h"
@protocol OAIConversionAttributionWindowDays;
@class OAIConversionAttributionWindowDays;
@protocol OAIConversionReportAttributionType;
@class OAIConversionReportAttributionType;
@protocol OAIConversionReportTimeType;
@class OAIConversionReportTimeType;
@protocol OAIGranularity;
@class OAIGranularity;



@protocol OAIAdsAnalyticsCreateAsyncRequestAllOf
@end

@interface OAIAdsAnalyticsCreateAsyncRequestAllOf : OAIObject

/* Metric report start date (UTC). Format: YYYY-MM-DD 
 */
@property(nonatomic) NSString* startDate;
/* Metric report end date (UTC). Format: YYYY-MM-DD 
 */
@property(nonatomic) NSString* endDate;
/* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly 
 */
@property(nonatomic) OAIGranularity* granularity;
/* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. [optional]
 */
@property(nonatomic) OAIConversionAttributionWindowDays* clickWindowDays;
/* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. [optional]
 */
@property(nonatomic) OAIConversionAttributionWindowDays* engagementWindowDays;
/* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. [optional]
 */
@property(nonatomic) OAIConversionAttributionWindowDays* viewWindowDays;
/* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. [optional]
 */
@property(nonatomic) OAIConversionReportTimeType* conversionReportTime;
/* List of types of attribution for the conversion report [optional]
 */
@property(nonatomic) NSArray<OAIConversionReportAttributionType>* attributionTypes;

@end
