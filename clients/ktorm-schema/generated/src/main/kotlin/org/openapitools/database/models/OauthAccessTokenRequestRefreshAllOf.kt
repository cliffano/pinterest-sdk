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
 * @param refreshToken 
 * @param scope 
 */
object OauthAccessTokenRequestRefreshAllOfs : BaseTable<OauthAccessTokenRequestRefreshAllOf>("OauthAccessTokenRequestRefresh_allOf") {
    val refreshToken = text("refresh_token")
    val scope = text("scope") /* null */

    /**
     * Create an entity of type OauthAccessTokenRequestRefreshAllOf from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = OauthAccessTokenRequestRefreshAllOf(
        refreshToken = row[refreshToken] ?: "" /* kotlin.String */,
        scope = row[scope]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type OauthAccessTokenRequestRefreshAllOf to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = OauthAccessTokenRequestRefreshAllOf()
    * database.update(OauthAccessTokenRequestRefreshAllOfs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: OauthAccessTokenRequestRefreshAllOf) {
        this.apply {
            set(OauthAccessTokenRequestRefreshAllOfs.refreshToken, entity.refreshToken)
            set(OauthAccessTokenRequestRefreshAllOfs.scope, entity.scope)
        }
    }

}


