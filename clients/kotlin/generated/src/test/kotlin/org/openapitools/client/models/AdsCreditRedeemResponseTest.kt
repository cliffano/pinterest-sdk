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

import org.openapitools.client.models.AdsCreditRedeemResponse

class AdsCreditRedeemResponseTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of AdsCreditRedeemResponse
        //val modelInstance = AdsCreditRedeemResponse()

        // to test the property `success` - Returns true if the offer code was successfully applied(validateOnly=false) or can be applied(validateOnly=true).
        should("test success") {
            // uncomment below to test the property
            //modelInstance.success shouldBe ("TODO")
        }

        // to test the property `errorCode` - Error code type if error occurs
        should("test errorCode") {
            // uncomment below to test the property
            //modelInstance.errorCode shouldBe ("TODO")
        }

        // to test the property `errorMessage` - Reason for failure
        should("test errorMessage") {
            // uncomment below to test the property
            //modelInstance.errorMessage shouldBe ("TODO")
        }

    }
}