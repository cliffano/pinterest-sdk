//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

import 'package:openapi/api.dart';
import 'package:test/test.dart';


/// tests for AdsApi
void main() {
  // final instance = AdsApi();

  group('tests for AdsApi', () {
    // Create ad preview with pin or image
    //
    // Create an ad preview given an ad account ID and either an existing organic pin ID or the URL for an image to be used to create the Pin and the ad. <p/> If you are creating a preview from an existing Pin, that Pin must be promotable: that is, it must have a clickthrough link and meet other requirements. (See <a href=\"https://help.pinterest.com/en/business/article/promoted-pins-overview\" target=\"_blank\">Ads Overview</a>.) <p/> You can view the returned preview URL on a webpage or iframe for 7 days, after which the URL expires.
    //
    //Future<AdPreviewURLResponse> adPreviewsCreate(String adAccountId, AdPreviewRequest adPreviewRequest) async
    test('test adPreviewsCreate', () async {
      // TODO
    });

    // Get targeting analytics for ads
    //
    // Get targeting analytics for one or more ads. For the requested ad(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \"age_bucket\") for applicable values (e.g. \"45-49\"). <p/> - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
    //
    //Future<MetricsResponse> adTargetingAnalyticsGet(String adAccountId, List<String> adIds, DateTime startDate, DateTime endDate, List<AdsAnalyticsTargetingType> targetingTypes, List<String> columns, Granularity granularity, { int clickWindowDays, int engagementWindowDays, int viewWindowDays, String conversionReportTime, ConversionReportAttributionType attributionTypes }) async
    test('test adTargetingAnalyticsGet', () async {
      // TODO
    });

    // Get ad analytics
    //
    // Get analytics for the specified ads in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
    //
    //Future<List<AdsAnalyticsResponseInner>> adsAnalytics(String adAccountId, DateTime startDate, DateTime endDate, List<String> adIds, List<String> columns, Granularity granularity, { int clickWindowDays, int engagementWindowDays, int viewWindowDays, String conversionReportTime }) async
    test('test adsAnalytics', () async {
      // TODO
    });

    // Create ads
    //
    // Create multiple new ads. Request must contain ad_group_id, creative_type, and the source Pin pin_id.
    //
    //Future<AdArrayResponse> adsCreate(String adAccountId, List<AdCreateRequest> adCreateRequest) async
    test('test adsCreate', () async {
      // TODO
    });

    // Get ad
    //
    // Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the <a href=\"https://www.pinterest.com/_/_/policy/advertising-guidelines/\" target=\"_blank\">Pinterest advertising standards</a>.
    //
    //Future<AdResponse> adsGet(String adAccountId, String adId) async
    test('test adsGet', () async {
      // TODO
    });

    // List ads
    //
    // List ads that meet the filters provided:   - Listed campaign ids or ad group ids or ad ids   - Listed entity statuses <p/> If no filter is provided, all ads in the ad account are returned. <p/> <strong>Note:</strong><p/> Provide only campaign_id or ad_group_id or ad_id. Do not provide more than one type. <p/> Review status is provided for each ad; if review_status is REJECTED, the rejected_reasons field will contain additional information. For more, see <a href=\"https://policy.pinterest.com/en/advertising-guidelines\">Pinterest advertising standards</a>.
    //
    //Future<AdsList200Response> adsList(String adAccountId, { List<String> campaignIds, List<String> adGroupIds, List<String> adIds, List<String> entityStatuses, int pageSize, String order, String bookmark }) async
    test('test adsList', () async {
      // TODO
    });

    // Update ads
    //
    // Update multiple existing ads
    //
    //Future<AdArrayResponse> adsUpdate(String adAccountId, List<AdUpdateRequest> adUpdateRequest) async
    test('test adsUpdate', () async {
      // TODO
    });

  });
}
