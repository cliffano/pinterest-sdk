#import <Foundation/Foundation.h>
#import "OAIAdAccountsCountryResponse.h"
#import "OAIBookClosedResponse.h"
#import "OAIDeliveryMetricsResponse.h"
#import "OAIError.h"
#import "OAISingleInterestTargetingOptionResponse.h"
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



@interface OAIResourcesApi: NSObject <OAIApi>

extern NSString* kOAIResourcesApiErrorDomain;
extern NSInteger kOAIResourcesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get ad accounts countries
/// Get Ad Accounts countries
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Unexpected error"
///
/// @return OAIAdAccountsCountryResponse*
-(NSURLSessionTask*) adAccountCountriesGetWithCompletionHandler: 
    (void (^)(OAIAdAccountsCountryResponse* output, NSError* error)) handler;


/// Get available metrics' definitions
/// Get the definitions for ads and organic metrics available across both synchronous and asynchronous report endpoints. The `display_name` attribute will match how the metric is named in our native tools like Ads Manager. See <a href='/docs/content/analytics/'>Organic Analytics</a> and <a href='/docs/ads/ad-analytics-reporting/'>Ads Analytics</a> for more information.
///
/// @param reportType Report type. (optional)
/// 
///  code:200 message:"Success",
///  code:0 message:"Unexpected error"
///
/// @return OAIDeliveryMetricsResponse*
-(NSURLSessionTask*) deliveryMetricsGetWithReportType: (NSString*) reportType
    completionHandler: (void (^)(OAIDeliveryMetricsResponse* output, NSError* error)) handler;


/// Get interest details
/// <p>Get details of a specific interest given interest ID.</p> <p>Click <a href=\"https://docs.google.com/spreadsheets/d/1HxL-0Z3p2fgxis9YBP2HWC3tvPrs1hAuHDRtH-NJTIM/edit#gid=118370875\" target=\"_blank\">here</a> for a spreadsheet listing interests and their IDs.</p>
///
/// @param interestId Unique identifier of an interest.
/// 
///  code:200 message:"Success",
///  code:0 message:"Unexpected error"
///
/// @return OAISingleInterestTargetingOptionResponse*
-(NSURLSessionTask*) interestTargetingOptionsGetWithInterestId: (NSString*) interestId
    completionHandler: (void (^)(OAISingleInterestTargetingOptionResponse* output, NSError* error)) handler;


/// Get lead form questions
/// Get a list of all lead form question type names. Some questions might not be used.  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Unexpected error"
///
/// @return void
-(NSURLSessionTask*) leadFormQuestionsGetWithCompletionHandler: 
    (void (^)(NSError* error)) handler;


/// Get metrics ready state
/// Learn whether conversion or non-conversion metrics are finalized and ready to query.
///
/// @param date Analytics reports request date (UTC). Format: YYYY-MM-DD
/// 
///  code:200 message:"Success",
///  code:0 message:"Unexpected error"
///
/// @return OAIBookClosedResponse*
-(NSURLSessionTask*) metricsReadyStateGetWithDate: (NSString*) date
    completionHandler: (void (^)(OAIBookClosedResponse* output, NSError* error)) handler;


/// Get targeting options
/// <p>You can use targeting values in ads placement to define your intended audience. </p> <p>Targeting metrics are organized around targeting specifications.</p> <p>For more information on ads targeting, see <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a>.</p> <p><b>Sample return:</b></p> <pre class=\"literal-block\"> [{&quot;36313&quot;: &quot;Australia: Moreton Bay - North&quot;, &quot;124735&quot;: &quot;Canada: North Battleford&quot;, &quot;36109&quot;: &quot;Australia: Murray&quot;, &quot;36108&quot;: &quot;Australia: Mid North Coast&quot;, &quot;36101&quot;: &quot;Australia: Capital Region&quot;, &quot;811&quot;: &quot;U.S.: Reno&quot;, &quot;36103&quot;: &quot;Australia: Central West&quot;, &quot;36102&quot;: &quot;Australia: Central Coast&quot;, &quot;36105&quot;: &quot;Australia: Far West and Orana&quot;, &quot;36104&quot;: &quot;Australia: Coffs Harbour - Grafton&quot;, &quot;36107&quot;: &quot;Australia: Illawarra&quot;, &quot;36106&quot;: &quot;Australia: Hunter Valley Exc Newcastle&quot;, &quot;554017&quot;: &quot;New Zealand: Wanganui&quot;, &quot;554016&quot;: &quot;New Zealand: Marlborough&quot;, &quot;554015&quot;: &quot;New Zealand: Gisborne&quot;, &quot;554014&quot;: &quot;New Zealand: Tararua&quot;, &quot;554013&quot;: &quot;New Zealand: Invercargill&quot;, &quot;GR&quot;: &quot;Greece&quot;, &quot;554011&quot;: &quot;New Zealand: Whangarei&quot;, &quot;554010&quot;: &quot;New Zealand: Far North&quot;, &quot;717&quot;: &quot;U.S.: Quincy-Hannibal-Keokuk&quot;, &quot;716&quot;: &quot;U.S.: Baton Rouge&quot;,...}] </pre>
///
/// @param targetingType Public targeting type.
/// @param clientId Client ID. (optional)
/// @param oauthSignature Oauth signature (optional)
/// @param timestamp Timestamp (optional)
/// 
///  code:200 message:"Success",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<NSObject*>*
-(NSURLSessionTask*) targetingOptionsGetWithTargetingType: (NSString*) targetingType
    clientId: (NSString*) clientId
    oauthSignature: (NSString*) oauthSignature
    timestamp: (NSString*) timestamp
    completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;



@end
