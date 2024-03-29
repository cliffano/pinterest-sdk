# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test AdGroupResponse")

model_instance <- AdGroupResponse$new()

test_that("name", {
  # tests for the property `name` (character)
  # Ad group name.

  # uncomment below to test the property
  #expect_equal(model.instance$`name`, "EXPECTED_RESULT")
})

test_that("status", {
  # tests for the property `status` (EntityStatus)
  # Ad group/entity status.

  # uncomment below to test the property
  #expect_equal(model.instance$`status`, "EXPECTED_RESULT")
})

test_that("budget_in_micro_currency", {
  # tests for the property `budget_in_micro_currency` (integer)
  # Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.

  # uncomment below to test the property
  #expect_equal(model.instance$`budget_in_micro_currency`, "EXPECTED_RESULT")
})

test_that("bid_in_micro_currency", {
  # tests for the property `bid_in_micro_currency` (integer)
  # Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.

  # uncomment below to test the property
  #expect_equal(model.instance$`bid_in_micro_currency`, "EXPECTED_RESULT")
})

test_that("optimization_goal_metadata", {
  # tests for the property `optimization_goal_metadata` (AdGroupCommonOptimizationGoalMetadata)

  # uncomment below to test the property
  #expect_equal(model.instance$`optimization_goal_metadata`, "EXPECTED_RESULT")
})

test_that("budget_type", {
  # tests for the property `budget_type` (BudgetType)

  # uncomment below to test the property
  #expect_equal(model.instance$`budget_type`, "EXPECTED_RESULT")
})

test_that("start_time", {
  # tests for the property `start_time` (integer)
  # Ad group start time. Unix timestamp in seconds. Defaults to current time.

  # uncomment below to test the property
  #expect_equal(model.instance$`start_time`, "EXPECTED_RESULT")
})

test_that("end_time", {
  # tests for the property `end_time` (integer)
  # Ad group end time. Unix timestamp in seconds.

  # uncomment below to test the property
  #expect_equal(model.instance$`end_time`, "EXPECTED_RESULT")
})

test_that("targeting_spec", {
  # tests for the property `targeting_spec` (TargetingSpec)

  # uncomment below to test the property
  #expect_equal(model.instance$`targeting_spec`, "EXPECTED_RESULT")
})

test_that("lifetime_frequency_cap", {
  # tests for the property `lifetime_frequency_cap` (integer)
  # Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Billable-event\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.

  # uncomment below to test the property
  #expect_equal(model.instance$`lifetime_frequency_cap`, "EXPECTED_RESULT")
})

test_that("tracking_urls", {
  # tests for the property `tracking_urls` (AdGroupCommonTrackingUrls)

  # uncomment below to test the property
  #expect_equal(model.instance$`tracking_urls`, "EXPECTED_RESULT")
})

test_that("auto_targeting_enabled", {
  # tests for the property `auto_targeting_enabled` (character)
  # Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.

  # uncomment below to test the property
  #expect_equal(model.instance$`auto_targeting_enabled`, "EXPECTED_RESULT")
})

test_that("placement_group", {
  # tests for the property `placement_group` (PlacementGroupType)
  # &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;.

  # uncomment below to test the property
  #expect_equal(model.instance$`placement_group`, "EXPECTED_RESULT")
})

test_that("pacing_delivery_type", {
  # tests for the property `pacing_delivery_type` (PacingDeliveryType)

  # uncomment below to test the property
  #expect_equal(model.instance$`pacing_delivery_type`, "EXPECTED_RESULT")
})

test_that("campaign_id", {
  # tests for the property `campaign_id` (character)
  # Campaign ID of the ad group.

  # uncomment below to test the property
  #expect_equal(model.instance$`campaign_id`, "EXPECTED_RESULT")
})

test_that("billable_event", {
  # tests for the property `billable_event` (ActionType)

  # uncomment below to test the property
  #expect_equal(model.instance$`billable_event`, "EXPECTED_RESULT")
})

test_that("bid_strategy_type", {
  # tests for the property `bid_strategy_type` (character)
  # Bid strategy type

  # uncomment below to test the property
  #expect_equal(model.instance$`bid_strategy_type`, "EXPECTED_RESULT")
})

test_that("id", {
  # tests for the property `id` (character)
  # Ad group ID.

  # uncomment below to test the property
  #expect_equal(model.instance$`id`, "EXPECTED_RESULT")
})

test_that("ad_account_id", {
  # tests for the property `ad_account_id` (character)
  # Advertiser ID.

  # uncomment below to test the property
  #expect_equal(model.instance$`ad_account_id`, "EXPECTED_RESULT")
})

test_that("created_time", {
  # tests for the property `created_time` (integer)
  # Ad group creation time. Unix timestamp in seconds.

  # uncomment below to test the property
  #expect_equal(model.instance$`created_time`, "EXPECTED_RESULT")
})

test_that("updated_time", {
  # tests for the property `updated_time` (integer)
  # Ad group last update time. Unix timestamp in seconds.

  # uncomment below to test the property
  #expect_equal(model.instance$`updated_time`, "EXPECTED_RESULT")
})

test_that("type", {
  # tests for the property `type` (character)
  # Always \&quot;adgroup\&quot;.

  # uncomment below to test the property
  #expect_equal(model.instance$`type`, "EXPECTED_RESULT")
})

test_that("conversion_learning_mode_type", {
  # tests for the property `conversion_learning_mode_type` (character)
  # oCPM learn mode

  # uncomment below to test the property
  #expect_equal(model.instance$`conversion_learning_mode_type`, "EXPECTED_RESULT")
})

test_that("summary_status", {
  # tests for the property `summary_status` (AdGroupSummaryStatus)
  # Ad group summary status.

  # uncomment below to test the property
  #expect_equal(model.instance$`summary_status`, "EXPECTED_RESULT")
})

test_that("feed_profile_id", {
  # tests for the property `feed_profile_id` (character)
  # Feed Profile ID associated to the adgroup.

  # uncomment below to test the property
  #expect_equal(model.instance$`feed_profile_id`, "EXPECTED_RESULT")
})

test_that("dca_assets", {
  # tests for the property `dca_assets` (AnyType)
  # [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.

  # uncomment below to test the property
  #expect_equal(model.instance$`dca_assets`, "EXPECTED_RESULT")
})
