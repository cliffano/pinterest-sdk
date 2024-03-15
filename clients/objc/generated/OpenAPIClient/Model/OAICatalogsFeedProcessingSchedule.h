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





@protocol OAICatalogsFeedProcessingSchedule
@end

@interface OAICatalogsFeedProcessingSchedule : OAIObject

/* A time in format HH:MM with leading 0 (zero) 
 */
@property(nonatomic) NSString* time;
/* The timezone considered for the processing schedule time. 
 */
@property(nonatomic) NSString* timezone;

@end