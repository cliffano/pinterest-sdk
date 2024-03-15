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

import org.openapitools.client.models.AdAccountCreateSubscriptionResponse

class AdAccountCreateSubscriptionResponseTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of AdAccountCreateSubscriptionResponse
        //val modelInstance = AdAccountCreateSubscriptionResponse()

        // to test the property `id` - Subscription ID.
        should("test id") {
            // uncomment below to test the property
            //modelInstance.id shouldBe ("TODO")
        }

        // to test the property `cryptographicKey` - Base64 encoded key for client to decrypt lead data.
        should("test cryptographicKey") {
            // uncomment below to test the property
            //modelInstance.cryptographicKey shouldBe ("TODO")
        }

        // to test the property `cryptographicAlgorithm` - Lead data encryption algorithm.
        should("test cryptographicAlgorithm") {
            // uncomment below to test the property
            //modelInstance.cryptographicAlgorithm shouldBe ("TODO")
        }

        // to test the property `createdTime` - Subscription creation time. Unix timestamp in milliseconds.
        should("test createdTime") {
            // uncomment below to test the property
            //modelInstance.createdTime shouldBe ("TODO")
        }

    }
}
