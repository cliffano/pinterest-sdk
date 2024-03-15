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

import org.openapitools.client.models.KeywordMetrics

class KeywordMetricsTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of KeywordMetrics
        //val modelInstance = KeywordMetrics()

        // to test the property `avgCpcInMicroCurrency` - Average cost per click
        should("test avgCpcInMicroCurrency") {
            // uncomment below to test the property
            //modelInstance.avgCpcInMicroCurrency shouldBe ("TODO")
        }

        // to test the property `keywordQueryVolume` - Keyword's search frequency. This value is based on keyword frequency in pepsi client response
        should("test keywordQueryVolume") {
            // uncomment below to test the property
            //modelInstance.keywordQueryVolume shouldBe ("TODO")
        }

    }
}