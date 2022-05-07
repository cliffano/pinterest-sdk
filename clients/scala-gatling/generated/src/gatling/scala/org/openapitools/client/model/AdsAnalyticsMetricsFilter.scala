
package org.openapitools.client.model


case class AdsAnalyticsMetricsFilter (
    _field: Option[AdsAnalyticsFilterColumn],
    _operator: Option[AdsAnalyticsFilterOperator],
    /* List of values for filtering */
    _values: Option[List[Number]]
)
object AdsAnalyticsMetricsFilter {
    def toStringBody(var_field: Object, var_operator: Object, var_values: Object) =
        s"""
        | {
        | "field":$var_field,"operator":$var_operator,"values":$var_values
        | }
        """.stripMargin
}
