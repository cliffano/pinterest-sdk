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





@protocol OAICatalogsFeedValidationErrors
@end

@interface OAICatalogsFeedValidationErrors : OAIObject


@property(nonatomic) NSNumber* fetchError;

@property(nonatomic) NSNumber* fetchInactiveFeedError;

@property(nonatomic) NSNumber* encodingError;

@property(nonatomic) NSNumber* delimiterError;

@property(nonatomic) NSNumber* requiredColumnsMissing;

@property(nonatomic) NSNumber* imageLinkInvalid;

@property(nonatomic) NSNumber* itemidMissing;

@property(nonatomic) NSNumber* titleMissing;

@property(nonatomic) NSNumber* descriptionMissing;

@property(nonatomic) NSNumber* productCategoryInvalid;

@property(nonatomic) NSNumber* productLinkMissing;

@property(nonatomic) NSNumber* imageLinkMissing;

@property(nonatomic) NSNumber* availabilityInvalid;

@property(nonatomic) NSNumber* productPriceInvalid;

@property(nonatomic) NSNumber* linkFormatInvalid;

@property(nonatomic) NSNumber* parseLineError;

@property(nonatomic) NSNumber* adwordsFormatInvalid;

@property(nonatomic) NSNumber* productCategoryMissing;

@property(nonatomic) NSNumber* internalServiceError;

@property(nonatomic) NSNumber* noVerifiedDomain;

@property(nonatomic) NSNumber* adultInvalid;

@property(nonatomic) NSNumber* invalidDomain;

@property(nonatomic) NSNumber* feedLengthTooLong;

@property(nonatomic) NSNumber* linkLengthTooLong;

@property(nonatomic) NSNumber* malformedXml;

@property(nonatomic) NSNumber* redirectInvalid;

@property(nonatomic) NSNumber* priceMissing;

@property(nonatomic) NSNumber* feedTooSmall;

@property(nonatomic) NSNumber* conditionInvalid;

@property(nonatomic) NSNumber* shopifyNoProducts;

@property(nonatomic) NSNumber* maxItemsPerItemGroupExceeded;

@property(nonatomic) NSNumber* itemMainImageDownloadFailure;

@property(nonatomic) NSNumber* pinjoinContentUnsafe;

@property(nonatomic) NSNumber* blocklistedImageSignature;

@end
