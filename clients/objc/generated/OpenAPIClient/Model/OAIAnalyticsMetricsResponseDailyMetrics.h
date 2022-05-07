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





@protocol OAIAnalyticsMetricsResponseDailyMetrics
@end

@interface OAIAnalyticsMetricsResponseDailyMetrics : OAIObject

/* Metrics availablity, e.g., \"READY\". [optional]
 */
@property(nonatomic) NSString* dataStatus;
/* Metrics date (UTC): YYYY-MM-DD. [optional]
 */
@property(nonatomic) NSString* date;
/* The metric name and daily value for each requested metric [optional]
 */
@property(nonatomic) NSDictionary<NSString*, NSNumber*>* metrics;

@end
