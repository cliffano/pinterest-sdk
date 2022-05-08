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
 *
 */


import ApiClient from './ApiClient';
import Account from './model/Account';
import ActionType from './model/ActionType';
import AdAccount from './model/AdAccount';
import AdAccountOwner from './model/AdAccountOwner';
import AdGroupResponse from './model/AdGroupResponse';
import AdGroupResponseAllOf from './model/AdGroupResponseAllOf';
import AdGroupResponseAllOf1 from './model/AdGroupResponseAllOf1';
import AdGroupSummaryStatus from './model/AdGroupSummaryStatus';
import AdResponse from './model/AdResponse';
import AdResponseAllOf from './model/AdResponseAllOf';
import AdResponseAllOf1 from './model/AdResponseAllOf1';
import AdsAnalyticsCreateAsyncRequest from './model/AdsAnalyticsCreateAsyncRequest';
import AdsAnalyticsCreateAsyncRequestAllOf from './model/AdsAnalyticsCreateAsyncRequestAllOf';
import AdsAnalyticsCreateAsyncRequestAllOf1 from './model/AdsAnalyticsCreateAsyncRequestAllOf1';
import AdsAnalyticsCreateAsyncResponse from './model/AdsAnalyticsCreateAsyncResponse';
import AdsAnalyticsFilterColumn from './model/AdsAnalyticsFilterColumn';
import AdsAnalyticsFilterOperator from './model/AdsAnalyticsFilterOperator';
import AdsAnalyticsGetAsyncResponse from './model/AdsAnalyticsGetAsyncResponse';
import AdsAnalyticsMetricsFilter from './model/AdsAnalyticsMetricsFilter';
import AdsAnalyticsTargetingType from './model/AdsAnalyticsTargetingType';
import AnalyticsMetricsResponse from './model/AnalyticsMetricsResponse';
import AnalyticsMetricsResponseDailyMetrics from './model/AnalyticsMetricsResponseDailyMetrics';
import AvailabilityFilter from './model/AvailabilityFilter';
import BatchOperation from './model/BatchOperation';
import BatchOperationStatus from './model/BatchOperationStatus';
import Board from './model/Board';
import BoardOwner from './model/BoardOwner';
import BoardSection from './model/BoardSection';
import BoardUpdate from './model/BoardUpdate';
import BrandFilter from './model/BrandFilter';
import CampaignCommon from './model/CampaignCommon';
import CampaignResponse from './model/CampaignResponse';
import CampaignResponseAllOf from './model/CampaignResponseAllOf';
import CampaignResponseAllOf1 from './model/CampaignResponseAllOf1';
import CampaignSummaryStatus from './model/CampaignSummaryStatus';
import CatalogsDbItem from './model/CatalogsDbItem';
import CatalogsFeed from './model/CatalogsFeed';
import CatalogsFeedCredentials from './model/CatalogsFeedCredentials';
import CatalogsFeedIngestionDetails from './model/CatalogsFeedIngestionDetails';
import CatalogsFeedIngestionErrors from './model/CatalogsFeedIngestionErrors';
import CatalogsFeedIngestionInfo from './model/CatalogsFeedIngestionInfo';
import CatalogsFeedProcessingResult from './model/CatalogsFeedProcessingResult';
import CatalogsFeedProcessingResultFields from './model/CatalogsFeedProcessingResultFields';
import CatalogsFeedProcessingSchedule from './model/CatalogsFeedProcessingSchedule';
import CatalogsFeedProcessingStatus from './model/CatalogsFeedProcessingStatus';
import CatalogsFeedProductCounts from './model/CatalogsFeedProductCounts';
import CatalogsFeedValidationDetails from './model/CatalogsFeedValidationDetails';
import CatalogsFeedValidationErrors from './model/CatalogsFeedValidationErrors';
import CatalogsFeedValidationWarnings from './model/CatalogsFeedValidationWarnings';
import CatalogsFeedsCreateRequest from './model/CatalogsFeedsCreateRequest';
import CatalogsFeedsUpdateRequest from './model/CatalogsFeedsUpdateRequest';
import CatalogsFormat from './model/CatalogsFormat';
import CatalogsItems from './model/CatalogsItems';
import CatalogsItemsBatch from './model/CatalogsItemsBatch';
import CatalogsItemsBatchRequest from './model/CatalogsItemsBatchRequest';
import CatalogsProductGroup from './model/CatalogsProductGroup';
import CatalogsProductGroupCreateRequest from './model/CatalogsProductGroupCreateRequest';
import CatalogsProductGroupCurrencyCriteria from './model/CatalogsProductGroupCurrencyCriteria';
import CatalogsProductGroupFilterKeys from './model/CatalogsProductGroupFilterKeys';
import CatalogsProductGroupFilters from './model/CatalogsProductGroupFilters';
import CatalogsProductGroupFiltersAllOf from './model/CatalogsProductGroupFiltersAllOf';
import CatalogsProductGroupFiltersAnyOf from './model/CatalogsProductGroupFiltersAnyOf';
import CatalogsProductGroupMultipleStringCriteria from './model/CatalogsProductGroupMultipleStringCriteria';
import CatalogsProductGroupMultipleStringListCriteria from './model/CatalogsProductGroupMultipleStringListCriteria';
import CatalogsProductGroupPricingCriteria from './model/CatalogsProductGroupPricingCriteria';
import CatalogsProductGroupStatus from './model/CatalogsProductGroupStatus';
import CatalogsProductGroupType from './model/CatalogsProductGroupType';
import CatalogsProductGroupUpdateRequest from './model/CatalogsProductGroupUpdateRequest';
import CatalogsStatus from './model/CatalogsStatus';
import ConditionFilter from './model/ConditionFilter';
import ConversionAttributionWindowDays from './model/ConversionAttributionWindowDays';
import ConversionReportAttributionType from './model/ConversionReportAttributionType';
import ConversionReportTimeType from './model/ConversionReportTimeType';
import Country from './model/Country';
import Currency from './model/Currency';
import CurrencyFilter from './model/CurrencyFilter';
import CustomLabel0Filter from './model/CustomLabel0Filter';
import CustomLabel1Filter from './model/CustomLabel1Filter';
import CustomLabel2Filter from './model/CustomLabel2Filter';
import CustomLabel3Filter from './model/CustomLabel3Filter';
import CustomLabel4Filter from './model/CustomLabel4Filter';
import DataOutputFormat from './model/DataOutputFormat';
import EntityStatus from './model/EntityStatus';
import Error from './model/Error';
import FeedFields from './model/FeedFields';
import GenderFilter from './model/GenderFilter';
import GoogleProductCategory0Filter from './model/GoogleProductCategory0Filter';
import GoogleProductCategory1Filter from './model/GoogleProductCategory1Filter';
import GoogleProductCategory2Filter from './model/GoogleProductCategory2Filter';
import GoogleProductCategory3Filter from './model/GoogleProductCategory3Filter';
import GoogleProductCategory4Filter from './model/GoogleProductCategory4Filter';
import GoogleProductCategory5Filter from './model/GoogleProductCategory5Filter';
import GoogleProductCategory6Filter from './model/GoogleProductCategory6Filter';
import Granularity from './model/Granularity';
import ImageDetails from './model/ImageDetails';
import ItemAttributes from './model/ItemAttributes';
import ItemBatchRecord from './model/ItemBatchRecord';
import ItemGroupIdFilter from './model/ItemGroupIdFilter';
import ItemIdFilter from './model/ItemIdFilter';
import ItemProcessingRecord from './model/ItemProcessingRecord';
import ItemProcessingStatus from './model/ItemProcessingStatus';
import ItemValidationEvent from './model/ItemValidationEvent';
import Language from './model/Language';
import MaxPriceFilter from './model/MaxPriceFilter';
import MediaUpload from './model/MediaUpload';
import MediaUploadAllOf from './model/MediaUploadAllOf';
import MediaUploadAllOfUploadParameters from './model/MediaUploadAllOfUploadParameters';
import MediaUploadDetails from './model/MediaUploadDetails';
import MediaUploadRequest from './model/MediaUploadRequest';
import MediaUploadStatus from './model/MediaUploadStatus';
import MediaUploadType from './model/MediaUploadType';
import MetricsReportingLevel from './model/MetricsReportingLevel';
import MinPriceFilter from './model/MinPriceFilter';
import NonNullableCatalogsCurrency from './model/NonNullableCatalogsCurrency';
import NullableCurrency from './model/NullableCurrency';
import OauthAccessTokenRequest from './model/OauthAccessTokenRequest';
import OauthAccessTokenRequestCode from './model/OauthAccessTokenRequestCode';
import OauthAccessTokenRequestCodeAllOf from './model/OauthAccessTokenRequestCodeAllOf';
import OauthAccessTokenRequestRefresh from './model/OauthAccessTokenRequestRefresh';
import OauthAccessTokenRequestRefreshAllOf from './model/OauthAccessTokenRequestRefreshAllOf';
import OauthAccessTokenResponse from './model/OauthAccessTokenResponse';
import OauthAccessTokenResponseCode from './model/OauthAccessTokenResponseCode';
import OauthAccessTokenResponseCodeAllOf from './model/OauthAccessTokenResponseCodeAllOf';
import OauthAccessTokenResponseRefresh from './model/OauthAccessTokenResponseRefresh';
import ObjectiveType from './model/ObjectiveType';
import PacingDeliveryType from './model/PacingDeliveryType';
import Paginated from './model/Paginated';
import Pin from './model/Pin';
import PinMedia from './model/PinMedia';
import PinMediaSource from './model/PinMediaSource';
import PinMediaSourceImageBase64 from './model/PinMediaSourceImageBase64';
import PinMediaSourceImageURL from './model/PinMediaSourceImageURL';
import PinMediaSourceVideoID from './model/PinMediaSourceVideoID';
import PinMediaWithImage from './model/PinMediaWithImage';
import PinMediaWithImageAllOf from './model/PinMediaWithImageAllOf';
import PinPromotionSummaryStatus from './model/PinPromotionSummaryStatus';
import PlacementGroupType from './model/PlacementGroupType';
import ProductAvailabilityType from './model/ProductAvailabilityType';
import ProductGroupSummaryStatus from './model/ProductGroupSummaryStatus';
import ProductType0Filter from './model/ProductType0Filter';
import ProductType1Filter from './model/ProductType1Filter';
import ProductType2Filter from './model/ProductType2Filter';
import ProductType3Filter from './model/ProductType3Filter';
import ProductType4Filter from './model/ProductType4Filter';
import ReportingColumnAsync from './model/ReportingColumnAsync';
import TargetingTypeFilter from './model/TargetingTypeFilter';
import TrackingUrls from './model/TrackingUrls';
import AdAccountsApi from './api/AdAccountsApi';
import BoardsApi from './api/BoardsApi';
import CatalogsApi from './api/CatalogsApi';
import MediaApi from './api/MediaApi';
import OauthApi from './api/OauthApi';
import PinsApi from './api/PinsApi';
import UserAccountApi from './api/UserAccountApi';


