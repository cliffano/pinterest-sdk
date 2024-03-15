/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
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
 * JSON object defining targeted audience users. Example rule formats per audience type:<br>CUSTOMER_LIST: { \"customer_list_id\": \"&lt;customer list ID&gt;\"}<br>ACTALIKE: { \"seed_id\": [\"&lt;audience ID&gt;\"], \"country\": \"US\", \"percentage\": \"10\" }<br>(Valid countries include: \"US\", \"CA\", and \"GB\". Percentage should be 1-10.<br>The targeted audience should be this % size across Pinterest.)<br>VISITOR: { \"visitor_source_id\": [\"&lt;conversion tag ID&gt;\"], \"retention_days\": \"180\", \"event_source\": {\"=\": [\"web\", \"mobile\"]}, \"ingestion_source\": {\"=\": [\"tag\"]}}<br>(Retention days should be 1-540. Retention applies to specific customers.)<br>ENGAGEMENT: {\"engagement_domain\": [\"www.entomi.com\"], \"engager_type\": 1}<br>For more details on engagement audiences, see <a href=\"https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\" target=\"_blank\">November 2021 changelog</a>.
 * @param country Valid countries include: \"US\", \"CA\", and \"GB\".
 * @param customerListId Customer list ID. For CUSTOMER_LIST `audience_type`.
 * @param engagementDomain The audience account's verified domain. **Required** for ENGAGEMENT `audience_type`.
 * @param engagementType Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set. 
 * @param event A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event.
 * @param eventData 
 * @param percentage Percentage should be 1-10. The targeted audience should be this % size across Pinterest.
 * @param pinId IDs of engaged organic pins. Optional for ENGAGEMENT `audience_type`. For example, \"pin_id:\": [\"34567\"]
 * @param prefill Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`.
 * @param retentionDays Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified.
 * @param seedId Audience ID(s). For ACTALIKE `audience_type`. 
 * @param url Optional for ENGAGEMENT or VISITOR `audience_type`. For ENGAGEMENT, it is the engaged pin's URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ =, !=, contains, not_contains].<br>Example 1:  \"url\": \"http://www.myonlinestore123.com/view_item/shoe\"<br>Example 2: \"url\": {\"contains\": \"/view_item/shoe\"}
 * @param visitorSourceId The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`.
 * @param eventSource Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: web, mobile, offline
 * @param ingestionSource Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: tag, mmp, file_upload, conversions_api
 * @param engagerType Optional for ENGAGEMENT. Engager type value should be 1-2.
 * @param campaignId Campaign ID for engagement audience filter.
 * @param adId Ad ID for engagement audience filter.
 * @param objectiveType Objective for engagement audience filter.
 * @param adAccountId Ad account ID.
 */
object AudienceRules : BaseTable<AudienceRule>("AudienceRule") {
    val country = text("country") /* null */ /* Valid countries include: \"US\", \"CA\", and \"GB\". */
    val customerListId = text("customer_list_id") /* null */ /* Customer list ID. For CUSTOMER_LIST `audience_type`. */
    val engagementType = text("engagement_type") /* null */ /* Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set.  */
    val event = text("event") /* null */ /* A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event. */
    val eventData = long("event_data") /* null */
    val percentage = int("percentage") /* null */ /* Percentage should be 1-10. The targeted audience should be this % size across Pinterest. */
    val prefill = boolean("prefill") /* null */ /* Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`. */
    val retentionDays = int("retention_days") /* null */ /* Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified. */
    val visitorSourceId = text("visitor_source_id") /* null */ /* The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`. */
    val eventSource = blob("event_source") /* null */ /* Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: web, mobile, offline */
    val ingestionSource = blob("ingestion_source") /* null */ /* Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: tag, mmp, file_upload, conversions_api */
    val engagerType = int("engager_type") /* null */ /* Optional for ENGAGEMENT. Engager type value should be 1-2. */
    val adAccountId = text("ad_account_id") /* null */ /* Ad account ID. */

    /**
     * Create an entity of type AudienceRule from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AudienceRule(
        country = row[country]  /* kotlin.String? */ /* Valid countries include: \"US\", \"CA\", and \"GB\". */,
        customerListId = row[customerListId]  /* kotlin.String? */ /* Customer list ID. For CUSTOMER_LIST `audience_type`. */,
        engagementDomain = emptyList() /* kotlin.Array<kotlin.String>? */ /* The audience account's verified domain. **Required** for ENGAGEMENT `audience_type`. */,
        engagementType = row[engagementType]  /* kotlin.String? */ /* Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set.  */,
        event = row[event]  /* kotlin.String? */ /* A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event. */,
        eventData = PinterestTagEventDatas.createEntity(row, withReferences) /* PinterestTagEventData? */,
        percentage = row[percentage]  /* kotlin.Int? */ /* Percentage should be 1-10. The targeted audience should be this % size across Pinterest. */,
        pinId = emptyList() /* kotlin.Array<kotlin.String>? */ /* IDs of engaged organic pins. Optional for ENGAGEMENT `audience_type`. For example, \"pin_id:\": [\"34567\"] */,
        prefill = row[prefill]  /* kotlin.Boolean? */ /* Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`. */,
        retentionDays = row[retentionDays]  /* kotlin.Int? */ /* Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified. */,
        seedId = emptyList() /* kotlin.Array<kotlin.String>? */ /* Audience ID(s). For ACTALIKE `audience_type`.  */,
        url = emptyList() /* kotlin.Array<kotlin.String>? */ /* Optional for ENGAGEMENT or VISITOR `audience_type`. For ENGAGEMENT, it is the engaged pin's URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ =, !=, contains, not_contains].<br>Example 1:  \"url\": \"http://www.myonlinestore123.com/view_item/shoe\"<br>Example 2: \"url\": {\"contains\": \"/view_item/shoe\"} */,
        visitorSourceId = row[visitorSourceId]  /* kotlin.String? */ /* The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`. */,
        eventSource = row[eventSource]  /* kotlin.Any? */ /* Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: web, mobile, offline */,
        ingestionSource = row[ingestionSource]  /* kotlin.Any? */ /* Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: tag, mmp, file_upload, conversions_api */,
        engagerType = row[engagerType]  /* kotlin.Int? */ /* Optional for ENGAGEMENT. Engager type value should be 1-2. */,
        campaignId = emptyList() /* kotlin.Array<kotlin.String>? */ /* Campaign ID for engagement audience filter. */,
        adId = emptyList() /* kotlin.Array<kotlin.String>? */ /* Ad ID for engagement audience filter. */,
        objectiveType = emptyList() /* kotlin.Array<ObjectiveType>? */ /* Objective for engagement audience filter. */,
        adAccountId = row[adAccountId]  /* kotlin.String? */ /* Ad account ID. */
    )

    /**
    * Assign all the columns from the entity of type AudienceRule to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AudienceRule()
    * database.update(AudienceRules, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AudienceRule) {
        this.apply {
            set(AudienceRules.country, entity.country)
            set(AudienceRules.customerListId, entity.customerListId)
            set(AudienceRules.engagementType, entity.engagementType)
            set(AudienceRules.event, entity.event)
            set(AudienceRules.eventData, entity.eventData)
            set(AudienceRules.percentage, entity.percentage)
            set(AudienceRules.prefill, entity.prefill)
            set(AudienceRules.retentionDays, entity.retentionDays)
            set(AudienceRules.visitorSourceId, entity.visitorSourceId)
            set(AudienceRules.eventSource, entity.eventSource)
            set(AudienceRules.ingestionSource, entity.ingestionSource)
            set(AudienceRules.engagerType, entity.engagerType)
            set(AudienceRules.adAccountId, entity.adAccountId)
        }
    }

}


object AudienceRuleEngagementDomain : BaseTable<Pair<kotlin.Long, kotlin.String>>("AudienceRuleEngagementDomain") {
    val audienceRule = long("audienceRule")
    val engagementDomain = text("engagementDomain")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[audienceRule] ?: 0, row[engagementDomain] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AudienceRuleEngagementDomain.audienceRule, entity.first)
            set(AudienceRuleEngagementDomain.engagementDomain, entity.second)
        }
    }

}

object AudienceRulePinId : BaseTable<Pair<kotlin.Long, kotlin.String>>("AudienceRulePinId") {
    val audienceRule = long("audienceRule")
    val pinId = text("pinId")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[audienceRule] ?: 0, row[pinId] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AudienceRulePinId.audienceRule, entity.first)
            set(AudienceRulePinId.pinId, entity.second)
        }
    }

}

object AudienceRuleSeedId : BaseTable<Pair<kotlin.Long, kotlin.String>>("AudienceRuleSeedId") {
    val audienceRule = long("audienceRule")
    val seedId = text("seedId")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[audienceRule] ?: 0, row[seedId] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AudienceRuleSeedId.audienceRule, entity.first)
            set(AudienceRuleSeedId.seedId, entity.second)
        }
    }

}

object AudienceRuleUrl : BaseTable<Pair<kotlin.Long, kotlin.String>>("AudienceRuleUrl") {
    val audienceRule = long("audienceRule")
    val url = text("url")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[audienceRule] ?: 0, row[url] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AudienceRuleUrl.audienceRule, entity.first)
            set(AudienceRuleUrl.url, entity.second)
        }
    }

}

object AudienceRuleCampaignId : BaseTable<Pair<kotlin.Long, kotlin.String>>("AudienceRuleCampaignId") {
    val audienceRule = long("audienceRule")
    val campaignId = text("campaignId")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[audienceRule] ?: 0, row[campaignId] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AudienceRuleCampaignId.audienceRule, entity.first)
            set(AudienceRuleCampaignId.campaignId, entity.second)
        }
    }

}

object AudienceRuleAdId : BaseTable<Pair<kotlin.Long, kotlin.String>>("AudienceRuleAdId") {
    val audienceRule = long("audienceRule")
    val adId = text("adId")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[audienceRule] ?: 0, row[adId] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(AudienceRuleAdId.audienceRule, entity.first)
            set(AudienceRuleAdId.adId, entity.second)
        }
    }

}

object AudienceRuleObjectiveType : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AudienceRuleObjectiveType") {
    val audienceRule = long("audienceRule")
    val objectiveType = long("objectiveType")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[audienceRule] ?: 0, row[objectiveType] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AudienceRuleObjectiveType.audienceRule, entity.first)
            set(AudienceRuleObjectiveType.objectiveType, entity.second)
        }
    }

}

