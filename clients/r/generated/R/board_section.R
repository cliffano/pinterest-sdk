# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title BoardSection
#'
#' @description BoardSection Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field id  character [optional]
#'
#' @field name  character [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BoardSection <- R6::R6Class(
  'BoardSection',
  public = list(
    `id` = NULL,
    `name` = NULL,
    initialize = function(
        `id`=NULL, `name`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!is.null(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!is.null(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
    },
    toJSON = function() {
      BoardSectionObject <- list()
      if (!is.null(self$`id`)) {
        BoardSectionObject[['id']] <-
          self$`id`
      }
      if (!is.null(self$`name`)) {
        BoardSectionObject[['name']] <-
          self$`name`
      }

      BoardSectionObject
    },
    fromJSON = function(BoardSectionJson) {
      BoardSectionObject <- jsonlite::fromJSON(BoardSectionJson)
      if (!is.null(BoardSectionObject$`id`)) {
        self$`id` <- BoardSectionObject$`id`
      }
      if (!is.null(BoardSectionObject$`name`)) {
        self$`name` <- BoardSectionObject$`name`
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`id`)) {
        sprintf(
        '"id":
          "%s"
                ',
        self$`id`
        )},
        if (!is.null(self$`name`)) {
        sprintf(
        '"name":
          "%s"
                ',
        self$`name`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(BoardSectionJson) {
      BoardSectionObject <- jsonlite::fromJSON(BoardSectionJson)
      self$`id` <- BoardSectionObject$`id`
      self$`name` <- BoardSectionObject$`name`
      self
    }
  )
)
