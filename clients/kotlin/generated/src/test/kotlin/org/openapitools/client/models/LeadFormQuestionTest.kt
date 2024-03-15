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

import org.openapitools.client.models.LeadFormQuestion
import org.openapitools.client.models.LeadFormQuestionFieldType
import org.openapitools.client.models.LeadFormQuestionType

class LeadFormQuestionTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of LeadFormQuestion
        //val modelInstance = LeadFormQuestion()

        // to test the property `questionType`
        should("test questionType") {
            // uncomment below to test the property
            //modelInstance.questionType shouldBe ("TODO")
        }

        // to test the property `customQuestionFieldType`
        should("test customQuestionFieldType") {
            // uncomment below to test the property
            //modelInstance.customQuestionFieldType shouldBe ("TODO")
        }

        // to test the property `customQuestionLabel` - Question label for a custom question.
        should("test customQuestionLabel") {
            // uncomment below to test the property
            //modelInstance.customQuestionLabel shouldBe ("TODO")
        }

        // to test the property `customQuestionOptions` - Question options for a custom question.
        should("test customQuestionOptions") {
            // uncomment below to test the property
            //modelInstance.customQuestionOptions shouldBe ("TODO")
        }

    }
}