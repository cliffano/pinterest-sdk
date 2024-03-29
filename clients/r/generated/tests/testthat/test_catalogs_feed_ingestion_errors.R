# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test CatalogsFeedIngestionErrors")

model_instance <- CatalogsFeedIngestionErrors$new()

test_that("LINE_LEVEL_INTERNAL_ERROR", {
  # tests for the property `LINE_LEVEL_INTERNAL_ERROR` (integer)
  # We experienced a technical difficulty and were unable to ingest this some items. The next ingestion will happen in 24 hours.

  # uncomment below to test the property
  #expect_equal(model.instance$`LINE_LEVEL_INTERNAL_ERROR`, "EXPECTED_RESULT")
})

test_that("LARGE_PRODUCT_COUNT_DECREASE", {
  # tests for the property `LARGE_PRODUCT_COUNT_DECREASE` (integer)
  # The product count has decreased by more than 99% compared to the last successful ingestion.

  # uncomment below to test the property
  #expect_equal(model.instance$`LARGE_PRODUCT_COUNT_DECREASE`, "EXPECTED_RESULT")
})

test_that("ACCOUNT_FLAGGED", {
  # tests for the property `ACCOUNT_FLAGGED` (integer)
  # We detected an issue with your account and are not currently ingesting your items. Please review our policies at policy.pinterest.com/community-guidelines#section-spam or contact us at help.pinterest.com/contact for more information.

  # uncomment below to test the property
  #expect_equal(model.instance$`ACCOUNT_FLAGGED`, "EXPECTED_RESULT")
})

test_that("IMAGE_LEVEL_INTERNAL_ERROR", {
  # tests for the property `IMAGE_LEVEL_INTERNAL_ERROR` (integer)
  # We experienced a technical difficulty and were unable to download some images. The next download attempt will happen in 24 hours.

  # uncomment below to test the property
  #expect_equal(model.instance$`IMAGE_LEVEL_INTERNAL_ERROR`, "EXPECTED_RESULT")
})

test_that("IMAGE_FILE_NOT_ACCESSIBLE", {
  # tests for the property `IMAGE_FILE_NOT_ACCESSIBLE` (integer)
  # Image files are unreadable. Please upload new files to continue.

  # uncomment below to test the property
  #expect_equal(model.instance$`IMAGE_FILE_NOT_ACCESSIBLE`, "EXPECTED_RESULT")
})

test_that("IMAGE_MALFORMED_URL", {
  # tests for the property `IMAGE_MALFORMED_URL` (integer)
  # Image files are unreadable. Please check your link and upload new files to continue.

  # uncomment below to test the property
  #expect_equal(model.instance$`IMAGE_MALFORMED_URL`, "EXPECTED_RESULT")
})

test_that("IMAGE_FILE_NOT_FOUND", {
  # tests for the property `IMAGE_FILE_NOT_FOUND` (integer)
  # Image files are unreadable. Please upload new files to continue.

  # uncomment below to test the property
  #expect_equal(model.instance$`IMAGE_FILE_NOT_FOUND`, "EXPECTED_RESULT")
})

test_that("IMAGE_INVALID_FILE", {
  # tests for the property `IMAGE_INVALID_FILE` (integer)
  # Image files are unreadable. Please upload new files to continue.

  # uncomment below to test the property
  #expect_equal(model.instance$`IMAGE_INVALID_FILE`, "EXPECTED_RESULT")
})
