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

import org.openapitools.client.models.CampaignCreateRequest
import org.openapitools.client.models.AdCommonTrackingUrls
import org.openapitools.client.models.CampaignSummaryStatus
import org.openapitools.client.models.EntityStatus
import org.openapitools.client.models.ObjectiveType

class CampaignCreateRequestTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of CampaignCreateRequest
        //val modelInstance = CampaignCreateRequest()

        // to test the property `adAccountId` - Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
        should("test adAccountId") {
            // uncomment below to test the property
            //modelInstance.adAccountId shouldBe ("TODO")
        }

        // to test the property `name` - Campaign name.
        should("test name") {
            // uncomment below to test the property
            //modelInstance.name shouldBe ("TODO")
        }

        // to test the property `objectiveType`
        should("test objectiveType") {
            // uncomment below to test the property
            //modelInstance.objectiveType shouldBe ("TODO")
        }

        // to test the property `status`
        should("test status") {
            // uncomment below to test the property
            //modelInstance.status shouldBe ("TODO")
        }

        // to test the property `lifetimeSpendCap` - Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
        should("test lifetimeSpendCap") {
            // uncomment below to test the property
            //modelInstance.lifetimeSpendCap shouldBe ("TODO")
        }

        // to test the property `dailySpendCap` - Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
        should("test dailySpendCap") {
            // uncomment below to test the property
            //modelInstance.dailySpendCap shouldBe ("TODO")
        }

        // to test the property `orderLineId` - Order line ID that appears on the invoice.
        should("test orderLineId") {
            // uncomment below to test the property
            //modelInstance.orderLineId shouldBe ("TODO")
        }

        // to test the property `trackingUrls`
        should("test trackingUrls") {
            // uncomment below to test the property
            //modelInstance.trackingUrls shouldBe ("TODO")
        }

        // to test the property `startTime` - Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        should("test startTime") {
            // uncomment below to test the property
            //modelInstance.startTime shouldBe ("TODO")
        }

        // to test the property `endTime` - Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        should("test endTime") {
            // uncomment below to test the property
            //modelInstance.endTime shouldBe ("TODO")
        }

        // to test the property `summaryStatus`
        should("test summaryStatus") {
            // uncomment below to test the property
            //modelInstance.summaryStatus shouldBe ("TODO")
        }

        // to test the property `isFlexibleDailyBudgets` - Determine if a campaign has flexible daily budgets setup.
        should("test isFlexibleDailyBudgets") {
            // uncomment below to test the property
            //modelInstance.isFlexibleDailyBudgets shouldBe ("TODO")
        }

        // to test the property `defaultAdGroupBudgetInMicroCurrency` - When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
        should("test defaultAdGroupBudgetInMicroCurrency") {
            // uncomment below to test the property
            //modelInstance.defaultAdGroupBudgetInMicroCurrency shouldBe ("TODO")
        }

        // to test the property `isAutomatedCampaign` - Specifies whether the campaign was created in the automated campaign flow
        should("test isAutomatedCampaign") {
            // uncomment below to test the property
            //modelInstance.isAutomatedCampaign shouldBe ("TODO")
        }

    }
}
