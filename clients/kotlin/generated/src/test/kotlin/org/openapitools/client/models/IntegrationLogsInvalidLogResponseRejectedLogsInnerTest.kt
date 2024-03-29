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

import org.openapitools.client.models.IntegrationLogsInvalidLogResponseRejectedLogsInner

class IntegrationLogsInvalidLogResponseRejectedLogsInnerTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of IntegrationLogsInvalidLogResponseRejectedLogsInner
        //val modelInstance = IntegrationLogsInvalidLogResponseRejectedLogsInner()

        // to test the property ``field`` - The field name containing an invalid value.
        should("test `field`") {
            // uncomment below to test the property
            //modelInstance.`field` shouldBe ("TODO")
        }

        // to test the property ``value`` - The value that is invalid.
        should("test `value`") {
            // uncomment below to test the property
            //modelInstance.`value` shouldBe ("TODO")
        }

        // to test the property `reason` - The reason the value is invalid.
        should("test reason") {
            // uncomment below to test the property
            //modelInstance.reason shouldBe ("TODO")
        }

        // to test the property `logIndex` - Index of the log in the batch.
        should("test logIndex") {
            // uncomment below to test the property
            //modelInstance.logIndex shouldBe ("TODO")
        }

    }
}
