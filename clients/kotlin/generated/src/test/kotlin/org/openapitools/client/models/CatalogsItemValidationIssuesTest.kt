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

import org.openapitools.client.models.CatalogsItemValidationIssues
import org.openapitools.client.models.CatalogsItemValidationErrors
import org.openapitools.client.models.CatalogsItemValidationWarnings

class CatalogsItemValidationIssuesTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CatalogsItemValidationIssues
        //val modelInstance = CatalogsItemValidationIssues()

        // to test the property `itemNumber` - Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation.
        should("test itemNumber") {
            // uncomment below to test the property
            //modelInstance.itemNumber shouldBe ("TODO")
        }

        // to test the property `itemId` - The merchant-created unique ID that represents the product.
        should("test itemId") {
            // uncomment below to test the property
            //modelInstance.itemId shouldBe ("TODO")
        }

        // to test the property `errors`
        should("test errors") {
            // uncomment below to test the property
            //modelInstance.errors shouldBe ("TODO")
        }

        // to test the property `warnings`
        should("test warnings") {
            // uncomment below to test the property
            //modelInstance.warnings shouldBe ("TODO")
        }

    }
}