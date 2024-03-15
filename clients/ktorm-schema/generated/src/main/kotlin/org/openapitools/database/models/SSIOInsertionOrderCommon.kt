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
 * @param startDate Starting date of time period. Format: YYYY-MM-DD
 * @param endDate End date of time period. Format: YYYY-MM-DD
 * @param poNumber The po number
 * @param budgetAmount If Budget order line, the budget amount.
 * @param billingContactFirstname The billing contact first name
 * @param billingContactLastname The billing contact last name
 * @param billingContactEmail The billing contact email
 * @param mediaContactFirstname The media contact first name
 * @param mediaContactLastname The media contact last name
 * @param mediaContactEmail The media contact email
 * @param agencyLink URL link for agency
 * @param userEmail The email of user submitting the insertion order
 */
object SSIOInsertionOrderCommons : BaseTable<SSIOInsertionOrderCommon>("SSIOInsertionOrderCommon") {
    val startDate = text("start_date") /* null */ /* Starting date of time period. Format: YYYY-MM-DD */
    val endDate = text("end_date") /* null */ /* End date of time period. Format: YYYY-MM-DD */
    val poNumber = text("po_number") /* null */ /* The po number */
    val budgetAmount = decimal("budget_amount") /* null */ /* If Budget order line, the budget amount. */
    val billingContactFirstname = text("billing_contact_firstname") /* null */ /* The billing contact first name */
    val billingContactLastname = text("billing_contact_lastname") /* null */ /* The billing contact last name */
    val billingContactEmail = text("billing_contact_email") /* null */ /* The billing contact email */
    val mediaContactFirstname = text("media_contact_firstname") /* null */ /* The media contact first name */
    val mediaContactLastname = text("media_contact_lastname") /* null */ /* The media contact last name */
    val mediaContactEmail = text("media_contact_email") /* null */ /* The media contact email */
    val agencyLink = text("agency_link") /* null */ /* URL link for agency */
    val userEmail = text("user_email") /* null */ /* The email of user submitting the insertion order */

    /**
     * Create an entity of type SSIOInsertionOrderCommon from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = SSIOInsertionOrderCommon(
        startDate = row[startDate]  /* kotlin.String? */ /* Starting date of time period. Format: YYYY-MM-DD */,
        endDate = row[endDate]  /* kotlin.String? */ /* End date of time period. Format: YYYY-MM-DD */,
        poNumber = row[poNumber]  /* kotlin.String? */ /* The po number */,
        budgetAmount = row[budgetAmount]  /* java.math.BigDecimal? */ /* If Budget order line, the budget amount. */,
        billingContactFirstname = row[billingContactFirstname]  /* kotlin.String? */ /* The billing contact first name */,
        billingContactLastname = row[billingContactLastname]  /* kotlin.String? */ /* The billing contact last name */,
        billingContactEmail = row[billingContactEmail]  /* kotlin.String? */ /* The billing contact email */,
        mediaContactFirstname = row[mediaContactFirstname]  /* kotlin.String? */ /* The media contact first name */,
        mediaContactLastname = row[mediaContactLastname]  /* kotlin.String? */ /* The media contact last name */,
        mediaContactEmail = row[mediaContactEmail]  /* kotlin.String? */ /* The media contact email */,
        agencyLink = row[agencyLink]  /* kotlin.String? */ /* URL link for agency */,
        userEmail = row[userEmail]  /* kotlin.String? */ /* The email of user submitting the insertion order */
    )

    /**
    * Assign all the columns from the entity of type SSIOInsertionOrderCommon to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = SSIOInsertionOrderCommon()
    * database.update(SSIOInsertionOrderCommons, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: SSIOInsertionOrderCommon) {
        this.apply {
            set(SSIOInsertionOrderCommons.startDate, entity.startDate)
            set(SSIOInsertionOrderCommons.endDate, entity.endDate)
            set(SSIOInsertionOrderCommons.poNumber, entity.poNumber)
            set(SSIOInsertionOrderCommons.budgetAmount, entity.budgetAmount)
            set(SSIOInsertionOrderCommons.billingContactFirstname, entity.billingContactFirstname)
            set(SSIOInsertionOrderCommons.billingContactLastname, entity.billingContactLastname)
            set(SSIOInsertionOrderCommons.billingContactEmail, entity.billingContactEmail)
            set(SSIOInsertionOrderCommons.mediaContactFirstname, entity.mediaContactFirstname)
            set(SSIOInsertionOrderCommons.mediaContactLastname, entity.mediaContactLastname)
            set(SSIOInsertionOrderCommons.mediaContactEmail, entity.mediaContactEmail)
            set(SSIOInsertionOrderCommons.agencyLink, entity.agencyLink)
            set(SSIOInsertionOrderCommons.userEmail, entity.userEmail)
        }
    }

}

