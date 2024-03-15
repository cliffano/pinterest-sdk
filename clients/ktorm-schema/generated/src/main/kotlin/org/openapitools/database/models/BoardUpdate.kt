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
 * Board fields for updates
 * @param name 
 * @param description 
 * @param privacy 
 */
object BoardUpdates : BaseTable<BoardUpdate>("BoardUpdate") {
    val name = text("name") /* null */
    val description = text("description") /* null */
    val privacy = text("privacy").transform({ BoardUpdate.Privacy.valueOf(it ?: "PUBLIC") }, { it.value }) /* null */


    /**
     * Create an entity of type BoardUpdate from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = BoardUpdate(
        name = row[name]  /* kotlin.String? */,
        description = row[description]  /* kotlin.String? */,
        privacy = row[privacy]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type BoardUpdate to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = BoardUpdate()
    * database.update(BoardUpdates, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: BoardUpdate) {
        this.apply {
            set(BoardUpdates.name, entity.name)
            set(BoardUpdates.description, entity.description)
            set(BoardUpdates.privacy, entity.privacy)
        }
    }

}


