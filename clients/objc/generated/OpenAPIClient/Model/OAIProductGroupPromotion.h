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


#import "OAICreativeType.h"
#import "OAIEntityStatus.h"
#import "OAIGridClickType.h"
@protocol OAICreativeType;
@class OAICreativeType;
@protocol OAIEntityStatus;
@class OAIEntityStatus;
@protocol OAIGridClickType;
@class OAIGridClickType;



@protocol OAIProductGroupPromotion
@end

@interface OAIProductGroupPromotion : OAIObject

/* ID of the product group promotion. [optional]
 */
@property(nonatomic) NSString* _id;
/* ID of the ad group the product group belongs to. [optional]
 */
@property(nonatomic) NSString* adGroupId;
/* The bid in micro currency. [optional]
 */
@property(nonatomic) NSNumber* bidInMicroCurrency;
/* True if the group is BIDDABLE, false if it should be EXCLUDED from serving ads. [optional]
 */
@property(nonatomic) NSNumber* included;
/* The full product group definition path [optional]
 */
@property(nonatomic) NSString* definition;
/* The definition of the product group, relative to its parent - an attribute name/value pair [optional]
 */
@property(nonatomic) NSString* relativeDefinition;
/* The parent Product Group ID of this Product Group [optional]
 */
@property(nonatomic) NSString* parentId;
/* Slideshow Collections Title [optional]
 */
@property(nonatomic) NSString* slideshowCollectionsTitle;
/* Slideshow Collections Description [optional]
 */
@property(nonatomic) NSString* slideshowCollectionsDescription;
/* If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog [optional]
 */
@property(nonatomic) NSNumber* isMdl;

@property(nonatomic) OAIEntityStatus* status;
/* Tracking template for proudct group promotions. 4000 limit [optional]
 */
@property(nonatomic) NSString* trackingUrl;
/* ID of the catalogs product group that this product group promotion references [optional]
 */
@property(nonatomic) NSString* catalogProductGroupId;
/* Catalogs product group name [optional]
 */
@property(nonatomic) NSString* catalogProductGroupName;

@property(nonatomic) OAICreativeType* creativeType;
/* Hero Pin ID if this PG is promoted as a Collection [optional]
 */
@property(nonatomic) NSString* collectionsHeroPinId;
/* Collections Hero Destination Url [optional]
 */
@property(nonatomic) NSString* collectionsHeroDestinationUrl;

@property(nonatomic) OAIGridClickType* gridClickType;

@end