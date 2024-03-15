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


#import "OAICountry.h"
@protocol OAICountry;
@class OAICountry;



@protocol OAIAdAccountCreateRequest
@end

@interface OAIAdAccountCreateRequest : OAIObject


@property(nonatomic) OAICountry* country;
/* Ad Account name. [optional]
 */
@property(nonatomic) NSString* name;
/* Advertiser's owning user ID. [optional]
 */
@property(nonatomic) NSString* ownerUserId;

@end