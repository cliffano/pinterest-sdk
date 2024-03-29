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


#import "OAICatalogsHotelAttributes.h"
#import "OAICatalogsHotelItemResponse.h"
#import "OAICatalogsRetailItemResponse.h"
#import "OAICatalogsType.h"
#import "OAIPin.h"
@protocol OAICatalogsHotelAttributes;
@class OAICatalogsHotelAttributes;
@protocol OAICatalogsHotelItemResponse;
@class OAICatalogsHotelItemResponse;
@protocol OAICatalogsRetailItemResponse;
@class OAICatalogsRetailItemResponse;
@protocol OAICatalogsType;
@class OAICatalogsType;
@protocol OAIPin;
@class OAIPin;



@protocol OAIItemResponseAnyOf
@end

@interface OAIItemResponseAnyOf : OAIObject


@property(nonatomic) OAICatalogsType* catalogType;
/* The catalog retail item id in the merchant namespace [optional]
 */
@property(nonatomic) NSString* itemId;
/* The pins mapped to the item [optional]
 */
@property(nonatomic) NSArray<OAIPin>* pins;

@property(nonatomic) OAICatalogsHotelAttributes* attributes;
/* The catalog hotel id in the merchant namespace [optional]
 */
@property(nonatomic) NSString* hotelId;

@end
