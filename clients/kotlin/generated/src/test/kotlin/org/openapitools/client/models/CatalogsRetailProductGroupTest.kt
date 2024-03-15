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

import org.openapitools.client.models.CatalogsRetailProductGroup
import org.openapitools.client.models.CatalogsProductGroupFilters
import org.openapitools.client.models.CatalogsProductGroupStatus
import org.openapitools.client.models.CatalogsProductGroupType

class CatalogsRetailProductGroupTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsRetailProductGroup
        //val modelInstance = CatalogsRetailProductGroup()

        // to test the property `catalogType`
        should("test catalogType") {
            // uncomment below to test the property
            //modelInstance.catalogType shouldBe ("TODO")
        }

        // to test the property `id` - ID of the catalog product group.
        should("test id") {
            // uncomment below to test the property
            //modelInstance.id shouldBe ("TODO")
        }

        // to test the property `filters`
        should("test filters") {
            // uncomment below to test the property
            //modelInstance.filters shouldBe ("TODO")
        }

        // to test the property `feedId`
        should("test feedId") {
            // uncomment below to test the property
            //modelInstance.feedId shouldBe ("TODO")
        }

        // to test the property `name` - Name of catalog product group
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `description`
        should("test description") {
            // uncomment below to test the property
            //modelInstance.description shouldBe ("TODO")
        }

        // to test the property `isFeatured` - boolean indicator of whether the product group is being featured or not
        should("test isFeatured") {
            // uncomment below to test the property
            //modelInstance.isFeatured shouldBe ("TODO")
        }

        // to test the property `type`
        should("test type") {
            // uncomment below to test the property
            //modelInstance.type shouldBe ("TODO")
        }

        // to test the property `status`
        should("test status") {
            // uncomment below to test the property
            //modelInstance.status shouldBe ("TODO")
        }

        // to test the property `createdAt` - Unix timestamp in seconds of when catalog product group was created.
        should("test createdAt") {
            // uncomment below to test the property
            //modelInstance.createdAt shouldBe ("TODO")
        }

        // to test the property `updatedAt` - Unix timestamp in seconds of last time catalog product group was updated.
        should("test updatedAt") {
            // uncomment below to test the property
            //modelInstance.updatedAt shouldBe ("TODO")
        }

    }
}
