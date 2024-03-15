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





@protocol OAIAdsCreditRedeemResponse
@end

@interface OAIAdsCreditRedeemResponse : OAIObject

/* Returns true if the offer code was successfully applied(validateOnly=false) or can be applied(validateOnly=true). [optional]
 */
@property(nonatomic) NSNumber* success;
/* Error code type if error occurs [optional]
 */
@property(nonatomic) NSNumber* errorCode;
/* Reason for failure [optional]
 */
@property(nonatomic) NSString* errorMessage;

@end