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


#import "OAIConversionEventsDataInnerCustomData.h"
#import "OAIConversionEventsUserData.h"
@protocol OAIConversionEventsDataInnerCustomData;
@class OAIConversionEventsDataInnerCustomData;
@protocol OAIConversionEventsUserData;
@class OAIConversionEventsUserData;



@protocol OAIConversionEventsDataInner
@end

@interface OAIConversionEventsDataInner : OAIObject

/* The type of the user event. Please use the right event_name otherwise the event won’t be accepted and show up correctly in reports. <li><code>add_to_cart</code> <li><code>checkout</code> <li><code>custom</code> <li><code>lead</code> <li><code>page_visit</code> <li><code>search</code> <li><code>signup</code> <li><code>view_category</code> <li><code>watch_video</code> 
 */
@property(nonatomic) NSString* eventName;
/* The source indicating where the conversion event occurred. <li><code>app_android</code> <li><code>app_ios</code> <li><code>web</code> <li><code>offline</code> 
 */
@property(nonatomic) NSString* actionSource;
/* The time when the event happened. Unix timestamp in seconds. 
 */
@property(nonatomic) NSNumber* eventTime;
/* A unique id string that identifies this event and can be used for deduping between events ingested via both the conversion API and Pinterest tracking. Without this, event's data is likely to be double counted and will cause report metric inflation. Third-party vendors make sure this field is updated on both Pinterest tag and Conversions API side before rolling out template for Conversions API. 
 */
@property(nonatomic) NSString* eventId;
/* URL of the web conversion event. [optional]
 */
@property(nonatomic) NSString* eventSourceUrl;
/* When action_source is web or offline, it defines whether the user has opted out of tracking for web conversion events. While when action_source is app_android or app_ios, it defines whether the user has enabled Limit Ad Tracking on their iOS device, or opted out of Ads Personalization on their Android device. [optional]
 */
@property(nonatomic) NSNumber* optOut;
/* The third party partner name responsible to send the event to Conversions API on behalf of the advertiser. The naming convention is \"ss-partnername\" lowercase. E.g ‘ss-shopify’ [optional]
 */
@property(nonatomic) NSString* partnerName;

@property(nonatomic) OAIConversionEventsUserData* userData;

@property(nonatomic) OAIConversionEventsDataInnerCustomData* customData;
/* The app store app ID. [optional]
 */
@property(nonatomic) NSString* appId;
/* Name of the app. [optional]
 */
@property(nonatomic) NSString* appName;
/* Version of the app. [optional]
 */
@property(nonatomic) NSString* appVersion;
/* Brand of the user device. [optional]
 */
@property(nonatomic) NSString* deviceBrand;
/* User device's mobile carrier. [optional]
 */
@property(nonatomic) NSString* deviceCarrier;
/* Model of the user device. [optional]
 */
@property(nonatomic) NSString* deviceModel;
/* Type of the user device. [optional]
 */
@property(nonatomic) NSString* deviceType;
/* Version of the device operating system. [optional]
 */
@property(nonatomic) NSString* osVersion;
/* Whether the event occurred when the user device was connected to wifi. [optional]
 */
@property(nonatomic) NSNumber* wifi;
/* Two-character ISO-639-1 language code indicating the user's language. [optional]
 */
@property(nonatomic) NSString* language;

@end
