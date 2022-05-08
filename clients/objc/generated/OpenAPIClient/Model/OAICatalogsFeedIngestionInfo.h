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





@protocol OAICatalogsFeedIngestionInfo
@end

@interface OAICatalogsFeedIngestionInfo : OAIObject


@property(nonatomic) NSNumber* inStock;

@property(nonatomic) NSNumber* outOfStock;

@property(nonatomic) NSNumber* preorder;

@end