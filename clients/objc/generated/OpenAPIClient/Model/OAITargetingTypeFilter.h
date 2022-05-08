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


#import "OAIAdsAnalyticsTargetingType.h"
@protocol OAIAdsAnalyticsTargetingType;
@class OAIAdsAnalyticsTargetingType;



@protocol OAITargetingTypeFilter
@end

@interface OAITargetingTypeFilter : OAIObject

/* List of targeting types [optional]
 */
@property(nonatomic) NSArray<OAIAdsAnalyticsTargetingType>* targetingTypes;

@end