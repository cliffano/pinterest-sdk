# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test AdAccountGetSubscriptionResponse")

model_instance <- AdAccountGetSubscriptionResponse$new()

test_that("lead_form_id", {
  # tests for the property `lead_form_id` (character)
  # Lead form ID.

  # uncomment below to test the property
  #expect_equal(model.instance$`lead_form_id`, "EXPECTED_RESULT")
})

test_that("webhook_url", {
  # tests for the property `webhook_url` (character)
  # Standard HTTPS webhook URL.

  # uncomment below to test the property
  #expect_equal(model.instance$`webhook_url`, "EXPECTED_RESULT")
})

test_that("id", {
  # tests for the property `id` (character)
  # Subscription ID.

  # uncomment below to test the property
  #expect_equal(model.instance$`id`, "EXPECTED_RESULT")
})

test_that("user_account_id", {
  # tests for the property `user_account_id` (character)
  # User account used to subscribe lead data.

  # uncomment below to test the property
  #expect_equal(model.instance$`user_account_id`, "EXPECTED_RESULT")
})

test_that("ad_account_id", {
  # tests for the property `ad_account_id` (character)
  # The Ad Account ID that this lead form belongs to.

  # uncomment below to test the property
  #expect_equal(model.instance$`ad_account_id`, "EXPECTED_RESULT")
})

test_that("api_version", {
  # tests for the property `api_version` (character)
  # API version.

  # uncomment below to test the property
  #expect_equal(model.instance$`api_version`, "EXPECTED_RESULT")
})

test_that("cryptographic_key", {
  # tests for the property `cryptographic_key` (character)
  # Base64 encoded key for client to decrypt lead data.

  # uncomment below to test the property
  #expect_equal(model.instance$`cryptographic_key`, "EXPECTED_RESULT")
})

test_that("cryptographic_algorithm", {
  # tests for the property `cryptographic_algorithm` (character)
  # Lead data encryption algorithm.

  # uncomment below to test the property
  #expect_equal(model.instance$`cryptographic_algorithm`, "EXPECTED_RESULT")
})

test_that("created_time", {
  # tests for the property `created_time` (integer)
  # Lead form creation time. Unix timestamp in milliseconds.

  # uncomment below to test the property
  #expect_equal(model.instance$`created_time`, "EXPECTED_RESULT")
})
