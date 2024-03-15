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





@protocol OAIIntegrationRecord
@end

@interface OAIIntegrationRecord : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* externalBusinessId;

@property(nonatomic) NSString* connectedMerchantId;

@property(nonatomic) NSString* connectedUserId;

@property(nonatomic) NSString* connectedAdvertiserId;

@property(nonatomic) NSString* connectedLbaId;

@property(nonatomic) NSString* connectedTagId;

@property(nonatomic) NSString* partnerAccessToken;

@property(nonatomic) NSString* partnerRefreshToken;

@property(nonatomic) NSString* partnerPrimaryEmail;

@property(nonatomic) NSNumber* partnerAccessTokenExpiry;

@property(nonatomic) NSNumber* partnerRefreshTokenExpiry;

@property(nonatomic) NSString* scopes;

@property(nonatomic) NSString* partnerMetadata;

@property(nonatomic) NSString* additionalId1;

@property(nonatomic) NSNumber* createdTime;

@property(nonatomic) NSNumber* updatedTime;

@end
