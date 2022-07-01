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
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


/**
 * 
 * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
 * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
 * @param granularity TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
 * @param columns Metric and entity columns
 * @param level Level of the report
 * @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
 * @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
 * @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
 * @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
 * @param attributionTypes List of types of attribution for the conversion report
 * @param reportFormat Specification for formatting report data
 * @param campaignIds List of campaign ids
 * @param campaignStatuses List of status values for filtering
 * @param campaignObjectiveTypes List of values for filtering
 * @param adGroupIds List of ad group ids
 * @param adGroupStatuses List of values for filtering
 * @param adIds List of ad ids
 * @param adStatuses List of values for filtering
 * @param productGroupIds List of product group ids
 * @param productGroupStatuses List of values for filtering
 * @param productItemIds List of product item ids
 * @param targetingTypes List of targeting types
 * @param metricsFilters List of metrics filters
 */
object AdsAnalyticsCreateAsyncRequests : BaseTable<AdsAnalyticsCreateAsyncRequest>("AdsAnalyticsCreateAsyncRequest") {
    val startDate = text("start_date") /* Metric report start date (UTC). Format: YYYY-MM-DD */
    val endDate = text("end_date") /* Metric report end date (UTC). Format: YYYY-MM-DD */
    val granularity = long("granularity") /* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
    val level = long("level") /* Level of the report */
    val clickWindowDays = long("click_window_days") /* null */ /* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
    val engagementWindowDays = long("engagement_window_days") /* null */ /* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
    val viewWindowDays = long("view_window_days") /* null */ /* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. */
    val conversionReportTime = long("conversion_report_time") /* null */ /* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. */
    val reportFormat = long("report_format") /* null */ /* Specification for formatting report data */

