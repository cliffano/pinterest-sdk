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





@protocol OAITemplateResponseDateRangeRelativeDateRange
@end

@interface OAITemplateResponseDateRangeRelativeDateRange : OAIObject

/* The date range type [optional]
 */
@property(nonatomic) NSString* type;
/* The start date of the date range [optional]
 */
@property(nonatomic) NSNumber* startDaysInPast;
/* The end date of the date range [optional]
 */
@property(nonatomic) NSNumber* endDaysInPast;

@end
