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
package org.openapitools.client.model

import java.time.OffsetDateTime
import org.openapitools.client.model.BatchOperationStatus._

  /**
   * Object describing the catalogs items batch
   */
case class CatalogsItemsBatch(
  /* Array with the catalogs items processing records part of the catalogs items batch */
  items: Option[Seq[ItemProcessingRecord]] = None,
  /* Id of the catalogs items batch */
  batchId: Option[String] = None,
  /* Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD */
  createdTime: Option[OffsetDateTime] = None,
  /* Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD */
  completedTime: Option[OffsetDateTime] = None,
  status: Option[BatchOperationStatus] = None
)

