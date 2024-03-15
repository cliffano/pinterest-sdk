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
#import "OAIImageMetadataImages.h"
#import "OAIVideoMetadata.h"
@protocol OAIImageMetadata;
@class OAIImageMetadata;
@protocol OAIImageMetadataImages;
@class OAIImageMetadataImages;
@protocol OAIVideoMetadata;
@class OAIVideoMetadata;



@protocol OAIPinMediaMetadata
@end

@interface OAIPinMediaMetadata : OAIObject


@property(nonatomic) NSString* itemType;

@property(nonatomic) NSString* title;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSString* link;

@property(nonatomic) OAIImageMetadataImages* images;

@property(nonatomic) NSString* coverImageUrl;
/* Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps. [optional]
 */
@property(nonatomic) NSString* videoUrl;
/* Duration (in milliseconds) [optional]
 */
@property(nonatomic) NSNumber* duration;
/* Height (in pixels) [optional]
 */
@property(nonatomic) NSNumber* height;
/* Width (in pixels) [optional]
 */
@property(nonatomic) NSNumber* width;

@end