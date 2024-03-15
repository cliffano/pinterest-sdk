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


#import "OAIConversionTagType.h"
@protocol OAIConversionTagType;
@class OAIConversionTagType;



@protocol OAIConversionEventResponse
@end

@interface OAIConversionEventResponse : OAIObject


@property(nonatomic) OAIConversionTagType* conversionEvent;
/* Id of the tag. [optional]
 */
@property(nonatomic) NSString* conversionTagId;
/* Id of the ad account. [optional]
 */
@property(nonatomic) NSString* adAccountId;
/* Creation date in epoch format. [optional]
 */
@property(nonatomic) NSNumber* createdTime;

@end