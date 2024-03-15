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

import org.openapitools.client.models.CatalogsItemsBatch
import org.openapitools.client.models.BatchOperationStatus
import org.openapitools.client.models.CatalogsHotelItemsBatch
import org.openapitools.client.models.CatalogsRetailItemsBatch
import org.openapitools.client.models.CatalogsType
import org.openapitools.client.models.HotelProcessingRecord

class CatalogsItemsBatchTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsItemsBatch
        //val modelInstance = CatalogsItemsBatch()

        // to test the property `catalogType`
        should("test catalogType") {
            // uncomment below to test the property
            //modelInstance.catalogType shouldBe ("TODO")
        }

        // to test the property `batchId` - Id of the catalogs items batch
        should("test batchId") {
            // uncomment below to test the property
            //modelInstance.batchId shouldBe ("TODO")
        }

        // to test the property `createdTime` - Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
        should("test createdTime") {
            // uncomment below to test the property
            //modelInstance.createdTime shouldBe ("TODO")
        }

        // to test the property `completedTime` - Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
        should("test completedTime") {
            // uncomment below to test the property
            //modelInstance.completedTime shouldBe ("TODO")
        }

        // to test the property `status`
        should("test status") {
            // uncomment below to test the property
            //modelInstance.status shouldBe ("TODO")
        }

        // to test the property `items` - Array with the catalogs items processing records part of the catalogs items batch
        should("test items") {
            // uncomment below to test the property
            //modelInstance.items shouldBe ("TODO")
        }

    }
}
