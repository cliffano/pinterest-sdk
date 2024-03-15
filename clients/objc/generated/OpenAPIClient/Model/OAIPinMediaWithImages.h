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


#import "OAIImageMetadata.h"
#import "OAIPinMedia.h"
@protocol OAIImageMetadata;
@class OAIImageMetadata;
@protocol OAIPinMedia;
@class OAIPinMedia;



@protocol OAIPinMediaWithImages
@end

@interface OAIPinMediaWithImages : OAIPinMedia


@property(nonatomic) NSArray<OAIImageMetadata>* items;

@end
