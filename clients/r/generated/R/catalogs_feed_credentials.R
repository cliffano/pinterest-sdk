# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title CatalogsFeedCredentials
#'
#' @description CatalogsFeedCredentials Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field password  character 
#'
#' @field username  character 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CatalogsFeedCredentials <- R6::R6Class(
  'CatalogsFeedCredentials',
  public = list(
    `password` = NULL,
    `username` = NULL,
    initialize = function(
        `password`, `username`, ...
    ) {
      local.optional.var <- list(...)
      if (!missing(`password`)) {
        stopifnot(is.character(`password`), length(`password`) == 1)
        self$`password` <- `password`
      }
      if (!missing(`username`)) {
        stopifnot(is.character(`username`), length(`username`) == 1)
        self$`username` <- `username`
      }
    },
    toJSON = function() {
      CatalogsFeedCredentialsObject <- list()
      if (!is.null(self$`password`)) {
        CatalogsFeedCredentialsObject[['password']] <-
          self$`password`
      }
      if (!is.null(self$`username`)) {
        CatalogsFeedCredentialsObject[['username']] <-
          self$`username`
      }

      CatalogsFeedCredentialsObject
    },
    fromJSON = function(CatalogsFeedCredentialsJson) {
      CatalogsFeedCredentialsObject <- jsonlite::fromJSON(CatalogsFeedCredentialsJson)
      if (!is.null(CatalogsFeedCredentialsObject$`password`)) {
        self$`password` <- CatalogsFeedCredentialsObject$`password`
      }
      if (!is.null(CatalogsFeedCredentialsObject$`username`)) {
        self$`username` <- CatalogsFeedCredentialsObject$`username`
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`password`)) {
        sprintf(
        '"password":
          "%s"
                ',
        self$`password`
        )},
        if (!is.null(self$`username`)) {
        sprintf(
        '"username":
          "%s"
                ',
        self$`username`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(CatalogsFeedCredentialsJson) {
      CatalogsFeedCredentialsObject <- jsonlite::fromJSON(CatalogsFeedCredentialsJson)
      self$`password` <- CatalogsFeedCredentialsObject$`password`
      self$`username` <- CatalogsFeedCredentialsObject$`username`
      self
    }
  )
)
