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

import org.openapitools.client.models.ConversionTagResponse
import org.openapitools.client.models.ConversionTagConfigs
import org.openapitools.client.models.EnhancedMatchStatusType
import org.openapitools.client.models.EntityStatus

class ConversionTagResponseTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of ConversionTagResponse
        //val modelInstance = ConversionTagResponse()

        // to test the property `adAccountId` - Ad account ID.
        should("test adAccountId") {
            // uncomment below to test the property
            //modelInstance.adAccountId shouldBe ("TODO")
        }

        // to test the property `codeSnippet` - Tag code snippet.
        should("test codeSnippet") {
            // uncomment below to test the property
            //modelInstance.codeSnippet shouldBe ("TODO")
        }

        // to test the property `enhancedMatchStatus`
        should("test enhancedMatchStatus") {
            // uncomment below to test the property
            //modelInstance.enhancedMatchStatus shouldBe ("TODO")
        }

        // to test the property `id` - Tag ID.
        should("test id") {
            // uncomment below to test the property
            //modelInstance.id shouldBe ("TODO")
        }

        // to test the property `lastFiredTimeMs` - Time for the last event fired.
        should("test lastFiredTimeMs") {
            // uncomment below to test the property
            //modelInstance.lastFiredTimeMs shouldBe ("TODO")
        }

        // to test the property `name` - Conversion tag name.
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `status`
        should("test status") {
            // uncomment below to test the property
            //modelInstance.status shouldBe ("TODO")
        }

        // to test the property `version` - Version number.
        should("test version") {
            // uncomment below to test the property
            //modelInstance.version shouldBe ("TODO")
        }

        // to test the property `configs`
        should("test configs") {
            // uncomment below to test the property
            //modelInstance.configs shouldBe ("TODO")
        }

    }
}
