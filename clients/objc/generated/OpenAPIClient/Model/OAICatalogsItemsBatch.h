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


#import "OAIBatchOperationStatus.h"
#import "OAIItemProcessingRecord.h"
@protocol OAIBatchOperationStatus;
@class OAIBatchOperationStatus;
@protocol OAIItemProcessingRecord;
@class OAIItemProcessingRecord;



@protocol OAICatalogsItemsBatch
@end

@interface OAICatalogsItemsBatch : OAIObject

/* Array with the catalogs items processing records part of the catalogs items batch [optional]
 */
@property(nonatomic) NSArray<OAIItemProcessingRecord>* items;
/* Id of the catalogs items batch [optional]
 */
@property(nonatomic) NSString* batchId;
/* Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD [optional]
 */
@property(nonatomic) NSDate* createdTime;
/* Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD [optional]
 */
@property(nonatomic) NSDate* completedTime;

@property(nonatomic) OAIBatchOperationStatus* status;

@end
