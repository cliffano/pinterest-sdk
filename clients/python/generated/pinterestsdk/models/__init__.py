# coding: utf-8

# flake8: noqa

# import all models into this package
# if you have many models here with many references from one model to another this may
# raise a RecursionError
# to avoid this, import only the models that you directly need like:
# from from pinterestsdk.model.pet import Pet
# or import this package, but before doing it, use:
# import sys
# sys.setrecursionlimit(n)

from pinterestsdk.model.account import Account
from pinterestsdk.model.action_type import ActionType
from pinterestsdk.model.ad_account import AdAccount
from pinterestsdk.model.ad_account_analytics_response import AdAccountAnalyticsResponse
from pinterestsdk.model.ad_account_create_request import AdAccountCreateRequest
from pinterestsdk.model.ad_accounts_country_response import AdAccountsCountryResponse
from pinterestsdk.model.ad_accounts_country_response_data import AdAccountsCountryResponseData
from pinterestsdk.model.ad_array_response import AdArrayResponse
from pinterestsdk.model.ad_array_response_element import AdArrayResponseElement
from pinterestsdk.model.ad_common import AdCommon
from pinterestsdk.model.ad_create_request import AdCreateRequest
from pinterestsdk.model.ad_group_array_response import AdGroupArrayResponse
from pinterestsdk.model.ad_group_array_response_element import AdGroupArrayResponseElement
from pinterestsdk.model.ad_group_common import AdGroupCommon
from pinterestsdk.model.ad_group_create_request import AdGroupCreateRequest
from pinterestsdk.model.ad_group_response import AdGroupResponse
from pinterestsdk.model.ad_group_summary_status import AdGroupSummaryStatus
from pinterestsdk.model.ad_group_update_request import AdGroupUpdateRequest
from pinterestsdk.model.ad_groups_analytics_response import AdGroupsAnalyticsResponse
from pinterestsdk.model.ad_preview_request import AdPreviewRequest
from pinterestsdk.model.ad_preview_url_response import AdPreviewURLResponse
from pinterestsdk.model.ad_response import AdResponse
from pinterestsdk.model.ad_update_request import AdUpdateRequest
from pinterestsdk.model.ads_analytics_create_async_request import AdsAnalyticsCreateAsyncRequest
from pinterestsdk.model.ads_analytics_create_async_response import AdsAnalyticsCreateAsyncResponse
from pinterestsdk.model.ads_analytics_filter_column import AdsAnalyticsFilterColumn
from pinterestsdk.model.ads_analytics_filter_operator import AdsAnalyticsFilterOperator
from pinterestsdk.model.ads_analytics_get_async_response import AdsAnalyticsGetAsyncResponse
from pinterestsdk.model.ads_analytics_metrics_filter import AdsAnalyticsMetricsFilter
from pinterestsdk.model.ads_analytics_response import AdsAnalyticsResponse
from pinterestsdk.model.ads_analytics_targeting_type import AdsAnalyticsTargetingType
from pinterestsdk.model.analytics_metrics_response import AnalyticsMetricsResponse
from pinterestsdk.model.analytics_response import AnalyticsResponse
from pinterestsdk.model.audience import Audience
from pinterestsdk.model.audience_common import AudienceCommon
from pinterestsdk.model.audience_create_request import AudienceCreateRequest
from pinterestsdk.model.audience_definition_scope import AudienceDefinitionScope
from pinterestsdk.model.audience_definition_type import AudienceDefinitionType
from pinterestsdk.model.audience_description import AudienceDescription
from pinterestsdk.model.audience_insight_category_common import AudienceInsightCategoryCommon
from pinterestsdk.model.audience_rule import AudienceRule
from pinterestsdk.model.audience_type import AudienceType
from pinterestsdk.model.audience_update_operation_type import AudienceUpdateOperationType
from pinterestsdk.model.audience_update_request import AudienceUpdateRequest
from pinterestsdk.model.availability_filter import AvailabilityFilter
from pinterestsdk.model.batch_operation import BatchOperation
from pinterestsdk.model.batch_operation_status import BatchOperationStatus
from pinterestsdk.model.bid_floor import BidFloor
from pinterestsdk.model.bid_floor_request import BidFloorRequest
from pinterestsdk.model.board import Board
from pinterestsdk.model.board_owner import BoardOwner
from pinterestsdk.model.board_section import BoardSection
from pinterestsdk.model.board_update import BoardUpdate
from pinterestsdk.model.book_closed_response import BookClosedResponse
from pinterestsdk.model.brand_filter import BrandFilter
from pinterestsdk.model.budget_type import BudgetType
from pinterestsdk.model.bulk_download_request import BulkDownloadRequest
from pinterestsdk.model.bulk_download_response import BulkDownloadResponse
from pinterestsdk.model.bulk_entity_type import BulkEntityType
from pinterestsdk.model.bulk_output_format import BulkOutputFormat
from pinterestsdk.model.bulk_upsert_request import BulkUpsertRequest
from pinterestsdk.model.bulk_upsert_request_create import BulkUpsertRequestCreate
from pinterestsdk.model.bulk_upsert_request_update import BulkUpsertRequestUpdate
from pinterestsdk.model.bulk_upsert_response import BulkUpsertResponse
from pinterestsdk.model.bulk_upsert_status import BulkUpsertStatus
from pinterestsdk.model.bulk_upsert_status_response import BulkUpsertStatusResponse
from pinterestsdk.model.campaign_common import CampaignCommon
from pinterestsdk.model.campaign_create_common import CampaignCreateCommon
from pinterestsdk.model.campaign_create_request import CampaignCreateRequest
from pinterestsdk.model.campaign_create_response import CampaignCreateResponse
from pinterestsdk.model.campaign_create_response_data import CampaignCreateResponseData
from pinterestsdk.model.campaign_create_response_item import CampaignCreateResponseItem
from pinterestsdk.model.campaign_id import CampaignId
from pinterestsdk.model.campaign_is_automated_campaign import CampaignIsAutomatedCampaign
from pinterestsdk.model.campaign_is_campaign_budget_optimization import CampaignIsCampaignBudgetOptimization
from pinterestsdk.model.campaign_is_flexible_daily_budgets import CampaignIsFlexibleDailyBudgets
from pinterestsdk.model.campaign_response import CampaignResponse
from pinterestsdk.model.campaign_summary_status import CampaignSummaryStatus
from pinterestsdk.model.campaign_update_request import CampaignUpdateRequest
from pinterestsdk.model.campaign_update_response import CampaignUpdateResponse
from pinterestsdk.model.campaigns_analytics_response import CampaignsAnalyticsResponse
from pinterestsdk.model.catalogs_db_item import CatalogsDbItem
from pinterestsdk.model.catalogs_feed import CatalogsFeed
from pinterestsdk.model.catalogs_feed_credentials import CatalogsFeedCredentials
from pinterestsdk.model.catalogs_feed_ingestion_details import CatalogsFeedIngestionDetails
from pinterestsdk.model.catalogs_feed_ingestion_errors import CatalogsFeedIngestionErrors
from pinterestsdk.model.catalogs_feed_ingestion_info import CatalogsFeedIngestionInfo
from pinterestsdk.model.catalogs_feed_processing_result import CatalogsFeedProcessingResult
from pinterestsdk.model.catalogs_feed_processing_schedule import CatalogsFeedProcessingSchedule
from pinterestsdk.model.catalogs_feed_processing_status import CatalogsFeedProcessingStatus
from pinterestsdk.model.catalogs_feed_product_counts import CatalogsFeedProductCounts
from pinterestsdk.model.catalogs_feed_validation_details import CatalogsFeedValidationDetails
from pinterestsdk.model.catalogs_feed_validation_errors import CatalogsFeedValidationErrors
from pinterestsdk.model.catalogs_feed_validation_warnings import CatalogsFeedValidationWarnings
from pinterestsdk.model.catalogs_feeds_create_request import CatalogsFeedsCreateRequest
from pinterestsdk.model.catalogs_feeds_update_request import CatalogsFeedsUpdateRequest
from pinterestsdk.model.catalogs_format import CatalogsFormat
from pinterestsdk.model.catalogs_item_validation_details import CatalogsItemValidationDetails
from pinterestsdk.model.catalogs_item_validation_errors import CatalogsItemValidationErrors
from pinterestsdk.model.catalogs_item_validation_issue import CatalogsItemValidationIssue
from pinterestsdk.model.catalogs_item_validation_issues import CatalogsItemValidationIssues
from pinterestsdk.model.catalogs_item_validation_warnings import CatalogsItemValidationWarnings
from pinterestsdk.model.catalogs_items import CatalogsItems
from pinterestsdk.model.catalogs_items_batch import CatalogsItemsBatch
from pinterestsdk.model.catalogs_items_batch_request import CatalogsItemsBatchRequest
from pinterestsdk.model.catalogs_items_create_batch_request import CatalogsItemsCreateBatchRequest
from pinterestsdk.model.catalogs_items_delete_discontinued_batch_request import CatalogsItemsDeleteDiscontinuedBatchRequest
from pinterestsdk.model.catalogs_items_update_batch_request import CatalogsItemsUpdateBatchRequest
from pinterestsdk.model.catalogs_list_products_by_filter_request import CatalogsListProductsByFilterRequest
from pinterestsdk.model.catalogs_product import CatalogsProduct
from pinterestsdk.model.catalogs_product_group import CatalogsProductGroup
from pinterestsdk.model.catalogs_product_group_create_request import CatalogsProductGroupCreateRequest
from pinterestsdk.model.catalogs_product_group_currency_criteria import CatalogsProductGroupCurrencyCriteria
from pinterestsdk.model.catalogs_product_group_filter_keys import CatalogsProductGroupFilterKeys
from pinterestsdk.model.catalogs_product_group_filters import CatalogsProductGroupFilters
from pinterestsdk.model.catalogs_product_group_filters_all_of import CatalogsProductGroupFiltersAllOf
from pinterestsdk.model.catalogs_product_group_filters_all_of_request import CatalogsProductGroupFiltersAllOfRequest
from pinterestsdk.model.catalogs_product_group_filters_any_of import CatalogsProductGroupFiltersAnyOf
from pinterestsdk.model.catalogs_product_group_multiple_string_criteria import CatalogsProductGroupMultipleStringCriteria
from pinterestsdk.model.catalogs_product_group_multiple_string_list_criteria import CatalogsProductGroupMultipleStringListCriteria
from pinterestsdk.model.catalogs_product_group_pricing_criteria import CatalogsProductGroupPricingCriteria
from pinterestsdk.model.catalogs_product_group_product_counts import CatalogsProductGroupProductCounts
from pinterestsdk.model.catalogs_product_group_status import CatalogsProductGroupStatus
from pinterestsdk.model.catalogs_product_group_type import CatalogsProductGroupType
from pinterestsdk.model.catalogs_product_group_update_request import CatalogsProductGroupUpdateRequest
from pinterestsdk.model.catalogs_product_metadata import CatalogsProductMetadata
from pinterestsdk.model.catalogs_status import CatalogsStatus
from pinterestsdk.model.condition_filter import ConditionFilter
from pinterestsdk.model.conversion_api_response import ConversionApiResponse
from pinterestsdk.model.conversion_attribution_window_days import ConversionAttributionWindowDays
from pinterestsdk.model.conversion_events import ConversionEvents
from pinterestsdk.model.conversion_events_user_data import ConversionEventsUserData
from pinterestsdk.model.conversion_report_attribution_type import ConversionReportAttributionType
from pinterestsdk.model.conversion_report_time_type import ConversionReportTimeType
from pinterestsdk.model.country import Country
from pinterestsdk.model.creative_type import CreativeType
from pinterestsdk.model.currency import Currency
from pinterestsdk.model.currency_filter import CurrencyFilter
from pinterestsdk.model.custom_label0_filter import CustomLabel0Filter
from pinterestsdk.model.custom_label1_filter import CustomLabel1Filter
from pinterestsdk.model.custom_label2_filter import CustomLabel2Filter
from pinterestsdk.model.custom_label3_filter import CustomLabel3Filter
from pinterestsdk.model.custom_label4_filter import CustomLabel4Filter
from pinterestsdk.model.customer_list import CustomerList
from pinterestsdk.model.customer_list_request import CustomerListRequest
from pinterestsdk.model.customer_list_update_request import CustomerListUpdateRequest
from pinterestsdk.model.data_output_format import DataOutputFormat
from pinterestsdk.model.data_status import DataStatus
from pinterestsdk.model.delivery_metrics_response import DeliveryMetricsResponse
from pinterestsdk.model.entity_status import EntityStatus
from pinterestsdk.model.error import Error
from pinterestsdk.model.exception import Exception
from pinterestsdk.model.gender_filter import GenderFilter
from pinterestsdk.model.get_audiences_order_by import GetAudiencesOrderBy
from pinterestsdk.model.google_product_category0_filter import GoogleProductCategory0Filter
from pinterestsdk.model.google_product_category1_filter import GoogleProductCategory1Filter
from pinterestsdk.model.google_product_category2_filter import GoogleProductCategory2Filter
from pinterestsdk.model.google_product_category3_filter import GoogleProductCategory3Filter
from pinterestsdk.model.google_product_category4_filter import GoogleProductCategory4Filter
from pinterestsdk.model.google_product_category5_filter import GoogleProductCategory5Filter
from pinterestsdk.model.google_product_category6_filter import GoogleProductCategory6Filter
from pinterestsdk.model.granularity import Granularity
from pinterestsdk.model.image_details import ImageDetails
from pinterestsdk.model.image_metadata import ImageMetadata
from pinterestsdk.model.item_attributes import ItemAttributes
from pinterestsdk.model.item_batch_record import ItemBatchRecord
from pinterestsdk.model.item_create_batch_record import ItemCreateBatchRecord
from pinterestsdk.model.item_delete_discontinued_batch_record import ItemDeleteDiscontinuedBatchRecord
from pinterestsdk.model.item_group_id_filter import ItemGroupIdFilter
from pinterestsdk.model.item_id_filter import ItemIdFilter
from pinterestsdk.model.item_processing_record import ItemProcessingRecord
from pinterestsdk.model.item_processing_status import ItemProcessingStatus
from pinterestsdk.model.item_response import ItemResponse
from pinterestsdk.model.item_update_batch_record import ItemUpdateBatchRecord
from pinterestsdk.model.item_validation_event import ItemValidationEvent
from pinterestsdk.model.keyword import Keyword
from pinterestsdk.model.keyword_error import KeywordError
from pinterestsdk.model.keyword_metrics import KeywordMetrics
from pinterestsdk.model.keyword_metrics_response import KeywordMetricsResponse
from pinterestsdk.model.keyword_update import KeywordUpdate
from pinterestsdk.model.keyword_update_body import KeywordUpdateBody
from pinterestsdk.model.keywords_common import KeywordsCommon
from pinterestsdk.model.keywords_metrics_array_response import KeywordsMetricsArrayResponse
from pinterestsdk.model.keywords_request import KeywordsRequest
from pinterestsdk.model.keywords_response import KeywordsResponse
from pinterestsdk.model.language import Language
from pinterestsdk.model.match_type import MatchType
from pinterestsdk.model.match_type_response import MatchTypeResponse
from pinterestsdk.model.max_price_filter import MaxPriceFilter
from pinterestsdk.model.media_upload import MediaUpload
from pinterestsdk.model.media_upload_details import MediaUploadDetails
from pinterestsdk.model.media_upload_request import MediaUploadRequest
from pinterestsdk.model.media_upload_status import MediaUploadStatus
from pinterestsdk.model.media_upload_type import MediaUploadType
from pinterestsdk.model.metrics import Metrics
from pinterestsdk.model.metrics_reporting_level import MetricsReportingLevel
from pinterestsdk.model.metrics_response import MetricsResponse
from pinterestsdk.model.min_price_filter import MinPriceFilter
from pinterestsdk.model.non_nullable_catalogs_currency import NonNullableCatalogsCurrency
from pinterestsdk.model.non_nullable_product_availability_type import NonNullableProductAvailabilityType
from pinterestsdk.model.nullable_catalogs_item_field_type import NullableCatalogsItemFieldType
from pinterestsdk.model.nullable_currency import NullableCurrency
from pinterestsdk.model.oauth_access_token_request_code import OauthAccessTokenRequestCode
from pinterestsdk.model.oauth_access_token_request_refresh import OauthAccessTokenRequestRefresh
from pinterestsdk.model.oauth_access_token_response import OauthAccessTokenResponse
from pinterestsdk.model.oauth_access_token_response_code import OauthAccessTokenResponseCode
from pinterestsdk.model.oauth_access_token_response_refresh import OauthAccessTokenResponseRefresh
from pinterestsdk.model.objective_type import ObjectiveType
from pinterestsdk.model.pacing_delivery_type import PacingDeliveryType
from pinterestsdk.model.paginated import Paginated
from pinterestsdk.model.pin import Pin
from pinterestsdk.model.pin_media import PinMedia
from pinterestsdk.model.pin_media_metadata import PinMediaMetadata
from pinterestsdk.model.pin_media_source import PinMediaSource
from pinterestsdk.model.pin_media_source_image_base64 import PinMediaSourceImageBase64
from pinterestsdk.model.pin_media_source_image_url import PinMediaSourceImageURL
from pinterestsdk.model.pin_media_source_video_id import PinMediaSourceVideoID
from pinterestsdk.model.pin_media_with_image import PinMediaWithImage
from pinterestsdk.model.pin_media_with_image_and_video import PinMediaWithImageAndVideo
from pinterestsdk.model.pin_media_with_images import PinMediaWithImages
from pinterestsdk.model.pin_media_with_video import PinMediaWithVideo
from pinterestsdk.model.pin_media_with_videos import PinMediaWithVideos
from pinterestsdk.model.pin_promotion_summary_status import PinPromotionSummaryStatus
from pinterestsdk.model.placement_group_type import PlacementGroupType
from pinterestsdk.model.product_availability_type import ProductAvailabilityType
from pinterestsdk.model.product_group_analytics_response import ProductGroupAnalyticsResponse
from pinterestsdk.model.product_group_promotion import ProductGroupPromotion
from pinterestsdk.model.product_group_promotion_array_element import ProductGroupPromotionArrayElement
from pinterestsdk.model.product_group_promotion_array_response import ProductGroupPromotionArrayResponse
from pinterestsdk.model.product_group_promotion_common import ProductGroupPromotionCommon
from pinterestsdk.model.product_group_promotion_create_request import ProductGroupPromotionCreateRequest
from pinterestsdk.model.product_group_promotion_update_item import ProductGroupPromotionUpdateItem
from pinterestsdk.model.product_group_promotion_update_request import ProductGroupPromotionUpdateRequest
from pinterestsdk.model.product_group_promotion_update_response_item import ProductGroupPromotionUpdateResponseItem
from pinterestsdk.model.product_group_summary_status import ProductGroupSummaryStatus
from pinterestsdk.model.product_type0_filter import ProductType0Filter
from pinterestsdk.model.product_type1_filter import ProductType1Filter
from pinterestsdk.model.product_type2_filter import ProductType2Filter
from pinterestsdk.model.product_type3_filter import ProductType3Filter
from pinterestsdk.model.product_type4_filter import ProductType4Filter
from pinterestsdk.model.related_terms import RelatedTerms
from pinterestsdk.model.reporting_column_async import ReportingColumnAsync
from pinterestsdk.model.single_interest_targeting_option_response import SingleInterestTargetingOptionResponse
from pinterestsdk.model.targeting_option_response import TargetingOptionResponse
from pinterestsdk.model.targeting_spec import TargetingSpec
from pinterestsdk.model.targeting_type_filter import TargetingTypeFilter
from pinterestsdk.model.terms_of_service import TermsOfService
from pinterestsdk.model.terms_suggested_response import TermsSuggestedResponse
from pinterestsdk.model.top_pins_analytics_response import TopPinsAnalyticsResponse
from pinterestsdk.model.top_video_pins_analytics_response import TopVideoPinsAnalyticsResponse
from pinterestsdk.model.tracking_urls import TrackingUrls
from pinterestsdk.model.updatable_item_attributes import UpdatableItemAttributes
from pinterestsdk.model.user_list_operation_type import UserListOperationType
from pinterestsdk.model.user_list_type import UserListType
from pinterestsdk.model.video_metadata import VideoMetadata
