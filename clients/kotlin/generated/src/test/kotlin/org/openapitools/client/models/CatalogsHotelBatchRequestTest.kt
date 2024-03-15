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

import org.openapitools.client.models.CatalogsHotelBatchRequest
import org.openapitools.client.models.CatalogsHotelBatchItem
import org.openapitools.client.models.CatalogsType
import org.openapitools.client.models.Country
import org.openapitools.client.models.Language

class CatalogsHotelBatchRequestTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsHotelBatchRequest
        //val modelInstance = CatalogsHotelBatchRequest()

        // to test the property `catalogType`
        should("test catalogType") {
            // uncomment below to test the property
            //modelInstance.catalogType shouldBe ("TODO")
        }

        // to test the property `country`
        should("test country") {
            // uncomment below to test the property
            //modelInstance.country shouldBe ("TODO")
        }

        // to test the property `language`
        should("test language") {
            // uncomment below to test the property
            //modelInstance.language shouldBe ("TODO")
        }

        // to test the property `items` - Array with catalogs item operations
        should("test items") {
            // uncomment below to test the property
            //modelInstance.items shouldBe ("TODO")
        }

        // to test the property `catalogId` - Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
        should("test catalogId") {
            // uncomment below to test the property
            //modelInstance.catalogId shouldBe ("TODO")
        }

    }
}
