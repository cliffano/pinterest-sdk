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





@protocol OAICatalogsFeedValidationWarnings
@end

@interface OAICatalogsFeedValidationWarnings : OAIObject


@property(nonatomic) NSNumber* titleLengthTooLong;

@property(nonatomic) NSNumber* descriptionLengthTooLong;

@property(nonatomic) NSNumber* genderInvalid;

@property(nonatomic) NSNumber* ageGroupInvalid;

@property(nonatomic) NSNumber* sizeTypeInvalid;

@property(nonatomic) NSNumber* linkFormatWarning;

@property(nonatomic) NSNumber* duplicateProducts;

@property(nonatomic) NSNumber* duplicateLinks;

@property(nonatomic) NSNumber* salesPriceInvalid;

@property(nonatomic) NSNumber* productCategoryDepthWarning;

@property(nonatomic) NSNumber* adwordsSameAsLink;

@property(nonatomic) NSNumber* duplicateHeaders;

@property(nonatomic) NSNumber* fetchSameSignature;

@property(nonatomic) NSNumber* adwordsFormatWarning;

@property(nonatomic) NSNumber* additionalImageLinkWarning;

@property(nonatomic) NSNumber* imageLinkWarning;

@property(nonatomic) NSNumber* shippingInvalid;

@property(nonatomic) NSNumber* taxInvalid;

@property(nonatomic) NSNumber* shippingWeightInvalid;

@property(nonatomic) NSNumber* expirationDateInvalid;

@property(nonatomic) NSNumber* availabilityDateInvalid;

@property(nonatomic) NSNumber* saleDateInvalid;

@property(nonatomic) NSNumber* weightUnitInvalid;

@property(nonatomic) NSNumber* isBundleInvalid;

@property(nonatomic) NSNumber* updatedTimeInvalid;

@property(nonatomic) NSNumber* customLabelLengthTooLong;

@property(nonatomic) NSNumber* productTypeLengthTooLong;

@property(nonatomic) NSNumber* tooManyAdditionalImageLinks;

@property(nonatomic) NSNumber* multipackInvalid;

@property(nonatomic) NSNumber* indexedProductCountLargeDelta;

@property(nonatomic) NSNumber* itemAdditionalImageDownloadFailure;

@property(nonatomic) NSNumber* optionalProductCategoryMissing;

@property(nonatomic) NSNumber* optionalProductCategoryInvalid;

@property(nonatomic) NSNumber* optionalConditionMissing;

@property(nonatomic) NSNumber* optionalConditionInvalid;

@property(nonatomic) NSNumber* iosDeepLinkInvalid;

@property(nonatomic) NSNumber* androidDeepLinkInvalid;

@property(nonatomic) NSNumber* availabilityNormalized;

@property(nonatomic) NSNumber* conditionNormalized;

@property(nonatomic) NSNumber* genderNormalized;

@property(nonatomic) NSNumber* sizeTypeNormalized;

@property(nonatomic) NSNumber* ageGroupNormalized;

@property(nonatomic) NSNumber* utmSourceAutoCorrected;

@property(nonatomic) NSNumber* countryDoesNotMapToCurrency;

@property(nonatomic) NSNumber* minAdPriceInvalid;

@end
