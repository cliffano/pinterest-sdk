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
 * @param items Board sections
 * @param bookmark 
 */
object BoardSectionsList200Responses : BaseTable<BoardSectionsList200Response>("board_sections_list_200_response") {
    val bookmark = text("bookmark") /* null */

    /**
     * Create an entity of type BoardSectionsList200Response from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = BoardSectionsList200Response(
        items = emptyList() /* kotlin.Array<BoardSection> */ /* Board sections */,
        bookmark = row[bookmark]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type BoardSectionsList200Response to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = BoardSectionsList200Response()
    * database.update(BoardSectionsList200Responses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: BoardSectionsList200Response) {
        this.apply {
            set(BoardSectionsList200Responses.bookmark, entity.bookmark)
        }
    }

}


object BoardSectionsList200ResponseBoardSection : BaseTable<Pair<kotlin.Long, kotlin.Long>>("BoardSectionsList200ResponseBoardSection") {
    val boardSectionsList200Response = long("boardSectionsList200Response")
    val boardSection = long("boardSection")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[boardSectionsList200Response] ?: 0, row[boardSection] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(BoardSectionsList200ResponseBoardSection.boardSectionsList200Response, entity.first)
            set(BoardSectionsList200ResponseBoardSection.boardSection, entity.second)
        }
    }

}

