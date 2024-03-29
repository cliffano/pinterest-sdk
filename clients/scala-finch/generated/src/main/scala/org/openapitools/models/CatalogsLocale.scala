package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._

/**
 * 
 */
case class CatalogsLocale()

object CatalogsLocale {
    /**
     * Creates the codec for converting CatalogsLocale from and to JSON.
     */
    implicit val decoder: Decoder[CatalogsLocale] = deriveDecoder
    implicit val encoder: ObjectEncoder[CatalogsLocale] = deriveEncoder
}
