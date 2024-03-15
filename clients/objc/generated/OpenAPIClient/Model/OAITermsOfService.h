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





@protocol OAITermsOfService
@end

@interface OAITermsOfService : OAIObject

/* The ID of the terms of service [optional]
 */
@property(nonatomic) NSString* _id;
/* The terms of service content [optional]
 */
@property(nonatomic) NSString* html;
/* Whether the ad account has accepted terms of service. [optional]
 */
@property(nonatomic) NSNumber* hasAccepted;
/* The ID of the ad account. [optional]
 */
@property(nonatomic) NSString* adAccountId;

@end
