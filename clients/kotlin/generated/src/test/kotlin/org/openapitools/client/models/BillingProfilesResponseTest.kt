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

import org.openapitools.client.models.BillingProfilesResponse

class BillingProfilesResponseTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of BillingProfilesResponse
        //val modelInstance = BillingProfilesResponse()

        // to test the property `id` - Billing ID.
        should("test id") {
            // uncomment below to test the property
            //modelInstance.id shouldBe ("TODO")
        }

        // to test the property `cardType` - Type of the card.
        should("test cardType") {
            // uncomment below to test the property
            //modelInstance.cardType shouldBe ("TODO")
        }

        // to test the property `status` - Status of the billing.
        should("test status") {
            // uncomment below to test the property
            //modelInstance.status shouldBe ("TODO")
        }

        // to test the property `advertiserId` - Advertiser ID of the billing.
        should("test advertiserId") {
            // uncomment below to test the property
            //modelInstance.advertiserId shouldBe ("TODO")
        }

        // to test the property `paymentMethodBrand` - Brand of the payment method.
        should("test paymentMethodBrand") {
            // uncomment below to test the property
            //modelInstance.paymentMethodBrand shouldBe ("TODO")
        }

    }
}
