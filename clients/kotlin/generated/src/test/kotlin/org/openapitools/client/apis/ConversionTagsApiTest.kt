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

package org.openapitools.client.apis

import io.kotlintest.shouldBe
import io.kotlintest.specs.ShouldSpec

import org.openapitools.client.apis.ConversionTagsApi
import org.openapitools.client.models.ConversionEventResponse
import org.openapitools.client.models.ConversionTagCreate
import org.openapitools.client.models.ConversionTagListResponse
import org.openapitools.client.models.ConversionTagResponse
import org.openapitools.client.models.Error
import org.openapitools.client.models.PageVisitConversionTagsGet200Response

class ConversionTagsApiTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of ConversionTagsApi
        //val apiInstance = ConversionTagsApi()

        // to test conversionTagsCreate
        should("test conversionTagsCreate") {
            // uncomment below to test conversionTagsCreate
            //val adAccountId : kotlin.String = adAccountId_example // kotlin.String | Unique identifier of an ad account.
            //val conversionTagCreate : ConversionTagCreate =  // ConversionTagCreate | Conversion Tag to create
            //val result : ConversionTagResponse = apiInstance.conversionTagsCreate(adAccountId, conversionTagCreate)
            //result shouldBe ("TODO")
        }

        // to test conversionTagsGet
        should("test conversionTagsGet") {
            // uncomment below to test conversionTagsGet
            //val adAccountId : kotlin.String = adAccountId_example // kotlin.String | Unique identifier of an ad account.
            //val conversionTagId : kotlin.String = 2617998078212 // kotlin.String | Id of the conversion tag.
            //val result : ConversionTagResponse = apiInstance.conversionTagsGet(adAccountId, conversionTagId)
            //result shouldBe ("TODO")
        }

        // to test conversionTagsList
        should("test conversionTagsList") {
            // uncomment below to test conversionTagsList
            //val adAccountId : kotlin.String = adAccountId_example // kotlin.String | Unique identifier of an ad account.
            //val filterDeleted : kotlin.Boolean = true // kotlin.Boolean | Filter out deleted tags.
            //val result : ConversionTagListResponse = apiInstance.conversionTagsList(adAccountId, filterDeleted)
            //result shouldBe ("TODO")
        }

        // to test ocpmEligibleConversionTagsGet
        should("test ocpmEligibleConversionTagsGet") {
            // uncomment below to test ocpmEligibleConversionTagsGet
            //val adAccountId : kotlin.String = adAccountId_example // kotlin.String | Unique identifier of an ad account.
            //val result : kotlin.collections.Map<kotlin.String, kotlin.collections.List<ConversionEventResponse>> = apiInstance.ocpmEligibleConversionTagsGet(adAccountId)
            //result shouldBe ("TODO")
        }

        // to test pageVisitConversionTagsGet
        should("test pageVisitConversionTagsGet") {
            // uncomment below to test pageVisitConversionTagsGet
            //val adAccountId : kotlin.String = adAccountId_example // kotlin.String | Unique identifier of an ad account.
            //val pageSize : kotlin.Int = 56 // kotlin.Int | Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
            //val order : kotlin.String = ASCENDING // kotlin.String | The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
            //val bookmark : kotlin.String = bookmark_example // kotlin.String | Cursor used to fetch the next page of items
            //val result : PageVisitConversionTagsGet200Response = apiInstance.pageVisitConversionTagsGet(adAccountId, pageSize, order, bookmark)
            //result shouldBe ("TODO")
        }

    }
}
