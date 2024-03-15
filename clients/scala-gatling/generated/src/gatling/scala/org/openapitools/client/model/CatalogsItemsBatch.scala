
package org.openapitools.client.model

import java.time.OffsetDateTime

case class CatalogsItemsBatch (
    _catalogType: CatalogsType,
    /* Id of the catalogs items batch */
    _batchId: Option[String],
    /* Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD */
    _createdTime: Option[OffsetDateTime],
    /* Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD */
    _completedTime: Option[OffsetDateTime],
    _status: Option[BatchOperationStatus],
    /* Array with the catalogs items processing records part of the catalogs items batch */
    _items: Option[List[HotelProcessingRecord]]
)
object CatalogsItemsBatch {
    def toStringBody(var_catalogType: Object, var_batchId: Object, var_createdTime: Object, var_completedTime: Object, var_status: Object, var_items: Object) =
        s"""
        | {
        | "catalogType":$var_catalogType,"batchId":$var_batchId,"createdTime":$var_createdTime,"completedTime":$var_completedTime,"status":$var_status,"items":$var_items
        | }
        """.stripMargin
}
