# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test AdsCreditRedeemResponse")

model_instance <- AdsCreditRedeemResponse$new()

test_that("success", {
  # tests for the property `success` (character)
  # Returns true if the offer code was successfully applied(validateOnly&#x3D;false) or can be applied(validateOnly&#x3D;true).

  # uncomment below to test the property
  #expect_equal(model.instance$`success`, "EXPECTED_RESULT")
})

test_that("errorCode", {
  # tests for the property `errorCode` (integer)
  # Error code type if error occurs

  # uncomment below to test the property
  #expect_equal(model.instance$`errorCode`, "EXPECTED_RESULT")
})

test_that("errorMessage", {
  # tests for the property `errorMessage` (character)
  # Reason for failure

  # uncomment below to test the property
  #expect_equal(model.instance$`errorMessage`, "EXPECTED_RESULT")
})
