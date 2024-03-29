#' Create a new CatalogsHotelFeedsUpdateRequest
#'
#' @description
#' Request object for updating a feed.
#'
#' @docType class
#' @title CatalogsHotelFeedsUpdateRequest
#' @description CatalogsHotelFeedsUpdateRequest Class
#' @format An \code{R6Class} generator object
#' @field default_currency  \link{NullableCurrency} [optional]
#' @field name A human-friendly name associated to a given feed. character [optional]
#' @field format  \link{CatalogsFormat} [optional]
#' @field credentials  \link{CatalogsFeedCredentials} [optional]
#' @field location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. character [optional]
#' @field preferred_processing_schedule  \link{CatalogsFeedProcessingSchedule} [optional]
#' @field status  \link{CatalogsStatus} [optional]
#' @field catalog_type  \link{CatalogsType}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CatalogsHotelFeedsUpdateRequest <- R6::R6Class(
  "CatalogsHotelFeedsUpdateRequest",
  public = list(
    `default_currency` = NULL,
    `name` = NULL,
    `format` = NULL,
    `credentials` = NULL,
    `location` = NULL,
    `preferred_processing_schedule` = NULL,
    `status` = NULL,
    `catalog_type` = NULL,
    #' Initialize a new CatalogsHotelFeedsUpdateRequest class.
    #'
    #' @description
    #' Initialize a new CatalogsHotelFeedsUpdateRequest class.
    #'
    #' @param catalog_type catalog_type
    #' @param default_currency default_currency
    #' @param name A human-friendly name associated to a given feed.
    #' @param format format
    #' @param credentials credentials
    #' @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    #' @param preferred_processing_schedule preferred_processing_schedule
    #' @param status status
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`catalog_type`, `default_currency` = NULL, `name` = NULL, `format` = NULL, `credentials` = NULL, `location` = NULL, `preferred_processing_schedule` = NULL, `status` = NULL, ...) {
      if (!missing(`catalog_type`)) {
        if (!(`catalog_type` %in% c())) {
          stop(paste("Error! \"", `catalog_type`, "\" cannot be assigned to `catalog_type`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`catalog_type`))
        self$`catalog_type` <- `catalog_type`
      }
      if (!is.null(`default_currency`)) {
        if (!(`default_currency` %in% c())) {
          stop(paste("Error! \"", `default_currency`, "\" cannot be assigned to `default_currency`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`default_currency`))
        self$`default_currency` <- `default_currency`
      }
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`format`)) {
        if (!(`format` %in% c())) {
          stop(paste("Error! \"", `format`, "\" cannot be assigned to `format`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`format`))
        self$`format` <- `format`
      }
      if (!is.null(`credentials`)) {
        stopifnot(R6::is.R6(`credentials`))
        self$`credentials` <- `credentials`
      }
      if (!is.null(`location`)) {
        if (!(is.character(`location`) && length(`location`) == 1)) {
          stop(paste("Error! Invalid data for `location`. Must be a string:", `location`))
        }
        self$`location` <- `location`
      }
      if (!is.null(`preferred_processing_schedule`)) {
        stopifnot(R6::is.R6(`preferred_processing_schedule`))
        self$`preferred_processing_schedule` <- `preferred_processing_schedule`
      }
      if (!is.null(`status`)) {
        if (!(`status` %in% c())) {
          stop(paste("Error! \"", `status`, "\" cannot be assigned to `status`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`status`))
        self$`status` <- `status`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return CatalogsHotelFeedsUpdateRequest in JSON format
    #' @export
    toJSON = function() {
      CatalogsHotelFeedsUpdateRequestObject <- list()
      if (!is.null(self$`default_currency`)) {
        CatalogsHotelFeedsUpdateRequestObject[["default_currency"]] <-
          self$`default_currency`$toJSON()
      }
      if (!is.null(self$`name`)) {
        CatalogsHotelFeedsUpdateRequestObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`format`)) {
        CatalogsHotelFeedsUpdateRequestObject[["format"]] <-
          self$`format`$toJSON()
      }
      if (!is.null(self$`credentials`)) {
        CatalogsHotelFeedsUpdateRequestObject[["credentials"]] <-
          self$`credentials`$toJSON()
      }
      if (!is.null(self$`location`)) {
        CatalogsHotelFeedsUpdateRequestObject[["location"]] <-
          self$`location`
      }
      if (!is.null(self$`preferred_processing_schedule`)) {
        CatalogsHotelFeedsUpdateRequestObject[["preferred_processing_schedule"]] <-
          self$`preferred_processing_schedule`$toJSON()
      }
      if (!is.null(self$`status`)) {
        CatalogsHotelFeedsUpdateRequestObject[["status"]] <-
          self$`status`$toJSON()
      }
      if (!is.null(self$`catalog_type`)) {
        CatalogsHotelFeedsUpdateRequestObject[["catalog_type"]] <-
          self$`catalog_type`$toJSON()
      }
      CatalogsHotelFeedsUpdateRequestObject
    },
    #' Deserialize JSON string into an instance of CatalogsHotelFeedsUpdateRequest
    #'
    #' @description
    #' Deserialize JSON string into an instance of CatalogsHotelFeedsUpdateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of CatalogsHotelFeedsUpdateRequest
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`default_currency`)) {
        `default_currency_object` <- NullableCurrency$new()
        `default_currency_object`$fromJSON(jsonlite::toJSON(this_object$`default_currency`, auto_unbox = TRUE, digits = NA))
        self$`default_currency` <- `default_currency_object`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`format`)) {
        `format_object` <- CatalogsFormat$new()
        `format_object`$fromJSON(jsonlite::toJSON(this_object$`format`, auto_unbox = TRUE, digits = NA))
        self$`format` <- `format_object`
      }
      if (!is.null(this_object$`credentials`)) {
        `credentials_object` <- CatalogsFeedCredentials$new()
        `credentials_object`$fromJSON(jsonlite::toJSON(this_object$`credentials`, auto_unbox = TRUE, digits = NA))
        self$`credentials` <- `credentials_object`
      }
      if (!is.null(this_object$`location`)) {
        self$`location` <- this_object$`location`
      }
      if (!is.null(this_object$`preferred_processing_schedule`)) {
        `preferred_processing_schedule_object` <- CatalogsFeedProcessingSchedule$new()
        `preferred_processing_schedule_object`$fromJSON(jsonlite::toJSON(this_object$`preferred_processing_schedule`, auto_unbox = TRUE, digits = NA))
        self$`preferred_processing_schedule` <- `preferred_processing_schedule_object`
      }
      if (!is.null(this_object$`status`)) {
        `status_object` <- CatalogsStatus$new()
        `status_object`$fromJSON(jsonlite::toJSON(this_object$`status`, auto_unbox = TRUE, digits = NA))
        self$`status` <- `status_object`
      }
      if (!is.null(this_object$`catalog_type`)) {
        `catalog_type_object` <- CatalogsType$new()
        `catalog_type_object`$fromJSON(jsonlite::toJSON(this_object$`catalog_type`, auto_unbox = TRUE, digits = NA))
        self$`catalog_type` <- `catalog_type_object`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return CatalogsHotelFeedsUpdateRequest in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`default_currency`)) {
          sprintf(
          '"default_currency":
          %s
          ',
          jsonlite::toJSON(self$`default_currency`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        },
        if (!is.null(self$`name`)) {
          sprintf(
          '"name":
            "%s"
                    ',
          self$`name`
          )
        },
        if (!is.null(self$`format`)) {
          sprintf(
          '"format":
          %s
          ',
          jsonlite::toJSON(self$`format`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        },
        if (!is.null(self$`credentials`)) {
          sprintf(
          '"credentials":
          %s
          ',
          jsonlite::toJSON(self$`credentials`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        },
        if (!is.null(self$`location`)) {
          sprintf(
          '"location":
            "%s"
                    ',
          self$`location`
          )
        },
        if (!is.null(self$`preferred_processing_schedule`)) {
          sprintf(
          '"preferred_processing_schedule":
          %s
          ',
          jsonlite::toJSON(self$`preferred_processing_schedule`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        },
        if (!is.null(self$`status`)) {
          sprintf(
          '"status":
          %s
          ',
          jsonlite::toJSON(self$`status`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        },
        if (!is.null(self$`catalog_type`)) {
          sprintf(
          '"catalog_type":
          %s
          ',
          jsonlite::toJSON(self$`catalog_type`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of CatalogsHotelFeedsUpdateRequest
    #'
    #' @description
    #' Deserialize JSON string into an instance of CatalogsHotelFeedsUpdateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of CatalogsHotelFeedsUpdateRequest
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`default_currency` <- NullableCurrency$new()$fromJSON(jsonlite::toJSON(this_object$`default_currency`, auto_unbox = TRUE, digits = NA))
      self$`name` <- this_object$`name`
      self$`format` <- CatalogsFormat$new()$fromJSON(jsonlite::toJSON(this_object$`format`, auto_unbox = TRUE, digits = NA))
      self$`credentials` <- CatalogsFeedCredentials$new()$fromJSON(jsonlite::toJSON(this_object$`credentials`, auto_unbox = TRUE, digits = NA))
      self$`location` <- this_object$`location`
      self$`preferred_processing_schedule` <- CatalogsFeedProcessingSchedule$new()$fromJSON(jsonlite::toJSON(this_object$`preferred_processing_schedule`, auto_unbox = TRUE, digits = NA))
      self$`status` <- CatalogsStatus$new()$fromJSON(jsonlite::toJSON(this_object$`status`, auto_unbox = TRUE, digits = NA))
      self$`catalog_type` <- CatalogsType$new()$fromJSON(jsonlite::toJSON(this_object$`catalog_type`, auto_unbox = TRUE, digits = NA))
      self
    },
    #' Validate JSON input with respect to CatalogsHotelFeedsUpdateRequest
    #'
    #' @description
    #' Validate JSON input with respect to CatalogsHotelFeedsUpdateRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    #' @export
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `catalog_type`
      if (!is.null(input_json$`catalog_type`)) {
        stopifnot(R6::is.R6(input_json$`catalog_type`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CatalogsHotelFeedsUpdateRequest: the required field `catalog_type` is missing."))
      }
    },
    #' To string (JSON format)
    #'
    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CatalogsHotelFeedsUpdateRequest
    #' @export
    toString = function() {
      self$toJSONString()
    },
    #' Return true if the values in all fields are valid.
    #'
    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    #' @export
    isValid = function() {
      if (!str_detect(self$`location`, "^(http|https|ftp|sftp):/")) {
        return(FALSE)
      }

      # check if the required `catalog_type` is null
      if (is.null(self$`catalog_type`)) {
        return(FALSE)
      }

      TRUE
    },
    #' Return a list of invalid fields (if any).
    #'
    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    #' @export
    getInvalidFields = function() {
      invalid_fields <- list()
      if (!str_detect(self$`location`, "^(http|https|ftp|sftp):/")) {
        invalid_fields["location"] <- "Invalid value for `location`, must conform to the pattern ^(http|https|ftp|sftp):/."
      }

      # check if the required `catalog_type` is null
      if (is.null(self$`catalog_type`)) {
        invalid_fields["catalog_type"] <- "Non-nullable required field `catalog_type` cannot be null."
      }

      invalid_fields
    },
    #' Print the object
    #'
    #' @description
    #' Print the object
    #'
    #' @export
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# CatalogsHotelFeedsUpdateRequest$unlock()
#
## Below is an example to define the print function
# CatalogsHotelFeedsUpdateRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CatalogsHotelFeedsUpdateRequest$lock()

