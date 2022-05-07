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
*/
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


/**
 * 
 * @param columns Metric and entity columns
 * @param level Level of the report
 * @param reportFormat Specification for formatting report data
 */
object AdsAnalyticsCreateAsyncRequestAllOf1s : BaseTable<AdsAnalyticsCreateAsyncRequestAllOf1>("AdsAnalyticsCreateAsyncRequest_allOf_1") {
    val level = long("level") /* Level of the report */
    val reportFormat = long("report_format") /* null */ /* Specification for formatting report data */

    /**
     * Create an entity of type AdsAnalyticsCreateAsyncRequestAllOf1 from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdsAnalyticsCreateAsyncRequestAllOf1(
        columns = emptyList() /* kotlin.Array<ReportingColumnAsync> */ /* Metric and entity columns */,
        level = MetricsReportingLevels.createEntity(row, withReferences) /* MetricsReportingLevel */ /* Level of the report */,
        reportFormat = DataOutputFormats.createEntity(row, withReferences) /* DataOutputFormat? */ /* Specification for formatting report data */
    )

    /**
    * Assign all the columns from the entity of type AdsAnalyticsCreateAsyncRequestAllOf1 to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdsAnalyticsCreateAsyncRequestAllOf1()
    * database.update(AdsAnalyticsCreateAsyncRequestAllOf1s, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdsAnalyticsCreateAsyncRequestAllOf1) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestAllOf1s.level, entity.level)
            set(AdsAnalyticsCreateAsyncRequestAllOf1s.reportFormat, entity.reportFormat)
        }
    }

}


object AdsAnalyticsCreateAsyncRequestAllOf1ReportingColumnAsync : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdsAnalyticsCreateAsyncRequestAllOf1ReportingColumnAsync") {
    val adsAnalyticsCreateAsyncRequestAllOf1 = long("adsAnalyticsCreateAsyncRequestAllOf1")
    val reportingColumnAsync = long("reportingColumnAsync")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adsAnalyticsCreateAsyncRequestAllOf1] ?: 0, row[reportingColumnAsync] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdsAnalyticsCreateAsyncRequestAllOf1ReportingColumnAsync.adsAnalyticsCreateAsyncRequestAllOf1, entity.first)
            set(AdsAnalyticsCreateAsyncRequestAllOf1ReportingColumnAsync.reportingColumnAsync, entity.second)
        }
    }

}

