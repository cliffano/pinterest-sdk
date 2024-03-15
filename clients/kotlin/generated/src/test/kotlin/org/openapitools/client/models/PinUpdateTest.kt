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

import org.openapitools.client.models.PinUpdate
import org.openapitools.client.models.PinUpdateCarouselSlotsInner

class PinUpdateTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of PinUpdate
        //val modelInstance = PinUpdate()

        // to test the property `altText` - Pin's alternative text.
        should("test altText") {
            // uncomment below to test the property
            //modelInstance.altText shouldBe ("TODO")
        }

        // to test the property `boardId` - The id of the board to move the Pin onto.
        should("test boardId") {
            // uncomment below to test the property
            //modelInstance.boardId shouldBe ("TODO")
        }

        // to test the property `boardSectionId` - <a href=\"https://help.pinterest.com/en/article/create-a-board-section\">Board section</a> ID.
        should("test boardSectionId") {
            // uncomment below to test the property
            //modelInstance.boardSectionId shouldBe ("TODO")
        }

        // to test the property `description` - Pin description - 800 characters maximum.
        should("test description") {
            // uncomment below to test the property
            //modelInstance.description shouldBe ("TODO")
        }

        // to test the property `link` - URL viewer is taken to when they click pin.
        should("test link") {
            // uncomment below to test the property
            //modelInstance.link shouldBe ("TODO")
        }

        // to test the property `title` - The native pin title that creators explicitly prefer to display.
        should("test title") {
            // uncomment below to test the property
            //modelInstance.title shouldBe ("TODO")
        }

        // to test the property `carouselSlots` - Carousel Pin slots data.
        should("test carouselSlots") {
            // uncomment below to test the property
            //modelInstance.carouselSlots shouldBe ("TODO")
        }

        // to test the property `note` - Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.
        should("test note") {
            // uncomment below to test the property
            //modelInstance.note shouldBe ("TODO")
        }

    }
}
