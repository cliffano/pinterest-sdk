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

import org.openapitools.client.models.CatalogsFeedsCreateRequest
import org.openapitools.client.models.CatalogsFeedCredentials
import org.openapitools.client.models.CatalogsFeedProcessingSchedule
import org.openapitools.client.models.CatalogsFeedsCreateRequestDefaultLocale
import org.openapitools.client.models.CatalogsFormat
import org.openapitools.client.models.Country
import org.openapitools.client.models.NullableCurrency
import org.openapitools.client.models.ProductAvailabilityType

class CatalogsFeedsCreateRequestTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsFeedsCreateRequest
        //val modelInstance = CatalogsFeedsCreateRequest()

        // to test the property `name` - A human-friendly name associated to a given feed.
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `format`
        should("test format") {
            // uncomment below to test the property
            //modelInstance.format shouldBe ("TODO")
        }

        // to test the property `location` - The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
        should("test location") {
            // uncomment below to test the property
            //modelInstance.location shouldBe ("TODO")
        }

        // to test the property `defaultCurrency`
        should("test defaultCurrency") {
            // uncomment below to test the property
            //modelInstance.defaultCurrency shouldBe ("TODO")
        }

        // to test the property `defaultLocale`
        should("test defaultLocale") {
            // uncomment below to test the property
            //modelInstance.defaultLocale shouldBe ("TODO")
        }

        // to test the property `credentials`
        should("test credentials") {
            // uncomment below to test the property
            //modelInstance.credentials shouldBe ("TODO")
        }

        // to test the property `preferredProcessingSchedule`
        should("test preferredProcessingSchedule") {
            // uncomment below to test the property
            //modelInstance.preferredProcessingSchedule shouldBe ("TODO")
        }

        // to test the property `defaultCountry`
        should("test defaultCountry") {
            // uncomment below to test the property
            //modelInstance.defaultCountry shouldBe ("TODO")
        }

        // to test the property `defaultAvailability`
        should("test defaultAvailability") {
            // uncomment below to test the property
            //modelInstance.defaultAvailability shouldBe ("TODO")
        }

    }
}
