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

import org.openapitools.client.models.PinMediaSourceImageURL

class PinMediaSourceImageURLTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of PinMediaSourceImageURL
        //val modelInstance = PinMediaSourceImageURL()

        // to test the property `sourceType`
        should("test sourceType") {
            // uncomment below to test the property
            //modelInstance.sourceType shouldBe ("TODO")
        }

        // to test the property `url`
        should("test url") {
            // uncomment below to test the property
            //modelInstance.url shouldBe ("TODO")
        }

        // to test the property `isStandard` - Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.
        should("test isStandard") {
            // uncomment below to test the property
            //modelInstance.isStandard shouldBe ("TODO")
        }

    }
}
