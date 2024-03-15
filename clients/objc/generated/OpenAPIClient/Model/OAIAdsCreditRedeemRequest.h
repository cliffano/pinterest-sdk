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





@protocol OAIAdsCreditRedeemRequest
@end

@interface OAIAdsCreditRedeemRequest : OAIObject

/* Takes in a SHA256 hash of the offerCode. 
 */
@property(nonatomic) NSString* offerCodeHash;
/* If true, only validate if we can redeem offer code. Otherwise it will actually apply the offer code to the account 
 */
@property(nonatomic) NSNumber* validateOnly;

@end
