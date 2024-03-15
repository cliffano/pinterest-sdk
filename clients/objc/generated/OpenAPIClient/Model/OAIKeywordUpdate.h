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





@protocol OAIKeywordUpdate
@end

@interface OAIKeywordUpdate : OAIObject

/* Keyword ID. 
 */
@property(nonatomic) NSString* _id;
/* Is keyword archived? [optional]
 */
@property(nonatomic) NSNumber* archived;
/* Keyword custom bid in microcurrency - null if inherited from parent ad group. [optional]
 */
@property(nonatomic) NSNumber* bid;

@end
