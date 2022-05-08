# openapi
Pinterest's REST API

This Dart package is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: 5.3.0
- Build package: org.openapitools.codegen.languages.DartClientCodegen
For more information, please visit [https://developers.pinterest.com/](https://developers.pinterest.com/)

## Requirements

Dart 2.0 or later

## Installation & Usage

### Github
If this Dart package is published to Github, add the following dependency to your pubspec.yaml
```
dependencies:
  openapi:
    git: https://github.com/GIT_USER_ID/GIT_REPO_ID.git
```

### Local
To use the package in your local drive, add the following dependency to your pubspec.yaml
```
dependencies:
  openapi:
    path: /path/to/openapi
```

## Tests

TODO

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```dart
import 'package:openapi/api.dart';

// TODO Configure OAuth2 access token for authorization: pinterest_oauth2
//defaultApiClient.getAuthentication<OAuth>('pinterest_oauth2').accessToken = 'YOUR_ACCESS_TOKEN';

final api_instance = AdAccountsApi();
final adAccountId = adAccountId_example; // String | Unique identifier of an ad account.
final startDate = 2013-10-20; // DateTime | Metric report start date (UTC). Format: YYYY-MM-DD
final endDate = 2013-10-20; // DateTime | Metric report end date (UTC). Format: YYYY-MM-DD
final columns = []; // List<String> | Columns to retrieve. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned
final granularity = DAY; // Granularity | Granularity
final clickWindowDays = 1; // int | Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
final engagementWindowDays = 56; // int | Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
final viewWindowDays = 56; // int | Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
final conversionReportTime = TIME_OF_AD_ACTION; // String | The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.

try {
    final result = api_instance.adAccountAnalytics(adAccountId, startDate, endDate, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
    print(result);
} catch (e) {
    print('Exception when calling AdAccountsApi->adAccountAnalytics: $e\n');
}

```

## Documentation for API Endpoints

All URIs are relative to *https://api.pinterest.com/v5*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AdAccountsApi* | [**adAccountAnalytics**](doc//AdAccountsApi.md#adaccountanalytics) | **GET** /ad_accounts/{ad_account_id}/analytics | Get ad account analytics
*AdAccountsApi* | [**adAccountsList**](doc//AdAccountsApi.md#adaccountslist) | **GET** /ad_accounts | List ad accounts
*AdAccountsApi* | [**adGroupsAnalytics**](doc//AdAccountsApi.md#adgroupsanalytics) | **GET** /ad_accounts/{ad_account_id}/ad_groups/analytics | Get ad group analytics
*AdAccountsApi* | [**adGroupsList**](doc//AdAccountsApi.md#adgroupslist) | **GET** /ad_accounts/{ad_account_id}/ad_groups | List ad groups
*AdAccountsApi* | [**adsAnalytics**](doc//AdAccountsApi.md#adsanalytics) | **GET** /ad_accounts/{ad_account_id}/ads/analytics | Get ad analytics
*AdAccountsApi* | [**adsList**](doc//AdAccountsApi.md#adslist) | **GET** /ad_accounts/{ad_account_id}/ads | List ads
*AdAccountsApi* | [**analyticsCreateReport**](doc//AdAccountsApi.md#analyticscreatereport) | **POST** /ad_accounts/{ad_account_id}/reports | Create async request for an account analytics report
*AdAccountsApi* | [**analyticsGetReport**](doc//AdAccountsApi.md#analyticsgetreport) | **GET** /ad_accounts/{ad_account_id}/reports | Get the account analytics report created by the async call
*AdAccountsApi* | [**campaignsAnalytics**](doc//AdAccountsApi.md#campaignsanalytics) | **GET** /ad_accounts/{ad_account_id}/campaigns/analytics | Get campaign analytics
*AdAccountsApi* | [**campaignsList**](doc//AdAccountsApi.md#campaignslist) | **GET** /ad_accounts/{ad_account_id}/campaigns | List campaigns
*AdAccountsApi* | [**productGroupsAnalytics**](doc//AdAccountsApi.md#productgroupsanalytics) | **GET** /ad_accounts/{ad_account_id}/product_groups/analytics | Get product group analytics
*BoardsApi* | [**boardSectionsCreate**](doc//BoardsApi.md#boardsectionscreate) | **POST** /boards/{board_id}/sections | Create board section
*BoardsApi* | [**boardSectionsDelete**](doc//BoardsApi.md#boardsectionsdelete) | **DELETE** /boards/{board_id}/sections/{section_id} | Delete board section
*BoardsApi* | [**boardSectionsList**](doc//BoardsApi.md#boardsectionslist) | **GET** /boards/{board_id}/sections | List board sections
*BoardsApi* | [**boardSectionsListPins**](doc//BoardsApi.md#boardsectionslistpins) | **GET** /boards/{board_id}/sections/{section_id}/pins | List Pins on board section
*BoardsApi* | [**boardSectionsUpdate**](doc//BoardsApi.md#boardsectionsupdate) | **PATCH** /boards/{board_id}/sections/{section_id} | Update board section
*BoardsApi* | [**boardsCreate**](doc//BoardsApi.md#boardscreate) | **POST** /boards | Create board
*BoardsApi* | [**boardsDelete**](doc//BoardsApi.md#boardsdelete) | **DELETE** /boards/{board_id} | Delete board
*BoardsApi* | [**boardsGet**](doc//BoardsApi.md#boardsget) | **GET** /boards/{board_id} | Get board
*BoardsApi* | [**boardsList**](doc//BoardsApi.md#boardslist) | **GET** /boards | List boards
*BoardsApi* | [**boardsListPins**](doc//BoardsApi.md#boardslistpins) | **GET** /boards/{board_id}/pins | List Pins on board
*BoardsApi* | [**boardsUpdate**](doc//BoardsApi.md#boardsupdate) | **PATCH** /boards/{board_id} | Update board
*CatalogsApi* | [**catalogsProductGroupsCreate**](doc//CatalogsApi.md#catalogsproductgroupscreate) | **POST** /catalogs/product_groups | Create product group
*CatalogsApi* | [**catalogsProductGroupsDelete**](doc//CatalogsApi.md#catalogsproductgroupsdelete) | **DELETE** /catalogs/product_groups/{product_group_id} | Delete product group
*CatalogsApi* | [**catalogsProductGroupsList**](doc//CatalogsApi.md#catalogsproductgroupslist) | **GET** /catalogs/product_groups | Get product groups list
*CatalogsApi* | [**catalogsProductGroupsUpdate**](doc//CatalogsApi.md#catalogsproductgroupsupdate) | **PATCH** /catalogs/product_groups/{product_group_id} | Update product group
*CatalogsApi* | [**feedProcessingResultsList**](doc//CatalogsApi.md#feedprocessingresultslist) | **GET** /catalogs/feeds/{feed_id}/processing_results | List processing results for a given feed
*CatalogsApi* | [**feedsCreate**](doc//CatalogsApi.md#feedscreate) | **POST** /catalogs/feeds | Create feed
*CatalogsApi* | [**feedsDelete**](doc//CatalogsApi.md#feedsdelete) | **DELETE** /catalogs/feeds/{feed_id} | Delete feed
*CatalogsApi* | [**feedsGet**](doc//CatalogsApi.md#feedsget) | **GET** /catalogs/feeds/{feed_id} | Get feed
*CatalogsApi* | [**feedsList**](doc//CatalogsApi.md#feedslist) | **GET** /catalogs/feeds | List feeds
*CatalogsApi* | [**feedsUpdate**](doc//CatalogsApi.md#feedsupdate) | **PATCH** /catalogs/feeds/{feed_id} | Update feed
*CatalogsApi* | [**itemsBatchGet**](doc//CatalogsApi.md#itemsbatchget) | **GET** /catalogs/items/batch/{batch_id} | Get catalogs items batch
*CatalogsApi* | [**itemsBatchPost**](doc//CatalogsApi.md#itemsbatchpost) | **POST** /catalogs/items/batch | Perform an operation on an item batch
*CatalogsApi* | [**itemsGet**](doc//CatalogsApi.md#itemsget) | **GET** /catalogs/items | Get catalogs items
*MediaApi* | [**mediaCreate**](doc//MediaApi.md#mediacreate) | **POST** /media | Register media upload
*MediaApi* | [**mediaGet**](doc//MediaApi.md#mediaget) | **GET** /media/{media_id} | Get media upload details
*MediaApi* | [**mediaList**](doc//MediaApi.md#medialist) | **GET** /media | List media uploads
*OauthApi* | [**oauthToken**](doc//OauthApi.md#oauthtoken) | **POST** /oauth/token | Generate OAuth access token
*PinsApi* | [**pinsAnalytics**](doc//PinsApi.md#pinsanalytics) | **GET** /pins/{pin_id}/analytics | Get Pin analytics
*PinsApi* | [**pinsCreate**](doc//PinsApi.md#pinscreate) | **POST** /pins | Create Pin
*PinsApi* | [**pinsDelete**](doc//PinsApi.md#pinsdelete) | **DELETE** /pins/{pin_id} | Delete Pin
*PinsApi* | [**pinsGet**](doc//PinsApi.md#pinsget) | **GET** /pins/{pin_id} | Get Pin
*UserAccountApi* | [**userAccountAnalytics**](doc//UserAccountApi.md#useraccountanalytics) | **GET** /user_account/analytics | Get user account analytics
*UserAccountApi* | [**userAccountGet**](doc//UserAccountApi.md#useraccountget) | **GET** /user_account | Get user account


## Documentation For Models

 - [Account](doc//Account.md)
 - [ActionType](doc//ActionType.md)
 - [AdAccount](doc//AdAccount.md)
 - [AdAccountOwner](doc//AdAccountOwner.md)
 - [AdGroupResponse](doc//AdGroupResponse.md)
 - [AdGroupResponseAllOf](doc//AdGroupResponseAllOf.md)
 - [AdGroupResponseAllOf1](doc//AdGroupResponseAllOf1.md)
 - [AdGroupSummaryStatus](doc//AdGroupSummaryStatus.md)
 - [AdResponse](doc//AdResponse.md)
 - [AdResponseAllOf](doc//AdResponseAllOf.md)
 - [AdResponseAllOf1](doc//AdResponseAllOf1.md)
 - [AdsAnalyticsCreateAsyncRequest](doc//AdsAnalyticsCreateAsyncRequest.md)
 - [AdsAnalyticsCreateAsyncRequestAllOf](doc//AdsAnalyticsCreateAsyncRequestAllOf.md)
 - [AdsAnalyticsCreateAsyncRequestAllOf1](doc//AdsAnalyticsCreateAsyncRequestAllOf1.md)
 - [AdsAnalyticsCreateAsyncResponse](doc//AdsAnalyticsCreateAsyncResponse.md)
 - [AdsAnalyticsFilterColumn](doc//AdsAnalyticsFilterColumn.md)
 - [AdsAnalyticsFilterOperator](doc//AdsAnalyticsFilterOperator.md)
 - [AdsAnalyticsGetAsyncResponse](doc//AdsAnalyticsGetAsyncResponse.md)
 - [AdsAnalyticsMetricsFilter](doc//AdsAnalyticsMetricsFilter.md)
 - [AdsAnalyticsTargetingType](doc//AdsAnalyticsTargetingType.md)
 - [AnalyticsMetricsResponse](doc//AnalyticsMetricsResponse.md)
 - [AnalyticsMetricsResponseDailyMetrics](doc//AnalyticsMetricsResponseDailyMetrics.md)
 - [AvailabilityFilter](doc//AvailabilityFilter.md)
 - [BatchOperation](doc//BatchOperation.md)
 - [BatchOperationStatus](doc//BatchOperationStatus.md)
 - [Board](doc//Board.md)
 - [BoardOwner](doc//BoardOwner.md)
 - [BoardSection](doc//BoardSection.md)
 - [BoardUpdate](doc//BoardUpdate.md)
 - [BrandFilter](doc//BrandFilter.md)
 - [CampaignCommon](doc//CampaignCommon.md)
 - [CampaignResponse](doc//CampaignResponse.md)
 - [CampaignResponseAllOf](doc//CampaignResponseAllOf.md)
 - [CampaignResponseAllOf1](doc//CampaignResponseAllOf1.md)
 - [CampaignSummaryStatus](doc//CampaignSummaryStatus.md)
 - [CatalogsDbItem](doc//CatalogsDbItem.md)
 - [CatalogsFeed](doc//CatalogsFeed.md)
 - [CatalogsFeedCredentials](doc//CatalogsFeedCredentials.md)
 - [CatalogsFeedIngestionDetails](doc//CatalogsFeedIngestionDetails.md)
 - [CatalogsFeedIngestionErrors](doc//CatalogsFeedIngestionErrors.md)
 - [CatalogsFeedIngestionInfo](doc//CatalogsFeedIngestionInfo.md)
 - [CatalogsFeedProcessingResult](doc//CatalogsFeedProcessingResult.md)
 - [CatalogsFeedProcessingResultFields](doc//CatalogsFeedProcessingResultFields.md)
 - [CatalogsFeedProcessingSchedule](doc//CatalogsFeedProcessingSchedule.md)
 - [CatalogsFeedProcessingStatus](doc//CatalogsFeedProcessingStatus.md)
 - [CatalogsFeedProductCounts](doc//CatalogsFeedProductCounts.md)
 - [CatalogsFeedValidationDetails](doc//CatalogsFeedValidationDetails.md)
 - [CatalogsFeedValidationErrors](doc//CatalogsFeedValidationErrors.md)
 - [CatalogsFeedValidationWarnings](doc//CatalogsFeedValidationWarnings.md)
 - [CatalogsFeedsCreateRequest](doc//CatalogsFeedsCreateRequest.md)
 - [CatalogsFeedsUpdateRequest](doc//CatalogsFeedsUpdateRequest.md)
 - [CatalogsFormat](doc//CatalogsFormat.md)
 - [CatalogsItems](doc//CatalogsItems.md)
 - [CatalogsItemsBatch](doc//CatalogsItemsBatch.md)
 - [CatalogsItemsBatchRequest](doc//CatalogsItemsBatchRequest.md)
 - [CatalogsProductGroup](doc//CatalogsProductGroup.md)
 - [CatalogsProductGroupCreateRequest](doc//CatalogsProductGroupCreateRequest.md)
 - [CatalogsProductGroupCurrencyCriteria](doc//CatalogsProductGroupCurrencyCriteria.md)
 - [CatalogsProductGroupFilterKeys](doc//CatalogsProductGroupFilterKeys.md)
 - [CatalogsProductGroupFilters](doc//CatalogsProductGroupFilters.md)
 - [CatalogsProductGroupFiltersAllOf](doc//CatalogsProductGroupFiltersAllOf.md)
 - [CatalogsProductGroupFiltersAnyOf](doc//CatalogsProductGroupFiltersAnyOf.md)
 - [CatalogsProductGroupMultipleStringCriteria](doc//CatalogsProductGroupMultipleStringCriteria.md)
 - [CatalogsProductGroupMultipleStringListCriteria](doc//CatalogsProductGroupMultipleStringListCriteria.md)
 - [CatalogsProductGroupPricingCriteria](doc//CatalogsProductGroupPricingCriteria.md)
 - [CatalogsProductGroupStatus](doc//CatalogsProductGroupStatus.md)
 - [CatalogsProductGroupType](doc//CatalogsProductGroupType.md)
 - [CatalogsProductGroupUpdateRequest](doc//CatalogsProductGroupUpdateRequest.md)
 - [CatalogsStatus](doc//CatalogsStatus.md)
 - [ConditionFilter](doc//ConditionFilter.md)
 - [ConversionAttributionWindowDays](doc//ConversionAttributionWindowDays.md)
 - [ConversionReportAttributionType](doc//ConversionReportAttributionType.md)
 - [ConversionReportTimeType](doc//ConversionReportTimeType.md)
 - [Country](doc//Country.md)
 - [Currency](doc//Currency.md)
 - [CurrencyFilter](doc//CurrencyFilter.md)
 - [CustomLabel0Filter](doc//CustomLabel0Filter.md)
 - [CustomLabel1Filter](doc//CustomLabel1Filter.md)
 - [CustomLabel2Filter](doc//CustomLabel2Filter.md)
 - [CustomLabel3Filter](doc//CustomLabel3Filter.md)
 - [CustomLabel4Filter](doc//CustomLabel4Filter.md)
 - [DataOutputFormat](doc//DataOutputFormat.md)
 - [EntityStatus](doc//EntityStatus.md)
 - [Error](doc//Error.md)
 - [FeedFields](doc//FeedFields.md)
 - [GenderFilter](doc//GenderFilter.md)
 - [GoogleProductCategory0Filter](doc//GoogleProductCategory0Filter.md)
 - [GoogleProductCategory1Filter](doc//GoogleProductCategory1Filter.md)
 - [GoogleProductCategory2Filter](doc//GoogleProductCategory2Filter.md)
 - [GoogleProductCategory3Filter](doc//GoogleProductCategory3Filter.md)
 - [GoogleProductCategory4Filter](doc//GoogleProductCategory4Filter.md)
 - [GoogleProductCategory5Filter](doc//GoogleProductCategory5Filter.md)
 - [GoogleProductCategory6Filter](doc//GoogleProductCategory6Filter.md)
 - [Granularity](doc//Granularity.md)
 - [ImageDetails](doc//ImageDetails.md)
 - [ItemAttributes](doc//ItemAttributes.md)
 - [ItemBatchRecord](doc//ItemBatchRecord.md)
 - [ItemGroupIdFilter](doc//ItemGroupIdFilter.md)
 - [ItemIdFilter](doc//ItemIdFilter.md)
 - [ItemProcessingRecord](doc//ItemProcessingRecord.md)
 - [ItemProcessingStatus](doc//ItemProcessingStatus.md)
 - [ItemValidationEvent](doc//ItemValidationEvent.md)
 - [Language](doc//Language.md)
 - [MaxPriceFilter](doc//MaxPriceFilter.md)
 - [MediaUpload](doc//MediaUpload.md)
 - [MediaUploadAllOf](doc//MediaUploadAllOf.md)
 - [MediaUploadAllOfUploadParameters](doc//MediaUploadAllOfUploadParameters.md)
 - [MediaUploadDetails](doc//MediaUploadDetails.md)
 - [MediaUploadRequest](doc//MediaUploadRequest.md)
 - [MediaUploadStatus](doc//MediaUploadStatus.md)
 - [MediaUploadType](doc//MediaUploadType.md)
 - [MetricsReportingLevel](doc//MetricsReportingLevel.md)
 - [MinPriceFilter](doc//MinPriceFilter.md)
 - [NonNullableCatalogsCurrency](doc//NonNullableCatalogsCurrency.md)
 - [NullableCurrency](doc//NullableCurrency.md)
 - [OauthAccessTokenRequest](doc//OauthAccessTokenRequest.md)
 - [OauthAccessTokenRequestCode](doc//OauthAccessTokenRequestCode.md)
 - [OauthAccessTokenRequestCodeAllOf](doc//OauthAccessTokenRequestCodeAllOf.md)
 - [OauthAccessTokenRequestRefresh](doc//OauthAccessTokenRequestRefresh.md)
 - [OauthAccessTokenRequestRefreshAllOf](doc//OauthAccessTokenRequestRefreshAllOf.md)
 - [OauthAccessTokenResponse](doc//OauthAccessTokenResponse.md)
 - [OauthAccessTokenResponseCode](doc//OauthAccessTokenResponseCode.md)
 - [OauthAccessTokenResponseCodeAllOf](doc//OauthAccessTokenResponseCodeAllOf.md)
 - [OauthAccessTokenResponseRefresh](doc//OauthAccessTokenResponseRefresh.md)
 - [ObjectiveType](doc//ObjectiveType.md)
 - [PacingDeliveryType](doc//PacingDeliveryType.md)
 - [Paginated](doc//Paginated.md)
 - [Pin](doc//Pin.md)
 - [PinMedia](doc//PinMedia.md)
 - [PinMediaSource](doc//PinMediaSource.md)
 - [PinMediaSourceImageBase64](doc//PinMediaSourceImageBase64.md)
 - [PinMediaSourceImageURL](doc//PinMediaSourceImageURL.md)
 - [PinMediaSourceVideoID](doc//PinMediaSourceVideoID.md)
 - [PinMediaWithImage](doc//PinMediaWithImage.md)
 - [PinMediaWithImageAllOf](doc//PinMediaWithImageAllOf.md)
 - [PinPromotionSummaryStatus](doc//PinPromotionSummaryStatus.md)
 - [PlacementGroupType](doc//PlacementGroupType.md)
 - [ProductAvailabilityType](doc//ProductAvailabilityType.md)
 - [ProductGroupSummaryStatus](doc//ProductGroupSummaryStatus.md)
 - [ProductType0Filter](doc//ProductType0Filter.md)
 - [ProductType1Filter](doc//ProductType1Filter.md)
 - [ProductType2Filter](doc//ProductType2Filter.md)
 - [ProductType3Filter](doc//ProductType3Filter.md)
 - [ProductType4Filter](doc//ProductType4Filter.md)
 - [ReportingColumnAsync](doc//ReportingColumnAsync.md)
 - [TargetingTypeFilter](doc//TargetingTypeFilter.md)
 - [TrackingUrls](doc//TrackingUrls.md)


## Documentation For Authorization


## basic

- **Type**: HTTP Basic authentication

## pinterest_oauth2

- **Type**: OAuth
- **Flow**: accessCode
- **Authorization URL**: https://www.pinterest.com/oauth/
- **Scopes**: 
 - **ads:read**: See all of your advertising data, including ads, ad groups, campaigns etc.
 - **ads:write**: Create, update, or delete ads, ad groups, campaigns etc.
 - **boards:read**: See your public boards, including group boards you join
 - **boards:read_secret**: See your secret boards
 - **boards:write**: Create, update, or delete your public boards
 - **boards:write_secret**: Create, update, or delete your secret boards
 - **catalogs:read**: See all of your catalogs data
 - **catalogs:write**: Create, update, or delete your catalogs data
 - **pins:read**: See your public Pins
 - **pins:read_secret**: See your secret Pins
 - **pins:write**: Create, update, or delete your public Pins
 - **pins:write_secret**: Create, update, or delete your secret Pins
 - **user_accounts:read**: See your user accounts


## Author

pinterest-api@pinterest.com
