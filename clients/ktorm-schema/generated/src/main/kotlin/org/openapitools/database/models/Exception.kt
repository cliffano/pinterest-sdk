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
 * @param code Exception error code.
 * @param message Exception message.
 */
object Exceptions : BaseTable<Exception>("Exception") {
    val code = int("code") /* null */ /* Exception error code. */
    val message = text("message") /* null */ /* Exception message. */

    /**
     * Create an entity of type Exception from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = Exception(
        code = row[code]  /* kotlin.Int? */ /* Exception error code. */,
        message = row[message]  /* kotlin.String? */ /* Exception message. */
    )

    /**
    * Assign all the columns from the entity of type Exception to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = Exception()
    * database.update(Exceptions, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: Exception) {
        this.apply {
            set(Exceptions.code, entity.code)
            set(Exceptions.message, entity.message)
        }
    }

}


