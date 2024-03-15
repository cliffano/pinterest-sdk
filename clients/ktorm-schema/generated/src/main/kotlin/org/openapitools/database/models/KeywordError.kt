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
 * @param errorMessages 
 */
object KeywordErrors : BaseTable<KeywordError>("KeywordError") {
    val data = long("data") /* null */

    /**
     * Create an entity of type KeywordError from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = KeywordError(
        data = Keywords.createEntity(row, withReferences) /* Keyword? */,
        errorMessages = emptyList() /* kotlin.Array<kotlin.String>? */
    )

    /**
    * Assign all the columns from the entity of type KeywordError to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = KeywordError()
    * database.update(KeywordErrors, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: KeywordError) {
        this.apply {
            set(KeywordErrors.data, entity.data)
        }
    }

}


object KeywordErrorErrorMessages : BaseTable<Pair<kotlin.Long, kotlin.String>>("KeywordErrorErrorMessages") {
    val keywordError = long("keywordError")
    val errorMessages = text("errorMessages")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[keywordError] ?: 0, row[errorMessages] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(KeywordErrorErrorMessages.keywordError, entity.first)
            set(KeywordErrorErrorMessages.errorMessages, entity.second)
        }
    }

}

