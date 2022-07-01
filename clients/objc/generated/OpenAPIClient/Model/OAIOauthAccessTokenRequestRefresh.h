#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIOauthAccessTokenRequest.h"
#import "OAIOauthAccessTokenRequestRefreshAllOf.h"
@protocol OAIOauthAccessTokenRequest;
@class OAIOauthAccessTokenRequest;
@protocol OAIOauthAccessTokenRequestRefreshAllOf;
@class OAIOauthAccessTokenRequestRefreshAllOf;



@protocol OAIOauthAccessTokenRequestRefresh
@end

@interface OAIOauthAccessTokenRequestRefresh : OAIOauthAccessTokenRequest


@property(nonatomic) NSString* refreshToken;

@property(nonatomic) NSString* scope;

@end
