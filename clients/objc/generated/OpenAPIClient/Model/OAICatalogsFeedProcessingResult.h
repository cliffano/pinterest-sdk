#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAICatalogsDbItem.h"
#import "OAICatalogsFeedIngestionDetails.h"
#import "OAICatalogsFeedProcessingResultFields.h"
#import "OAICatalogsFeedProcessingStatus.h"
#import "OAICatalogsFeedProductCounts.h"
#import "OAICatalogsFeedValidationDetails.h"
@protocol OAICatalogsDbItem;
@class OAICatalogsDbItem;
@protocol OAICatalogsFeedIngestionDetails;
@class OAICatalogsFeedIngestionDetails;
@protocol OAICatalogsFeedProcessingResultFields;
@class OAICatalogsFeedProcessingResultFields;
@protocol OAICatalogsFeedProcessingStatus;
@class OAICatalogsFeedProcessingStatus;
@protocol OAICatalogsFeedProductCounts;
@class OAICatalogsFeedProductCounts;
@protocol OAICatalogsFeedValidationDetails;
@class OAICatalogsFeedValidationDetails;



@protocol OAICatalogsFeedProcessingResult
@end

@interface OAICatalogsFeedProcessingResult : OAIObject


@property(nonatomic) NSDate* createdAt;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSDate* updatedAt;

@property(nonatomic) OAICatalogsFeedIngestionDetails* ingestionDetails;

@property(nonatomic) OAICatalogsFeedProcessingStatus* status;

@property(nonatomic) OAICatalogsFeedProductCounts* productCounts;

@property(nonatomic) OAICatalogsFeedValidationDetails* validationDetails;

@end
