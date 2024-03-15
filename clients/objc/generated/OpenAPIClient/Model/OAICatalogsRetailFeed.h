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


#import "OAICatalogsFeedCredentials.h"
#import "OAICatalogsFeedProcessingSchedule.h"
#import "OAICatalogsFormat.h"
#import "OAICatalogsStatus.h"
#import "OAICatalogsType.h"
#import "OAICountry.h"
#import "OAINullableCurrency.h"
#import "OAIProductAvailabilityType.h"
@protocol OAICatalogsFeedCredentials;
@class OAICatalogsFeedCredentials;
@protocol OAICatalogsFeedProcessingSchedule;
@class OAICatalogsFeedProcessingSchedule;
@protocol OAICatalogsFormat;
@class OAICatalogsFormat;
@protocol OAICatalogsStatus;
@class OAICatalogsStatus;
@protocol OAICatalogsType;
@class OAICatalogsType;
@protocol OAICountry;
@class OAICountry;
@protocol OAINullableCurrency;
@class OAINullableCurrency;
@protocol OAIProductAvailabilityType;
@class OAIProductAvailabilityType;



@protocol OAICatalogsRetailFeed
@end

@interface OAICatalogsRetailFeed : OAIObject


@property(nonatomic) NSDate* createdAt;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSDate* updatedAt;
/* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. 
 */
@property(nonatomic) NSString* name;

@property(nonatomic) OAICatalogsFormat* format;

@property(nonatomic) OAICatalogsType* catalogType;

@property(nonatomic) OAICatalogsFeedCredentials* credentials;
/* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. 
 */
@property(nonatomic) NSString* location;

@property(nonatomic) OAICatalogsFeedProcessingSchedule* preferredProcessingSchedule;

@property(nonatomic) OAICatalogsStatus* status;

@property(nonatomic) OAINullableCurrency* defaultCurrency;
/* The locale used within a feed for product descriptions. 
 */
@property(nonatomic) NSString* defaultLocale;

@property(nonatomic) OAICountry* defaultCountry;

@property(nonatomic) OAIProductAvailabilityType* defaultAvailability;

@end
