#' Pinterest REST API
#'
#' Pinterest's REST API
#'
#' The version of the OpenAPI document: 5.12.0
#' Contact: blah+oapicf@cliffano.com
#' Generated by: https://openapi-generator.tech
#'
#' @docType class
#' @title Terms operations
#' @description TermsApi
#' @format An \code{R6Class} generator object
#' @field api_client Handles the client-server communication.
#'
#' @section Methods:
#' \describe{
#' \strong{ TermsRelatedList } \emph{ List related terms }
#' Get a list of terms logically related to each input term. <p/> Example: the term 'workout' would list related terms like 'one song workout', 'yoga workout', 'workout motivation', etc.
#'
#' \itemize{
#' \item \emph{ @param } terms list( character )
#' \item \emph{ @returnType } \link{RelatedTerms} \cr
#'
#'
#' \item status code : 200 | Success
#'
#' \item return type : RelatedTerms
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 400 | Invalid terms related parameters.
#'
#' \item return type : Error
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 0 | Unexpected error
#'
#' \item return type : Error
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' }
#'
#' \strong{ TermsSuggestedList } \emph{ List suggested terms }
#' Get popular search terms that begin with your input term. <p/> Example: 'sport' would return popular terms like 'sports bar' and 'sportswear', but not 'motor sports' since the phrase does not begin with the given term.
#'
#' \itemize{
#' \item \emph{ @param } term character
#' \item \emph{ @param } limit integer
#'
#'
#' \item status code : 200 | Success
#'
#' \item return type : array[character]
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 400 | Invalid terms suggested parameters.
#'
#' \item return type : Error
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 0 | Unexpected error
#'
#' \item return type : Error
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' }
#'
#' }
#'
#'
#' @examples
#' \dontrun{
#' ####################  TermsRelatedList  ####################
#'
#' library(openapi)
#' var_terms <- c("inner_example") # array[character] | List of input terms.
#'
#' #List related terms
#' api_instance <- TermsApi$new()
#'
#' # Configure OAuth2 access token for authorization: pinterest_oauth2
#' api_instance$api_client$access_token <- Sys.getenv("ACCESS_TOKEN")
#'
#' # to save the result into a file, simply add the optional `data_file` parameter, e.g.
#' # result <- api_instance$TermsRelatedList(var_termsdata_file = "result.txt")
#' result <- api_instance$TermsRelatedList(var_terms)
#' dput(result)
#'
#'
#' ####################  TermsSuggestedList  ####################
#'
#' library(openapi)
#' var_term <- "sports" # character | Input term.
#' var_limit <- 4 # integer | Max suggested terms to return. (Optional)
#'
#' #List suggested terms
#' api_instance <- TermsApi$new()
#'
#' # Configure OAuth2 access token for authorization: pinterest_oauth2
#' api_instance$api_client$access_token <- Sys.getenv("ACCESS_TOKEN")
#'
#' # to save the result into a file, simply add the optional `data_file` parameter, e.g.
#' # result <- api_instance$TermsSuggestedList(var_term, limit = var_limitdata_file = "result.txt")
#' result <- api_instance$TermsSuggestedList(var_term, limit = var_limit)
#' dput(result)
#'
#'
#' }
#' @importFrom R6 R6Class
#' @importFrom base64enc base64encode
#' @export
TermsApi <- R6::R6Class(
  "TermsApi",
  public = list(
    api_client = NULL,
    #' Initialize a new TermsApi.
    #'
    #' @description
    #' Initialize a new TermsApi.
    #'
    #' @param api_client An instance of API client.
    #' @export
    initialize = function(api_client) {
      if (!missing(api_client)) {
        self$api_client <- api_client
      } else {
        self$api_client <- ApiClient$new()
      }
    },
    #' List related terms
    #'
    #' @description
    #' List related terms
    #'
    #' @param terms List of input terms.
    #' @param data_file (optional) name of the data file to save the result
    #' @param ... Other optional arguments
    #' @return RelatedTerms
    #' @export
    TermsRelatedList = function(terms, data_file = NULL, ...) {
      local_var_response <- self$TermsRelatedListWithHttpInfo(terms, data_file = data_file, ...)
      if (local_var_response$status_code >= 200 && local_var_response$status_code <= 299) {
        local_var_response$content
      } else if (local_var_response$status_code >= 300 && local_var_response$status_code <= 399) {
        local_var_response
      } else if (local_var_response$status_code >= 400 && local_var_response$status_code <= 499) {
        local_var_response
      } else if (local_var_response$status_code >= 500 && local_var_response$status_code <= 599) {
        local_var_response
      }
    },
    #' List related terms
    #'
    #' @description
    #' List related terms
    #'
    #' @param terms List of input terms.
    #' @param data_file (optional) name of the data file to save the result
    #' @param ... Other optional arguments
    #' @return API response (RelatedTerms) with additional information such as HTTP status code, headers
    #' @export
    TermsRelatedListWithHttpInfo = function(terms, data_file = NULL, ...) {
      args <- list(...)
      query_params <- list()
      header_params <- c()
      form_params <- list()
      file_params <- list()
      local_var_body <- NULL
      oauth_scopes <- NULL
      is_oauth <- FALSE

      if (missing(`terms`)) {
        stop("Missing required parameter `terms`.")
      }


      # explore
      for (query_item in `terms`) {
        query_params[["terms"]] <- c(query_params[["terms"]], list(`terms` = query_item))
      }

      local_var_url_path <- "/terms/related"
      # OAuth-related settings
      is_oauth <- TRUE
      oauth_scopes <- "ads:read"

      # The Accept request HTTP header
      local_var_accepts <- list("application/json")

      # The Content-Type representation header
      local_var_content_types <- list()

      local_var_resp <- self$api_client$CallApi(url = paste0(self$api_client$base_path, local_var_url_path),
                                 method = "GET",
                                 query_params = query_params,
                                 header_params = header_params,
                                 form_params = form_params,
                                 file_params = file_params,
                                 accepts = local_var_accepts,
                                 content_types = local_var_content_types,
                                 body = local_var_body,
                                 is_oauth = is_oauth,
                                 oauth_scopes = oauth_scopes,
                                 ...)

      if (local_var_resp$status_code >= 200 && local_var_resp$status_code <= 299) {
        # save response in a file
        if (!is.null(data_file)) {
          write(local_var_resp$response, data_file)
        }

        deserialized_resp_obj <- tryCatch(
          self$api_client$deserialize(local_var_resp$response_as_text(), "RelatedTerms", loadNamespace("openapi")),
          error = function(e) {
            stop("Failed to deserialize response")
          }
        )
        local_var_resp$content <- deserialized_resp_obj
        local_var_resp
      } else if (local_var_resp$status_code >= 300 && local_var_resp$status_code <= 399) {
        ApiResponse$new(paste("Server returned ", local_var_resp$status_code, " response status code."), local_var_resp)
      } else if (local_var_resp$status_code >= 400 && local_var_resp$status_code <= 499) {
        ApiResponse$new("API client error", local_var_resp)
      } else if (local_var_resp$status_code >= 500 && local_var_resp$status_code <= 599) {
        if (is.null(local_var_resp$response) || local_var_resp$response == "") {
          local_var_resp$response <- "API server error"
        }
        local_var_resp
      }
    },
    #' List suggested terms
    #'
    #' @description
    #' List suggested terms
    #'
    #' @param term Input term.
    #' @param limit (optional) Max suggested terms to return. (default value: 4)
    #' @param data_file (optional) name of the data file to save the result
    #' @param ... Other optional arguments
    #' @return array[character]
    #' @export
    TermsSuggestedList = function(term, limit = 4, data_file = NULL, ...) {
      local_var_response <- self$TermsSuggestedListWithHttpInfo(term, limit, data_file = data_file, ...)
      if (local_var_response$status_code >= 200 && local_var_response$status_code <= 299) {
        local_var_response$content
      } else if (local_var_response$status_code >= 300 && local_var_response$status_code <= 399) {
        local_var_response
      } else if (local_var_response$status_code >= 400 && local_var_response$status_code <= 499) {
        local_var_response
      } else if (local_var_response$status_code >= 500 && local_var_response$status_code <= 599) {
        local_var_response
      }
    },
    #' List suggested terms
    #'
    #' @description
    #' List suggested terms
    #'
    #' @param term Input term.
    #' @param limit (optional) Max suggested terms to return. (default value: 4)
    #' @param data_file (optional) name of the data file to save the result
    #' @param ... Other optional arguments
    #' @return API response (array[character]) with additional information such as HTTP status code, headers
    #' @export
    TermsSuggestedListWithHttpInfo = function(term, limit = 4, data_file = NULL, ...) {
      args <- list(...)
      query_params <- list()
      header_params <- c()
      form_params <- list()
      file_params <- list()
      local_var_body <- NULL
      oauth_scopes <- NULL
      is_oauth <- FALSE

      if (missing(`term`)) {
        stop("Missing required parameter `term`.")
      }


      if (`limit` > 10) {
        stop("Invalid value for `limit` when calling TermsApi$TermsSuggestedList, must be smaller than or equal to 10.")
      }
      if (`limit` < 1) {
        stop("Invalid value for `limit` when calling TermsApi$TermsSuggestedList, must be bigger than or equal to 1.")
      }

      query_params[["term"]] <- `term`

      query_params[["limit"]] <- `limit`

      local_var_url_path <- "/terms/suggested"
      # OAuth-related settings
      is_oauth <- TRUE
      oauth_scopes <- "ads:read"

      # The Accept request HTTP header
      local_var_accepts <- list("application/json")

      # The Content-Type representation header
      local_var_content_types <- list()

      local_var_resp <- self$api_client$CallApi(url = paste0(self$api_client$base_path, local_var_url_path),
                                 method = "GET",
                                 query_params = query_params,
                                 header_params = header_params,
                                 form_params = form_params,
                                 file_params = file_params,
                                 accepts = local_var_accepts,
                                 content_types = local_var_content_types,
                                 body = local_var_body,
                                 is_oauth = is_oauth,
                                 oauth_scopes = oauth_scopes,
                                 ...)

      if (local_var_resp$status_code >= 200 && local_var_resp$status_code <= 299) {
        # save response in a file
        if (!is.null(data_file)) {
          write(local_var_resp$response, data_file)
        }

        deserialized_resp_obj <- tryCatch(
          self$api_client$deserialize(local_var_resp$response_as_text(), "array[character]", loadNamespace("openapi")),
          error = function(e) {
            stop("Failed to deserialize response")
          }
        )
        local_var_resp$content <- deserialized_resp_obj
        local_var_resp
      } else if (local_var_resp$status_code >= 300 && local_var_resp$status_code <= 399) {
        ApiResponse$new(paste("Server returned ", local_var_resp$status_code, " response status code."), local_var_resp)
      } else if (local_var_resp$status_code >= 400 && local_var_resp$status_code <= 499) {
        ApiResponse$new("API client error", local_var_resp)
      } else if (local_var_resp$status_code >= 500 && local_var_resp$status_code <= 599) {
        if (is.null(local_var_resp$response) || local_var_resp$response == "") {
          local_var_resp$response <- "API server error"
        }
        local_var_resp
      }
    }
  )
)
