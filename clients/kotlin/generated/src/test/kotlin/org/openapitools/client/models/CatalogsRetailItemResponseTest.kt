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

import org.openapitools.client.models.CatalogsRetailItemResponse
import org.openapitools.client.models.CatalogsType
import org.openapitools.client.models.ItemAttributes
import org.openapitools.client.models.Pin

class CatalogsRetailItemResponseTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsRetailItemResponse
        //val modelInstance = CatalogsRetailItemResponse()

        // to test the property `catalogType`
        should("test catalogType") {
            // uncomment below to test the property
            //modelInstance.catalogType shouldBe ("TODO")
        }

        // to test the property `itemId` - The catalog retail item id in the merchant namespace
        should("test itemId") {
            // uncomment below to test the property
            //modelInstance.itemId shouldBe ("TODO")
        }

        // to test the property `pins` - The pins mapped to the item
        should("test pins") {
            // uncomment below to test the property
            //modelInstance.pins shouldBe ("TODO")
        }

        // to test the property `attributes`
        should("test attributes") {
            // uncomment below to test the property
            //modelInstance.attributes shouldBe ("TODO")
        }

    }
}
