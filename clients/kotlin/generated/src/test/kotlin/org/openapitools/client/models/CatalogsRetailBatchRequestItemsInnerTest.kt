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

import org.openapitools.client.models.CatalogsRetailBatchRequestItemsInner
import org.openapitools.client.models.CatalogsCreateRetailItem
import org.openapitools.client.models.CatalogsDeleteRetailItem
import org.openapitools.client.models.CatalogsUpdateRetailItem
import org.openapitools.client.models.CatalogsUpsertRetailItem
import org.openapitools.client.models.ItemAttributes
import org.openapitools.client.models.UpdateMaskFieldType

class CatalogsRetailBatchRequestItemsInnerTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsRetailBatchRequestItemsInner
        //val modelInstance = CatalogsRetailBatchRequestItemsInner()

        // to test the property `itemId` - The catalog item id in the merchant namespace
        should("test itemId") {
            // uncomment below to test the property
            //modelInstance.itemId shouldBe ("TODO")
        }

        // to test the property `operation`
        should("test operation") {
            // uncomment below to test the property
            //modelInstance.operation shouldBe ("TODO")
        }

        // to test the property `attributes`
        should("test attributes") {
            // uncomment below to test the property
            //modelInstance.attributes shouldBe ("TODO")
        }

        // to test the property `updateMask` - The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.
        should("test updateMask") {
            // uncomment below to test the property
            //modelInstance.updateMask shouldBe ("TODO")
        }

    }
}
