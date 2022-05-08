# pinterestsdk

Pinterest REST API
- API version: 5.3.0
  - Build date: 2022-05-08T00:26:51.345731Z[Etc/UTC]

Pinterest's REST API

  For more information, please visit [https://developers.pinterest.com/](https://developers.pinterest.com/)

*Automatically generated by the [OpenAPI Generator](https://openapi-generator.tech)*


## Requirements

Building the API client library requires:
1. Java 1.7+
2. Maven (3.8.3+)/Gradle (7.2+)

## Installation

To install the API client library to your local Maven repository, simply execute:

```shell
mvn clean install
```

To deploy it to a remote Maven repository instead, configure the settings of the repository and execute:

```shell
mvn clean deploy
```

Refer to the [OSSRH Guide](http://central.sonatype.org/pages/ossrh-guide.html) for more information.

### Maven users

Add this dependency to your project's POM:

```xml
<dependency>
  <groupId>com.cliffano</groupId>
  <artifactId>pinterestsdk</artifactId>
  <version>1.0.0-pre.0</version>
  <scope>compile</scope>
</dependency>
```

### Gradle users

Add this dependency to your project's build file:

```groovy
  repositories {
    mavenCentral()     // Needed if the 'pinterestsdk' jar has been published to maven central.
    mavenLocal()       // Needed if the 'pinterestsdk' jar has been published to the local maven repo.
  }

  dependencies {
     implementation "com.cliffano:pinterestsdk:1.0.0-pre.0"
  }
```

### Others

At first generate the JAR by executing:

```shell
mvn clean package
```

Then manually install the following JARs:

* `target/pinterestsdk-1.0.0-pre.0.jar`
* `target/lib/*.jar`

## Getting Started

Please follow the [installation](#installation) instruction and execute the following Java code:

```java

// Import classes:
import com.cliffano.pinterestsdk.ApiClient;
import com.cliffano.pinterestsdk.ApiException;
import com.cliffano.pinterestsdk.Configuration;
import com.cliffano.pinterestsdk.auth.*;
import com.cliffano.pinterestsdk.models.*;
import com.cliffano.pinterestsdk.api.AdAccountsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.pinterest.com/v5");
    
    // Configure OAuth2 access token for authorization: pinterest_oauth2
    OAuth pinterest_oauth2 = (OAuth) defaultClient.getAuthentication("pinterest_oauth2");
    pinterest_oauth2.setAccessToken("YOUR ACCESS TOKEN");

    AdAccountsApi apiInstance = new AdAccountsApi(defaultClient);
    String adAccountId = "adAccountId_example"; // String | Unique identifier of an ad account.
    LocalDate startDate = LocalDate.now(); // LocalDate | Metric report start date (UTC). Format: YYYY-MM-DD
    LocalDate endDate = LocalDate.now(); // LocalDate | Metric report end date (UTC). Format: YYYY-MM-DD
    List<String> columns = Arrays.asList(); // List<String> | Columns to retrieve. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned
    Granularity granularity = Granularity.fromValue("TOTAL"); // Granularity | Granularity
    Integer clickWindowDays = 1; // Integer | Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
    Integer engagementWindowDays = 1; // Integer | Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
    Integer viewWindowDays = 1; // Integer | Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
    String conversionReportTime = "TIME_OF_AD_ACTION"; // String | The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
    try {
      List<Map<String, Object>> result = apiInstance.adAccountAnalytics(adAccountId, startDate, endDate, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AdAccountsApi#adAccountAnalytics");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}

```

## Documentation for API Endpoints

All URIs are relative to *https://api.pinterest.com/v5*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AdAccountsApi* | [**adAccountAnalytics**](docs/AdAccountsApi.md#adAccountAnalytics) | **GET** /ad_accounts/{ad_account_id}/analytics | Get ad account analytics
*AdAccountsApi* | [**adAccountsList**](docs/AdAccountsApi.md#adAccountsList) | **GET** /ad_accounts | List ad accounts
*AdAccountsApi* | [**adGroupsAnalytics**](docs/AdAccountsApi.md#adGroupsAnalytics) | **GET** /ad_accounts/{ad_account_id}/ad_groups/analytics | Get ad group analytics
*AdAccountsApi* | [**adGroupsList**](docs/AdAccountsApi.md#adGroupsList) | **GET** /ad_accounts/{ad_account_id}/ad_groups | List ad groups
*AdAccountsApi* | [**adsAnalytics**](docs/AdAccountsApi.md#adsAnalytics) | **GET** /ad_accounts/{ad_account_id}/ads/analytics | Get ad analytics
*AdAccountsApi* | [**adsList**](docs/AdAccountsApi.md#adsList) | **GET** /ad_accounts/{ad_account_id}/ads | List ads
*AdAccountsApi* | [**analyticsCreateReport**](docs/AdAccountsApi.md#analyticsCreateReport) | **POST** /ad_accounts/{ad_account_id}/reports | Create async request for an account analytics report
*AdAccountsApi* | [**analyticsGetReport**](docs/AdAccountsApi.md#analyticsGetReport) | **GET** /ad_accounts/{ad_account_id}/reports | Get the account analytics report created by the async call
*AdAccountsApi* | [**campaignsAnalytics**](docs/AdAccountsApi.md#campaignsAnalytics) | **GET** /ad_accounts/{ad_account_id}/campaigns/analytics | Get campaign analytics
*AdAccountsApi* | [**campaignsList**](docs/AdAccountsApi.md#campaignsList) | **GET** /ad_accounts/{ad_account_id}/campaigns | List campaigns
*AdAccountsApi* | [**productGroupsAnalytics**](docs/AdAccountsApi.md#productGroupsAnalytics) | **GET** /ad_accounts/{ad_account_id}/product_groups/analytics | Get product group analytics
*BoardsApi* | [**boardSectionsCreate**](docs/BoardsApi.md#boardSectionsCreate) | **POST** /boards/{board_id}/sections | Create board section
*BoardsApi* | [**boardSectionsDelete**](docs/BoardsApi.md#boardSectionsDelete) | **DELETE** /boards/{board_id}/sections/{section_id} | Delete board section
*BoardsApi* | [**boardSectionsList**](docs/BoardsApi.md#boardSectionsList) | **GET** /boards/{board_id}/sections | List board sections
*BoardsApi* | [**boardSectionsListPins**](docs/BoardsApi.md#boardSectionsListPins) | **GET** /boards/{board_id}/sections/{section_id}/pins | List Pins on board section
*BoardsApi* | [**boardSectionsUpdate**](docs/BoardsApi.md#boardSectionsUpdate) | **PATCH** /boards/{board_id}/sections/{section_id} | Update board section
*BoardsApi* | [**boardsCreate**](docs/BoardsApi.md#boardsCreate) | **POST** /boards | Create board
*BoardsApi* | [**boardsDelete**](docs/BoardsApi.md#boardsDelete) | **DELETE** /boards/{board_id} | Delete board
*BoardsApi* | [**boardsGet**](docs/BoardsApi.md#boardsGet) | **GET** /boards/{board_id} | Get board
*BoardsApi* | [**boardsList**](docs/BoardsApi.md#boardsList) | **GET** /boards | List boards
*BoardsApi* | [**boardsListPins**](docs/BoardsApi.md#boardsListPins) | **GET** /boards/{board_id}/pins | List Pins on board
*BoardsApi* | [**boardsUpdate**](docs/BoardsApi.md#boardsUpdate) | **PATCH** /boards/{board_id} | Update board
*CatalogsApi* | [**catalogsProductGroupsCreate**](docs/CatalogsApi.md#catalogsProductGroupsCreate) | **POST** /catalogs/product_groups | Create product group
*CatalogsApi* | [**catalogsProductGroupsDelete**](docs/CatalogsApi.md#catalogsProductGroupsDelete) | **DELETE** /catalogs/product_groups/{product_group_id} | Delete product group
*CatalogsApi* | [**catalogsProductGroupsList**](docs/CatalogsApi.md#catalogsProductGroupsList) | **GET** /catalogs/product_groups | Get product groups list
*CatalogsApi* | [**catalogsProductGroupsUpdate**](docs/CatalogsApi.md#catalogsProductGroupsUpdate) | **PATCH** /catalogs/product_groups/{product_group_id} | Update product group
*CatalogsApi* | [**feedProcessingResultsList**](docs/CatalogsApi.md#feedProcessingResultsList) | **GET** /catalogs/feeds/{feed_id}/processing_results | List processing results for a given feed
*CatalogsApi* | [**feedsCreate**](docs/CatalogsApi.md#feedsCreate) | **POST** /catalogs/feeds | Create feed
*CatalogsApi* | [**feedsDelete**](docs/CatalogsApi.md#feedsDelete) | **DELETE** /catalogs/feeds/{feed_id} | Delete feed
*CatalogsApi* | [**feedsGet**](docs/CatalogsApi.md#feedsGet) | **GET** /catalogs/feeds/{feed_id} | Get feed
*CatalogsApi* | [**feedsList**](docs/CatalogsApi.md#feedsList) | **GET** /catalogs/feeds | List feeds
*CatalogsApi* | [**feedsUpdate**](docs/CatalogsApi.md#feedsUpdate) | **PATCH** /catalogs/feeds/{feed_id} | Update feed
*CatalogsApi* | [**itemsBatchGet**](docs/CatalogsApi.md#itemsBatchGet) | **GET** /catalogs/items/batch/{batch_id} | Get catalogs items batch
*CatalogsApi* | [**itemsBatchPost**](docs/CatalogsApi.md#itemsBatchPost) | **POST** /catalogs/items/batch | Perform an operation on an item batch
*CatalogsApi* | [**itemsGet**](docs/CatalogsApi.md#itemsGet) | **GET** /catalogs/items | Get catalogs items
*MediaApi* | [**mediaCreate**](docs/MediaApi.md#mediaCreate) | **POST** /media | Register media upload
*MediaApi* | [**mediaGet**](docs/MediaApi.md#mediaGet) | **GET** /media/{media_id} | Get media upload details
*MediaApi* | [**mediaList**](docs/MediaApi.md#mediaList) | **GET** /media | List media uploads
*OauthApi* | [**oauthToken**](docs/OauthApi.md#oauthToken) | **POST** /oauth/token | Generate OAuth access token
*PinsApi* | [**pinsAnalytics**](docs/PinsApi.md#pinsAnalytics) | **GET** /pins/{pin_id}/analytics | Get Pin analytics
*PinsApi* | [**pinsCreate**](docs/PinsApi.md#pinsCreate) | **POST** /pins | Create Pin
*PinsApi* | [**pinsDelete**](docs/PinsApi.md#pinsDelete) | **DELETE** /pins/{pin_id} | Delete Pin
*PinsApi* | [**pinsGet**](docs/PinsApi.md#pinsGet) | **GET** /pins/{pin_id} | Get Pin
*UserAccountApi* | [**userAccountAnalytics**](docs/UserAccountApi.md#userAccountAnalytics) | **GET** /user_account/analytics | Get user account analytics
*UserAccountApi* | [**userAccountGet**](docs/UserAccountApi.md#userAccountGet) | **GET** /user_account | Get user account


## Documentation for Models

 - [Account](docs/Account.md)
 - [ActionType](docs/ActionType.md)
 - [AdAccount](docs/AdAccount.md)
 - [AdAccountOwner](docs/AdAccountOwner.md)
 - [AdGroupResponse](docs/AdGroupResponse.md)
 - [AdGroupResponseAllOf](docs/AdGroupResponseAllOf.md)
 - [AdGroupResponseAllOf1](docs/AdGroupResponseAllOf1.md)
 - [AdGroupSummaryStatus](docs/AdGroupSummaryStatus.md)
 - [AdResponse](docs/AdResponse.md)
 - [AdResponseAllOf](docs/AdResponseAllOf.md)
 - [AdResponseAllOf1](docs/AdResponseAllOf1.md)
 - [AdsAnalyticsCreateAsyncRequest](docs/AdsAnalyticsCreateAsyncRequest.md)
 - [AdsAnalyticsCreateAsyncRequestAllOf](docs/AdsAnalyticsCreateAsyncRequestAllOf.md)
 - [AdsAnalyticsCreateAsyncRequestAllOf1](docs/AdsAnalyticsCreateAsyncRequestAllOf1.md)
 - [AdsAnalyticsCreateAsyncResponse](docs/AdsAnalyticsCreateAsyncResponse.md)
 - [AdsAnalyticsFilterColumn](docs/AdsAnalyticsFilterColumn.md)
 - [AdsAnalyticsFilterOperator](docs/AdsAnalyticsFilterOperator.md)
 - [AdsAnalyticsGetAsyncResponse](docs/AdsAnalyticsGetAsyncResponse.md)
 - [AdsAnalyticsMetricsFilter](docs/AdsAnalyticsMetricsFilter.md)
 - [AdsAnalyticsTargetingType](docs/AdsAnalyticsTargetingType.md)
 - [AnalyticsMetricsResponse](docs/AnalyticsMetricsResponse.md)
 - [AnalyticsMetricsResponseDailyMetrics](docs/AnalyticsMetricsResponseDailyMetrics.md)
 - [AvailabilityFilter](docs/AvailabilityFilter.md)
 - [BatchOperation](docs/BatchOperation.md)
 - [BatchOperationStatus](docs/BatchOperationStatus.md)
 - [Board](docs/Board.md)
 - [BoardOwner](docs/BoardOwner.md)
 - [BoardSection](docs/BoardSection.md)
 - [BoardUpdate](docs/BoardUpdate.md)
 - [BrandFilter](docs/BrandFilter.md)
 - [CampaignCommon](docs/CampaignCommon.md)
 - [CampaignResponse](docs/CampaignResponse.md)
 - [CampaignResponseAllOf](docs/CampaignResponseAllOf.md)
 - [CampaignResponseAllOf1](docs/CampaignResponseAllOf1.md)
 - [CampaignSummaryStatus](docs/CampaignSummaryStatus.md)
 - [CatalogsDbItem](docs/CatalogsDbItem.md)
 - [CatalogsFeed](docs/CatalogsFeed.md)
 - [CatalogsFeedCredentials](docs/CatalogsFeedCredentials.md)
 - [CatalogsFeedIngestionDetails](docs/CatalogsFeedIngestionDetails.md)
 - [CatalogsFeedIngestionErrors](docs/CatalogsFeedIngestionErrors.md)
 - [CatalogsFeedIngestionInfo](docs/CatalogsFeedIngestionInfo.md)
 - [CatalogsFeedProcessingResult](docs/CatalogsFeedProcessingResult.md)
 - [CatalogsFeedProcessingResultFields](docs/CatalogsFeedProcessingResultFields.md)
 - [CatalogsFeedProcessingSchedule](docs/CatalogsFeedProcessingSchedule.md)
 - [CatalogsFeedProcessingStatus](docs/CatalogsFeedProcessingStatus.md)
 - [CatalogsFeedProductCounts](docs/CatalogsFeedProductCounts.md)
 - [CatalogsFeedValidationDetails](docs/CatalogsFeedValidationDetails.md)
 - [CatalogsFeedValidationErrors](docs/CatalogsFeedValidationErrors.md)
 - [CatalogsFeedValidationWarnings](docs/CatalogsFeedValidationWarnings.md)
 - [CatalogsFeedsCreateRequest](docs/CatalogsFeedsCreateRequest.md)
 - [CatalogsFeedsUpdateRequest](docs/CatalogsFeedsUpdateRequest.md)
 - [CatalogsFormat](docs/CatalogsFormat.md)
 - [CatalogsItems](docs/CatalogsItems.md)
 - [CatalogsItemsBatch](docs/CatalogsItemsBatch.md)
 - [CatalogsItemsBatchRequest](docs/CatalogsItemsBatchRequest.md)
 - [CatalogsProductGroup](docs/CatalogsProductGroup.md)
 - [CatalogsProductGroupCreateRequest](docs/CatalogsProductGroupCreateRequest.md)
 - [CatalogsProductGroupCurrencyCriteria](docs/CatalogsProductGroupCurrencyCriteria.md)
 - [CatalogsProductGroupFilterKeys](docs/CatalogsProductGroupFilterKeys.md)
 - [CatalogsProductGroupFilters](docs/CatalogsProductGroupFilters.md)
 - [CatalogsProductGroupFiltersAllOf](docs/CatalogsProductGroupFiltersAllOf.md)
 - [CatalogsProductGroupFiltersAnyOf](docs/CatalogsProductGroupFiltersAnyOf.md)
 - [CatalogsProductGroupMultipleStringCriteria](docs/CatalogsProductGroupMultipleStringCriteria.md)
 - [CatalogsProductGroupMultipleStringListCriteria](docs/CatalogsProductGroupMultipleStringListCriteria.md)
 - [CatalogsProductGroupPricingCriteria](docs/CatalogsProductGroupPricingCriteria.md)
 - [CatalogsProductGroupStatus](docs/CatalogsProductGroupStatus.md)
 - [CatalogsProductGroupType](docs/CatalogsProductGroupType.md)
 - [CatalogsProductGroupUpdateRequest](docs/CatalogsProductGroupUpdateRequest.md)
 - [CatalogsStatus](docs/CatalogsStatus.md)
 - [ConditionFilter](docs/ConditionFilter.md)
 - [ConversionAttributionWindowDays](docs/ConversionAttributionWindowDays.md)
 - [ConversionReportAttributionType](docs/ConversionReportAttributionType.md)
 - [ConversionReportTimeType](docs/ConversionReportTimeType.md)
 - [Country](docs/Country.md)
 - [Currency](docs/Currency.md)
 - [CurrencyFilter](docs/CurrencyFilter.md)
 - [CustomLabel0Filter](docs/CustomLabel0Filter.md)
 - [CustomLabel1Filter](docs/CustomLabel1Filter.md)
 - [CustomLabel2Filter](docs/CustomLabel2Filter.md)
 - [CustomLabel3Filter](docs/CustomLabel3Filter.md)
 - [CustomLabel4Filter](docs/CustomLabel4Filter.md)
 - [DataOutputFormat](docs/DataOutputFormat.md)
 - [EntityStatus](docs/EntityStatus.md)
 - [Error](docs/Error.md)
 - [FeedFields](docs/FeedFields.md)
 - [GenderFilter](docs/GenderFilter.md)
 - [GoogleProductCategory0Filter](docs/GoogleProductCategory0Filter.md)
 - [GoogleProductCategory1Filter](docs/GoogleProductCategory1Filter.md)
 - [GoogleProductCategory2Filter](docs/GoogleProductCategory2Filter.md)
 - [GoogleProductCategory3Filter](docs/GoogleProductCategory3Filter.md)
 - [GoogleProductCategory4Filter](docs/GoogleProductCategory4Filter.md)
 - [GoogleProductCategory5Filter](docs/GoogleProductCategory5Filter.md)
 - [GoogleProductCategory6Filter](docs/GoogleProductCategory6Filter.md)
 - [Granularity](docs/Granularity.md)
 - [ImageDetails](docs/ImageDetails.md)
 - [ItemAttributes](docs/ItemAttributes.md)
 - [ItemBatchRecord](docs/ItemBatchRecord.md)
 - [ItemGroupIdFilter](docs/ItemGroupIdFilter.md)
 - [ItemIdFilter](docs/ItemIdFilter.md)
 - [ItemProcessingRecord](docs/ItemProcessingRecord.md)
 - [ItemProcessingStatus](docs/ItemProcessingStatus.md)
 - [ItemValidationEvent](docs/ItemValidationEvent.md)
 - [Language](docs/Language.md)
 - [MaxPriceFilter](docs/MaxPriceFilter.md)
 - [MediaUpload](docs/MediaUpload.md)
 - [MediaUploadAllOf](docs/MediaUploadAllOf.md)
 - [MediaUploadAllOfUploadParameters](docs/MediaUploadAllOfUploadParameters.md)
 - [MediaUploadDetails](docs/MediaUploadDetails.md)
 - [MediaUploadRequest](docs/MediaUploadRequest.md)
 - [MediaUploadStatus](docs/MediaUploadStatus.md)
 - [MediaUploadType](docs/MediaUploadType.md)
 - [MetricsReportingLevel](docs/MetricsReportingLevel.md)
 - [MinPriceFilter](docs/MinPriceFilter.md)
 - [NonNullableCatalogsCurrency](docs/NonNullableCatalogsCurrency.md)
 - [NullableCurrency](docs/NullableCurrency.md)
 - [OauthAccessTokenRequest](docs/OauthAccessTokenRequest.md)
 - [OauthAccessTokenRequestCode](docs/OauthAccessTokenRequestCode.md)
 - [OauthAccessTokenRequestCodeAllOf](docs/OauthAccessTokenRequestCodeAllOf.md)
 - [OauthAccessTokenRequestRefresh](docs/OauthAccessTokenRequestRefresh.md)
 - [OauthAccessTokenRequestRefreshAllOf](docs/OauthAccessTokenRequestRefreshAllOf.md)
 - [OauthAccessTokenResponse](docs/OauthAccessTokenResponse.md)
 - [OauthAccessTokenResponseCode](docs/OauthAccessTokenResponseCode.md)
 - [OauthAccessTokenResponseCodeAllOf](docs/OauthAccessTokenResponseCodeAllOf.md)
 - [OauthAccessTokenResponseRefresh](docs/OauthAccessTokenResponseRefresh.md)
 - [ObjectiveType](docs/ObjectiveType.md)
 - [PacingDeliveryType](docs/PacingDeliveryType.md)
 - [Paginated](docs/Paginated.md)
 - [Pin](docs/Pin.md)
 - [PinMedia](docs/PinMedia.md)
 - [PinMediaSource](docs/PinMediaSource.md)
 - [PinMediaSourceImageBase64](docs/PinMediaSourceImageBase64.md)
 - [PinMediaSourceImageURL](docs/PinMediaSourceImageURL.md)
 - [PinMediaSourceVideoID](docs/PinMediaSourceVideoID.md)
 - [PinMediaWithImage](docs/PinMediaWithImage.md)
 - [PinMediaWithImageAllOf](docs/PinMediaWithImageAllOf.md)
 - [PinPromotionSummaryStatus](docs/PinPromotionSummaryStatus.md)
 - [PlacementGroupType](docs/PlacementGroupType.md)
 - [ProductAvailabilityType](docs/ProductAvailabilityType.md)
 - [ProductGroupSummaryStatus](docs/ProductGroupSummaryStatus.md)
 - [ProductType0Filter](docs/ProductType0Filter.md)
 - [ProductType1Filter](docs/ProductType1Filter.md)
 - [ProductType2Filter](docs/ProductType2Filter.md)
 - [ProductType3Filter](docs/ProductType3Filter.md)
 - [ProductType4Filter](docs/ProductType4Filter.md)
 - [ReportingColumnAsync](docs/ReportingColumnAsync.md)
 - [TargetingTypeFilter](docs/TargetingTypeFilter.md)
 - [TrackingUrls](docs/TrackingUrls.md)


## Documentation for Authorization

Authentication schemes defined for the API:
### basic

- **Type**: HTTP basic authentication

### pinterest_oauth2

- **Type**: OAuth
- **Flow**: accessCode
- **Authorization URL**: https://www.pinterest.com/oauth/
- **Scopes**: 
  - ads:read: See all of your advertising data, including ads, ad groups, campaigns etc.
  - ads:write: Create, update, or delete ads, ad groups, campaigns etc.
  - boards:read: See your public boards, including group boards you join
  - boards:read_secret: See your secret boards
  - boards:write: Create, update, or delete your public boards
  - boards:write_secret: Create, update, or delete your secret boards
  - catalogs:read: See all of your catalogs data
  - catalogs:write: Create, update, or delete your catalogs data
  - pins:read: See your public Pins
  - pins:read_secret: See your secret Pins
  - pins:write: Create, update, or delete your public Pins
  - pins:write_secret: Create, update, or delete your secret Pins
  - user_accounts:read: See your user accounts


## Recommendation

It's recommended to create an instance of `ApiClient` per thread in a multithreaded environment to avoid any potential issues.

## Author

pinterest-api@pinterest.com
