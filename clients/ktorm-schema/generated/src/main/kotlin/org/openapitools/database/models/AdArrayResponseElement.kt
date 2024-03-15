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
object AdArrayResponseElements : BaseTable<AdArrayResponseElement>("AdArrayResponseElement") {
    val data = long("data") /* null */
    val exceptions = long("exceptions") /* null */

    /**
     * Create an entity of type AdArrayResponseElement from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdArrayResponseElement(
        data = AdResponses.createEntity(row, withReferences) /* AdResponse? */,
        exceptions = Exceptions.createEntity(row, withReferences) /* Exception? */
    )

    /**
    * Assign all the columns from the entity of type AdArrayResponseElement to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdArrayResponseElement()
    * database.update(AdArrayResponseElements, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdArrayResponseElement) {
        this.apply {
            set(AdArrayResponseElements.data, entity.data)
            set(AdArrayResponseElements.exceptions, entity.exceptions)
        }
    }

}


