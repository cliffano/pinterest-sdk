# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title BoardUpdate
#'
#' @description BoardUpdate Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field name  character [optional]
#'
#' @field description  character [optional]
#'
#' @field privacy  character [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BoardUpdate <- R6::R6Class(
  'BoardUpdate',
  public = list(
    `name` = NULL,
    `description` = NULL,
    `privacy` = NULL,
    initialize = function(
        `name`=NULL, `description`=NULL, `privacy`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!is.null(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!is.null(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!is.null(`privacy`)) {
        stopifnot(is.character(`privacy`), length(`privacy`) == 1)
        self$`privacy` <- `privacy`
      }
    },
    toJSON = function() {
      BoardUpdateObject <- list()
      if (!is.null(self$`name`)) {
        BoardUpdateObject[['name']] <-
          self$`name`
      }
      if (!is.null(self$`description`)) {
        BoardUpdateObject[['description']] <-
          self$`description`
      }
      if (!is.null(self$`privacy`)) {
        BoardUpdateObject[['privacy']] <-
          self$`privacy`
      }

      BoardUpdateObject
    },
    fromJSON = function(BoardUpdateJson) {
      BoardUpdateObject <- jsonlite::fromJSON(BoardUpdateJson)
      if (!is.null(BoardUpdateObject$`name`)) {
        self$`name` <- BoardUpdateObject$`name`
      }
      if (!is.null(BoardUpdateObject$`description`)) {
        self$`description` <- BoardUpdateObject$`description`
      }
      if (!is.null(BoardUpdateObject$`privacy`)) {
        self$`privacy` <- BoardUpdateObject$`privacy`
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`name`)) {
        sprintf(
        '"name":
          "%s"
                ',
        self$`name`
        )},
        if (!is.null(self$`description`)) {
        sprintf(
        '"description":
          "%s"
                ',
        self$`description`
        )},
        if (!is.null(self$`privacy`)) {
        sprintf(
        '"privacy":
          "%s"
                ',
        self$`privacy`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(BoardUpdateJson) {
      BoardUpdateObject <- jsonlite::fromJSON(BoardUpdateJson)
      self$`name` <- BoardUpdateObject$`name`
      self$`description` <- BoardUpdateObject$`description`
      self$`privacy` <- BoardUpdateObject$`privacy`
      self
    }
  )
)