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

import org.openapitools.client.models.AdGroupCreateRequest
import org.openapitools.client.models.ActionType
import org.openapitools.client.models.AdGroupCommonOptimizationGoalMetadata
import org.openapitools.client.models.AdGroupCommonTrackingUrls
import org.openapitools.client.models.BudgetType
import org.openapitools.client.models.EntityStatus
import org.openapitools.client.models.PacingDeliveryType
import org.openapitools.client.models.PlacementGroupType
import org.openapitools.client.models.TargetingSpec

class AdGroupCreateRequestTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of AdGroupCreateRequest
        //val modelInstance = AdGroupCreateRequest()

        // to test the property `name` - Ad group name.
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `campaignId` - Campaign ID of the ad group.
        should("test campaignId") {
            // uncomment below to test the property
            //modelInstance.campaignId shouldBe ("TODO")
        }

        // to test the property `billableEvent`
        should("test billableEvent") {
            // uncomment below to test the property
            //modelInstance.billableEvent shouldBe ("TODO")
        }

        // to test the property `status` - Ad group/entity status.
        should("test status") {
            // uncomment below to test the property
            //modelInstance.status shouldBe ("TODO")
        }

        // to test the property `budgetInMicroCurrency` - Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
        should("test budgetInMicroCurrency") {
            // uncomment below to test the property
            //modelInstance.budgetInMicroCurrency shouldBe ("TODO")
        }

        // to test the property `bidInMicroCurrency` - Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
        should("test bidInMicroCurrency") {
            // uncomment below to test the property
            //modelInstance.bidInMicroCurrency shouldBe ("TODO")
        }

        // to test the property `optimizationGoalMetadata`
        should("test optimizationGoalMetadata") {
            // uncomment below to test the property
            //modelInstance.optimizationGoalMetadata shouldBe ("TODO")
        }

        // to test the property `budgetType`
        should("test budgetType") {
            // uncomment below to test the property
            //modelInstance.budgetType shouldBe ("TODO")
        }

        // to test the property `startTime` - Ad group start time. Unix timestamp in seconds. Defaults to current time.
        should("test startTime") {
            // uncomment below to test the property
            //modelInstance.startTime shouldBe ("TODO")
        }

        // to test the property `endTime` - Ad group end time. Unix timestamp in seconds.
        should("test endTime") {
            // uncomment below to test the property
            //modelInstance.endTime shouldBe ("TODO")
        }

        // to test the property `targetingSpec`
        should("test targetingSpec") {
            // uncomment below to test the property
            //modelInstance.targetingSpec shouldBe ("TODO")
        }

        // to test the property `lifetimeFrequencyCap` - Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
        should("test lifetimeFrequencyCap") {
            // uncomment below to test the property
            //modelInstance.lifetimeFrequencyCap shouldBe ("TODO")
        }

        // to test the property `trackingUrls`
        should("test trackingUrls") {
            // uncomment below to test the property
            //modelInstance.trackingUrls shouldBe ("TODO")
        }

        // to test the property `autoTargetingEnabled` - Enable auto-targeting for ad group.Default value is True. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
        should("test autoTargetingEnabled") {
            // uncomment below to test the property
            //modelInstance.autoTargetingEnabled shouldBe ("TODO")
        }

        // to test the property `placementGroup` - <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
        should("test placementGroup") {
            // uncomment below to test the property
            //modelInstance.placementGroup shouldBe ("TODO")
        }

        // to test the property `pacingDeliveryType`
        should("test pacingDeliveryType") {
            // uncomment below to test the property
            //modelInstance.pacingDeliveryType shouldBe ("TODO")
        }

        // to test the property `bidStrategyType` - Bid strategy type
        should("test bidStrategyType") {
            // uncomment below to test the property
            //modelInstance.bidStrategyType shouldBe ("TODO")
        }

    }
}
