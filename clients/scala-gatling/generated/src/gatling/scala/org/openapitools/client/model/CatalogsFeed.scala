
package org.openapitools.client.model

import java.time.OffsetDateTime

case class CatalogsFeed (
    _createdAt: Option[OffsetDateTime],
    _id: Option[String],
    _updatedAt: Option[OffsetDateTime],
    _defaultCountry: Country,
    _defaultAvailability: ProductAvailabilityType,
    _defaultCurrency: NullableCurrency,
    /* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. */
    _name: String,
    _format: CatalogsFormat,
    /* The locale used within a feed for product descriptions. */
    _defaultLocale: String,
    _credentials: CatalogsFeedCredentials,
    /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
    _location: String,
    _preferredProcessingSchedule: CatalogsFeedProcessingSchedule,
    _status: CatalogsStatus
)
object CatalogsFeed {
    def toStringBody(var_createdAt: Object, var_id: Object, var_updatedAt: Object, var_defaultCountry: Object, var_defaultAvailability: Object, var_defaultCurrency: Object, var_name: Object, var_format: Object, var_defaultLocale: Object, var_credentials: Object, var_location: Object, var_preferredProcessingSchedule: Object, var_status: Object) =
        s"""
        | {
        | "createdAt":$var_createdAt,"id":$var_id,"updatedAt":$var_updatedAt,"defaultCountry":$var_defaultCountry,"defaultAvailability":$var_defaultAvailability,"defaultCurrency":$var_defaultCurrency,"name":$var_name,"format":$var_format,"defaultLocale":$var_defaultLocale,"credentials":$var_credentials,"location":$var_location,"preferredProcessingSchedule":$var_preferredProcessingSchedule,"status":$var_status
        | }
        """.stripMargin
}
