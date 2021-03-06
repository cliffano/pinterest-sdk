# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title MediaUploadAllOfUploadParameters
#'
#' @description MediaUploadAllOfUploadParameters Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field x-amz-date  character [optional]
#'
#' @field x-amz-signature  character [optional]
#'
#' @field x-amz-security-token  character [optional]
#'
#' @field x-amz-algorithm  character [optional]
#'
#' @field key  character [optional]
#'
#' @field policy  character [optional]
#'
#' @field x-amz-credential  character [optional]
#'
#' @field Content-Type  character [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MediaUploadAllOfUploadParameters <- R6::R6Class(
  'MediaUploadAllOfUploadParameters',
  public = list(
    `x-amz-date` = NULL,
    `x-amz-signature` = NULL,
    `x-amz-security-token` = NULL,
    `x-amz-algorithm` = NULL,
    `key` = NULL,
    `policy` = NULL,
    `x-amz-credential` = NULL,
    `Content-Type` = NULL,
    initialize = function(
        `x-amz-date`=NULL, `x-amz-signature`=NULL, `x-amz-security-token`=NULL, `x-amz-algorithm`=NULL, `key`=NULL, `policy`=NULL, `x-amz-credential`=NULL, `Content-Type`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!is.null(`x-amz-date`)) {
        stopifnot(is.character(`x-amz-date`), length(`x-amz-date`) == 1)
        self$`x-amz-date` <- `x-amz-date`
      }
      if (!is.null(`x-amz-signature`)) {
        stopifnot(is.character(`x-amz-signature`), length(`x-amz-signature`) == 1)
        self$`x-amz-signature` <- `x-amz-signature`
      }
      if (!is.null(`x-amz-security-token`)) {
        stopifnot(is.character(`x-amz-security-token`), length(`x-amz-security-token`) == 1)
        self$`x-amz-security-token` <- `x-amz-security-token`
      }
      if (!is.null(`x-amz-algorithm`)) {
        stopifnot(is.character(`x-amz-algorithm`), length(`x-amz-algorithm`) == 1)
        self$`x-amz-algorithm` <- `x-amz-algorithm`
      }
      if (!is.null(`key`)) {
        stopifnot(is.character(`key`), length(`key`) == 1)
        self$`key` <- `key`
      }
      if (!is.null(`policy`)) {
        stopifnot(is.character(`policy`), length(`policy`) == 1)
        self$`policy` <- `policy`
      }
      if (!is.null(`x-amz-credential`)) {
        stopifnot(is.character(`x-amz-credential`), length(`x-amz-credential`) == 1)
        self$`x-amz-credential` <- `x-amz-credential`
      }
      if (!is.null(`Content-Type`)) {
        stopifnot(is.character(`Content-Type`), length(`Content-Type`) == 1)
        self$`Content-Type` <- `Content-Type`
      }
    },
    toJSON = function() {
      MediaUploadAllOfUploadParametersObject <- list()
      if (!is.null(self$`x-amz-date`)) {
        MediaUploadAllOfUploadParametersObject[['x-amz-date']] <-
          self$`x-amz-date`
      }
      if (!is.null(self$`x-amz-signature`)) {
        MediaUploadAllOfUploadParametersObject[['x-amz-signature']] <-
          self$`x-amz-signature`
      }
      if (!is.null(self$`x-amz-security-token`)) {
        MediaUploadAllOfUploadParametersObject[['x-amz-security-token']] <-
          self$`x-amz-security-token`
      }
      if (!is.null(self$`x-amz-algorithm`)) {
        MediaUploadAllOfUploadParametersObject[['x-amz-algorithm']] <-
          self$`x-amz-algorithm`
      }
      if (!is.null(self$`key`)) {
        MediaUploadAllOfUploadParametersObject[['key']] <-
          self$`key`
      }
      if (!is.null(self$`policy`)) {
        MediaUploadAllOfUploadParametersObject[['policy']] <-
          self$`policy`
      }
      if (!is.null(self$`x-amz-credential`)) {
        MediaUploadAllOfUploadParametersObject[['x-amz-credential']] <-
          self$`x-amz-credential`
      }
      if (!is.null(self$`Content-Type`)) {
        MediaUploadAllOfUploadParametersObject[['Content-Type']] <-
          self$`Content-Type`
      }

      MediaUploadAllOfUploadParametersObject
    },
    fromJSON = function(MediaUploadAllOfUploadParametersJson) {
      MediaUploadAllOfUploadParametersObject <- jsonlite::fromJSON(MediaUploadAllOfUploadParametersJson)
      if (!is.null(MediaUploadAllOfUploadParametersObject$`x-amz-date`)) {
        self$`x-amz-date` <- MediaUploadAllOfUploadParametersObject$`x-amz-date`
      }
      if (!is.null(MediaUploadAllOfUploadParametersObject$`x-amz-signature`)) {
        self$`x-amz-signature` <- MediaUploadAllOfUploadParametersObject$`x-amz-signature`
      }
      if (!is.null(MediaUploadAllOfUploadParametersObject$`x-amz-security-token`)) {
        self$`x-amz-security-token` <- MediaUploadAllOfUploadParametersObject$`x-amz-security-token`
      }
      if (!is.null(MediaUploadAllOfUploadParametersObject$`x-amz-algorithm`)) {
        self$`x-amz-algorithm` <- MediaUploadAllOfUploadParametersObject$`x-amz-algorithm`
      }
      if (!is.null(MediaUploadAllOfUploadParametersObject$`key`)) {
        self$`key` <- MediaUploadAllOfUploadParametersObject$`key`
      }
      if (!is.null(MediaUploadAllOfUploadParametersObject$`policy`)) {
        self$`policy` <- MediaUploadAllOfUploadParametersObject$`policy`
      }
      if (!is.null(MediaUploadAllOfUploadParametersObject$`x-amz-credential`)) {
        self$`x-amz-credential` <- MediaUploadAllOfUploadParametersObject$`x-amz-credential`
      }
      if (!is.null(MediaUploadAllOfUploadParametersObject$`Content-Type`)) {
        self$`Content-Type` <- MediaUploadAllOfUploadParametersObject$`Content-Type`
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`x-amz-date`)) {
        sprintf(
        '"x-amz-date":
          "%s"
                ',
        self$`x-amz-date`
        )},
        if (!is.null(self$`x-amz-signature`)) {
        sprintf(
        '"x-amz-signature":
          "%s"
                ',
        self$`x-amz-signature`
        )},
        if (!is.null(self$`x-amz-security-token`)) {
        sprintf(
        '"x-amz-security-token":
          "%s"
                ',
        self$`x-amz-security-token`
        )},
        if (!is.null(self$`x-amz-algorithm`)) {
        sprintf(
        '"x-amz-algorithm":
          "%s"
                ',
        self$`x-amz-algorithm`
        )},
        if (!is.null(self$`key`)) {
        sprintf(
        '"key":
          "%s"
                ',
        self$`key`
        )},
        if (!is.null(self$`policy`)) {
        sprintf(
        '"policy":
          "%s"
                ',
        self$`policy`
        )},
        if (!is.null(self$`x-amz-credential`)) {
        sprintf(
        '"x-amz-credential":
          "%s"
                ',
        self$`x-amz-credential`
        )},
        if (!is.null(self$`Content-Type`)) {
        sprintf(
        '"Content-Type":
          "%s"
                ',
        self$`Content-Type`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(MediaUploadAllOfUploadParametersJson) {
      MediaUploadAllOfUploadParametersObject <- jsonlite::fromJSON(MediaUploadAllOfUploadParametersJson)
      self$`x-amz-date` <- MediaUploadAllOfUploadParametersObject$`x-amz-date`
      self$`x-amz-signature` <- MediaUploadAllOfUploadParametersObject$`x-amz-signature`
      self$`x-amz-security-token` <- MediaUploadAllOfUploadParametersObject$`x-amz-security-token`
      self$`x-amz-algorithm` <- MediaUploadAllOfUploadParametersObject$`x-amz-algorithm`
      self$`key` <- MediaUploadAllOfUploadParametersObject$`key`
      self$`policy` <- MediaUploadAllOfUploadParametersObject$`policy`
      self$`x-amz-credential` <- MediaUploadAllOfUploadParametersObject$`x-amz-credential`
      self$`Content-Type` <- MediaUploadAllOfUploadParametersObject$`Content-Type`
      self
    }
  )
)
