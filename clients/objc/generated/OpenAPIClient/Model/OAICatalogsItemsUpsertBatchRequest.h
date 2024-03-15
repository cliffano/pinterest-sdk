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


#import "OAIBatchOperation.h"
#import "OAICountry.h"
#import "OAIItemUpsertBatchRecord.h"
#import "OAILanguage.h"
@protocol OAIBatchOperation;
@class OAIBatchOperation;
@protocol OAICountry;
@class OAICountry;
@protocol OAIItemUpsertBatchRecord;
@class OAIItemUpsertBatchRecord;
@protocol OAILanguage;
@class OAILanguage;



@protocol OAICatalogsItemsUpsertBatchRequest
@end

@interface OAICatalogsItemsUpsertBatchRequest : OAIObject


@property(nonatomic) OAICountry* country;

@property(nonatomic) OAILanguage* language;

@property(nonatomic) OAIBatchOperation* operation;
/* Array with catalogs items 
 */
@property(nonatomic) NSArray<OAIItemUpsertBatchRecord>* items;

@end
