#' Create a new CatalogsHotelFeedsCreateRequest
#'
#' @description
#' Request object for creating a feed. Please, be aware that \"default_country\" and \"default_locale\" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
#'
#' @docType class
#' @title CatalogsHotelFeedsCreateRequest
#' @description CatalogsHotelFeedsCreateRequest Class
#' @format An \code{R6Class} generator object
#' @field default_currency  \link{NullableCurrency} [optional]
#' @field name A human-friendly name associated to a given feed. character
#' @field format  \link{CatalogsFormat}
#' @field default_locale  \link{CatalogsFeedsCreateRequestDefaultLocale}
#' @field credentials  \link{CatalogsFeedCredentials} [optional]
#' @field location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. character
#' @field preferred_processing_schedule  \link{CatalogsFeedProcessingSchedule} [optional]
#' @field catalog_type  \link{CatalogsType}
#' @field catalog_id Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CatalogsHotelFeedsCreateRequest <- R6::R6Class(
  "CatalogsHotelFeedsCreateRequest",
  public = list(
    `default_currency` = NULL,
    `name` = NULL,
    `format` = NULL,
    `default_locale` = NULL,
    `credentials` = NULL,
    `location` = NULL,
    `preferred_processing_schedule` = NULL,
    `catalog_type` = NULL,
    `catalog_id` = NULL,
    #' Initialize a new CatalogsHotelFeedsCreateRequest class.
    #'
    #' @description
    #' Initialize a new CatalogsHotelFeedsCreateRequest class.
    #'
    #' @param name A human-friendly name associated to a given feed.
    #' @param format format
    #' @param default_locale default_locale
    #' @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    #' @param catalog_type catalog_type
    #' @param default_currency default_currency
    #' @param credentials credentials
    #' @param preferred_processing_schedule preferred_processing_schedule
    #' @param catalog_id Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future.
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`name`, `format`, `default_locale`, `location`, `catalog_type`, `default_currency` = NULL, `credentials` = NULL, `preferred_processing_schedule` = NULL, `catalog_id` = NULL, ...) {
      if (!missing(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!missing(`format`)) {
        if (!(`format` %in% c())) {
          stop(paste("Error! \"", `format`, "\" cannot be assigned to `format`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`format`))
        self$`format` <- `format`
      }
      if (!missing(`default_locale`)) {
        stopifnot(R6::is.R6(`default_locale`))
        self$`default_locale` <- `default_locale`
      }
      if (!missing(`location`)) {
        if (!(is.character(`location`) && length(`location`) == 1)) {
          stop(paste("Error! Invalid data for `location`. Must be a string:", `location`))
        }
        self$`location` <- `location`
      }
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
      if (!is.null(`credentials`)) {
        stopifnot(R6::is.R6(`credentials`))
        self$`credentials` <- `credentials`
      }
      if (!is.null(`preferred_processing_schedule`)) {
        stopifnot(R6::is.R6(`preferred_processing_schedule`))
        self$`preferred_processing_schedule` <- `preferred_processing_schedule`
      }
      if (!is.null(`catalog_id`)) {
        if (!(is.character(`catalog_id`) && length(`catalog_id`) == 1)) {
          stop(paste("Error! Invalid data for `catalog_id`. Must be a string:", `catalog_id`))
        }
        self$`catalog_id` <- `catalog_id`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return CatalogsHotelFeedsCreateRequest in JSON format
    #' @export
    toJSON = function() {
      CatalogsHotelFeedsCreateRequestObject <- list()
      if (!is.null(self$`default_currency`)) {
        CatalogsHotelFeedsCreateRequestObject[["default_currency"]] <-
          self$`default_currency`$toJSON()
      }
      if (!is.null(self$`name`)) {
        CatalogsHotelFeedsCreateRequestObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`format`)) {
        CatalogsHotelFeedsCreateRequestObject[["format"]] <-
          self$`format`$toJSON()
      }
      if (!is.null(self$`default_locale`)) {
        CatalogsHotelFeedsCreateRequestObject[["default_locale"]] <-
          self$`default_locale`$toJSON()
      }
      if (!is.null(self$`credentials`)) {
        CatalogsHotelFeedsCreateRequestObject[["credentials"]] <-
          self$`credentials`$toJSON()
      }
      if (!is.null(self$`location`)) {
        CatalogsHotelFeedsCreateRequestObject[["location"]] <-
          self$`location`
      }
      if (!is.null(self$`preferred_processing_schedule`)) {
        CatalogsHotelFeedsCreateRequestObject[["preferred_processing_schedule"]] <-
          self$`preferred_processing_schedule`$toJSON()
      }
      if (!is.null(self$`catalog_type`)) {
        CatalogsHotelFeedsCreateRequestObject[["catalog_type"]] <-
          self$`catalog_type`$toJSON()
      }
      if (!is.null(self$`catalog_id`)) {
        CatalogsHotelFeedsCreateRequestObject[["catalog_id"]] <-
          self$`catalog_id`
      }
      CatalogsHotelFeedsCreateRequestObject
    },
    #' Deserialize JSON string into an instance of CatalogsHotelFeedsCreateRequest
    #'
    #' @description
    #' Deserialize JSON string into an instance of CatalogsHotelFeedsCreateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of CatalogsHotelFeedsCreateRequest
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
      if (!is.null(this_object$`default_locale`)) {
        `default_locale_object` <- CatalogsFeedsCreateRequestDefaultLocale$new()
        `default_locale_object`$fromJSON(jsonlite::toJSON(this_object$`default_locale`, auto_unbox = TRUE, digits = NA))
        self$`default_locale` <- `default_locale_object`
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
      if (!is.null(this_object$`catalog_type`)) {
        `catalog_type_object` <- CatalogsType$new()
        `catalog_type_object`$fromJSON(jsonlite::toJSON(this_object$`catalog_type`, auto_unbox = TRUE, digits = NA))
        self$`catalog_type` <- `catalog_type_object`
      }
      if (!is.null(this_object$`catalog_id`)) {
        self$`catalog_id` <- this_object$`catalog_id`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return CatalogsHotelFeedsCreateRequest in JSON format
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
        if (!is.null(self$`default_locale`)) {
          sprintf(
          '"default_locale":
          %s
          ',
          jsonlite::toJSON(self$`default_locale`$toJSON(), auto_unbox = TRUE, digits = NA)
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
        if (!is.null(self$`catalog_type`)) {
          sprintf(
          '"catalog_type":
          %s
          ',
          jsonlite::toJSON(self$`catalog_type`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        },
        if (!is.null(self$`catalog_id`)) {
          sprintf(
          '"catalog_id":
            "%s"
                    ',
          self$`catalog_id`
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of CatalogsHotelFeedsCreateRequest
    #'
    #' @description
    #' Deserialize JSON string into an instance of CatalogsHotelFeedsCreateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of CatalogsHotelFeedsCreateRequest
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`default_currency` <- NullableCurrency$new()$fromJSON(jsonlite::toJSON(this_object$`default_currency`, auto_unbox = TRUE, digits = NA))
      self$`name` <- this_object$`name`
      self$`format` <- CatalogsFormat$new()$fromJSON(jsonlite::toJSON(this_object$`format`, auto_unbox = TRUE, digits = NA))
      self$`default_locale` <- CatalogsFeedsCreateRequestDefaultLocale$new()$fromJSON(jsonlite::toJSON(this_object$`default_locale`, auto_unbox = TRUE, digits = NA))
      self$`credentials` <- CatalogsFeedCredentials$new()$fromJSON(jsonlite::toJSON(this_object$`credentials`, auto_unbox = TRUE, digits = NA))
      self$`location` <- this_object$`location`
      self$`preferred_processing_schedule` <- CatalogsFeedProcessingSchedule$new()$fromJSON(jsonlite::toJSON(this_object$`preferred_processing_schedule`, auto_unbox = TRUE, digits = NA))
      self$`catalog_type` <- CatalogsType$new()$fromJSON(jsonlite::toJSON(this_object$`catalog_type`, auto_unbox = TRUE, digits = NA))
      self$`catalog_id` <- this_object$`catalog_id`
      self
    },
    #' Validate JSON input with respect to CatalogsHotelFeedsCreateRequest
    #'
    #' @description
    #' Validate JSON input with respect to CatalogsHotelFeedsCreateRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    #' @export
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `name`
      if (!is.null(input_json$`name`)) {
        if (!(is.character(input_json$`name`) && length(input_json$`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", input_json$`name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CatalogsHotelFeedsCreateRequest: the required field `name` is missing."))
      }
      # check the required field `format`
      if (!is.null(input_json$`format`)) {
        stopifnot(R6::is.R6(input_json$`format`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CatalogsHotelFeedsCreateRequest: the required field `format` is missing."))
      }
      # check the required field `default_locale`
      if (!is.null(input_json$`default_locale`)) {
        stopifnot(R6::is.R6(input_json$`default_locale`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CatalogsHotelFeedsCreateRequest: the required field `default_locale` is missing."))
      }
      # check the required field `location`
      if (!is.null(input_json$`location`)) {
        if (!(is.character(input_json$`location`) && length(input_json$`location`) == 1)) {
          stop(paste("Error! Invalid data for `location`. Must be a string:", input_json$`location`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CatalogsHotelFeedsCreateRequest: the required field `location` is missing."))
      }
      # check the required field `catalog_type`
      if (!is.null(input_json$`catalog_type`)) {
        stopifnot(R6::is.R6(input_json$`catalog_type`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CatalogsHotelFeedsCreateRequest: the required field `catalog_type` is missing."))
      }
    },
    #' To string (JSON format)
    #'
    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CatalogsHotelFeedsCreateRequest
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
      # check if the required `name` is null
      if (is.null(self$`name`)) {
        return(FALSE)
      }

      # check if the required `format` is null
      if (is.null(self$`format`)) {
        return(FALSE)
      }

      # check if the required `default_locale` is null
      if (is.null(self$`default_locale`)) {
        return(FALSE)
      }

      # check if the required `location` is null
      if (is.null(self$`location`)) {
        return(FALSE)
      }

      if (!str_detect(self$`location`, "^(http|https|ftp|sftp):/")) {
        return(FALSE)
      }

      # check if the required `catalog_type` is null
      if (is.null(self$`catalog_type`)) {
        return(FALSE)
      }

      if (!str_detect(self$`catalog_id`, "^\\d+$")) {
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
      # check if the required `name` is null
      if (is.null(self$`name`)) {
        invalid_fields["name"] <- "Non-nullable required field `name` cannot be null."
      }

      # check if the required `format` is null
      if (is.null(self$`format`)) {
        invalid_fields["format"] <- "Non-nullable required field `format` cannot be null."
      }

      # check if the required `default_locale` is null
      if (is.null(self$`default_locale`)) {
        invalid_fields["default_locale"] <- "Non-nullable required field `default_locale` cannot be null."
      }

      # check if the required `location` is null
      if (is.null(self$`location`)) {
        invalid_fields["location"] <- "Non-nullable required field `location` cannot be null."
      }

      if (!str_detect(self$`location`, "^(http|https|ftp|sftp):/")) {
        invalid_fields["location"] <- "Invalid value for `location`, must conform to the pattern ^(http|https|ftp|sftp):/."
      }

      # check if the required `catalog_type` is null
      if (is.null(self$`catalog_type`)) {
        invalid_fields["catalog_type"] <- "Non-nullable required field `catalog_type` cannot be null."
      }

      if (!str_detect(self$`catalog_id`, "^\\d+$")) {
        invalid_fields["catalog_id"] <- "Invalid value for `catalog_id`, must conform to the pattern ^\\d+$."
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
# CatalogsHotelFeedsCreateRequest$unlock()
#
## Below is an example to define the print function
# CatalogsHotelFeedsCreateRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CatalogsHotelFeedsCreateRequest$lock()

