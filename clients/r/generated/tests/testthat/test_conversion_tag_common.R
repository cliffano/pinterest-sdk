# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test ConversionTagCommon")

model_instance <- ConversionTagCommon$new()

test_that("ad_account_id", {
  # tests for the property `ad_account_id` (character)
  # Ad account ID.

  # uncomment below to test the property
  #expect_equal(model.instance$`ad_account_id`, "EXPECTED_RESULT")
})

test_that("code_snippet", {
  # tests for the property `code_snippet` (character)
  # Tag code snippet.

  # uncomment below to test the property
  #expect_equal(model.instance$`code_snippet`, "EXPECTED_RESULT")
})

test_that("enhanced_match_status", {
  # tests for the property `enhanced_match_status` (EnhancedMatchStatusType)

  # uncomment below to test the property
  #expect_equal(model.instance$`enhanced_match_status`, "EXPECTED_RESULT")
})

test_that("id", {
  # tests for the property `id` (character)
  # Tag ID.

  # uncomment below to test the property
  #expect_equal(model.instance$`id`, "EXPECTED_RESULT")
})

test_that("last_fired_time_ms", {
  # tests for the property `last_fired_time_ms` (numeric)
  # Time for the last event fired.

  # uncomment below to test the property
  #expect_equal(model.instance$`last_fired_time_ms`, "EXPECTED_RESULT")
})

test_that("name", {
  # tests for the property `name` (character)
  # Conversion tag name.

  # uncomment below to test the property
  #expect_equal(model.instance$`name`, "EXPECTED_RESULT")
})

test_that("status", {
  # tests for the property `status` (EntityStatus)

  # uncomment below to test the property
  #expect_equal(model.instance$`status`, "EXPECTED_RESULT")
})

test_that("version", {
  # tests for the property `version` (character)
  # Version number.

  # uncomment below to test the property
  #expect_equal(model.instance$`version`, "EXPECTED_RESULT")
})

test_that("configs", {
  # tests for the property `configs` (ConversionTagConfigs)

  # uncomment below to test the property
  #expect_equal(model.instance$`configs`, "EXPECTED_RESULT")
})
