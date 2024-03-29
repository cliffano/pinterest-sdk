# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test PinMediaSourceImageURL")

model_instance <- PinMediaSourceImageURL$new()

test_that("source_type", {
  # tests for the property `source_type` (character)

  # uncomment below to test the property
  #expect_equal(model.instance$`source_type`, "EXPECTED_RESULT")
})

test_that("url", {
  # tests for the property `url` (character)

  # uncomment below to test the property
  #expect_equal(model.instance$`url`, "EXPECTED_RESULT")
})

test_that("is_standard", {
  # tests for the property `is_standard` (character)
  # Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.

  # uncomment below to test the property
  #expect_equal(model.instance$`is_standard`, "EXPECTED_RESULT")
})
