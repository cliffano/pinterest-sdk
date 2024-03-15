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
 * @param adAccountId Ad account ID.
 * @param name Audience name.
 * @param rule 
 * @param description Audience description.
 * @param operationType 
 */
object AudienceUpdateRequests : BaseTable<AudienceUpdateRequest>("AudienceUpdateRequest") {
    val adAccountId = text("ad_account_id") /* null */ /* Ad account ID. */
    val name = text("name") /* null */ /* Audience name. */
    val rule = long("rule") /* null */
    val description = text("description") /* null */ /* Audience description. */
    val operationType = long("operation_type") /* null */

    /**
     * Create an entity of type AudienceUpdateRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AudienceUpdateRequest(
        adAccountId = row[adAccountId]  /* kotlin.String? */ /* Ad account ID. */,
        name = row[name]  /* kotlin.String? */ /* Audience name. */,
        rule = AudienceRules.createEntity(row, withReferences) /* AudienceRule? */,
        description = row[description]  /* kotlin.String? */ /* Audience description. */,
        operationType = AudienceUpdateOperationTypes.createEntity(row, withReferences) /* AudienceUpdateOperationType? */
    )

    /**
    * Assign all the columns from the entity of type AudienceUpdateRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AudienceUpdateRequest()
    * database.update(AudienceUpdateRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AudienceUpdateRequest) {
        this.apply {
            set(AudienceUpdateRequests.adAccountId, entity.adAccountId)
            set(AudienceUpdateRequests.name, entity.name)
            set(AudienceUpdateRequests.rule, entity.rule)
            set(AudienceUpdateRequests.description, entity.description)
            set(AudienceUpdateRequests.operationType, entity.operationType)
        }
    }

}


