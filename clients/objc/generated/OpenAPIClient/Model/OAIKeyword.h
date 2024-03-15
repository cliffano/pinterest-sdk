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


#import "OAIMatchTypeResponse.h"
@protocol OAIMatchTypeResponse;
@class OAIMatchTypeResponse;



@protocol OAIKeyword
@end

@interface OAIKeyword : OAIObject


@property(nonatomic) NSNumber* archived;
/* Keyword ID . [optional]
 */
@property(nonatomic) NSString* _id;
/* Keyword parent entity ID (advertiser, campaign, ad group). [optional]
 */
@property(nonatomic) NSString* parentId;
/* Parent entity type [optional]
 */
@property(nonatomic) NSString* parentType;
/* Always keyword [optional]
 */
@property(nonatomic) NSString* type;
/* Keyword custom bid in microcurrency - null if inherited from parent ad group. [optional]
 */
@property(nonatomic) NSNumber* bid;

@property(nonatomic) OAIMatchTypeResponse* matchType;
/* Keyword value (120 chars max). 
 */
@property(nonatomic) NSString* value;

@end