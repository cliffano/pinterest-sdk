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

import org.openapitools.client.models.CatalogsFeedIngestionWarnings

class CatalogsFeedIngestionWarningsTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsFeedIngestionWarnings
        //val modelInstance = CatalogsFeedIngestionWarnings()

        // to test the property `ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR` - We experienced a technical difficulty and were unable to download some additional images. The next download attempt will happen in 24 hours.
        should("test ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR") {
            // uncomment below to test the property
            //modelInstance.ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR shouldBe ("TODO")
        }

        // to test the property `ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE` - Additional image files are unreadable. Please upload new files to continue.
        should("test ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE") {
            // uncomment below to test the property
            //modelInstance.ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE shouldBe ("TODO")
        }

        // to test the property `ADDITIONAL_IMAGE_MALFORMED_URL` - Additional image files are unreadable. Please check your link and upload new files to continue.
        should("test ADDITIONAL_IMAGE_MALFORMED_URL") {
            // uncomment below to test the property
            //modelInstance.ADDITIONAL_IMAGE_MALFORMED_URL shouldBe ("TODO")
        }

        // to test the property `ADDITIONAL_IMAGE_FILE_NOT_FOUND` - Additional image files are unreadable. Please upload new files to continue.
        should("test ADDITIONAL_IMAGE_FILE_NOT_FOUND") {
            // uncomment below to test the property
            //modelInstance.ADDITIONAL_IMAGE_FILE_NOT_FOUND shouldBe ("TODO")
        }

        // to test the property `ADDITIONAL_IMAGE_INVALID_FILE` - Additional image files are unreadable. Please upload new files to continue.
        should("test ADDITIONAL_IMAGE_INVALID_FILE") {
            // uncomment below to test the property
            //modelInstance.ADDITIONAL_IMAGE_INVALID_FILE shouldBe ("TODO")
        }

        // to test the property `HOTEL_PRICE_HEADER_IS_PRESENT` - price is not a supported column. Use base_price and sale_price instead.
        should("test HOTEL_PRICE_HEADER_IS_PRESENT") {
            // uncomment below to test the property
            //modelInstance.HOTEL_PRICE_HEADER_IS_PRESENT shouldBe ("TODO")
        }

    }
}