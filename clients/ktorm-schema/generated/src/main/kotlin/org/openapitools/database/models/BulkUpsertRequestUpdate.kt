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
 * Request for creation of entities in bulk.
 * @param campaigns 
 * @param adGroups 
 * @param ads 
 * @param productGroups 
 * @param keywords 
 */
object BulkUpsertRequestUpdates : BaseTable<BulkUpsertRequestUpdate>("BulkUpsertRequestUpdate") {

    /**
     * Create an entity of type BulkUpsertRequestUpdate from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = BulkUpsertRequestUpdate(
        campaigns = emptyList() /* kotlin.Array<CampaignUpdateRequest>? */,
        adGroups = emptyList() /* kotlin.Array<AdGroupUpdateRequest>? */,
        ads = emptyList() /* kotlin.Array<AdUpdateRequest>? */,
        productGroups = emptyList() /* kotlin.Array<ProductGroupPromotionUpdateRequest>? */,
        keywords = emptyList() /* kotlin.Array<KeywordUpdate>? */
    )

    /**
    * Assign all the columns from the entity of type BulkUpsertRequestUpdate to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = BulkUpsertRequestUpdate()
    * database.update(BulkUpsertRequestUpdates, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: BulkUpsertRequestUpdate) {
        this.apply {
        }
    }

}


object BulkUpsertRequestUpdateCampaignUpdateRequest : BaseTable<Pair<kotlin.Long, kotlin.Long>>("BulkUpsertRequestUpdateCampaignUpdateRequest") {
    val bulkUpsertRequestUpdate = long("bulkUpsertRequestUpdate")
    val campaignUpdateRequest = long("campaignUpdateRequest")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[bulkUpsertRequestUpdate] ?: 0, row[campaignUpdateRequest] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(BulkUpsertRequestUpdateCampaignUpdateRequest.bulkUpsertRequestUpdate, entity.first)
            set(BulkUpsertRequestUpdateCampaignUpdateRequest.campaignUpdateRequest, entity.second)
        }
    }

}

object BulkUpsertRequestUpdateAdGroupUpdateRequest : BaseTable<Pair<kotlin.Long, kotlin.Long>>("BulkUpsertRequestUpdateAdGroupUpdateRequest") {
    val bulkUpsertRequestUpdate = long("bulkUpsertRequestUpdate")
    val adGroupUpdateRequest = long("adGroupUpdateRequest")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[bulkUpsertRequestUpdate] ?: 0, row[adGroupUpdateRequest] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(BulkUpsertRequestUpdateAdGroupUpdateRequest.bulkUpsertRequestUpdate, entity.first)
            set(BulkUpsertRequestUpdateAdGroupUpdateRequest.adGroupUpdateRequest, entity.second)
        }
    }

}

object BulkUpsertRequestUpdateAdUpdateRequest : BaseTable<Pair<kotlin.Long, kotlin.Long>>("BulkUpsertRequestUpdateAdUpdateRequest") {
    val bulkUpsertRequestUpdate = long("bulkUpsertRequestUpdate")
    val adUpdateRequest = long("adUpdateRequest")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[bulkUpsertRequestUpdate] ?: 0, row[adUpdateRequest] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(BulkUpsertRequestUpdateAdUpdateRequest.bulkUpsertRequestUpdate, entity.first)
            set(BulkUpsertRequestUpdateAdUpdateRequest.adUpdateRequest, entity.second)
        }
    }

}

object BulkUpsertRequestUpdateProductGroupPromotionUpdateRequest : BaseTable<Pair<kotlin.Long, kotlin.Long>>("BulkUpsertRequestUpdateProductGroupPromotionUpdateRequest") {
    val bulkUpsertRequestUpdate = long("bulkUpsertRequestUpdate")
    val productGroupPromotionUpdateRequest = long("productGroupPromotionUpdateRequest")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[bulkUpsertRequestUpdate] ?: 0, row[productGroupPromotionUpdateRequest] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(BulkUpsertRequestUpdateProductGroupPromotionUpdateRequest.bulkUpsertRequestUpdate, entity.first)
            set(BulkUpsertRequestUpdateProductGroupPromotionUpdateRequest.productGroupPromotionUpdateRequest, entity.second)
        }
    }

}

object BulkUpsertRequestUpdateKeywordUpdate : BaseTable<Pair<kotlin.Long, kotlin.Long>>("BulkUpsertRequestUpdateKeywordUpdate") {
    val bulkUpsertRequestUpdate = long("bulkUpsertRequestUpdate")
    val keywordUpdate = long("keywordUpdate")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[bulkUpsertRequestUpdate] ?: 0, row[keywordUpdate] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(BulkUpsertRequestUpdateKeywordUpdate.bulkUpsertRequestUpdate, entity.first)
            set(BulkUpsertRequestUpdateKeywordUpdate.keywordUpdate, entity.second)
        }
    }

}
