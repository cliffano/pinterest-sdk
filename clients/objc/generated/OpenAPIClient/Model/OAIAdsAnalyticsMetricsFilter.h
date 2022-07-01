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


#import "OAIAdsAnalyticsFilterColumn.h"
#import "OAIAdsAnalyticsFilterOperator.h"
@protocol OAIAdsAnalyticsFilterColumn;
@class OAIAdsAnalyticsFilterColumn;
@protocol OAIAdsAnalyticsFilterOperator;
@class OAIAdsAnalyticsFilterOperator;



@protocol OAIAdsAnalyticsMetricsFilter
@end

@interface OAIAdsAnalyticsMetricsFilter : OAIObject


@property(nonatomic) OAIAdsAnalyticsFilterColumn* field;

@property(nonatomic) OAIAdsAnalyticsFilterOperator* operator;
/* List of values for filtering [optional]
 */
@property(nonatomic) NSArray<NSNumber*>* values;

@end
