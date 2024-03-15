/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models

import org.openapitools.client.models.BoardMedia
import org.openapitools.client.models.BoardOwner

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Board
 *
 * @param name 
 * @param id 
 * @param createdAt Date and time of board creation.
 * @param boardPinsModifiedAt Date and time of last board pins modified.
 * @param description 
 * @param collaboratorCount Count of collaborators on the board.
 * @param pinCount Count of pins on the board.
 * @param followerCount Board follower count.
 * @param media 
 * @param owner 
 * @param privacy Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
 */


data class Board (

    @Json(name = "name")
    val name: kotlin.String,

    @Json(name = "id")
    val id: kotlin.String? = null,

    /* Date and time of board creation. */
    @Json(name = "created_at")
    val createdAt: java.time.OffsetDateTime? = null,

    /* Date and time of last board pins modified. */
    @Json(name = "board_pins_modified_at")
    val boardPinsModifiedAt: java.time.OffsetDateTime? = null,

    @Json(name = "description")
    val description: kotlin.String? = null,

    /* Count of collaborators on the board. */
    @Json(name = "collaborator_count")
    val collaboratorCount: kotlin.Int? = null,

    /* Count of pins on the board. */
    @Json(name = "pin_count")
    val pinCount: kotlin.Int? = null,

    /* Board follower count. */
    @Json(name = "follower_count")
    val followerCount: kotlin.Int? = null,

    @Json(name = "media")
    val media: BoardMedia? = null,

    @Json(name = "owner")
    val owner: BoardOwner? = null,

    /* Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a> */
    @Json(name = "privacy")
    val privacy: Board.Privacy? = Privacy.PUBLIC

) {

    /**
     * Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
     *
     * Values: PUBLIC,PROTECTED,SECRET
     */
    @JsonClass(generateAdapter = false)
    enum class Privacy(val value: kotlin.String) {
        @Json(name = "PUBLIC") PUBLIC("PUBLIC"),
        @Json(name = "PROTECTED") PROTECTED("PROTECTED"),
        @Json(name = "SECRET") SECRET("SECRET");
    }
}

