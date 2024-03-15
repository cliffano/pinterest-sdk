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

import org.openapitools.client.models.SSIOAccountResponse
import org.openapitools.client.models.SSIOAccountItem
import org.openapitools.client.models.SSIOAccountPMPName

class SSIOAccountResponseTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of SSIOAccountResponse
        //val modelInstance = SSIOAccountResponse()

        // to test the property `eligible` - Advertiser eligible to create order lines
        should("test eligible") {
            // uncomment below to test the property
            //modelInstance.eligible shouldBe ("TODO")
        }

        // to test the property `canEdit` - Advertiser eligible to update order lines
        should("test canEdit") {
            // uncomment below to test the property
            //modelInstance.canEdit shouldBe ("TODO")
        }

        // to test the property `billtoInfos` - An array of Salesforce account information that includes address, io terms, etc.
        should("test billtoInfos") {
            // uncomment below to test the property
            //modelInstance.billtoInfos shouldBe ("TODO")
        }

        // to test the property `currency`
        should("test currency") {
            // uncomment below to test the property
            //modelInstance.currency shouldBe ("TODO")
        }

        // to test the property `pmpNames`
        should("test pmpNames") {
            // uncomment below to test the property
            //modelInstance.pmpNames shouldBe ("TODO")
        }

        // to test the property `error` - Error indicator from Salesforce which could be \"No Error\"
        should("test error") {
            // uncomment below to test the property
            //modelInstance.error shouldBe ("TODO")
        }

    }
}
