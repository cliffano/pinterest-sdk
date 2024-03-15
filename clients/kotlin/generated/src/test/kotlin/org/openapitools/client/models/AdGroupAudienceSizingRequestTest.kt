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

import org.openapitools.client.models.AdGroupAudienceSizingRequest
import org.openapitools.client.models.AdGroupAudienceSizingRequestKeywordsInner
import org.openapitools.client.models.PlacementGroupType
import org.openapitools.client.models.TargetingSpec

class AdGroupAudienceSizingRequestTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of AdGroupAudienceSizingRequest
        //val modelInstance = AdGroupAudienceSizingRequest()

        // to test the property `autoTargetingEnabled` - Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
        should("test autoTargetingEnabled") {
            // uncomment below to test the property
            //modelInstance.autoTargetingEnabled shouldBe ("TODO")
        }

        // to test the property `placementGroup` - <a href=\"/docs/redoc/#section/Placement-group\">Placement group</a>.
        should("test placementGroup") {
            // uncomment below to test the property
            //modelInstance.placementGroup shouldBe ("TODO")
        }

        // to test the property `creativeTypes` - Pin creative types filter. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
        should("test creativeTypes") {
            // uncomment below to test the property
            //modelInstance.creativeTypes shouldBe ("TODO")
        }

        // to test the property `targetingSpec`
        should("test targetingSpec") {
            // uncomment below to test the property
            //modelInstance.targetingSpec shouldBe ("TODO")
        }

        // to test the property `productGroupIds` - Targeted product group IDs. </p><strong>Note:</strong> This can only be combined with shopping/catalog sales campaigns. For more information, <a href=\"https://help.pinterest.com/en/business/article/shopping-ads#section-14571\" target=\"_blank\">click here</a>. SHOPPING_RETARGETING must be included in targeting_spec object or this field will be ignored.
        should("test productGroupIds") {
            // uncomment below to test the property
            //modelInstance.productGroupIds shouldBe ("TODO")
        }

        // to test the property `keywords` - Array of keyword objects. If the keywords field is missing, all keywords will be targeted.
        should("test keywords") {
            // uncomment below to test the property
            //modelInstance.keywords shouldBe ("TODO")
        }

    }
}
