# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test Keyword")

model_instance <- Keyword$new()

test_that("archived", {
  # tests for the property `archived` (character)

  # uncomment below to test the property
  #expect_equal(model.instance$`archived`, "EXPECTED_RESULT")
})

test_that("id", {
  # tests for the property `id` (character)
  # Keyword ID .

  # uncomment below to test the property
  #expect_equal(model.instance$`id`, "EXPECTED_RESULT")
})

test_that("parent_id", {
  # tests for the property `parent_id` (character)
  # Keyword parent entity ID (advertiser, campaign, ad group).

  # uncomment below to test the property
  #expect_equal(model.instance$`parent_id`, "EXPECTED_RESULT")
})

test_that("parent_type", {
  # tests for the property `parent_type` (character)
  # Parent entity type

  # uncomment below to test the property
  #expect_equal(model.instance$`parent_type`, "EXPECTED_RESULT")
})

test_that("type", {
  # tests for the property `type` (character)
  # Always keyword

  # uncomment below to test the property
  #expect_equal(model.instance$`type`, "EXPECTED_RESULT")
})

test_that("bid", {
  # tests for the property `bid` (integer)
  # Keyword custom bid in microcurrency - null if inherited from parent ad group.

  # uncomment below to test the property
  #expect_equal(model.instance$`bid`, "EXPECTED_RESULT")
})

test_that("match_type", {
  # tests for the property `match_type` (MatchTypeResponse)

  # uncomment below to test the property
  #expect_equal(model.instance$`match_type`, "EXPECTED_RESULT")
})

test_that("value", {
  # tests for the property `value` (character)
  # Keyword value (120 chars max).

  # uncomment below to test the property
  #expect_equal(model.instance$`value`, "EXPECTED_RESULT")
})
