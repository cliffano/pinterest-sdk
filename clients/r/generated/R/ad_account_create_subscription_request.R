#' Create a new AdAccountCreateSubscriptionRequest
#'
#' @description
#' AdAccountCreateSubscriptionRequest Class
#'
#' @docType class
#' @title AdAccountCreateSubscriptionRequest
#' @description AdAccountCreateSubscriptionRequest Class
#' @format An \code{R6Class} generator object
#' @field webhook_url Standard HTTPS webhook URL. character
#' @field lead_form_id Lead form ID. character [optional]
#' @field partner_access_token Partner access token. Only for clients that requires authentication. We recommend to avoid this param. character [optional]
#' @field partner_refresh_token Partner refresh token. Only for clients that requires authentication. We recommend to avoid this param. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AdAccountCreateSubscriptionRequest <- R6::R6Class(
  "AdAccountCreateSubscriptionRequest",
  public = list(
    `webhook_url` = NULL,
    `lead_form_id` = NULL,
    `partner_access_token` = NULL,
    `partner_refresh_token` = NULL,
    #' Initialize a new AdAccountCreateSubscriptionRequest class.
    #'
    #' @description
    #' Initialize a new AdAccountCreateSubscriptionRequest class.
    #'
    #' @param webhook_url Standard HTTPS webhook URL.
    #' @param lead_form_id Lead form ID.
    #' @param partner_access_token Partner access token. Only for clients that requires authentication. We recommend to avoid this param.
    #' @param partner_refresh_token Partner refresh token. Only for clients that requires authentication. We recommend to avoid this param.
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`webhook_url`, `lead_form_id` = NULL, `partner_access_token` = NULL, `partner_refresh_token` = NULL, ...) {
      if (!missing(`webhook_url`)) {
        if (!(is.character(`webhook_url`) && length(`webhook_url`) == 1)) {
          stop(paste("Error! Invalid data for `webhook_url`. Must be a string:", `webhook_url`))
        }
        self$`webhook_url` <- `webhook_url`
      }
      if (!is.null(`lead_form_id`)) {
        if (!(is.character(`lead_form_id`) && length(`lead_form_id`) == 1)) {
          stop(paste("Error! Invalid data for `lead_form_id`. Must be a string:", `lead_form_id`))
        }
        self$`lead_form_id` <- `lead_form_id`
      }
      if (!is.null(`partner_access_token`)) {
        if (!(is.character(`partner_access_token`) && length(`partner_access_token`) == 1)) {
          stop(paste("Error! Invalid data for `partner_access_token`. Must be a string:", `partner_access_token`))
        }
        self$`partner_access_token` <- `partner_access_token`
      }
      if (!is.null(`partner_refresh_token`)) {
        if (!(is.character(`partner_refresh_token`) && length(`partner_refresh_token`) == 1)) {
          stop(paste("Error! Invalid data for `partner_refresh_token`. Must be a string:", `partner_refresh_token`))
        }
        self$`partner_refresh_token` <- `partner_refresh_token`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return AdAccountCreateSubscriptionRequest in JSON format
    #' @export
    toJSON = function() {
      AdAccountCreateSubscriptionRequestObject <- list()
      if (!is.null(self$`webhook_url`)) {
        AdAccountCreateSubscriptionRequestObject[["webhook_url"]] <-
          self$`webhook_url`
      }
      if (!is.null(self$`lead_form_id`)) {
        AdAccountCreateSubscriptionRequestObject[["lead_form_id"]] <-
          self$`lead_form_id`
      }
      if (!is.null(self$`partner_access_token`)) {
        AdAccountCreateSubscriptionRequestObject[["partner_access_token"]] <-
          self$`partner_access_token`
      }
      if (!is.null(self$`partner_refresh_token`)) {
        AdAccountCreateSubscriptionRequestObject[["partner_refresh_token"]] <-
          self$`partner_refresh_token`
      }
      AdAccountCreateSubscriptionRequestObject
    },
    #' Deserialize JSON string into an instance of AdAccountCreateSubscriptionRequest
    #'
    #' @description
    #' Deserialize JSON string into an instance of AdAccountCreateSubscriptionRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of AdAccountCreateSubscriptionRequest
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`webhook_url`)) {
        self$`webhook_url` <- this_object$`webhook_url`
      }
      if (!is.null(this_object$`lead_form_id`)) {
        self$`lead_form_id` <- this_object$`lead_form_id`
      }
      if (!is.null(this_object$`partner_access_token`)) {
        self$`partner_access_token` <- this_object$`partner_access_token`
      }
      if (!is.null(this_object$`partner_refresh_token`)) {
        self$`partner_refresh_token` <- this_object$`partner_refresh_token`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return AdAccountCreateSubscriptionRequest in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`webhook_url`)) {
          sprintf(
          '"webhook_url":
            "%s"
                    ',
          self$`webhook_url`
          )
        },
        if (!is.null(self$`lead_form_id`)) {
          sprintf(
          '"lead_form_id":
            "%s"
                    ',
          self$`lead_form_id`
          )
        },
        if (!is.null(self$`partner_access_token`)) {
          sprintf(
          '"partner_access_token":
            "%s"
                    ',
          self$`partner_access_token`
          )
        },
        if (!is.null(self$`partner_refresh_token`)) {
          sprintf(
          '"partner_refresh_token":
            "%s"
                    ',
          self$`partner_refresh_token`
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of AdAccountCreateSubscriptionRequest
    #'
    #' @description
    #' Deserialize JSON string into an instance of AdAccountCreateSubscriptionRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of AdAccountCreateSubscriptionRequest
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`webhook_url` <- this_object$`webhook_url`
      self$`lead_form_id` <- this_object$`lead_form_id`
      self$`partner_access_token` <- this_object$`partner_access_token`
      self$`partner_refresh_token` <- this_object$`partner_refresh_token`
      self
    },
    #' Validate JSON input with respect to AdAccountCreateSubscriptionRequest
    #'
    #' @description
    #' Validate JSON input with respect to AdAccountCreateSubscriptionRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    #' @export
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `webhook_url`
      if (!is.null(input_json$`webhook_url`)) {
        if (!(is.character(input_json$`webhook_url`) && length(input_json$`webhook_url`) == 1)) {
          stop(paste("Error! Invalid data for `webhook_url`. Must be a string:", input_json$`webhook_url`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for AdAccountCreateSubscriptionRequest: the required field `webhook_url` is missing."))
      }
    },
    #' To string (JSON format)
    #'
    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AdAccountCreateSubscriptionRequest
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
      # check if the required `webhook_url` is null
      if (is.null(self$`webhook_url`)) {
        return(FALSE)
      }

      if (!str_detect(self$`lead_form_id`, "^\\d+$")) {
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
      # check if the required `webhook_url` is null
      if (is.null(self$`webhook_url`)) {
        invalid_fields["webhook_url"] <- "Non-nullable required field `webhook_url` cannot be null."
      }

      if (!str_detect(self$`lead_form_id`, "^\\d+$")) {
        invalid_fields["lead_form_id"] <- "Invalid value for `lead_form_id`, must conform to the pattern ^\\d+$."
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
# AdAccountCreateSubscriptionRequest$unlock()
#
## Below is an example to define the print function
# AdAccountCreateSubscriptionRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AdAccountCreateSubscriptionRequest$lock()

