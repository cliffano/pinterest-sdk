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

import org.openapitools.client.models.BulkDownloadRequest
import org.openapitools.client.models.BulkDownloadRequestCampaignFilter
import org.openapitools.client.models.BulkEntityType
import org.openapitools.client.models.BulkOutputFormat

class BulkDownloadRequestTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of BulkDownloadRequest
        //val modelInstance = BulkDownloadRequest()

        // to test the property `entityTypes` - All entity types specified will be downloaded. Fewer types result in faster downloads.
        should("test entityTypes") {
            // uncomment below to test the property
            //modelInstance.entityTypes shouldBe ("TODO")
        }

        // to test the property `entityIds` - All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded.
        should("test entityIds") {
            // uncomment below to test the property
            //modelInstance.entityIds shouldBe ("TODO")
        }

        // to test the property `updatedSince` - Unix UTC timestamp to retrieve all entities that have changed since this time.
        should("test updatedSince") {
            // uncomment below to test the property
            //modelInstance.updatedSince shouldBe ("TODO")
        }

        // to test the property `campaignFilter`
        should("test campaignFilter") {
            // uncomment below to test the property
            //modelInstance.campaignFilter shouldBe ("TODO")
        }

        // to test the property `outputFormat`
        should("test outputFormat") {
            // uncomment below to test the property
            //modelInstance.outputFormat shouldBe ("TODO")
        }

    }
}
