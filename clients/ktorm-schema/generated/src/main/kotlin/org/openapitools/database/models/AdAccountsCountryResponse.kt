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
 */
object AdAccountsCountryResponses : BaseTable<AdAccountsCountryResponse>("AdAccountsCountryResponse") {

    /**
     * Create an entity of type AdAccountsCountryResponse from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdAccountsCountryResponse(
        items = emptyList() /* kotlin.Array<AdAccountsCountryResponseData>? */
    )

    /**
    * Assign all the columns from the entity of type AdAccountsCountryResponse to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdAccountsCountryResponse()
    * database.update(AdAccountsCountryResponses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdAccountsCountryResponse) {
        this.apply {
        }
    }

}


object AdAccountsCountryResponseAdAccountsCountryResponseData : BaseTable<Pair<kotlin.Long, kotlin.Long>>("AdAccountsCountryResponseAdAccountsCountryResponseData") {
    val adAccountsCountryResponse = long("adAccountsCountryResponse")
    val adAccountsCountryResponseData = long("adAccountsCountryResponseData")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[adAccountsCountryResponse] ?: 0, row[adAccountsCountryResponseData] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(AdAccountsCountryResponseAdAccountsCountryResponseData.adAccountsCountryResponse, entity.first)
            set(AdAccountsCountryResponseAdAccountsCountryResponseData.adAccountsCountryResponseData, entity.second)
        }
    }

}

