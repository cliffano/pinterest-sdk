#import <Foundation/Foundation.h>
#import "OAIAdsAnalyticsCreateAsyncRequest.h"
#import "OAIAdsAnalyticsCreateAsyncResponse.h"
#import "OAIAdsAnalyticsGetAsyncResponse.h"
#import "OAIAnyType.h"
#import "OAIError.h"
#import "OAIGranularity.h"
#import "OAIPaginated.h"
#import "OAIApi.h"

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



@interface OAIAdAccountsApi: NSObject <OAIApi>

extern NSString* kOAIAdAccountsApiErrorDomain;
extern NSInteger kOAIAdAccountsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get ad account analytics
/// Get analytics for the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
/// @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
/// @param columns Columns to retrieve. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned
/// @param granularity Granularity
/// @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional) (default to @1)
/// @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional) (default to @"TIME_OF_AD_ACTION")
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account analytics parameters.",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<NSDictionary<NSString*, NSObject*>*>*
-(NSURLSessionTask*) adAccountAnalyticsWithAdAccountId: (NSString*) adAccountId
    startDate: (NSDate*) startDate
    endDate: (NSDate*) endDate
    columns: (NSArray<NSString*>*) columns
    granularity: (OAIGranularity*) granularity
    clickWindowDays: (NSNumber*) clickWindowDays
    engagementWindowDays: (NSNumber*) engagementWindowDays
    viewWindowDays: (NSNumber*) viewWindowDays
    conversionReportTime: (NSString*) conversionReportTime
    completionHandler: (void (^)(NSArray<NSDictionary<NSString*, NSObject*>*>* output, NSError* error)) handler;


/// List ad accounts
/// Get a list of the ad_accounts that the \"operation user_account\" has access to. - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>.
///
/// @param bookmark Cursor used to fetch the next page of items (optional)
/// @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional) (default to @25)
/// @param includeSharedAccounts Include shared ad accounts (optional) (default to @(YES))
/// 
///  code:200 message:"response",
///  code:0 message:"Unexpected error"
///
/// @return OAIPaginated*
-(NSURLSessionTask*) adAccountsListWithBookmark: (NSString*) bookmark
    pageSize: (NSNumber*) pageSize
    includeSharedAccounts: (NSNumber*) includeSharedAccounts
    completionHandler: (void (^)(OAIPaginated* output, NSError* error)) handler;


/// Get ad group analytics
/// Get analytics for the specified ad groups in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
/// @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
/// @param adGroupIds List of Ad group Ids to use to filter the results.
/// @param columns Columns to retrieve. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned
/// @param granularity Granularity
/// @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional) (default to @1)
/// @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional) (default to @"TIME_OF_AD_ACTION")
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account group analytics parameters.",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<NSDictionary<NSString*, NSObject*>*>*
-(NSURLSessionTask*) adGroupsAnalyticsWithAdAccountId: (NSString*) adAccountId
    startDate: (NSDate*) startDate
    endDate: (NSDate*) endDate
    adGroupIds: (NSArray<NSString*>*) adGroupIds
    columns: (NSArray<NSString*>*) columns
    granularity: (OAIGranularity*) granularity
    clickWindowDays: (NSNumber*) clickWindowDays
    engagementWindowDays: (NSNumber*) engagementWindowDays
    viewWindowDays: (NSNumber*) viewWindowDays
    conversionReportTime: (NSString*) conversionReportTime
    completionHandler: (void (^)(NSArray<NSDictionary<NSString*, NSObject*>*>* output, NSError* error)) handler;


/// List ad groups
/// Get a list of the ad groups in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param campaignIds List of Campaign Ids to use to filter the results. (optional)
/// @param adGroupIds List of Ad group Ids to use to filter the results. (optional)
/// @param entityStatuses Entity status (optional)
/// @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional) (default to @25)
/// @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)
/// @param bookmark Cursor used to fetch the next page of items (optional)
/// @param translateInterestsToNames Return interests as text names (if value is true) rather than topic IDs. (optional) (default to @(NO))
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account group parameters.",
///  code:0 message:"Unexpected error"
///
/// @return OAIPaginated*
-(NSURLSessionTask*) adGroupsListWithAdAccountId: (NSString*) adAccountId
    campaignIds: (NSArray<NSString*>*) campaignIds
    adGroupIds: (NSArray<NSString*>*) adGroupIds
    entityStatuses: (NSArray<NSString*>*) entityStatuses
    pageSize: (NSNumber*) pageSize
    order: (NSString*) order
    bookmark: (NSString*) bookmark
    translateInterestsToNames: (NSNumber*) translateInterestsToNames
    completionHandler: (void (^)(OAIPaginated* output, NSError* error)) handler;


/// Get ad analytics
/// Get analytics for the specified ads in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
/// @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
/// @param adIds List of Ad Ids to use to filter the results.
/// @param columns Columns to retrieve. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned
/// @param granularity Granularity
/// @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional) (default to @1)
/// @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional) (default to @"TIME_OF_AD_ACTION")
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account ads analytics parameters.",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<NSDictionary<NSString*, NSObject*>*>*
-(NSURLSessionTask*) adsAnalyticsWithAdAccountId: (NSString*) adAccountId
    startDate: (NSDate*) startDate
    endDate: (NSDate*) endDate
    adIds: (NSArray<NSString*>*) adIds
    columns: (NSArray<NSString*>*) columns
    granularity: (OAIGranularity*) granularity
    clickWindowDays: (NSNumber*) clickWindowDays
    engagementWindowDays: (NSNumber*) engagementWindowDays
    viewWindowDays: (NSNumber*) viewWindowDays
    conversionReportTime: (NSString*) conversionReportTime
    completionHandler: (void (^)(NSArray<NSDictionary<NSString*, NSObject*>*>* output, NSError* error)) handler;


