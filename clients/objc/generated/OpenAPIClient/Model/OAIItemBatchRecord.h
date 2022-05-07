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


#import "OAIItemAttributes.h"
@protocol OAIItemAttributes;
@class OAIItemAttributes;



@protocol OAIItemBatchRecord
@end

@interface OAIItemBatchRecord : OAIObject

/* The catalog item id in the merchant namespace [optional]
 */
@property(nonatomic) NSString* itemId;

@property(nonatomic) OAIItemAttributes* attributes;

@end
