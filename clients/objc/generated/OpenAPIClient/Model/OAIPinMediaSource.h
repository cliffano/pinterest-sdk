#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIPinMediaSourceImageBase64.h"
#import "OAIPinMediaSourceImageURL.h"
#import "OAIPinMediaSourceVideoID.h"
@protocol OAIPinMediaSourceImageBase64;
@class OAIPinMediaSourceImageBase64;
@protocol OAIPinMediaSourceImageURL;
@class OAIPinMediaSourceImageURL;
@protocol OAIPinMediaSourceVideoID;
@class OAIPinMediaSourceVideoID;



@protocol OAIPinMediaSource
@end

@interface OAIPinMediaSource : OAIObject


@property(nonatomic) NSString* sourceType;

@property(nonatomic) NSString* contentType;

@property(nonatomic) NSString* data;

@property(nonatomic) NSString* url;

@property(nonatomic) NSString* coverImageUrl;

@property(nonatomic) NSString* mediaId;

@end
