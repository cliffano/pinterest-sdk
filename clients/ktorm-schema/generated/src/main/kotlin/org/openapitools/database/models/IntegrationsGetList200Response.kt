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
 * @param items 
 * @param bookmark 
 */
object IntegrationsGetList200Responses : BaseTable<IntegrationsGetList200Response>("integrations_get_list_200_response") {
    val bookmark = text("bookmark") /* null */

    /**
     * Create an entity of type IntegrationsGetList200Response from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = IntegrationsGetList200Response(
        items = emptyList() /* kotlin.Array<IntegrationRecord> */,
        bookmark = row[bookmark]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type IntegrationsGetList200Response to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = IntegrationsGetList200Response()
    * database.update(IntegrationsGetList200Responses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: IntegrationsGetList200Response) {
        this.apply {
            set(IntegrationsGetList200Responses.bookmark, entity.bookmark)
        }
    }

}


object IntegrationsGetList200ResponseIntegrationRecord : BaseTable<Pair<kotlin.Long, kotlin.Long>>("IntegrationsGetList200ResponseIntegrationRecord") {
    val integrationsGetList200Response = long("integrationsGetList200Response")
    val integrationRecord = long("integrationRecord")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[integrationsGetList200Response] ?: 0, row[integrationRecord] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(IntegrationsGetList200ResponseIntegrationRecord.integrationsGetList200Response, entity.first)
            set(IntegrationsGetList200ResponseIntegrationRecord.integrationRecord, entity.second)
        }
    }

}

