package org.openapitools.server.model

import java.time.OffsetDateTime

/**
 * Object describing the catalogs items batch
 *
 * @param items Array with the catalogs items processing records part of the catalogs items batch for example: ''null''
 * @param batchId Id of the catalogs items batch for example: ''595953100599279259-66753b9bb65c46c49bd8503b27fecf9e''
 * @param createdTime Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD for example: ''2020-01-01T20:10:40Z''
 * @param completedTime Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD for example: ''2022-03-10T15:37:10Z''
 * @param status  for example: ''null''
*/
final case class CatalogsItemsBatch (
  items: Option[Seq[ItemProcessingRecord]],
  batchId: Option[String],
  createdTime: Option[OffsetDateTime],
  completedTime: Option[OffsetDateTime],
  status: Option[BatchOperationStatus]
)

