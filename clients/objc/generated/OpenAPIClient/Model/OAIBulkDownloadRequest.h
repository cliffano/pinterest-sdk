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


#import "OAIBulkDownloadRequestCampaignFilter.h"
#import "OAIBulkEntityType.h"
#import "OAIBulkOutputFormat.h"
@protocol OAIBulkDownloadRequestCampaignFilter;
@class OAIBulkDownloadRequestCampaignFilter;
@protocol OAIBulkEntityType;
@class OAIBulkEntityType;
@protocol OAIBulkOutputFormat;
@class OAIBulkOutputFormat;



@protocol OAIBulkDownloadRequest
@end

@interface OAIBulkDownloadRequest : OAIObject

/* All entity types specified will be downloaded. Fewer types result in faster downloads. [optional]
 */
@property(nonatomic) NSArray<OAIBulkEntityType>* entityTypes;
/* All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded. [optional]
 */
@property(nonatomic) NSArray<NSString*>* entityIds;
/* Unix UTC timestamp to retrieve all entities that have changed since this time. [optional]
 */
@property(nonatomic) NSString* updatedSince;

@property(nonatomic) OAIBulkDownloadRequestCampaignFilter* campaignFilter;

@property(nonatomic) OAIBulkOutputFormat* outputFormat;

@end
