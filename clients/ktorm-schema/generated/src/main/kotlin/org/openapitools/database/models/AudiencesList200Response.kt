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
object AudiencesList200Responses : BaseTable<AudiencesList200Response>("audiences_list_200_response") {
    val bookmark = text("bookmark") /* null */

    /**
     * Create an entity of type AudiencesList200Response from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AudiencesList200Response(
        items = emptyList() /* kotlin.Array<Audience> */,
        bookmark = row[bookmark]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type AudiencesList200Response to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AudiencesList200Response()
    * database.update(AudiencesList200Responses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AudiencesList200Response) {
        this.apply {
            set(AudiencesList200Responses.bookmark, entity.bookmark)
        }
    }

}


object AudiencesList200ResponseAudience : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AudiencesList200ResponseAudience") {
    val audiencesList200Response = long("audiencesList200Response")
    val audience = long("audience")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[audiencesList200Response] ?: 0, row[audience] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AudiencesList200ResponseAudience.audiencesList200Response, entity.first)
            set(AudiencesList200ResponseAudience.audience, entity.second)
        }
    }

}
