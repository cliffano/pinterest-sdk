# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title Pin
#'
#' @description Pin Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field id  character [optional]
#'
#' @field created_at  character [optional]
#'
#' @field link  character [optional]
#'
#' @field title  character [optional]
#'
#' @field description  character [optional]
#'
#' @field alt_text  character [optional]
#'
#' @field board_id  character [optional]
#'
#' @field board_section_id  character [optional]
#'
#' @field board_owner  \link{BoardOwner} [optional]
#'
#' @field media  \link{PinMedia} [optional]
#'
#' @field media_source  \link{PinMediaSource} [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Pin <- R6::R6Class(
  'Pin',
  public = list(
    `id` = NULL,
    `created_at` = NULL,
    `link` = NULL,
    `title` = NULL,
    `description` = NULL,
    `alt_text` = NULL,
    `board_id` = NULL,
    `board_section_id` = NULL,
    `board_owner` = NULL,
    `media` = NULL,
    `media_source` = NULL,
    initialize = function(
        `id`=NULL, `created_at`=NULL, `link`=NULL, `title`=NULL, `description`=NULL, `alt_text`=NULL, `board_id`=NULL, `board_section_id`=NULL, `board_owner`=NULL, `media`=NULL, `media_source`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!is.null(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!is.null(`created_at`)) {
        stopifnot(is.character(`created_at`), length(`created_at`) == 1)
        self$`created_at` <- `created_at`
      }
      if (!is.null(`link`)) {
        stopifnot(is.character(`link`), length(`link`) == 1)
        self$`link` <- `link`
      }
      if (!is.null(`title`)) {
        stopifnot(is.character(`title`), length(`title`) == 1)
        self$`title` <- `title`
      }
      if (!is.null(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!is.null(`alt_text`)) {
        stopifnot(is.character(`alt_text`), length(`alt_text`) == 1)
        self$`alt_text` <- `alt_text`
      }
      if (!is.null(`board_id`)) {
        stopifnot(is.character(`board_id`), length(`board_id`) == 1)
        self$`board_id` <- `board_id`
      }
      if (!is.null(`board_section_id`)) {
        stopifnot(is.character(`board_section_id`), length(`board_section_id`) == 1)
        self$`board_section_id` <- `board_section_id`
      }
      if (!is.null(`board_owner`)) {
        stopifnot(R6::is.R6(`board_owner`))
        self$`board_owner` <- `board_owner`
      }
      if (!is.null(`media`)) {
        stopifnot(R6::is.R6(`media`))
        self$`media` <- `media`
      }
      if (!is.null(`media_source`)) {
        stopifnot(R6::is.R6(`media_source`))
        self$`media_source` <- `media_source`
      }
    },
    toJSON = function() {
      PinObject <- list()
      if (!is.null(self$`id`)) {
        PinObject[['id']] <-
          self$`id`
      }
      if (!is.null(self$`created_at`)) {
        PinObject[['created_at']] <-
          self$`created_at`
      }
      if (!is.null(self$`link`)) {
        PinObject[['link']] <-
          self$`link`
      }
      if (!is.null(self$`title`)) {
        PinObject[['title']] <-
          self$`title`
      }
      if (!is.null(self$`description`)) {
        PinObject[['description']] <-
          self$`description`
      }
      if (!is.null(self$`alt_text`)) {
        PinObject[['alt_text']] <-
          self$`alt_text`
      }
      if (!is.null(self$`board_id`)) {
        PinObject[['board_id']] <-
          self$`board_id`
      }
      if (!is.null(self$`board_section_id`)) {
        PinObject[['board_section_id']] <-
          self$`board_section_id`
      }
      if (!is.null(self$`board_owner`)) {
        PinObject[['board_owner']] <-
          self$`board_owner`$toJSON()
      }
      if (!is.null(self$`media`)) {
        PinObject[['media']] <-
          self$`media`$toJSON()
      }
      if (!is.null(self$`media_source`)) {
        PinObject[['media_source']] <-
          self$`media_source`$toJSON()
      }

      PinObject
    },
    fromJSON = function(PinJson) {
      PinObject <- jsonlite::fromJSON(PinJson)
      if (!is.null(PinObject$`id`)) {
        self$`id` <- PinObject$`id`
      }
      if (!is.null(PinObject$`created_at`)) {
        self$`created_at` <- PinObject$`created_at`
      }
      if (!is.null(PinObject$`link`)) {
        self$`link` <- PinObject$`link`
      }
      if (!is.null(PinObject$`title`)) {
        self$`title` <- PinObject$`title`
      }
      if (!is.null(PinObject$`description`)) {
        self$`description` <- PinObject$`description`
      }
      if (!is.null(PinObject$`alt_text`)) {
        self$`alt_text` <- PinObject$`alt_text`
      }
      if (!is.null(PinObject$`board_id`)) {
        self$`board_id` <- PinObject$`board_id`
      }
      if (!is.null(PinObject$`board_section_id`)) {
        self$`board_section_id` <- PinObject$`board_section_id`
      }
      if (!is.null(PinObject$`board_owner`)) {
        board_ownerObject <- BoardOwner$new()
        board_ownerObject$fromJSON(jsonlite::toJSON(PinObject$board_owner, auto_unbox = TRUE, digits = NA))
        self$`board_owner` <- board_ownerObject
      }
      if (!is.null(PinObject$`media`)) {
        mediaObject <- PinMedia$new()
        mediaObject$fromJSON(jsonlite::toJSON(PinObject$media, auto_unbox = TRUE, digits = NA))
        self$`media` <- mediaObject
      }
      if (!is.null(PinObject$`media_source`)) {
        media_sourceObject <- PinMediaSource$new()
        media_sourceObject$fromJSON(jsonlite::toJSON(PinObject$media_source, auto_unbox = TRUE, digits = NA))
        self$`media_source` <- media_sourceObject
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
        if (!is.null(self$`created_at`)) {
        sprintf(
        '"created_at":
          "%s"
                ',
        self$`created_at`
        )},
        if (!is.null(self$`link`)) {
        sprintf(
        '"link":
          "%s"
                ',
        self$`link`
        )},
        if (!is.null(self$`title`)) {
        sprintf(
        '"title":
          "%s"
                ',
        self$`title`
        )},
        if (!is.null(self$`description`)) {
        sprintf(
        '"description":
          "%s"
                ',
        self$`description`
        )},
        if (!is.null(self$`alt_text`)) {
        sprintf(
        '"alt_text":
          "%s"
                ',
        self$`alt_text`
        )},
        if (!is.null(self$`board_id`)) {
        sprintf(
        '"board_id":
          "%s"
                ',
        self$`board_id`
        )},
        if (!is.null(self$`board_section_id`)) {
        sprintf(
        '"board_section_id":
          "%s"
                ',
        self$`board_section_id`
        )},
        if (!is.null(self$`board_owner`)) {
        sprintf(
        '"board_owner":
        %s
        ',
        jsonlite::toJSON(self$`board_owner`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`media`)) {
        sprintf(
        '"media":
        %s
        ',
        jsonlite::toJSON(self$`media`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`media_source`)) {
        sprintf(
        '"media_source":
        %s
        ',
        jsonlite::toJSON(self$`media_source`$toJSON(), auto_unbox=TRUE, digits = NA)
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(PinJson) {
      PinObject <- jsonlite::fromJSON(PinJson)
      self$`id` <- PinObject$`id`
      self$`created_at` <- PinObject$`created_at`
      self$`link` <- PinObject$`link`
      self$`title` <- PinObject$`title`
      self$`description` <- PinObject$`description`
      self$`alt_text` <- PinObject$`alt_text`
      self$`board_id` <- PinObject$`board_id`
      self$`board_section_id` <- PinObject$`board_section_id`
      self$`board_owner` <- BoardOwner$new()$fromJSON(jsonlite::toJSON(PinObject$board_owner, auto_unbox = TRUE, digits = NA))
      self$`media` <- PinMedia$new()$fromJSON(jsonlite::toJSON(PinObject$media, auto_unbox = TRUE, digits = NA))
      self$`media_source` <- PinMediaSource$new()$fromJSON(jsonlite::toJSON(PinObject$media_source, auto_unbox = TRUE, digits = NA))
      self
    }
  )
)
