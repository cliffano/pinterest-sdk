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


#import "OAIAdCommonQuizPinData.h"
#import "OAIAdCommonTrackingUrls.h"
#import "OAICreativeType.h"
#import "OAIEntityStatus.h"
#import "OAIGridClickType.h"
#import "OAIPinPromotionSummaryStatus.h"
@protocol OAIAdCommonQuizPinData;
@class OAIAdCommonQuizPinData;
@protocol OAIAdCommonTrackingUrls;
@class OAIAdCommonTrackingUrls;
@protocol OAICreativeType;
@class OAICreativeType;
@protocol OAIEntityStatus;
@class OAIEntityStatus;
@protocol OAIGridClickType;
@class OAIGridClickType;
@protocol OAIPinPromotionSummaryStatus;
@class OAIPinPromotionSummaryStatus;



@protocol OAIAdResponse
@end

@interface OAIAdResponse : OAIObject

/* ID of the ad group that contains the ad. [optional]
 */
@property(nonatomic) NSString* adGroupId;
/* Deep link URL for Android devices. Not currently available. Using this field will generate an error. [optional]
 */
@property(nonatomic) NSString* androidDeepLink;
/* Comma-separated deep links for the carousel pin on Android. [optional]
 */
@property(nonatomic) NSArray<NSString*>* carouselAndroidDeepLinks;
/* Comma-separated destination URLs for the carousel pin to promote. [optional]
 */
@property(nonatomic) NSArray<NSString*>* carouselDestinationUrls;
/* Comma-separated deep links for the carousel pin on iOS. [optional]
 */
@property(nonatomic) NSArray<NSString*>* carouselIosDeepLinks;
/* Tracking url for the ad clicks. [optional]
 */
@property(nonatomic) NSString* clickTrackingUrl;

@property(nonatomic) OAICreativeType* creativeType;
/* Destination URL. [optional]
 */
@property(nonatomic) NSString* destinationUrl;
/* Deep link URL for iOS devices. Not currently available. Using this field will generate an error. [optional]
 */
@property(nonatomic) NSString* iosDeepLink;
/* Is original pin deleted? [optional]
 */
@property(nonatomic) NSNumber* isPinDeleted;
/* Is pin repinnable? [optional]
 */
@property(nonatomic) NSNumber* isRemovable;
/* Name of the ad - 255 chars max. [optional]
 */
@property(nonatomic) NSString* name;

@property(nonatomic) OAIEntityStatus* status;

@property(nonatomic) OAIAdCommonTrackingUrls* trackingUrls;
/* Tracking URL for ad impressions. [optional]
 */
@property(nonatomic) NSString* viewTrackingUrl;
/* Lead form ID for lead ad generation. [optional]
 */
@property(nonatomic) NSString* leadFormId;

@property(nonatomic) OAIGridClickType* gridClickType;
/* Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only) [optional]
 */
@property(nonatomic) NSString* customizableCtaType;

@property(nonatomic) OAIAdCommonQuizPinData* quizPinData;
/* Pin ID. [optional]
 */
@property(nonatomic) NSString* pinId;
/* The ID of the advertiser that this ad belongs to. [optional]
 */
@property(nonatomic) NSString* adAccountId;
/* ID of the ad campaign that contains this ad. [optional]
 */
@property(nonatomic) NSString* campaignId;
/* Destination URL template for all items within a collections drawer. [optional]
 */
@property(nonatomic) NSString* collectionItemsDestinationUrlTemplate;
/* Pin creation time. Unix timestamp in seconds. [optional]
 */
@property(nonatomic) NSNumber* createdTime;
/* The ID of this ad. [optional]
 */
@property(nonatomic) NSString* _id;
/* Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". [optional]
 */
@property(nonatomic) NSArray<NSString*>* rejectedReasons;
/* Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". [optional]
 */
@property(nonatomic) NSArray<NSString*>* rejectionLabels;
/* Ad review status [optional]
 */
@property(nonatomic) NSString* reviewStatus;
/* Always \"ad\". [optional]
 */
@property(nonatomic) NSString* type;
/* Last update time. Unix timestamp in seconds. [optional]
 */
@property(nonatomic) NSNumber* updatedTime;
/* Ad summary status [optional]
 */
@property(nonatomic) OAIPinPromotionSummaryStatus* summaryStatus;

@end
