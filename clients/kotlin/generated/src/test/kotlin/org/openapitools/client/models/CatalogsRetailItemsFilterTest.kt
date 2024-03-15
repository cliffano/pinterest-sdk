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

import org.openapitools.client.models.CatalogsRetailItemsFilter

class CatalogsRetailItemsFilterTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsRetailItemsFilter
        //val modelInstance = CatalogsRetailItemsFilter()

        // to test the property `catalogType`
        should("test catalogType") {
            // uncomment below to test the property
            //modelInstance.catalogType shouldBe ("TODO")
        }

        // to test the property `itemIds`
        should("test itemIds") {
            // uncomment below to test the property
            //modelInstance.itemIds shouldBe ("TODO")
        }

        // to test the property `catalogId` - Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog
        should("test catalogId") {
            // uncomment below to test the property
            //modelInstance.catalogId shouldBe ("TODO")
        }

    }
}
