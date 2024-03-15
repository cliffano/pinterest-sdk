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
object BoardsUserFollowsList200Responses : BaseTable<BoardsUserFollowsList200Response>("boards_user_follows_list_200_response") {
    val bookmark = text("bookmark") /* null */

    /**
     * Create an entity of type BoardsUserFollowsList200Response from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = BoardsUserFollowsList200Response(
        items = emptyList() /* kotlin.Array<Board> */,
        bookmark = row[bookmark]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type BoardsUserFollowsList200Response to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = BoardsUserFollowsList200Response()
    * database.update(BoardsUserFollowsList200Responses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: BoardsUserFollowsList200Response) {
        this.apply {
            set(BoardsUserFollowsList200Responses.bookmark, entity.bookmark)
        }
    }

}


object BoardsUserFollowsList200ResponseBoard : BaseTable<Pair<kotlin.Long, kotlin.Long>>("BoardsUserFollowsList200ResponseBoard") {
    val boardsUserFollowsList200Response = long("boardsUserFollowsList200Response")
    val board = long("board")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[boardsUserFollowsList200Response] ?: 0, row[board] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(BoardsUserFollowsList200ResponseBoard.boardsUserFollowsList200Response, entity.first)
            set(BoardsUserFollowsList200ResponseBoard.board, entity.second)
        }
    }

}