/// List ads
/// Get a list of the ads in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param campaignIds List of Campaign Ids to use to filter the results. (optional)
/// @param adGroupIds List of Ad group Ids to use to filter the results. (optional)
/// @param adIds List of Ad Ids to use to filter the results. (optional)
/// @param entityStatuses Entity status (optional)
/// @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional) (default to @25)
/// @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)
/// @param bookmark Cursor used to fetch the next page of items (optional)
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account ads parameters.",
///  code:0 message:"Unexpected error"
///
/// @return OAIPaginated*
-(NSURLSessionTask*) adsListWithAdAccountId: (NSString*) adAccountId
    campaignIds: (NSArray<NSString*>*) campaignIds
    adGroupIds: (NSArray<NSString*>*) adGroupIds
    adIds: (NSArray<NSString*>*) adIds
    entityStatuses: (NSArray<NSString*>*) entityStatuses
    pageSize: (NSNumber*) pageSize
    order: (NSString*) order
    bookmark: (NSString*) bookmark
    completionHandler: (void (^)(OAIPaginated* output, NSError* error)) handler;


/// Create async request for an account analytics report
/// This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param adsAnalyticsCreateAsyncRequest 
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account ads analytics parameters.",
///  code:0 message:"Unexpected error"
///
/// @return OAIAdsAnalyticsCreateAsyncResponse*
-(NSURLSessionTask*) analyticsCreateReportWithAdAccountId: (NSString*) adAccountId
    adsAnalyticsCreateAsyncRequest: (OAIAdsAnalyticsCreateAsyncRequest*) adsAnalyticsCreateAsyncRequest
    completionHandler: (void (^)(OAIAdsAnalyticsCreateAsyncResponse* output, NSError* error)) handler;


/// Get the account analytics report created by the async call
/// This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report and it's valid for an hour. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param token Token returned from the post request creation call
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account ads analytics parameters.",
///  code:0 message:"Unexpected error"
///
/// @return OAIAdsAnalyticsGetAsyncResponse*
-(NSURLSessionTask*) analyticsGetReportWithAdAccountId: (NSString*) adAccountId
    token: (NSString*) token
    completionHandler: (void (^)(OAIAdsAnalyticsGetAsyncResponse* output, NSError* error)) handler;


/// Get campaign analytics
/// Get analytics for the specified campaigns in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
/// @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
/// @param campaignIds List of Campaign Ids to use to filter the results.
/// @param columns Columns to retrieve. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned
/// @param granularity Granularity
/// @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional) (default to @1)
/// @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional) (default to @"TIME_OF_AD_ACTION")
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account campaign analytics parameters.",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<NSDictionary<NSString*, NSObject*>*>*
-(NSURLSessionTask*) campaignsAnalyticsWithAdAccountId: (NSString*) adAccountId
    startDate: (NSDate*) startDate
    endDate: (NSDate*) endDate
    campaignIds: (NSArray<NSString*>*) campaignIds
    columns: (NSArray<NSString*>*) columns
    granularity: (OAIGranularity*) granularity
    clickWindowDays: (NSNumber*) clickWindowDays
    engagementWindowDays: (NSNumber*) engagementWindowDays
    viewWindowDays: (NSNumber*) viewWindowDays
    conversionReportTime: (NSString*) conversionReportTime
    completionHandler: (void (^)(NSArray<NSDictionary<NSString*, NSObject*>*>* output, NSError* error)) handler;


/// List campaigns
/// Get a list of the campaigns in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param campaignIds List of Campaign Ids to use to filter the results. (optional)
/// @param entityStatuses Entity status (optional)
/// @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional) (default to @25)
/// @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional)
/// @param bookmark Cursor used to fetch the next page of items (optional)
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account campaign parameters.",
///  code:0 message:"Unexpected error"
///
/// @return OAIPaginated*
-(NSURLSessionTask*) campaignsListWithAdAccountId: (NSString*) adAccountId
    campaignIds: (NSArray<NSString*>*) campaignIds
    entityStatuses: (NSArray<NSString*>*) entityStatuses
    pageSize: (NSNumber*) pageSize
    order: (NSString*) order
    bookmark: (NSString*) bookmark
    completionHandler: (void (^)(OAIPaginated* output, NSError* error)) handler;


/// Get product group analytics
/// Get analytics for the specified product groups in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
///
/// @param adAccountId Unique identifier of an ad account.
/// @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
/// @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
/// @param productGroupIds List of Product group Ids to use to filter the results.
/// @param columns Columns to retrieve. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned
/// @param granularity Granularity
/// @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional) (default to @30)
/// @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional) (default to @1)
/// @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional) (default to @"TIME_OF_AD_ACTION")
/// 
///  code:200 message:"Success",
///  code:400 message:"Invalid ad account ads analytics parameters.",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<NSDictionary<NSString*, NSObject*>*>*
-(NSURLSessionTask*) productGroupsAnalyticsWithAdAccountId: (NSString*) adAccountId
    startDate: (NSDate*) startDate
    endDate: (NSDate*) endDate
    productGroupIds: (NSArray<NSString*>*) productGroupIds
    columns: (NSArray<NSString*>*) columns
    granularity: (OAIGranularity*) granularity
    clickWindowDays: (NSNumber*) clickWindowDays
    engagementWindowDays: (NSNumber*) engagementWindowDays
    viewWindowDays: (NSNumber*) viewWindowDays
    conversionReportTime: (NSString*) conversionReportTime
    completionHandler: (void (^)(NSArray<NSDictionary<NSString*, NSObject*>*>* output, NSError* error)) handler;



@end
