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
 * @param dataStatus Metrics availablity, e.g., \"READY\".
 * @param date Metrics date (UTC): YYYY-MM-DD.
 * @param metrics The metric name and daily value for each requested metric
 */
object AnalyticsMetricsResponseDailyMetricss : BaseTable<AnalyticsMetricsResponseDailyMetrics>("AnalyticsMetricsResponse_daily_metrics") {
    val dataStatus = text("data_status").transform({ AnalyticsMetricsResponseDailyMetrics.DataStatus.valueOf(it ?: "PROCESSING") }, { it.value }) /* null */ /* Metrics availablity, e.g., \"READY\". */

    val date = text("date") /* null */ /* Metrics date (UTC): YYYY-MM-DD. */
    val metrics = blob("metrics") /* null */ /* The metric name and daily value for each requested metric */

    /**
     * Create an entity of type AnalyticsMetricsResponseDailyMetrics from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AnalyticsMetricsResponseDailyMetrics(
        dataStatus = row[dataStatus]  /* kotlin.String? */ /* Metrics availablity, e.g., \"READY\". */,
        date = row[date]  /* kotlin.String? */ /* Metrics date (UTC): YYYY-MM-DD. */,
        metrics = row[metrics]  /* kotlin.collections.Map<kotlin.String, java.math.BigDecimal>? */ /* The metric name and daily value for each requested metric */
    )

    /**
    * Assign all the columns from the entity of type AnalyticsMetricsResponseDailyMetrics to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AnalyticsMetricsResponseDailyMetrics()
    * database.update(AnalyticsMetricsResponseDailyMetricss, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AnalyticsMetricsResponseDailyMetrics) {
        this.apply {
            set(AnalyticsMetricsResponseDailyMetricss.dataStatus, entity.dataStatus)
            set(AnalyticsMetricsResponseDailyMetricss.date, entity.date)
            set(AnalyticsMetricsResponseDailyMetricss.metrics, entity.metrics)
        }
    }

}


