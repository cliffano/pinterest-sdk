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


#import "OAIBulkReportingJobStatus.h"
@protocol OAIBulkReportingJobStatus;
@class OAIBulkReportingJobStatus;



@protocol OAIAdsAnalyticsCreateAsyncResponse
@end

@interface OAIAdsAnalyticsCreateAsyncResponse : OAIObject


@property(nonatomic) OAIBulkReportingJobStatus* reportStatus;

@property(nonatomic) NSString* token;

@property(nonatomic) NSString* message;

@end
