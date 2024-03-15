/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class AudienceRule(
  /* Valid countries include: \"US\", \"CA\", and \"GB\". */
  country: Option[String],

  /* Customer list ID. For CUSTOMER_LIST `audience_type`. */
  customerListId: Option[String],

  /* The audience account's verified domain. **Required** for ENGAGEMENT `audience_type`. */
  engagementDomain: Option[List[String]],

  /* Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set.  */
  engagementType: Option[String],

  /* A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event. */
  event: Option[String],

  eventData: Option[PinterestTagEventData],

  /* Percentage should be 1-10. The targeted audience should be this % size across Pinterest. */
  percentage: Option[Int],

  /* IDs of engaged organic pins. Optional for ENGAGEMENT `audience_type`. For example, \"pin_id:\": [\"34567\"] */
  pinId: Option[List[String]],

  /* Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`. */
  prefill: Option[Boolean],

  /* Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified. */
  retentionDays: Option[Int],

  /* Audience ID(s). For ACTALIKE `audience_type`.  */
  seedId: Option[List[String]],

  /* Optional for ENGAGEMENT or VISITOR `audience_type`. For ENGAGEMENT, it is the engaged pin's URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ =, !=, contains, not_contains].<br>Example 1:  \"url\": \"http://www.myonlinestore123.com/view_item/shoe\"<br>Example 2: \"url\": {\"contains\": \"/view_item/shoe\"} */
  url: Option[List[String]],

  /* The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`. */
  visitorSourceId: Option[String],

  /* Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: web, mobile, offline */
  eventSource: Option[Any],

  /* Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: tag, mmp, file_upload, conversions_api */
  ingestionSource: Option[Any],

  /* Optional for ENGAGEMENT. Engager type value should be 1-2. */
  engagerType: Option[Int],

  /* Campaign ID for engagement audience filter. */
  campaignId: Option[List[String]],

  /* Ad ID for engagement audience filter. */
  adId: Option[List[String]],

  /* Objective for engagement audience filter. */
  objectiveType: Option[List[ObjectiveType]],

  /* Ad account ID. */
  adAccountId: Option[String]

 )
