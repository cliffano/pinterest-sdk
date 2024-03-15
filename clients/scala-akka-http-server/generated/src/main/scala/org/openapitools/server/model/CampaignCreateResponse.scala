package org.openapitools.server.model


/**
 * @param items  for example: ''null''
*/
final case class CampaignCreateResponse (
  items: Option[Seq[CampaignCreateResponseItem]] = None
)