/**
* Pinterests_REST_API.<br>
* The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
* <p>
* An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
* <pre>
* var PinterestRestApi = require('index'); // See note below*.
* var xxxSvc = new PinterestRestApi.XxxApi(); // Allocate the API class we're going to use.
* var yyyModel = new PinterestRestApi.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
* and put the application logic within the callback function.</em>
* </p>
* <p>
* A non-AMD browser application (discouraged) might do something like this:
* <pre>
* var xxxSvc = new PinterestRestApi.XxxApi(); // Allocate the API class we're going to use.
* var yyy = new PinterestRestApi.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* </p>
* @module index
* @version 5.3.0
*/
export {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient,

    /**
     * The Account model constructor.
     * @property {module:model/Account}
     */
    Account,

    /**
     * The ActionType model constructor.
     * @property {module:model/ActionType}
     */
    ActionType,

    /**
     * The AdAccount model constructor.
     * @property {module:model/AdAccount}
     */
    AdAccount,

    /**
     * The AdAccountOwner model constructor.
     * @property {module:model/AdAccountOwner}
     */
    AdAccountOwner,

    /**
     * The AdGroupResponse model constructor.
     * @property {module:model/AdGroupResponse}
     */
    AdGroupResponse,

    /**
     * The AdGroupResponseAllOf model constructor.
     * @property {module:model/AdGroupResponseAllOf}
     */
    AdGroupResponseAllOf,

    /**
     * The AdGroupResponseAllOf1 model constructor.
     * @property {module:model/AdGroupResponseAllOf1}
     */
    AdGroupResponseAllOf1,

    /**
     * The AdGroupSummaryStatus model constructor.
     * @property {module:model/AdGroupSummaryStatus}
     */
    AdGroupSummaryStatus,

    /**
     * The AdResponse model constructor.
     * @property {module:model/AdResponse}
     */
    AdResponse,

    /**
     * The AdResponseAllOf model constructor.
     * @property {module:model/AdResponseAllOf}
     */
    AdResponseAllOf,

    /**
     * The AdResponseAllOf1 model constructor.
     * @property {module:model/AdResponseAllOf1}
     */
    AdResponseAllOf1,

    /**
     * The AdsAnalyticsCreateAsyncRequest model constructor.
     * @property {module:model/AdsAnalyticsCreateAsyncRequest}
     */
    AdsAnalyticsCreateAsyncRequest,

    /**
     * The AdsAnalyticsCreateAsyncRequestAllOf model constructor.
     * @property {module:model/AdsAnalyticsCreateAsyncRequestAllOf}
     */
    AdsAnalyticsCreateAsyncRequestAllOf,

    /**
     * The AdsAnalyticsCreateAsyncRequestAllOf1 model constructor.
     * @property {module:model/AdsAnalyticsCreateAsyncRequestAllOf1}
     */
    AdsAnalyticsCreateAsyncRequestAllOf1,

    /**
     * The AdsAnalyticsCreateAsyncResponse model constructor.
     * @property {module:model/AdsAnalyticsCreateAsyncResponse}
     */
    AdsAnalyticsCreateAsyncResponse,

    /**
     * The AdsAnalyticsFilterColumn model constructor.
     * @property {module:model/AdsAnalyticsFilterColumn}
     */
    AdsAnalyticsFilterColumn,

    /**
     * The AdsAnalyticsFilterOperator model constructor.
     * @property {module:model/AdsAnalyticsFilterOperator}
     */
    AdsAnalyticsFilterOperator,

    /**
     * The AdsAnalyticsGetAsyncResponse model constructor.
     * @property {module:model/AdsAnalyticsGetAsyncResponse}
     */
    AdsAnalyticsGetAsyncResponse,

    /**
     * The AdsAnalyticsMetricsFilter model constructor.
     * @property {module:model/AdsAnalyticsMetricsFilter}
     */
    AdsAnalyticsMetricsFilter,

    /**
     * The AdsAnalyticsTargetingType model constructor.
     * @property {module:model/AdsAnalyticsTargetingType}
     */
    AdsAnalyticsTargetingType,

    /**
     * The AnalyticsMetricsResponse model constructor.
     * @property {module:model/AnalyticsMetricsResponse}
     */
    AnalyticsMetricsResponse,

    /**
     * The AnalyticsMetricsResponseDailyMetrics model constructor.
     * @property {module:model/AnalyticsMetricsResponseDailyMetrics}
     */
    AnalyticsMetricsResponseDailyMetrics,

    /**
     * The AvailabilityFilter model constructor.
     * @property {module:model/AvailabilityFilter}
     */
    AvailabilityFilter,

    /**
     * The BatchOperation model constructor.
     * @property {module:model/BatchOperation}
     */
    BatchOperation,

    /**
     * The BatchOperationStatus model constructor.
     * @property {module:model/BatchOperationStatus}
     */
    BatchOperationStatus,

    /**
     * The Board model constructor.
     * @property {module:model/Board}
     */
    Board,

    /**
     * The BoardOwner model constructor.
     * @property {module:model/BoardOwner}
     */
    BoardOwner,

    /**
     * The BoardSection model constructor.
     * @property {module:model/BoardSection}
     */
    BoardSection,

    /**
     * The BoardUpdate model constructor.
     * @property {module:model/BoardUpdate}
     */
    BoardUpdate,

    /**
     * The BrandFilter model constructor.
     * @property {module:model/BrandFilter}
     */
    BrandFilter,

    /**
     * The CampaignCommon model constructor.
     * @property {module:model/CampaignCommon}
     */
    CampaignCommon,

    /**
     * The CampaignResponse model constructor.
     * @property {module:model/CampaignResponse}
     */
    CampaignResponse,

    /**
     * The CampaignResponseAllOf model constructor.
     * @property {module:model/CampaignResponseAllOf}
     */
    CampaignResponseAllOf,

    /**
     * The CampaignResponseAllOf1 model constructor.
     * @property {module:model/CampaignResponseAllOf1}
     */
    CampaignResponseAllOf1,

    /**
     * The CampaignSummaryStatus model constructor.
     * @property {module:model/CampaignSummaryStatus}
     */
    CampaignSummaryStatus,

    /**
     * The CatalogsDbItem model constructor.
     * @property {module:model/CatalogsDbItem}
     */
    CatalogsDbItem,

    /**
     * The CatalogsFeed model constructor.
     * @property {module:model/CatalogsFeed}
     */
    CatalogsFeed,

    /**
     * The CatalogsFeedCredentials model constructor.
     * @property {module:model/CatalogsFeedCredentials}
     */
    CatalogsFeedCredentials,

    /**
     * The CatalogsFeedIngestionDetails model constructor.
     * @property {module:model/CatalogsFeedIngestionDetails}
     */
    CatalogsFeedIngestionDetails,

    /**
     * The CatalogsFeedIngestionErrors model constructor.
     * @property {module:model/CatalogsFeedIngestionErrors}
     */
    CatalogsFeedIngestionErrors,

    /**
     * The CatalogsFeedIngestionInfo model constructor.
     * @property {module:model/CatalogsFeedIngestionInfo}
     */
    CatalogsFeedIngestionInfo,

    /**
     * The CatalogsFeedProcessingResult model constructor.
     * @property {module:model/CatalogsFeedProcessingResult}
     */
    CatalogsFeedProcessingResult,

    /**
     * The CatalogsFeedProcessingResultFields model constructor.
     * @property {module:model/CatalogsFeedProcessingResultFields}
     */
    CatalogsFeedProcessingResultFields,

    /**
     * The CatalogsFeedProcessingSchedule model constructor.
     * @property {module:model/CatalogsFeedProcessingSchedule}
     */
    CatalogsFeedProcessingSchedule,

    /**
     * The CatalogsFeedProcessingStatus model constructor.
     * @property {module:model/CatalogsFeedProcessingStatus}
     */
    CatalogsFeedProcessingStatus,

    /**
     * The CatalogsFeedProductCounts model constructor.
     * @property {module:model/CatalogsFeedProductCounts}
     */
    CatalogsFeedProductCounts,

    /**
     * The CatalogsFeedValidationDetails model constructor.
     * @property {module:model/CatalogsFeedValidationDetails}
     */
    CatalogsFeedValidationDetails,

    /**
     * The CatalogsFeedValidationErrors model constructor.
     * @property {module:model/CatalogsFeedValidationErrors}
     */
    CatalogsFeedValidationErrors,

    /**
     * The CatalogsFeedValidationWarnings model constructor.
     * @property {module:model/CatalogsFeedValidationWarnings}
     */
    CatalogsFeedValidationWarnings,

    /**
     * The CatalogsFeedsCreateRequest model constructor.
     * @property {module:model/CatalogsFeedsCreateRequest}
     */
    CatalogsFeedsCreateRequest,

    /**
     * The CatalogsFeedsUpdateRequest model constructor.
     * @property {module:model/CatalogsFeedsUpdateRequest}
     */
    CatalogsFeedsUpdateRequest,

    /**
     * The CatalogsFormat model constructor.
     * @property {module:model/CatalogsFormat}
     */
    CatalogsFormat,

    /**
     * The CatalogsItems model constructor.
     * @property {module:model/CatalogsItems}
     */
    CatalogsItems,

    /**
     * The CatalogsItemsBatch model constructor.
     * @property {module:model/CatalogsItemsBatch}
     */
    CatalogsItemsBatch,

    /**
     * The CatalogsItemsBatchRequest model constructor.
     * @property {module:model/CatalogsItemsBatchRequest}
     */
    CatalogsItemsBatchRequest,

    /**
     * The CatalogsProductGroup model constructor.
     * @property {module:model/CatalogsProductGroup}
     */
    CatalogsProductGroup,

    /**
     * The CatalogsProductGroupCreateRequest model constructor.
     * @property {module:model/CatalogsProductGroupCreateRequest}
     */
    CatalogsProductGroupCreateRequest,

    /**
     * The CatalogsProductGroupCurrencyCriteria model constructor.
     * @property {module:model/CatalogsProductGroupCurrencyCriteria}
     */
    CatalogsProductGroupCurrencyCriteria,

    /**
     * The CatalogsProductGroupFilterKeys model constructor.
     * @property {module:model/CatalogsProductGroupFilterKeys}
     */
    CatalogsProductGroupFilterKeys,

    /**
     * The CatalogsProductGroupFilters model constructor.
     * @property {module:model/CatalogsProductGroupFilters}
     */
    CatalogsProductGroupFilters,

    /**
     * The CatalogsProductGroupFiltersAllOf model constructor.
     * @property {module:model/CatalogsProductGroupFiltersAllOf}
     */
    CatalogsProductGroupFiltersAllOf,

    /**
     * The CatalogsProductGroupFiltersAnyOf model constructor.
     * @property {module:model/CatalogsProductGroupFiltersAnyOf}
     */
    CatalogsProductGroupFiltersAnyOf,

    /**
     * The CatalogsProductGroupMultipleStringCriteria model constructor.
     * @property {module:model/CatalogsProductGroupMultipleStringCriteria}
     */
    CatalogsProductGroupMultipleStringCriteria,

    /**
     * The CatalogsProductGroupMultipleStringListCriteria model constructor.
     * @property {module:model/CatalogsProductGroupMultipleStringListCriteria}
     */
    CatalogsProductGroupMultipleStringListCriteria,

    /**
     * The CatalogsProductGroupPricingCriteria model constructor.
     * @property {module:model/CatalogsProductGroupPricingCriteria}
     */
    CatalogsProductGroupPricingCriteria,

    /**
     * The CatalogsProductGroupStatus model constructor.
     * @property {module:model/CatalogsProductGroupStatus}
     */
    CatalogsProductGroupStatus,

    /**
     * The CatalogsProductGroupType model constructor.
     * @property {module:model/CatalogsProductGroupType}
     */
    CatalogsProductGroupType,

    /**
     * The CatalogsProductGroupUpdateRequest model constructor.
     * @property {module:model/CatalogsProductGroupUpdateRequest}
     */
    CatalogsProductGroupUpdateRequest,

    /**
     * The CatalogsStatus model constructor.
     * @property {module:model/CatalogsStatus}
     */
    CatalogsStatus,

    /**
     * The ConditionFilter model constructor.
     * @property {module:model/ConditionFilter}
     */
    ConditionFilter,

    /**
     * The ConversionAttributionWindowDays model constructor.
     * @property {module:model/ConversionAttributionWindowDays}
     */
    ConversionAttributionWindowDays,

    /**
     * The ConversionReportAttributionType model constructor.
     * @property {module:model/ConversionReportAttributionType}
     */
    ConversionReportAttributionType,

    /**
     * The ConversionReportTimeType model constructor.
     * @property {module:model/ConversionReportTimeType}
     */
    ConversionReportTimeType,

    /**
     * The Country model constructor.
     * @property {module:model/Country}
     */
    Country,

    /**
     * The Currency model constructor.
     * @property {module:model/Currency}
     */
    Currency,

    /**
     * The CurrencyFilter model constructor.
     * @property {module:model/CurrencyFilter}
     */
    CurrencyFilter,

    /**
     * The CustomLabel0Filter model constructor.
     * @property {module:model/CustomLabel0Filter}
     */
    CustomLabel0Filter,

    /**
     * The CustomLabel1Filter model constructor.
     * @property {module:model/CustomLabel1Filter}
     */
    CustomLabel1Filter,

    /**
     * The CustomLabel2Filter model constructor.
     * @property {module:model/CustomLabel2Filter}
     */
    CustomLabel2Filter,

    /**
     * The CustomLabel3Filter model constructor.
     * @property {module:model/CustomLabel3Filter}
     */
    CustomLabel3Filter,

    /**
     * The CustomLabel4Filter model constructor.
     * @property {module:model/CustomLabel4Filter}
     */
    CustomLabel4Filter,

    /**
     * The DataOutputFormat model constructor.
     * @property {module:model/DataOutputFormat}
     */
    DataOutputFormat,

    /**
     * The EntityStatus model constructor.
     * @property {module:model/EntityStatus}
     */
    EntityStatus,

    /**
     * The Error model constructor.
     * @property {module:model/Error}
     */
    Error,

    /**
     * The FeedFields model constructor.
     * @property {module:model/FeedFields}
     */
    FeedFields,

    /**
     * The GenderFilter model constructor.
     * @property {module:model/GenderFilter}
     */
    GenderFilter,

    /**
     * The GoogleProductCategory0Filter model constructor.
     * @property {module:model/GoogleProductCategory0Filter}
     */
    GoogleProductCategory0Filter,

    /**
     * The GoogleProductCategory1Filter model constructor.
     * @property {module:model/GoogleProductCategory1Filter}
     */
    GoogleProductCategory1Filter,

    /**
     * The GoogleProductCategory2Filter model constructor.
     * @property {module:model/GoogleProductCategory2Filter}
     */
    GoogleProductCategory2Filter,

    /**
     * The GoogleProductCategory3Filter model constructor.
     * @property {module:model/GoogleProductCategory3Filter}
     */
    GoogleProductCategory3Filter,

    /**
     * The GoogleProductCategory4Filter model constructor.
     * @property {module:model/GoogleProductCategory4Filter}
     */
    GoogleProductCategory4Filter,

    /**
     * The GoogleProductCategory5Filter model constructor.
     * @property {module:model/GoogleProductCategory5Filter}
     */
    GoogleProductCategory5Filter,

    /**
     * The GoogleProductCategory6Filter model constructor.
     * @property {module:model/GoogleProductCategory6Filter}
     */
    GoogleProductCategory6Filter,

    /**
     * The Granularity model constructor.
     * @property {module:model/Granularity}
     */
    Granularity,

    /**
     * The ImageDetails model constructor.
     * @property {module:model/ImageDetails}
     */
    ImageDetails,

    /**
     * The ItemAttributes model constructor.
     * @property {module:model/ItemAttributes}
     */
    ItemAttributes,

    /**
     * The ItemBatchRecord model constructor.
     * @property {module:model/ItemBatchRecord}
     */
    ItemBatchRecord,

    /**
     * The ItemGroupIdFilter model constructor.
     * @property {module:model/ItemGroupIdFilter}
     */
    ItemGroupIdFilter,

    /**
     * The ItemIdFilter model constructor.
     * @property {module:model/ItemIdFilter}
     */
    ItemIdFilter,

    /**
     * The ItemProcessingRecord model constructor.
     * @property {module:model/ItemProcessingRecord}
     */
    ItemProcessingRecord,

    /**
     * The ItemProcessingStatus model constructor.
     * @property {module:model/ItemProcessingStatus}
     */
    ItemProcessingStatus,

    /**
     * The ItemValidationEvent model constructor.
     * @property {module:model/ItemValidationEvent}
     */
    ItemValidationEvent,

    /**
     * The Language model constructor.
     * @property {module:model/Language}
     */
    Language,

    /**
     * The MaxPriceFilter model constructor.
     * @property {module:model/MaxPriceFilter}
     */
    MaxPriceFilter,

    /**
     * The MediaUpload model constructor.
     * @property {module:model/MediaUpload}
     */
    MediaUpload,

    /**
     * The MediaUploadAllOf model constructor.
     * @property {module:model/MediaUploadAllOf}
     */
    MediaUploadAllOf,

    /**
     * The MediaUploadAllOfUploadParameters model constructor.
     * @property {module:model/MediaUploadAllOfUploadParameters}
     */
    MediaUploadAllOfUploadParameters,

    /**
     * The MediaUploadDetails model constructor.
     * @property {module:model/MediaUploadDetails}
     */
    MediaUploadDetails,

    /**
     * The MediaUploadRequest model constructor.
     * @property {module:model/MediaUploadRequest}
     */
    MediaUploadRequest,

    /**
     * The MediaUploadStatus model constructor.
     * @property {module:model/MediaUploadStatus}
     */
    MediaUploadStatus,

    /**
     * The MediaUploadType model constructor.
     * @property {module:model/MediaUploadType}
     */
    MediaUploadType,

    /**
     * The MetricsReportingLevel model constructor.
     * @property {module:model/MetricsReportingLevel}
     */
    MetricsReportingLevel,

    /**
     * The MinPriceFilter model constructor.
     * @property {module:model/MinPriceFilter}
     */
    MinPriceFilter,

    /**
     * The NonNullableCatalogsCurrency model constructor.
     * @property {module:model/NonNullableCatalogsCurrency}
     */
    NonNullableCatalogsCurrency,

    /**
     * The NullableCurrency model constructor.
     * @property {module:model/NullableCurrency}
     */
    NullableCurrency,

    /**
     * The OauthAccessTokenRequest model constructor.
     * @property {module:model/OauthAccessTokenRequest}
     */
    OauthAccessTokenRequest,

    /**
     * The OauthAccessTokenRequestCode model constructor.
     * @property {module:model/OauthAccessTokenRequestCode}
     */
    OauthAccessTokenRequestCode,

    /**
     * The OauthAccessTokenRequestCodeAllOf model constructor.
     * @property {module:model/OauthAccessTokenRequestCodeAllOf}
     */
    OauthAccessTokenRequestCodeAllOf,

    /**
     * The OauthAccessTokenRequestRefresh model constructor.
     * @property {module:model/OauthAccessTokenRequestRefresh}
     */
    OauthAccessTokenRequestRefresh,

    /**
     * The OauthAccessTokenRequestRefreshAllOf model constructor.
     * @property {module:model/OauthAccessTokenRequestRefreshAllOf}
     */
    OauthAccessTokenRequestRefreshAllOf,

    /**
     * The OauthAccessTokenResponse model constructor.
     * @property {module:model/OauthAccessTokenResponse}
     */
    OauthAccessTokenResponse,

    /**
     * The OauthAccessTokenResponseCode model constructor.
     * @property {module:model/OauthAccessTokenResponseCode}
     */
    OauthAccessTokenResponseCode,

    /**
     * The OauthAccessTokenResponseCodeAllOf model constructor.
     * @property {module:model/OauthAccessTokenResponseCodeAllOf}
     */
    OauthAccessTokenResponseCodeAllOf,

    /**
     * The OauthAccessTokenResponseRefresh model constructor.
     * @property {module:model/OauthAccessTokenResponseRefresh}
     */
    OauthAccessTokenResponseRefresh,

    /**
     * The ObjectiveType model constructor.
     * @property {module:model/ObjectiveType}
     */
    ObjectiveType,

    /**
     * The PacingDeliveryType model constructor.
     * @property {module:model/PacingDeliveryType}
     */
    PacingDeliveryType,

    /**
     * The Paginated model constructor.
     * @property {module:model/Paginated}
     */
    Paginated,

    /**
     * The Pin model constructor.
     * @property {module:model/Pin}
     */
    Pin,

    /**
     * The PinMedia model constructor.
     * @property {module:model/PinMedia}
     */
    PinMedia,

    /**
     * The PinMediaSource model constructor.
     * @property {module:model/PinMediaSource}
     */
    PinMediaSource,

    /**
     * The PinMediaSourceImageBase64 model constructor.
     * @property {module:model/PinMediaSourceImageBase64}
     */
    PinMediaSourceImageBase64,

    /**
     * The PinMediaSourceImageURL model constructor.
     * @property {module:model/PinMediaSourceImageURL}
     */
    PinMediaSourceImageURL,

    /**
     * The PinMediaSourceVideoID model constructor.
     * @property {module:model/PinMediaSourceVideoID}
     */
    PinMediaSourceVideoID,

    /**
     * The PinMediaWithImage model constructor.
     * @property {module:model/PinMediaWithImage}
     */
    PinMediaWithImage,

    /**
     * The PinMediaWithImageAllOf model constructor.
     * @property {module:model/PinMediaWithImageAllOf}
     */
    PinMediaWithImageAllOf,

    /**
     * The PinPromotionSummaryStatus model constructor.
     * @property {module:model/PinPromotionSummaryStatus}
     */
    PinPromotionSummaryStatus,

    /**
     * The PlacementGroupType model constructor.
     * @property {module:model/PlacementGroupType}
     */
    PlacementGroupType,

    /**
     * The ProductAvailabilityType model constructor.
     * @property {module:model/ProductAvailabilityType}
     */
    ProductAvailabilityType,

    /**
     * The ProductGroupSummaryStatus model constructor.
     * @property {module:model/ProductGroupSummaryStatus}
     */
    ProductGroupSummaryStatus,

    /**
     * The ProductType0Filter model constructor.
     * @property {module:model/ProductType0Filter}
     */
    ProductType0Filter,

    /**
     * The ProductType1Filter model constructor.
     * @property {module:model/ProductType1Filter}
     */
    ProductType1Filter,

    /**
     * The ProductType2Filter model constructor.
     * @property {module:model/ProductType2Filter}
     */
    ProductType2Filter,

    /**
     * The ProductType3Filter model constructor.
     * @property {module:model/ProductType3Filter}
     */
    ProductType3Filter,

    /**
     * The ProductType4Filter model constructor.
     * @property {module:model/ProductType4Filter}
     */
    ProductType4Filter,

    /**
     * The ReportingColumnAsync model constructor.
     * @property {module:model/ReportingColumnAsync}
     */
    ReportingColumnAsync,

    /**
     * The TargetingTypeFilter model constructor.
     * @property {module:model/TargetingTypeFilter}
     */
    TargetingTypeFilter,

    /**
     * The TrackingUrls model constructor.
     * @property {module:model/TrackingUrls}
     */
    TrackingUrls,

    /**
    * The AdAccountsApi service constructor.
    * @property {module:api/AdAccountsApi}
    */
    AdAccountsApi,

    /**
    * The BoardsApi service constructor.
    * @property {module:api/BoardsApi}
    */
    BoardsApi,

    /**
    * The CatalogsApi service constructor.
    * @property {module:api/CatalogsApi}
    */
    CatalogsApi,

    /**
    * The MediaApi service constructor.
    * @property {module:api/MediaApi}
    */
    MediaApi,

    /**
    * The OauthApi service constructor.
    * @property {module:api/OauthApi}
    */
    OauthApi,

    /**
    * The PinsApi service constructor.
    * @property {module:api/PinsApi}
    */
    PinsApi,

    /**
    * The UserAccountApi service constructor.
    * @property {module:api/UserAccountApi}
    */
    UserAccountApi
};
