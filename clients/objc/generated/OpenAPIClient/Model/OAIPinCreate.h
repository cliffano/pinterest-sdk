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


#import "OAIBoardOwner.h"
#import "OAIPinMediaSource.h"
#import "OAISummaryPinMedia.h"
@protocol OAIBoardOwner;
@class OAIBoardOwner;
@protocol OAIPinMediaSource;
@class OAIPinMediaSource;
@protocol OAISummaryPinMedia;
@class OAISummaryPinMedia;



@protocol OAIPinCreate
@end

@interface OAIPinCreate : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSDate* createdAt;

@property(nonatomic) NSString* link;

@property(nonatomic) NSString* title;

@property(nonatomic) NSString* _description;
/* Dominant pin color. Hex number, e.g. \\\"#6E7874\\\". [optional]
 */
@property(nonatomic) NSString* dominantColor;

@property(nonatomic) NSString* altText;
/* The board to which this Pin belongs. [optional]
 */
@property(nonatomic) NSString* boardId;
/* The board section to which this Pin belongs. [optional]
 */
@property(nonatomic) NSString* boardSectionId;

@property(nonatomic) OAIBoardOwner* boardOwner;

@property(nonatomic) OAISummaryPinMedia* media;

@property(nonatomic) OAIPinMediaSource* mediaSource;
/* The source pin id if this pin was saved from another pin. <a href=\"https://help.pinterest.com/article/save-pins-on-pinterest\">Learn more</a>. [optional]
 */
@property(nonatomic) NSString* parentPinId;
/* Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>. [optional]
 */
@property(nonatomic) NSString* note;

@end
