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

import org.openapitools.client.models.SSIOAccountAddress

class SSIOAccountAddressTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of SSIOAccountAddress
        //val modelInstance = SSIOAccountAddress()

        // to test the property `display` - Address display
        should("test display") {
            // uncomment below to test the property
            //modelInstance.display shouldBe ("TODO")
        }

        // to test the property `purpose` - Purpose for which the address is used, usually Billing or Businness
        should("test purpose") {
            // uncomment below to test the property
            //modelInstance.purpose shouldBe ("TODO")
        }

        // to test the property `addressId` - Salesforce id for address
        should("test addressId") {
            // uncomment below to test the property
            //modelInstance.addressId shouldBe ("TODO")
        }

        // to test the property `orderLegalEntity` - Legal entity for this insertion order
        should("test orderLegalEntity") {
            // uncomment below to test the property
            //modelInstance.orderLegalEntity shouldBe ("TODO")
        }

    }
}
