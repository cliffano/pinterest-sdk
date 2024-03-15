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

import org.openapitools.client.models.CustomerList

class CustomerListTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CustomerList
        //val modelInstance = CustomerList()

        // to test the property `adAccountId` - Associated ad account ID.
        should("test adAccountId") {
            // uncomment below to test the property
            //modelInstance.adAccountId shouldBe ("TODO")
        }

        // to test the property `createdTime` - Creation time. Unix timestamp in seconds.
        should("test createdTime") {
            // uncomment below to test the property
            //modelInstance.createdTime shouldBe ("TODO")
        }

        // to test the property `id` - Customer list ID.
        should("test id") {
            // uncomment below to test the property
            //modelInstance.id shouldBe ("TODO")
        }

        // to test the property `name` - Customer list name.
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `numBatches` - Total number of list updates.  List creation counts as one batch. Each <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append</a> or <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call counts as another. List creation via the Ads Manager UI could result in more than one batch since the UI breaks up large lists.
        should("test numBatches") {
            // uncomment below to test the property
            //modelInstance.numBatches shouldBe ("TODO")
        }

        // to test the property `numRemovedUserRecords` - Number of removed user records. In a <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call, this counter increases even if the user is not found in the list.
        should("test numRemovedUserRecords") {
            // uncomment below to test the property
            //modelInstance.numRemovedUserRecords shouldBe ("TODO")
        }

        // to test the property `numUploadedUserRecords` - Number of uploaded user records. In an <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append API</a> call, this counter increases even if the uploaded user is already in the list.
        should("test numUploadedUserRecords") {
            // uncomment below to test the property
            //modelInstance.numUploadedUserRecords shouldBe ("TODO")
        }

        // to test the property `status` - Customer list status. TOO_SMALL - the list has less than 100 Pinterest users.
        should("test status") {
            // uncomment below to test the property
            //modelInstance.status shouldBe ("TODO")
        }

        // to test the property `type` - Always \"customerlist\".
        should("test type") {
            // uncomment below to test the property
            //modelInstance.type shouldBe ("TODO")
        }

        // to test the property `updatedTime` - Last update time. Unix timestamp in seconds.
        should("test updatedTime") {
            // uncomment below to test the property
            //modelInstance.updatedTime shouldBe ("TODO")
        }

        // to test the property `exceptions` - Customer list errors
        should("test exceptions") {
            // uncomment below to test the property
            //modelInstance.exceptions shouldBe ("TODO")
        }

    }
}