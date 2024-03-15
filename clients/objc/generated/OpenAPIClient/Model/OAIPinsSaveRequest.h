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





@protocol OAIPinsSaveRequest
@end

@interface OAIPinsSaveRequest : OAIObject

/* Unique identifier of the board to which the pin will be saved. [optional]
 */
@property(nonatomic) NSString* boardId;
/* Unique identifier of the board section to which the pin will be saved. [optional]
 */
@property(nonatomic) NSString* boardSectionId;

@end
