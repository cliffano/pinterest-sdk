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


#import "OAIEntityStatus.h"
#import "OAITrackingUrls.h"
@protocol OAIEntityStatus;
@class OAIEntityStatus;
@protocol OAITrackingUrls;
@class OAITrackingUrls;



@protocol OAIAdResponseAllOf
@end

@interface OAIAdResponseAllOf : OAIObject

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
/* Ad creative type enum [optional]
 */
@property(nonatomic) NSString* creativeType;
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
/* Pin ID. [optional]
 */
@property(nonatomic) NSString* pinId;

@property(nonatomic) OAIEntityStatus* status;

@property(nonatomic) OAITrackingUrls* trackingUrls;
/* Tracking URL for ad impressions. [optional]
 */
@property(nonatomic) NSString* viewTrackingUrl;

@end
