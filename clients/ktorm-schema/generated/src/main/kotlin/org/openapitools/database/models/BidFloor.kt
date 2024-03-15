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
 * @param bidFloors A list of bid floors in micro currency. For example, [100000, 200000]
 * @param type Always the string 'bidfloor'
 */
object BidFloors : BaseTable<BidFloor>("BidFloor") {
    val type = text("type") /* null */ /* Always the string 'bidfloor' */

    /**
     * Create an entity of type BidFloor from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = BidFloor(
        bidFloors = emptyList() /* kotlin.Array<kotlin.Int>? */ /* A list of bid floors in micro currency. For example, [100000, 200000] */,
        type = row[type] ?: "bidfloor" /* kotlin.String? */ /* Always the string 'bidfloor' */
    )

    /**
    * Assign all the columns from the entity of type BidFloor to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = BidFloor()
    * database.update(BidFloors, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: BidFloor) {
        this.apply {
            set(BidFloors.type, entity.type)
        }
    }

}


object BidFloorBidFloors : BaseTable<Pair<kotlin.Long, kotlin.Int>>("BidFloorBidFloors") {
    val bidFloor = long("bidFloor")
    val bidFloors = int("bidFloors")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Int> =
        Pair(row[bidFloor] ?: 0, row[bidFloors] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Int>) {
        this.apply {
            set(BidFloorBidFloors.bidFloor, entity.first)
            set(BidFloorBidFloors.bidFloors, entity.second)
        }
    }

}

