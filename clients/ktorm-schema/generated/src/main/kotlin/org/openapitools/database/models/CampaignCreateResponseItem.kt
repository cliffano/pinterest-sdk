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
 * 
 * @param data 
 * @param exceptions 
 */
object CampaignCreateResponseItems : BaseTable<CampaignCreateResponseItem>("CampaignCreateResponseItem") {
    val data = long("data") /* null */

    /**
     * Create an entity of type CampaignCreateResponseItem from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CampaignCreateResponseItem(
        data = CampaignCreateResponseDatas.createEntity(row, withReferences) /* CampaignCreateResponseData? */,
        exceptions = emptyList() /* kotlin.Array<Exception>? */
    )

    /**
    * Assign all the columns from the entity of type CampaignCreateResponseItem to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CampaignCreateResponseItem()
    * database.update(CampaignCreateResponseItems, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CampaignCreateResponseItem) {
        this.apply {
            set(CampaignCreateResponseItems.data, entity.data)
        }
    }

}


object CampaignCreateResponseItemException : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CampaignCreateResponseItemException") {
    val campaignCreateResponseItem = long("campaignCreateResponseItem")
    val exception = long("exception")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[campaignCreateResponseItem] ?: 0, row[exception] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CampaignCreateResponseItemException.campaignCreateResponseItem, entity.first)
            set(CampaignCreateResponseItemException.exception, entity.second)
        }
    }

}

