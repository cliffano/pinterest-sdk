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

import org.openapitools.client.models.TrendingKeywordsResponse
import org.openapitools.client.models.TrendingKeywordsResponseTrendsInner

class TrendingKeywordsResponseTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of TrendingKeywordsResponse
        //val modelInstance = TrendingKeywordsResponse()

        // to test the property `trends` - The top trending keywords for the specified trend type in the requested region.<br /> Results are ordered, with the first element in the array representing the #1 top trend.
        should("test trends") {
            // uncomment below to test the property
            //modelInstance.trends shouldBe ("TODO")
        }

    }
}
