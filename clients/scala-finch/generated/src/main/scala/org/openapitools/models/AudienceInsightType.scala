package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._

/**
 * 
 */
case class AudienceInsightType()

object AudienceInsightType {
    /**
     * Creates the codec for converting AudienceInsightType from and to JSON.
     */
    implicit val decoder: Decoder[AudienceInsightType] = deriveDecoder
    implicit val encoder: ObjectEncoder[AudienceInsightType] = deriveEncoder
}
