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
 * @param name Display name
 * @param id Salesforce id for PMP
 */
object SSIOAccountPMPNames : BaseTable<SSIOAccountPMPName>("SSIOAccountPMPName") {
    val name = text("name") /* null */ /* Display name */
    val id = text("id") /* null */ /* Salesforce id for PMP */

    /**
     * Create an entity of type SSIOAccountPMPName from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = SSIOAccountPMPName(
        name = row[name]  /* kotlin.String? */ /* Display name */,
        id = row[id]  /* kotlin.String? */ /* Salesforce id for PMP */
    )

    /**
    * Assign all the columns from the entity of type SSIOAccountPMPName to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = SSIOAccountPMPName()
    * database.update(SSIOAccountPMPNames, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: SSIOAccountPMPName) {
        this.apply {
            set(SSIOAccountPMPNames.name, entity.name)
            set(SSIOAccountPMPNames.id, entity.id)
        }
    }

}


