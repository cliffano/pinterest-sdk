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


#import "OAIAnyType.h"
@protocol OAIAnyType;
@class OAIAnyType;



@protocol OAICampaignsAnalyticsResponseInner
@end

@interface OAICampaignsAnalyticsResponseInner : NSMutableDictionary

/* The ID of the campaing that this metrics belongs to. 
 */
@property(nonatomic) NSString* cAMPAIGNID;
/* Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`) [optional]
 */
@property(nonatomic) NSDate* dATE;

@end
