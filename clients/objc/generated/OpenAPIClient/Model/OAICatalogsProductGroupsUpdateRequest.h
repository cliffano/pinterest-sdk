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


#import "OAICatalogsProductGroupFiltersRequest.h"
#import "OAICatalogsProductGroupUpdateRequest.h"
#import "OAICatalogsVerticalProductGroupUpdateRequest.h"
@protocol OAICatalogsProductGroupFiltersRequest;
@class OAICatalogsProductGroupFiltersRequest;
@protocol OAICatalogsProductGroupUpdateRequest;
@class OAICatalogsProductGroupUpdateRequest;
@protocol OAICatalogsVerticalProductGroupUpdateRequest;
@class OAICatalogsVerticalProductGroupUpdateRequest;



@protocol OAICatalogsProductGroupsUpdateRequest
@end

@interface OAICatalogsProductGroupsUpdateRequest : OAIObject


@property(nonatomic) NSString* name;

@property(nonatomic) NSString* _description;
/* boolean indicator of whether the product group is being featured or not [optional]
 */
@property(nonatomic) NSNumber* isFeatured;

@property(nonatomic) OAICatalogsProductGroupFiltersRequest* filters;

@end
