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


#import "OAIKeywordsCommon.h"
@protocol OAIKeywordsCommon;
@class OAIKeywordsCommon;



@protocol OAIKeywordsRequest
@end

@interface OAIKeywordsRequest : OAIObject

/* Keyword JSON array. Each array element has 3 fields 
 */
@property(nonatomic) NSArray<OAIKeywordsCommon>* keywords;
/* Keyword parent entity ID (advertiser, campaign, ad group). 
 */
@property(nonatomic) NSString* parentId;

@end
