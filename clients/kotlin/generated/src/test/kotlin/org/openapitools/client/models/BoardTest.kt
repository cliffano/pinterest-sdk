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

import io.kotlintest.shouldBe
import io.kotlintest.specs.ShouldSpec

import org.openapitools.client.models.Board
import org.openapitools.client.models.BoardMedia
import org.openapitools.client.models.BoardOwner

class BoardTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of Board
        //val modelInstance = Board()

        // to test the property `name`
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `id`
        should("test id") {
            // uncomment below to test the property
            //modelInstance.id shouldBe ("TODO")
        }

        // to test the property `createdAt` - Date and time of board creation.
        should("test createdAt") {
            // uncomment below to test the property
            //modelInstance.createdAt shouldBe ("TODO")
        }

        // to test the property `boardPinsModifiedAt` - Date and time of last board pins modified.
        should("test boardPinsModifiedAt") {
            // uncomment below to test the property
            //modelInstance.boardPinsModifiedAt shouldBe ("TODO")
        }

        // to test the property `description`
        should("test description") {
            // uncomment below to test the property
            //modelInstance.description shouldBe ("TODO")
        }

        // to test the property `collaboratorCount` - Count of collaborators on the board.
        should("test collaboratorCount") {
            // uncomment below to test the property
            //modelInstance.collaboratorCount shouldBe ("TODO")
        }

        // to test the property `pinCount` - Count of pins on the board.
        should("test pinCount") {
            // uncomment below to test the property
            //modelInstance.pinCount shouldBe ("TODO")
        }

        // to test the property `followerCount` - Board follower count.
        should("test followerCount") {
            // uncomment below to test the property
            //modelInstance.followerCount shouldBe ("TODO")
        }

        // to test the property `media`
        should("test media") {
            // uncomment below to test the property
            //modelInstance.media shouldBe ("TODO")
        }

        // to test the property `owner`
        should("test owner") {
            // uncomment below to test the property
            //modelInstance.owner shouldBe ("TODO")
        }

        // to test the property `privacy` - Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
        should("test privacy") {
            // uncomment below to test the property
            //modelInstance.privacy shouldBe ("TODO")
        }

    }
}
