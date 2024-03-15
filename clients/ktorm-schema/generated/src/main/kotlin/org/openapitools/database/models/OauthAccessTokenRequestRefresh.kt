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
 * A request to exchange a refresh token for a new access token.
 * @param grantType 
 * @param refreshToken 
 * @param scope 
 * @param refreshOn Setting this field to <code>true</code> will add a new refresh token to your 200 response, as well as the refresh_token_expires_in and refresh_token_expires_at fields. To see the structure of this payload, set the 200 response_type to \"everlasting_refresh\".
 */
object OauthAccessTokenRequestRefreshs : BaseTable<OauthAccessTokenRequestRefresh>("OauthAccessTokenRequestRefresh") {
    val grantType = text("grant_type").transform({ OauthAccessTokenRequestRefresh.GrantType.valueOf(it) }, { it.value })
    val refreshToken = text("refresh_token")
    val scope = text("scope") /* null */
    val refreshOn = boolean("refresh_on") /* null */ /* Setting this field to <code>true</code> will add a new refresh token to your 200 response, as well as the refresh_token_expires_in and refresh_token_expires_at fields. To see the structure of this payload, set the 200 response_type to \"everlasting_refresh\". */

    /**
     * Create an entity of type OauthAccessTokenRequestRefresh from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = OauthAccessTokenRequestRefresh(
        grantType = row[grantType] ?: OauthAccessTokenRequestRefresh.GrantType.valueOf("") /* kotlin.String */,
        refreshToken = row[refreshToken] ?: "" /* kotlin.String */,
        scope = row[scope]  /* kotlin.String? */,
        refreshOn = row[refreshOn]  /* kotlin.Boolean? */ /* Setting this field to <code>true</code> will add a new refresh token to your 200 response, as well as the refresh_token_expires_in and refresh_token_expires_at fields. To see the structure of this payload, set the 200 response_type to \"everlasting_refresh\". */
    )

    /**
    * Assign all the columns from the entity of type OauthAccessTokenRequestRefresh to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = OauthAccessTokenRequestRefresh()
    * database.update(OauthAccessTokenRequestRefreshs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: OauthAccessTokenRequestRefresh) {
        this.apply {
            set(OauthAccessTokenRequestRefreshs.grantType, entity.grantType)
            set(OauthAccessTokenRequestRefreshs.refreshToken, entity.refreshToken)
            set(OauthAccessTokenRequestRefreshs.scope, entity.scope)
            set(OauthAccessTokenRequestRefreshs.refreshOn, entity.refreshOn)
        }
    }

}

