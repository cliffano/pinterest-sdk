# OpenAPIServer
Pinterest's REST API

This [Symfony](https://symfony.com/) bundle is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: 5.3.0
- Build package: org.openapitools.codegen.languages.PhpSymfonyServerCodegen
For more information, please visit [https://github.com/cliffano/pinterest-sdk](https://github.com/cliffano/pinterest-sdk)

## Requirements

PHP 7.1.3 and later

## Installation & Usage

To install the dependencies via [Composer](http://getcomposer.org/), add the following repository to `composer.json` of your Symfony project:

```json
{
    "repositories": [{
        "type": "path",
        "url": "//Path to your generated openapi bundle"
    }],
}
```

Then run:

```
composer require GIT_USER_ID/GIT_REPO_ID:dev-master
```

to add the generated openapi bundle as a dependency.

## Tests

To run the unit tests for the generated bundle, first navigate to the directory containing the code, then run the following commands:

```
composer install
./vendor/bin/phpunit
```


## Getting Started

Step 1: Please follow the [installation procedure](#installation--usage) first.

Step 2: Enable the bundle in the kernel:

```php
<?php
// app/AppKernel.php

public function registerBundles()
{
    $bundles = array(
        // ...
        new OpenAPI\Server\OpenAPIServerBundle(),
        // ...
    );
}
```

Step 3: Register the routes:

```yaml
# app/config/routing.yml
open_api_server:
    resource: "@OpenAPIServerBundle/Resources/config/routing.yml"
```

Step 4: Implement the API calls:

```php
<?php
// src/Acme/MyBundle/Api/AdAccountsApiInterface.php

namespace Acme\MyBundle\Api;

use OpenAPI\Server\Api\AdAccountsApiInterface;

class AdAccountsApi implements AdAccountsApiInterface // An interface is autogenerated
{

    /**
     * Configure OAuth2 access token for authorization: pinterest_oauth2
     */
    public function setpinterest_oauth2($oauthToken)
    {
        // Retrieve logged in user from $oauthToken ...
    }
    
    /**
     * Implementation of AdAccountsApiInterface#adAccountAnalytics
     */
    public function adAccountAnalytics($adAccountId, \DateTime $startDate, \DateTime $endDate, array $columns, Granularity $granularity, $clickWindowDays = '30', $engagementWindowDays = '30', $viewWindowDays = '1', $conversionReportTime = ''TIME_OF_AD_ACTION'')
    {
        // Implement the operation ...
    }

    // Other operation methods ...
}
```

Step 5: Tag your API implementation:

```yaml
# src/Acme/MyBundle/Resources/services.yml
services:
    # ...
    acme.my_bundle.api.adAccounts:
        class: Acme\MyBundle\Api\AdAccountsApi
        tags:
            - { name: "open_api_server.api", api: "adAccounts" }
    # ...
```

Now you can start using the bundle!


## Documentation for API Endpoints

All URIs are relative to *https://api.pinterest.com/v5*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AdAccountsApiInterface* | [**adAccountAnalytics**](Resources/docs/Api/AdAccountsApiInterface.md#adaccountanalytics) | **GET** /ad_accounts/{ad_account_id}/analytics | Get ad account analytics
*AdAccountsApiInterface* | [**adAccountsList**](Resources/docs/Api/AdAccountsApiInterface.md#adaccountslist) | **GET** /ad_accounts | List ad accounts
*AdAccountsApiInterface* | [**adGroupsAnalytics**](Resources/docs/Api/AdAccountsApiInterface.md#adgroupsanalytics) | **GET** /ad_accounts/{ad_account_id}/ad_groups/analytics | Get ad group analytics
*AdAccountsApiInterface* | [**adGroupsList**](Resources/docs/Api/AdAccountsApiInterface.md#adgroupslist) | **GET** /ad_accounts/{ad_account_id}/ad_groups | List ad groups
*AdAccountsApiInterface* | [**adsAnalytics**](Resources/docs/Api/AdAccountsApiInterface.md#adsanalytics) | **GET** /ad_accounts/{ad_account_id}/ads/analytics | Get ad analytics
*AdAccountsApiInterface* | [**adsList**](Resources/docs/Api/AdAccountsApiInterface.md#adslist) | **GET** /ad_accounts/{ad_account_id}/ads | List ads
*AdAccountsApiInterface* | [**analyticsCreateReport**](Resources/docs/Api/AdAccountsApiInterface.md#analyticscreatereport) | **POST** /ad_accounts/{ad_account_id}/reports | Create async request for an account analytics report
*AdAccountsApiInterface* | [**analyticsGetReport**](Resources/docs/Api/AdAccountsApiInterface.md#analyticsgetreport) | **GET** /ad_accounts/{ad_account_id}/reports | Get the account analytics report created by the async call
*AdAccountsApiInterface* | [**campaignsAnalytics**](Resources/docs/Api/AdAccountsApiInterface.md#campaignsanalytics) | **GET** /ad_accounts/{ad_account_id}/campaigns/analytics | Get campaign analytics
*AdAccountsApiInterface* | [**campaignsList**](Resources/docs/Api/AdAccountsApiInterface.md#campaignslist) | **GET** /ad_accounts/{ad_account_id}/campaigns | List campaigns
*AdAccountsApiInterface* | [**productGroupsAnalytics**](Resources/docs/Api/AdAccountsApiInterface.md#productgroupsanalytics) | **GET** /ad_accounts/{ad_account_id}/product_groups/analytics | Get product group analytics
*BoardsApiInterface* | [**boardSectionsCreate**](Resources/docs/Api/BoardsApiInterface.md#boardsectionscreate) | **POST** /boards/{board_id}/sections | Create board section
*BoardsApiInterface* | [**boardSectionsDelete**](Resources/docs/Api/BoardsApiInterface.md#boardsectionsdelete) | **DELETE** /boards/{board_id}/sections/{section_id} | Delete board section
*BoardsApiInterface* | [**boardSectionsList**](Resources/docs/Api/BoardsApiInterface.md#boardsectionslist) | **GET** /boards/{board_id}/sections | List board sections
*BoardsApiInterface* | [**boardSectionsListPins**](Resources/docs/Api/BoardsApiInterface.md#boardsectionslistpins) | **GET** /boards/{board_id}/sections/{section_id}/pins | List Pins on board section
*BoardsApiInterface* | [**boardSectionsUpdate**](Resources/docs/Api/BoardsApiInterface.md#boardsectionsupdate) | **PATCH** /boards/{board_id}/sections/{section_id} | Update board section
*BoardsApiInterface* | [**boardsCreate**](Resources/docs/Api/BoardsApiInterface.md#boardscreate) | **POST** /boards | Create board
*BoardsApiInterface* | [**boardsDelete**](Resources/docs/Api/BoardsApiInterface.md#boardsdelete) | **DELETE** /boards/{board_id} | Delete board
*BoardsApiInterface* | [**boardsGet**](Resources/docs/Api/BoardsApiInterface.md#boardsget) | **GET** /boards/{board_id} | Get board
*BoardsApiInterface* | [**boardsList**](Resources/docs/Api/BoardsApiInterface.md#boardslist) | **GET** /boards | List boards
*BoardsApiInterface* | [**boardsListPins**](Resources/docs/Api/BoardsApiInterface.md#boardslistpins) | **GET** /boards/{board_id}/pins | List Pins on board
*BoardsApiInterface* | [**boardsUpdate**](Resources/docs/Api/BoardsApiInterface.md#boardsupdate) | **PATCH** /boards/{board_id} | Update board
*CatalogsApiInterface* | [**catalogsProductGroupsCreate**](Resources/docs/Api/CatalogsApiInterface.md#catalogsproductgroupscreate) | **POST** /catalogs/product_groups | Create product group
*CatalogsApiInterface* | [**catalogsProductGroupsDelete**](Resources/docs/Api/CatalogsApiInterface.md#catalogsproductgroupsdelete) | **DELETE** /catalogs/product_groups/{product_group_id} | Delete product group
*CatalogsApiInterface* | [**catalogsProductGroupsList**](Resources/docs/Api/CatalogsApiInterface.md#catalogsproductgroupslist) | **GET** /catalogs/product_groups | Get product groups list
*CatalogsApiInterface* | [**catalogsProductGroupsUpdate**](Resources/docs/Api/CatalogsApiInterface.md#catalogsproductgroupsupdate) | **PATCH** /catalogs/product_groups/{product_group_id} | Update product group
*CatalogsApiInterface* | [**feedProcessingResultsList**](Resources/docs/Api/CatalogsApiInterface.md#feedprocessingresultslist) | **GET** /catalogs/feeds/{feed_id}/processing_results | List processing results for a given feed
*CatalogsApiInterface* | [**feedsCreate**](Resources/docs/Api/CatalogsApiInterface.md#feedscreate) | **POST** /catalogs/feeds | Create feed
*CatalogsApiInterface* | [**feedsDelete**](Resources/docs/Api/CatalogsApiInterface.md#feedsdelete) | **DELETE** /catalogs/feeds/{feed_id} | Delete feed
*CatalogsApiInterface* | [**feedsGet**](Resources/docs/Api/CatalogsApiInterface.md#feedsget) | **GET** /catalogs/feeds/{feed_id} | Get feed
*CatalogsApiInterface* | [**feedsList**](Resources/docs/Api/CatalogsApiInterface.md#feedslist) | **GET** /catalogs/feeds | List feeds
*CatalogsApiInterface* | [**feedsUpdate**](Resources/docs/Api/CatalogsApiInterface.md#feedsupdate) | **PATCH** /catalogs/feeds/{feed_id} | Update feed
*CatalogsApiInterface* | [**itemsBatchGet**](Resources/docs/Api/CatalogsApiInterface.md#itemsbatchget) | **GET** /catalogs/items/batch/{batch_id} | Get catalogs items batch
*CatalogsApiInterface* | [**itemsBatchPost**](Resources/docs/Api/CatalogsApiInterface.md#itemsbatchpost) | **POST** /catalogs/items/batch | Perform an operation on an item batch
*CatalogsApiInterface* | [**itemsGet**](Resources/docs/Api/CatalogsApiInterface.md#itemsget) | **GET** /catalogs/items | Get catalogs items
*MediaApiInterface* | [**mediaCreate**](Resources/docs/Api/MediaApiInterface.md#mediacreate) | **POST** /media | Register media upload
*MediaApiInterface* | [**mediaGet**](Resources/docs/Api/MediaApiInterface.md#mediaget) | **GET** /media/{media_id} | Get media upload details
*MediaApiInterface* | [**mediaList**](Resources/docs/Api/MediaApiInterface.md#medialist) | **GET** /media | List media uploads
*OauthApiInterface* | [**oauthToken**](Resources/docs/Api/OauthApiInterface.md#oauthtoken) | **POST** /oauth/token | Generate OAuth access token
*PinsApiInterface* | [**pinsAnalytics**](Resources/docs/Api/PinsApiInterface.md#pinsanalytics) | **GET** /pins/{pin_id}/analytics | Get Pin analytics
*PinsApiInterface* | [**pinsCreate**](Resources/docs/Api/PinsApiInterface.md#pinscreate) | **POST** /pins | Create Pin
*PinsApiInterface* | [**pinsDelete**](Resources/docs/Api/PinsApiInterface.md#pinsdelete) | **DELETE** /pins/{pin_id} | Delete Pin
*PinsApiInterface* | [**pinsGet**](Resources/docs/Api/PinsApiInterface.md#pinsget) | **GET** /pins/{pin_id} | Get Pin
*UserAccountApiInterface* | [**userAccountAnalytics**](Resources/docs/Api/UserAccountApiInterface.md#useraccountanalytics) | **GET** /user_account/analytics | Get user account analytics
*UserAccountApiInterface* | [**userAccountGet**](Resources/docs/Api/UserAccountApiInterface.md#useraccountget) | **GET** /user_account | Get user account


## Documentation For Models

 - [Account](Resources/docs/Model/Account.md)
 - [ActionType](Resources/docs/Model/ActionType.md)
 - [AdAccount](Resources/docs/Model/AdAccount.md)
 - [AdAccountOwner](Resources/docs/Model/AdAccountOwner.md)
 - [AdGroupResponse](Resources/docs/Model/AdGroupResponse.md)
 - [AdGroupResponseAllOf](Resources/docs/Model/AdGroupResponseAllOf.md)
 - [AdGroupResponseAllOf1](Resources/docs/Model/AdGroupResponseAllOf1.md)
 - [AdGroupSummaryStatus](Resources/docs/Model/AdGroupSummaryStatus.md)
 - [AdResponse](Resources/docs/Model/AdResponse.md)
 - [AdResponseAllOf](Resources/docs/Model/AdResponseAllOf.md)
 - [AdResponseAllOf1](Resources/docs/Model/AdResponseAllOf1.md)
 - [AdsAnalyticsCreateAsyncRequest](Resources/docs/Model/AdsAnalyticsCreateAsyncRequest.md)
 - [AdsAnalyticsCreateAsyncRequestAllOf](Resources/docs/Model/AdsAnalyticsCreateAsyncRequestAllOf.md)
 - [AdsAnalyticsCreateAsyncRequestAllOf1](Resources/docs/Model/AdsAnalyticsCreateAsyncRequestAllOf1.md)
 - [AdsAnalyticsCreateAsyncResponse](Resources/docs/Model/AdsAnalyticsCreateAsyncResponse.md)
 - [AdsAnalyticsFilterColumn](Resources/docs/Model/AdsAnalyticsFilterColumn.md)
 - [AdsAnalyticsFilterOperator](Resources/docs/Model/AdsAnalyticsFilterOperator.md)
 - [AdsAnalyticsGetAsyncResponse](Resources/docs/Model/AdsAnalyticsGetAsyncResponse.md)
 - [AdsAnalyticsMetricsFilter](Resources/docs/Model/AdsAnalyticsMetricsFilter.md)
 - [AdsAnalyticsTargetingType](Resources/docs/Model/AdsAnalyticsTargetingType.md)
 - [AnalyticsMetricsResponse](Resources/docs/Model/AnalyticsMetricsResponse.md)
 - [AnalyticsMetricsResponseDailyMetrics](Resources/docs/Model/AnalyticsMetricsResponseDailyMetrics.md)
 - [AvailabilityFilter](Resources/docs/Model/AvailabilityFilter.md)
 - [BatchOperation](Resources/docs/Model/BatchOperation.md)
 - [BatchOperationStatus](Resources/docs/Model/BatchOperationStatus.md)
 - [Board](Resources/docs/Model/Board.md)
 - [BoardOwner](Resources/docs/Model/BoardOwner.md)
 - [BoardSection](Resources/docs/Model/BoardSection.md)
 - [BoardUpdate](Resources/docs/Model/BoardUpdate.md)
 - [BrandFilter](Resources/docs/Model/BrandFilter.md)
 - [CampaignCommon](Resources/docs/Model/CampaignCommon.md)
 - [CampaignResponse](Resources/docs/Model/CampaignResponse.md)
 - [CampaignResponseAllOf](Resources/docs/Model/CampaignResponseAllOf.md)
 - [CampaignResponseAllOf1](Resources/docs/Model/CampaignResponseAllOf1.md)
 - [CampaignSummaryStatus](Resources/docs/Model/CampaignSummaryStatus.md)
 - [CatalogsDbItem](Resources/docs/Model/CatalogsDbItem.md)
 - [CatalogsFeed](Resources/docs/Model/CatalogsFeed.md)
 - [CatalogsFeedCredentials](Resources/docs/Model/CatalogsFeedCredentials.md)
 - [CatalogsFeedIngestionDetails](Resources/docs/Model/CatalogsFeedIngestionDetails.md)
 - [CatalogsFeedIngestionErrors](Resources/docs/Model/CatalogsFeedIngestionErrors.md)
 - [CatalogsFeedIngestionInfo](Resources/docs/Model/CatalogsFeedIngestionInfo.md)
 - [CatalogsFeedProcessingResult](Resources/docs/Model/CatalogsFeedProcessingResult.md)
 - [CatalogsFeedProcessingResultFields](Resources/docs/Model/CatalogsFeedProcessingResultFields.md)
 - [CatalogsFeedProcessingSchedule](Resources/docs/Model/CatalogsFeedProcessingSchedule.md)
 - [CatalogsFeedProcessingStatus](Resources/docs/Model/CatalogsFeedProcessingStatus.md)
 - [CatalogsFeedProductCounts](Resources/docs/Model/CatalogsFeedProductCounts.md)
 - [CatalogsFeedValidationDetails](Resources/docs/Model/CatalogsFeedValidationDetails.md)
 - [CatalogsFeedValidationErrors](Resources/docs/Model/CatalogsFeedValidationErrors.md)
 - [CatalogsFeedValidationWarnings](Resources/docs/Model/CatalogsFeedValidationWarnings.md)
 - [CatalogsFeedsCreateRequest](Resources/docs/Model/CatalogsFeedsCreateRequest.md)
 - [CatalogsFeedsUpdateRequest](Resources/docs/Model/CatalogsFeedsUpdateRequest.md)
 - [CatalogsFormat](Resources/docs/Model/CatalogsFormat.md)
 - [CatalogsItems](Resources/docs/Model/CatalogsItems.md)
 - [CatalogsItemsBatch](Resources/docs/Model/CatalogsItemsBatch.md)
 - [CatalogsItemsBatchRequest](Resources/docs/Model/CatalogsItemsBatchRequest.md)
 - [CatalogsProductGroup](Resources/docs/Model/CatalogsProductGroup.md)
 - [CatalogsProductGroupCreateRequest](Resources/docs/Model/CatalogsProductGroupCreateRequest.md)
 - [CatalogsProductGroupCurrencyCriteria](Resources/docs/Model/CatalogsProductGroupCurrencyCriteria.md)
 - [CatalogsProductGroupFilterKeys](Resources/docs/Model/CatalogsProductGroupFilterKeys.md)
 - [CatalogsProductGroupFilters](Resources/docs/Model/CatalogsProductGroupFilters.md)
 - [CatalogsProductGroupFiltersAllOf](Resources/docs/Model/CatalogsProductGroupFiltersAllOf.md)
 - [CatalogsProductGroupFiltersAnyOf](Resources/docs/Model/CatalogsProductGroupFiltersAnyOf.md)
 - [CatalogsProductGroupMultipleStringCriteria](Resources/docs/Model/CatalogsProductGroupMultipleStringCriteria.md)
 - [CatalogsProductGroupMultipleStringListCriteria](Resources/docs/Model/CatalogsProductGroupMultipleStringListCriteria.md)
 - [CatalogsProductGroupPricingCriteria](Resources/docs/Model/CatalogsProductGroupPricingCriteria.md)
 - [CatalogsProductGroupStatus](Resources/docs/Model/CatalogsProductGroupStatus.md)
 - [CatalogsProductGroupType](Resources/docs/Model/CatalogsProductGroupType.md)
 - [CatalogsProductGroupUpdateRequest](Resources/docs/Model/CatalogsProductGroupUpdateRequest.md)
 - [CatalogsStatus](Resources/docs/Model/CatalogsStatus.md)
 - [ConditionFilter](Resources/docs/Model/ConditionFilter.md)
 - [ConversionAttributionWindowDays](Resources/docs/Model/ConversionAttributionWindowDays.md)
 - [ConversionReportAttributionType](Resources/docs/Model/ConversionReportAttributionType.md)
 - [ConversionReportTimeType](Resources/docs/Model/ConversionReportTimeType.md)
 - [Country](Resources/docs/Model/Country.md)
 - [Currency](Resources/docs/Model/Currency.md)
 - [CurrencyFilter](Resources/docs/Model/CurrencyFilter.md)
 - [CustomLabel0Filter](Resources/docs/Model/CustomLabel0Filter.md)
 - [CustomLabel1Filter](Resources/docs/Model/CustomLabel1Filter.md)
 - [CustomLabel2Filter](Resources/docs/Model/CustomLabel2Filter.md)
 - [CustomLabel3Filter](Resources/docs/Model/CustomLabel3Filter.md)
 - [CustomLabel4Filter](Resources/docs/Model/CustomLabel4Filter.md)
 - [DataOutputFormat](Resources/docs/Model/DataOutputFormat.md)
 - [EntityStatus](Resources/docs/Model/EntityStatus.md)
 - [Error](Resources/docs/Model/Error.md)
 - [FeedFields](Resources/docs/Model/FeedFields.md)
 - [GenderFilter](Resources/docs/Model/GenderFilter.md)
 - [GoogleProductCategory0Filter](Resources/docs/Model/GoogleProductCategory0Filter.md)
 - [GoogleProductCategory1Filter](Resources/docs/Model/GoogleProductCategory1Filter.md)
 - [GoogleProductCategory2Filter](Resources/docs/Model/GoogleProductCategory2Filter.md)
 - [GoogleProductCategory3Filter](Resources/docs/Model/GoogleProductCategory3Filter.md)
 - [GoogleProductCategory4Filter](Resources/docs/Model/GoogleProductCategory4Filter.md)
 - [GoogleProductCategory5Filter](Resources/docs/Model/GoogleProductCategory5Filter.md)
 - [GoogleProductCategory6Filter](Resources/docs/Model/GoogleProductCategory6Filter.md)
 - [Granularity](Resources/docs/Model/Granularity.md)
 - [ImageDetails](Resources/docs/Model/ImageDetails.md)
 - [ItemAttributes](Resources/docs/Model/ItemAttributes.md)
 - [ItemBatchRecord](Resources/docs/Model/ItemBatchRecord.md)
 - [ItemGroupIdFilter](Resources/docs/Model/ItemGroupIdFilter.md)
 - [ItemIdFilter](Resources/docs/Model/ItemIdFilter.md)
 - [ItemProcessingRecord](Resources/docs/Model/ItemProcessingRecord.md)
 - [ItemProcessingStatus](Resources/docs/Model/ItemProcessingStatus.md)
 - [ItemValidationEvent](Resources/docs/Model/ItemValidationEvent.md)
 - [Language](Resources/docs/Model/Language.md)
 - [MaxPriceFilter](Resources/docs/Model/MaxPriceFilter.md)
 - [MediaUpload](Resources/docs/Model/MediaUpload.md)
 - [MediaUploadAllOf](Resources/docs/Model/MediaUploadAllOf.md)
 - [MediaUploadAllOfUploadParameters](Resources/docs/Model/MediaUploadAllOfUploadParameters.md)
 - [MediaUploadDetails](Resources/docs/Model/MediaUploadDetails.md)
 - [MediaUploadRequest](Resources/docs/Model/MediaUploadRequest.md)
 - [MediaUploadStatus](Resources/docs/Model/MediaUploadStatus.md)
 - [MediaUploadType](Resources/docs/Model/MediaUploadType.md)
 - [MetricsReportingLevel](Resources/docs/Model/MetricsReportingLevel.md)
 - [MinPriceFilter](Resources/docs/Model/MinPriceFilter.md)
 - [NonNullableCatalogsCurrency](Resources/docs/Model/NonNullableCatalogsCurrency.md)
 - [NullableCurrency](Resources/docs/Model/NullableCurrency.md)
 - [OauthAccessTokenRequest](Resources/docs/Model/OauthAccessTokenRequest.md)
 - [OauthAccessTokenRequestCode](Resources/docs/Model/OauthAccessTokenRequestCode.md)
 - [OauthAccessTokenRequestCodeAllOf](Resources/docs/Model/OauthAccessTokenRequestCodeAllOf.md)
 - [OauthAccessTokenRequestRefresh](Resources/docs/Model/OauthAccessTokenRequestRefresh.md)
 - [OauthAccessTokenRequestRefreshAllOf](Resources/docs/Model/OauthAccessTokenRequestRefreshAllOf.md)
 - [OauthAccessTokenResponse](Resources/docs/Model/OauthAccessTokenResponse.md)
 - [OauthAccessTokenResponseCode](Resources/docs/Model/OauthAccessTokenResponseCode.md)
 - [OauthAccessTokenResponseCodeAllOf](Resources/docs/Model/OauthAccessTokenResponseCodeAllOf.md)
 - [OauthAccessTokenResponseRefresh](Resources/docs/Model/OauthAccessTokenResponseRefresh.md)
 - [ObjectiveType](Resources/docs/Model/ObjectiveType.md)
 - [PacingDeliveryType](Resources/docs/Model/PacingDeliveryType.md)
 - [Paginated](Resources/docs/Model/Paginated.md)
 - [Pin](Resources/docs/Model/Pin.md)
 - [PinMedia](Resources/docs/Model/PinMedia.md)
 - [PinMediaSource](Resources/docs/Model/PinMediaSource.md)
 - [PinMediaSourceImageBase64](Resources/docs/Model/PinMediaSourceImageBase64.md)
 - [PinMediaSourceImageURL](Resources/docs/Model/PinMediaSourceImageURL.md)
 - [PinMediaSourceVideoID](Resources/docs/Model/PinMediaSourceVideoID.md)
 - [PinMediaWithImage](Resources/docs/Model/PinMediaWithImage.md)
 - [PinMediaWithImageAllOf](Resources/docs/Model/PinMediaWithImageAllOf.md)
 - [PinPromotionSummaryStatus](Resources/docs/Model/PinPromotionSummaryStatus.md)
 - [PlacementGroupType](Resources/docs/Model/PlacementGroupType.md)
 - [ProductAvailabilityType](Resources/docs/Model/ProductAvailabilityType.md)
 - [ProductGroupSummaryStatus](Resources/docs/Model/ProductGroupSummaryStatus.md)
 - [ProductType0Filter](Resources/docs/Model/ProductType0Filter.md)
 - [ProductType1Filter](Resources/docs/Model/ProductType1Filter.md)
 - [ProductType2Filter](Resources/docs/Model/ProductType2Filter.md)
 - [ProductType3Filter](Resources/docs/Model/ProductType3Filter.md)
 - [ProductType4Filter](Resources/docs/Model/ProductType4Filter.md)
 - [ReportingColumnAsync](Resources/docs/Model/ReportingColumnAsync.md)
 - [TargetingTypeFilter](Resources/docs/Model/TargetingTypeFilter.md)
 - [TrackingUrls](Resources/docs/Model/TrackingUrls.md)


## Documentation For Authorization


## basic

- **Type**: HTTP basic authentication

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

blah@cliffano.com

