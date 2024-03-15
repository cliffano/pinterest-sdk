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





@protocol OAITargetingSpecSHOPPINGRETARGETING
@end

@interface OAITargetingSpecSHOPPINGRETARGETING : OAIObject

/* Number of days ago to start lookback timeframe for dynamic retargeting [optional]
 */
@property(nonatomic) NSNumber* lookbackWindow;
/* Event types to target for dynamic retargeting [optional]
 */
@property(nonatomic) NSArray<NSNumber*>* tagTypes;
/* Number of days ago to stop lookback timeframe for dynamic retargeting [optional]
 */
@property(nonatomic) NSNumber* exclusionWindow;

@end
