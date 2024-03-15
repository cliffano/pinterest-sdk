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





@protocol OAIBillingProfilesResponse
@end

@interface OAIBillingProfilesResponse : OAIObject

/* Billing ID. [optional]
 */
@property(nonatomic) NSString* _id;
/* Type of the card. [optional]
 */
@property(nonatomic) NSString* cardType;
/* Status of the billing. [optional]
 */
@property(nonatomic) NSString* status;
/* Advertiser ID of the billing. [optional]
 */
@property(nonatomic) NSString* advertiserId;
/* Brand of the payment method. [optional]
 */
@property(nonatomic) NSString* paymentMethodBrand;

@end