    /**
     * Create an entity of type AdsAnalyticsCreateAsyncRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdsAnalyticsCreateAsyncRequest(
        startDate = row[startDate] ?: "" /* kotlin.String */ /* Metric report start date (UTC). Format: YYYY-MM-DD */,
        endDate = row[endDate] ?: "" /* kotlin.String */ /* Metric report end date (UTC). Format: YYYY-MM-DD */,
        granularity = Granularitys.createEntity(row, withReferences) /* Granularity */ /* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */,
        columns = emptyList() /* kotlin.Array<ReportingColumnAsync> */ /* Metric and entity columns */,
        level = MetricsReportingLevels.createEntity(row, withReferences) /* MetricsReportingLevel */ /* Level of the report */,
        clickWindowDays = ConversionAttributionWindowDayss.createEntity(row, withReferences) /* ConversionAttributionWindowDays? */ /* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */,
        engagementWindowDays = ConversionAttributionWindowDayss.createEntity(row, withReferences) /* ConversionAttributionWindowDays? */ /* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */,
        viewWindowDays = ConversionAttributionWindowDayss.createEntity(row, withReferences) /* ConversionAttributionWindowDays? */ /* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. */,
        conversionReportTime = ConversionReportTimeTypes.createEntity(row, withReferences) /* ConversionReportTimeType? */ /* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. */,
        attributionTypes = emptyList() /* kotlin.Array<ConversionReportAttributionType>? */ /* List of types of attribution for the conversion report */,
        reportFormat = DataOutputFormats.createEntity(row, withReferences) /* DataOutputFormat? */ /* Specification for formatting report data */,
        campaignIds = emptyList() /* kotlin.Array<kotlin.String>? */ /* List of campaign ids */,
        campaignStatuses = emptyList() /* kotlin.Array<CampaignSummaryStatus>? */ /* List of status values for filtering */,
        campaignObjectiveTypes = emptyList() /* kotlin.Array<ObjectiveType>? */ /* List of values for filtering */,
        adGroupIds = emptyList() /* kotlin.Array<kotlin.String>? */ /* List of ad group ids */,
        adGroupStatuses = emptyList() /* kotlin.Array<AdGroupSummaryStatus>? */ /* List of values for filtering */,
        adIds = emptyList() /* kotlin.Array<kotlin.String>? */ /* List of ad ids */,
        adStatuses = emptyList() /* kotlin.Array<PinPromotionSummaryStatus>? */ /* List of values for filtering */,
        productGroupIds = emptyList() /* kotlin.Array<kotlin.String>? */ /* List of product group ids */,
        productGroupStatuses = emptyList() /* kotlin.Array<ProductGroupSummaryStatus>? */ /* List of values for filtering */,
        productItemIds = emptyList() /* kotlin.Array<kotlin.String>? */ /* List of product item ids */,
        targetingTypes = emptyList() /* kotlin.Array<AdsAnalyticsTargetingType>? */ /* List of targeting types */,
        metricsFilters = emptyList() /* kotlin.Array<AdsAnalyticsMetricsFilter>? */ /* List of metrics filters */
    )

    /**
    * Assign all the columns from the entity of type AdsAnalyticsCreateAsyncRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdsAnalyticsCreateAsyncRequest()
    * database.update(AdsAnalyticsCreateAsyncRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdsAnalyticsCreateAsyncRequest) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequests.startDate, entity.startDate)
            set(AdsAnalyticsCreateAsyncRequests.endDate, entity.endDate)
            set(AdsAnalyticsCreateAsyncRequests.granularity, entity.granularity)
            set(AdsAnalyticsCreateAsyncRequests.level, entity.level)
            set(AdsAnalyticsCreateAsyncRequests.clickWindowDays, entity.clickWindowDays)
            set(AdsAnalyticsCreateAsyncRequests.engagementWindowDays, entity.engagementWindowDays)
            set(AdsAnalyticsCreateAsyncRequests.viewWindowDays, entity.viewWindowDays)
            set(AdsAnalyticsCreateAsyncRequests.conversionReportTime, entity.conversionReportTime)
            set(AdsAnalyticsCreateAsyncRequests.reportFormat, entity.reportFormat)
        }
    }

}


object AdsAnalyticsCreateAsyncRequestReportingColumnAsync : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestReportingColumnAsync") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val reportingColumnAsync = long("reportingColumnAsync")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[reportingColumnAsync] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestReportingColumnAsync.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestReportingColumnAsync.reportingColumnAsync, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestConversionReportAttributionType : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestConversionReportAttributionType") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val conversionReportAttributionType = long("conversionReportAttributionType")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[conversionReportAttributionType] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestConversionReportAttributionType.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestConversionReportAttributionType.conversionReportAttributionType, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestCampaignIds : BaseTable<Pair<kotlin.Long, kotlin.String>>("AdsAnalyticsCreateAsyncRequestCampaignIds") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val campaignIds = text("campaignIds")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[campaignIds] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestCampaignIds.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestCampaignIds.campaignIds, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestCampaignSummaryStatus : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestCampaignSummaryStatus") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val campaignSummaryStatus = long("campaignSummaryStatus")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[campaignSummaryStatus] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestCampaignSummaryStatus.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestCampaignSummaryStatus.campaignSummaryStatus, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestObjectiveType : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestObjectiveType") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val objectiveType = long("objectiveType")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[objectiveType] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestObjectiveType.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestObjectiveType.objectiveType, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestAdGroupIds : BaseTable<Pair<kotlin.Long, kotlin.String>>("AdsAnalyticsCreateAsyncRequestAdGroupIds") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val adGroupIds = text("adGroupIds")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[adGroupIds] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestAdGroupIds.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestAdGroupIds.adGroupIds, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestAdGroupSummaryStatus : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestAdGroupSummaryStatus") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val adGroupSummaryStatus = long("adGroupSummaryStatus")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[adGroupSummaryStatus] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestAdGroupSummaryStatus.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestAdGroupSummaryStatus.adGroupSummaryStatus, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestAdIds : BaseTable<Pair<kotlin.Long, kotlin.String>>("AdsAnalyticsCreateAsyncRequestAdIds") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val adIds = text("adIds")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[adIds] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestAdIds.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestAdIds.adIds, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestPinPromotionSummaryStatus : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestPinPromotionSummaryStatus") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val pinPromotionSummaryStatus = long("pinPromotionSummaryStatus")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[pinPromotionSummaryStatus] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestPinPromotionSummaryStatus.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestPinPromotionSummaryStatus.pinPromotionSummaryStatus, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestProductGroupIds : BaseTable<Pair<kotlin.Long, kotlin.String>>("AdsAnalyticsCreateAsyncRequestProductGroupIds") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val productGroupIds = text("productGroupIds")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[productGroupIds] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestProductGroupIds.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestProductGroupIds.productGroupIds, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestProductGroupSummaryStatus : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestProductGroupSummaryStatus") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val productGroupSummaryStatus = long("productGroupSummaryStatus")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[productGroupSummaryStatus] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestProductGroupSummaryStatus.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestProductGroupSummaryStatus.productGroupSummaryStatus, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestProductItemIds : BaseTable<Pair<kotlin.Long, kotlin.String>>("AdsAnalyticsCreateAsyncRequestProductItemIds") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val productItemIds = text("productItemIds")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[productItemIds] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestProductItemIds.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestProductItemIds.productItemIds, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestAdsAnalyticsTargetingType : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestAdsAnalyticsTargetingType") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val adsAnalyticsTargetingType = long("adsAnalyticsTargetingType")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[adsAnalyticsTargetingType] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestAdsAnalyticsTargetingType.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestAdsAnalyticsTargetingType.adsAnalyticsTargetingType, entity.second)
        }
    }

}

object AdsAnalyticsCreateAsyncRequestAdsAnalyticsMetricsFilter : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestAdsAnalyticsMetricsFilter") {
    val adsAnalyticsCreateAsyncRequest = long("adsAnalyticsCreateAsyncRequest")
    val adsAnalyticsMetricsFilter = long("adsAnalyticsMetricsFilter")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequest] ?: 0, row[adsAnalyticsMetricsFilter] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestAdsAnalyticsMetricsFilter.adsAnalyticsCreateAsyncRequest, entity.first)
            set(AdsAnalyticsCreateAsyncRequestAdsAnalyticsMetricsFilter.adsAnalyticsMetricsFilter, entity.second)
        }
    }

}

