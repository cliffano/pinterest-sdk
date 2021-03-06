# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title OauthAccessTokenRequestRefreshAllOf
#'
#' @description OauthAccessTokenRequestRefreshAllOf Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field refresh_token  character 
#'
#' @field scope  character [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OauthAccessTokenRequestRefreshAllOf <- R6::R6Class(
  'OauthAccessTokenRequestRefreshAllOf',
  public = list(
    `refresh_token` = NULL,
    `scope` = NULL,
    initialize = function(
        `refresh_token`, `scope`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!missing(`refresh_token`)) {
        stopifnot(is.character(`refresh_token`), length(`refresh_token`) == 1)
        self$`refresh_token` <- `refresh_token`
      }
      if (!is.null(`scope`)) {
        stopifnot(is.character(`scope`), length(`scope`) == 1)
        self$`scope` <- `scope`
      }
    },
    toJSON = function() {
      OauthAccessTokenRequestRefreshAllOfObject <- list()
      if (!is.null(self$`refresh_token`)) {
        OauthAccessTokenRequestRefreshAllOfObject[['refresh_token']] <-
          self$`refresh_token`
      }
      if (!is.null(self$`scope`)) {
        OauthAccessTokenRequestRefreshAllOfObject[['scope']] <-
          self$`scope`
      }

      OauthAccessTokenRequestRefreshAllOfObject
    },
    fromJSON = function(OauthAccessTokenRequestRefreshAllOfJson) {
      OauthAccessTokenRequestRefreshAllOfObject <- jsonlite::fromJSON(OauthAccessTokenRequestRefreshAllOfJson)
      if (!is.null(OauthAccessTokenRequestRefreshAllOfObject$`refresh_token`)) {
        self$`refresh_token` <- OauthAccessTokenRequestRefreshAllOfObject$`refresh_token`
      }
      if (!is.null(OauthAccessTokenRequestRefreshAllOfObject$`scope`)) {
        self$`scope` <- OauthAccessTokenRequestRefreshAllOfObject$`scope`
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`refresh_token`)) {
        sprintf(
        '"refresh_token":
          "%s"
                ',
        self$`refresh_token`
        )},
        if (!is.null(self$`scope`)) {
        sprintf(
        '"scope":
          "%s"
                ',
        self$`scope`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(OauthAccessTokenRequestRefreshAllOfJson) {
      OauthAccessTokenRequestRefreshAllOfObject <- jsonlite::fromJSON(OauthAccessTokenRequestRefreshAllOfJson)
      self$`refresh_token` <- OauthAccessTokenRequestRefreshAllOfObject$`refresh_token`
      self$`scope` <- OauthAccessTokenRequestRefreshAllOfObject$`scope`
      self
    }
  )
)
