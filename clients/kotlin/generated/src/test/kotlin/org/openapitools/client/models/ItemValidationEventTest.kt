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

import org.openapitools.client.models.ItemValidationEvent

class ItemValidationEventTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of ItemValidationEvent
        //val modelInstance = ItemValidationEvent()

        // to test the property `attribute` - The attribute that the item validation event references
        should("test attribute") {
            // uncomment below to test the property
            //modelInstance.attribute shouldBe ("TODO")
        }

        // to test the property `code` - The event code that the item validation event references
        should("test code") {
            // uncomment below to test the property
            //modelInstance.code shouldBe ("TODO")
        }

        // to test the property `message` - Title message describing the item validation event
        should("test message") {
            // uncomment below to test the property
            //modelInstance.message shouldBe ("TODO")
        }

    }
}
