/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
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
 * @param id Campaign ID.
 */
object CampaignResponseAllOfs : BaseTable<CampaignResponseAllOf>("CampaignResponse_allOf") {
    val id = text("id") /* Campaign ID. */

    /**
     * Create an entity of type CampaignResponseAllOf from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CampaignResponseAllOf(
        id = row[id] ?: "" /* kotlin.String */ /* Campaign ID. */
    )

    /**
    * Assign all the columns from the entity of type CampaignResponseAllOf to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CampaignResponseAllOf()
    * database.update(CampaignResponseAllOfs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CampaignResponseAllOf) {
        this.apply {
            set(CampaignResponseAllOfs.id, entity.id)
        }
    }

}


