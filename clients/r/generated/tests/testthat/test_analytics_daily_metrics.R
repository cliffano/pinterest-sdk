# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test AnalyticsDailyMetrics")

model_instance <- AnalyticsDailyMetrics$new()

test_that("data_status", {
  # tests for the property `data_status` (DataStatus)

  # uncomment below to test the property
  #expect_equal(model.instance$`data_status`, "EXPECTED_RESULT")
})

test_that("date", {
  # tests for the property `date` (character)
  # Metrics date (UTC): YYYY-MM-DD.

  # uncomment below to test the property
  #expect_equal(model.instance$`date`, "EXPECTED_RESULT")
})

test_that("metrics", {
  # tests for the property `metrics` (map(numeric))
  # The metric name and daily value for each requested metric

  # uncomment below to test the property
  #expect_equal(model.instance$`metrics`, "EXPECTED_RESULT")
})
