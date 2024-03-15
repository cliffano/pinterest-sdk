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
 * The result, and link out, based on the user’s choice.
 * @param organicPinId 
 * @param androidDeepLink 
 * @param iosDeepLink 
 * @param destinationUrl 
 * @param resultId 
 */
object QuizPinResults : BaseTable<QuizPinResult>("QuizPinResult") {
    val organicPinId = text("organic_pin_id") /* null */
    val androidDeepLink = text("android_deep_link") /* null */
    val iosDeepLink = text("ios_deep_link") /* null */
    val destinationUrl = text("destination_url") /* null */
    val resultId = decimal("result_id") /* null */

    /**
     * Create an entity of type QuizPinResult from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = QuizPinResult(
        organicPinId = row[organicPinId]  /* kotlin.String? */,
        androidDeepLink = row[androidDeepLink]  /* kotlin.String? */,
        iosDeepLink = row[iosDeepLink]  /* kotlin.String? */,
        destinationUrl = row[destinationUrl]  /* kotlin.String? */,
        resultId = row[resultId]  /* java.math.BigDecimal? */
    )

    /**
    * Assign all the columns from the entity of type QuizPinResult to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = QuizPinResult()
    * database.update(QuizPinResults, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: QuizPinResult) {
        this.apply {
            set(QuizPinResults.organicPinId, entity.organicPinId)
            set(QuizPinResults.androidDeepLink, entity.androidDeepLink)
            set(QuizPinResults.iosDeepLink, entity.iosDeepLink)
            set(QuizPinResults.destinationUrl, entity.destinationUrl)
            set(QuizPinResults.resultId, entity.resultId)
        }
    }

}


