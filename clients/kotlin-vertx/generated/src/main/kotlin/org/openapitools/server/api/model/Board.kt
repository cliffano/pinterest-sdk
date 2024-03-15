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
package org.openapitools.server.api.model

import org.openapitools.server.api.model.BoardMedia
import org.openapitools.server.api.model.BoardOwner

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Board
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
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class Board (
    @SerializedName("name") private val _name: kotlin.String?,
    val id: kotlin.String? = null,
    /* Date and time of board creation. */
    val createdAt: java.time.OffsetDateTime? = null,
    /* Date and time of last board pins modified. */
    val boardPinsModifiedAt: java.time.OffsetDateTime? = null,
    val description: kotlin.String? = null,
    /* Count of collaborators on the board. */
    val collaboratorCount: kotlin.Int? = null,
    /* Count of pins on the board. */
    val pinCount: kotlin.Int? = null,
    /* Board follower count. */
    val followerCount: kotlin.Int? = null,
    val media: BoardMedia? = null,
    val owner: BoardOwner? = null,
    /* Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a> */
    val privacy: Board.Privacy? = Privacy.PUBLIC
) {

    /**
    * Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
    * Values: PUBLIC,PROTECTED,SECRET
    */
    enum class Privacy(val value: kotlin.String){
    
        PUBLIC("PUBLIC"),
    
        PROTECTED("PROTECTED"),
    
        SECRET("SECRET");
    
    }

        val name get() = _name ?: throw IllegalArgumentException("name is required")
                    
}

