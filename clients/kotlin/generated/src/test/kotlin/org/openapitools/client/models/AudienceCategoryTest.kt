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

import org.openapitools.client.models.AudienceCategory
import org.openapitools.client.models.AudienceSubcategory

class AudienceCategoryTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of AudienceCategory
        //val modelInstance = AudienceCategory()

        // to test the property `key` - Interest unique key (same as ID).
        should("test key") {
            // uncomment below to test the property
            //modelInstance.key shouldBe ("TODO")
        }

        // to test the property `name` - Interest name.
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `ratio` - Interest's percent of category's total audience.
        should("test ratio") {
            // uncomment below to test the property
            //modelInstance.ratio shouldBe ("TODO")
        }

        // to test the property `index` - Interest affinity index.
        should("test index") {
            // uncomment below to test the property
            //modelInstance.index shouldBe ("TODO")
        }

        // to test the property `id` - Interest ID.
        should("test id") {
            // uncomment below to test the property
            //modelInstance.id shouldBe ("TODO")
        }

        // to test the property `subcategories` - Subcategory interest distribution
        should("test subcategories") {
            // uncomment below to test the property
            //modelInstance.subcategories shouldBe ("TODO")
        }

    }
}
