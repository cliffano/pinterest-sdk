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
 * ID of the bulk request.
 * @param requestId 
 */
object BulkUpsertResponses : BaseTable<BulkUpsertResponse>("BulkUpsertResponse") {
    val requestId = text("request_id") /* null */

    /**
     * Create an entity of type BulkUpsertResponse from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = BulkUpsertResponse(
        requestId = row[requestId]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type BulkUpsertResponse to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = BulkUpsertResponse()
    * database.update(BulkUpsertResponses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: BulkUpsertResponse) {
        this.apply {
            set(BulkUpsertResponses.requestId, entity.requestId)
        }
    }

}


