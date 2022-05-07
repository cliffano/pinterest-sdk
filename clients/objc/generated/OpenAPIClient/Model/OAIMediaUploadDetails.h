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


#import "OAIMediaUploadStatus.h"
#import "OAIMediaUploadType.h"
@protocol OAIMediaUploadStatus;
@class OAIMediaUploadStatus;
@protocol OAIMediaUploadType;
@class OAIMediaUploadType;



@protocol OAIMediaUploadDetails
@end

@interface OAIMediaUploadDetails : OAIObject


@property(nonatomic) NSString* mediaId;

@property(nonatomic) OAIMediaUploadType* mediaType;

@property(nonatomic) OAIMediaUploadStatus* status;

@end
