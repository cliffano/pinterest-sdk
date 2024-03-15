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

import org.openapitools.client.models.AudienceUpdateRequest
import org.openapitools.client.models.AudienceRule
import org.openapitools.client.models.AudienceUpdateOperationType

class AudienceUpdateRequestTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of AudienceUpdateRequest
        //val modelInstance = AudienceUpdateRequest()

        // to test the property `adAccountId` - Ad account ID.
        should("test adAccountId") {
            // uncomment below to test the property
            //modelInstance.adAccountId shouldBe ("TODO")
        }

        // to test the property `name` - Audience name.
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `rule`
        should("test rule") {
            // uncomment below to test the property
            //modelInstance.rule shouldBe ("TODO")
        }

        // to test the property `description` - Audience description.
        should("test description") {
            // uncomment below to test the property
            //modelInstance.description shouldBe ("TODO")
        }

        // to test the property `operationType`
        should("test operationType") {
            // uncomment below to test the property
            //modelInstance.operationType shouldBe ("TODO")
        }

    }
}
