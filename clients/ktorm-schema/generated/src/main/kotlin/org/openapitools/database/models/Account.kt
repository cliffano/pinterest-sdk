/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
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
 * @param accountType Type of account
 * @param profileImage 
 * @param websiteUrl 
 * @param username 
 */
object Accounts : BaseTable<Account>("Account") {
    val accountType = text("account_type").transform({ Account.AccountType.valueOf(it ?: "PINNER") }, { it.value }) /* null */ /* Type of account */

    val profileImage = text("profile_image") /* null */
    val websiteUrl = text("website_url") /* null */
    val username = text("username") /* null */

    /**
     * Create an entity of type Account from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = Account(
        accountType = row[accountType]  /* kotlin.String? */ /* Type of account */,
        profileImage = row[profileImage]  /* kotlin.String? */,
        websiteUrl = row[websiteUrl]  /* kotlin.String? */,
        username = row[username]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type Account to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = Account()
    * database.update(Accounts, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: Account) {
        this.apply {
            set(Accounts.accountType, entity.accountType)
            set(Accounts.profileImage, entity.profileImage)
            set(Accounts.websiteUrl, entity.websiteUrl)
            set(Accounts.username, entity.username)
        }
    }

}


