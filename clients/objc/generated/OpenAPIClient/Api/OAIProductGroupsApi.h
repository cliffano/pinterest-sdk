#import <Foundation/Foundation.h>
#import "OAIAdAccountsCatalogsProductGroupsList200Response.h"
#import "OAIError.h"
#import "OAIApi.h"

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



@interface OAIProductGroupsApi: NSObject <OAIApi>

extern NSString* kOAIProductGroupsApiErrorDomain;
extern NSInteger kOAIProductGroupsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get catalog product groups
/// This endpoint is completely deprecated. Please use <a href='/docs/api/v5/#operation/catalogs_product_groups/list'>List product groups</a> from Catalogs API instead.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param feedProfileId The feed profile id whose catalog product groups we want to return. (optional)
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account ads parameters.",
///  code:401 message:"Access Denied. This can happen if account is not yet approved to operate as Merchant on Pinterest.",
///  code:404 message:"Merchant data not found.",
///  code:0 message:"Unexpected error"
///
/// @return OAIAdAccountsCatalogsProductGroupsList200Response*
-(NSURLSessionTask*) adAccountsCatalogsProductGroupsListWithAdAccountId: (NSString*) adAccountId
    feedProfileId: (NSString*) feedProfileId
    completionHandler: (void (^)(OAIAdAccountsCatalogsProductGroupsList200Response* output, NSError* error)) handler;



@end
