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


#import "OAIBillingProfilesResponse.h"
@protocol OAIBillingProfilesResponse;
@class OAIBillingProfilesResponse;



@protocol OAIBillingProfilesGet200Response
@end

@interface OAIBillingProfilesGet200Response : OAIObject


@property(nonatomic) NSArray<OAIBillingProfilesResponse>* items;

@property(nonatomic) NSString* bookmark;

@end
