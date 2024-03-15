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





@protocol OAILineItem
@end

@interface OAILineItem : OAIObject

/* Product brand. For example, \"Parker\". [optional]
 */
@property(nonatomic) NSString* productBrand;
/* Product category. For example, \"Shoes\". [optional]
 */
@property(nonatomic) NSString* productCategory;
/* Product ID. For example, 1414. [optional]
 */
@property(nonatomic) NSNumber* productId;
/* Product name. For example, \"Parker Boots\". [optional]
 */
@property(nonatomic) NSString* productName;
/* Product price. For example, \"99.99\". [optional]
 */
@property(nonatomic) NSString* productPrice;
/* Product quantity. For example, 2. [optional]
 */
@property(nonatomic) NSNumber* productQuantity;
/* Product variant. For example, \"Red\". [optional]
 */
@property(nonatomic) NSString* productVariant;
/* Product variant ID. For example, \"1414-34832\". [optional]
 */
@property(nonatomic) NSString* productVariantId;

@end
