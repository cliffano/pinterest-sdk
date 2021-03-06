# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title Pins operations
#' @description openapi.Pins
#' @format An \code{R6Class} generator object
#' @field apiClient Handles the client-server communication.
#'
#' @section Methods:
#' \describe{
#' \strong{ PinsAnalytics } \emph{ Get Pin analytics }
#' Get analytics for a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\&quot;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
#'
#' \itemize{
#' \item \emph{ @param } pin.id character
#' \item \emph{ @param } start.date character
#' \item \emph{ @param } end.date character
#' \item \emph{ @param } metric.types Enum < [IMPRESSION, SAVE, PIN_CLICK, OUTBOUND_CLICK, VIDEO_MRC_VIEW, VIDEO_AVG_WATCH_TIME, VIDEO_V50_WATCH_TIME, QUARTILE_95_PERCENT_VIEW] >
#' \item \emph{ @param } app.types Enum < [ALL, MOBILE, TABLET, WEB] >
#' \item \emph{ @param } split.field Enum < [NO_SPLIT, APP_TYPE] >
#' \item \emph{ @param } ad.account.id character
#' \item \emph{ @returnType } named list( \link{AnalyticsMetricsResponse} ) \cr
#'
#'
#' \item status code : 200 | response
#'
#' \item return type : map(AnalyticsMetricsResponse) 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 403 | Not authorized to access board or Pin.
#'
#' \item return type : Error 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 404 | Pin not found.
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
#' \strong{ PinsCreate } \emph{ Create Pin }
#' Create a Pin on a board or board section owned by the \&quot;operation user_account\&quot;.  Note: If the current \&quot;operation user_account\&quot; (defined by the access token) has access to another user&#39;s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account&#39;s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id&#x3D;12345&amp;...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called &#39;curated content&#39;, please use our &lt;a href&#x3D;&#39;/docs/add-ons/save-button&#39;&gt;Save button&lt;/a&gt; instead. For more tips on creating fresh content for Pinterest, review our &lt;a href&#x3D;&#39;/docs/solutions/content-apps&#39;&gt;Content App Solutions Guide&lt;/a&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
#'
#' \itemize{
#' \item \emph{ @param } pin \link{Pin}
#' \item \emph{ @returnType } \link{Pin} \cr
#'
#'
#' \item status code : 201 | Successful pin creation.
#'
#' \item return type : Pin 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 400 | Invalid Pin parameters response
#'
#' \item return type : Error 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 403 | The Pin&#39;s image is too small, too large or is broken
#'
#' \item return type : Error 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 404 | Board or section not found
#'
#' \item return type : Error 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 429 | This request exceeded a rate limit. This can happen if the client exceeds one of the published rate limits or if multiple write operations are applied to an object within a short time window.
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
#' \strong{ PinsDelete } \emph{ Delete Pin }
#' Delete a Pins owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
#'
#' \itemize{
#' \item \emph{ @param } pin.id character
#'
#'
#' \item status code : 204 | Successfully deleted Pin
#'
#'
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 403 | Not authorized to access board or Pin.
#'
#' \item return type : Error 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 404 | Pin not found.
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
#' \strong{ PinsGet } \emph{ Get Pin }
#' Get a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
#'
#' \itemize{
#' \item \emph{ @param } pin.id character
#' \item \emph{ @param } ad.account.id character
#' \item \emph{ @returnType } \link{Pin} \cr
#'
#'
#' \item status code : 200 | response
#'
#' \item return type : Pin 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 403 | Not authorized to access board or Pin.
#'
#' \item return type : Error 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' \item status code : 404 | Pin not found.
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
#' ####################  PinsAnalytics  ####################
#'
#' library(openapi)
#' var.pin.id <- 'pin.id_example' # character | Unique identifier of a Pin.
#' var.start.date <- 'start.date_example' # character | Metric report start date (UTC). Format: YYYY-MM-DD
#' var.end.date <- 'end.date_example' # character | Metric report end date (UTC). Format: YYYY-MM-DD
#' var.metric.types <- ['metric.types_example'] # array[character] | Pin metric types to get data for, default is all.
#' var.app.types <- 'ALL' # character | Apps or devices to get data for, default is all.
#' var.split.field <- 'NO_SPLIT' # character | How to split the data into groups. Not including this param means data won't be split.
#' var.ad.account.id <- 'ad.account.id_example' # character | Unique identifier of an ad account.
#'
#' #Get Pin analytics
#' api.instance <- PinsApi$new()
#'
#' # Configure OAuth2 access token for authorization: pinterest_oauth2
#' api.instance$apiClient$accessToken <- 'TODO_YOUR_ACCESS_TOKEN';
#'
#' result <- api.instance$PinsAnalytics(var.pin.id, var.start.date, var.end.date, var.metric.types, app.types=var.app.types, split.field=var.split.field, ad.account.id=var.ad.account.id)
#'
#'
#' ####################  PinsCreate  ####################
#'
#' library(openapi)
#' var.pin <- Pin$new() # Pin | Create a new Pin.
#'
#' #Create Pin
#' api.instance <- PinsApi$new()
#'
#' # Configure OAuth2 access token for authorization: pinterest_oauth2
#' api.instance$apiClient$accessToken <- 'TODO_YOUR_ACCESS_TOKEN';
#'
#' result <- api.instance$PinsCreate(var.pin)
#'
#'
#' ####################  PinsDelete  ####################
#'
#' library(openapi)
#' var.pin.id <- 'pin.id_example' # character | Unique identifier of a Pin.
#'
#' #Delete Pin
#' api.instance <- PinsApi$new()
#'
#' # Configure OAuth2 access token for authorization: pinterest_oauth2
#' api.instance$apiClient$accessToken <- 'TODO_YOUR_ACCESS_TOKEN';
#'
#' result <- api.instance$PinsDelete(var.pin.id)
#'
#'
#' ####################  PinsGet  ####################
#'
#' library(openapi)
#' var.pin.id <- 'pin.id_example' # character | Unique identifier of a Pin.
#' var.ad.account.id <- 'ad.account.id_example' # character | Unique identifier of an ad account.
#'
#' #Get Pin
#' api.instance <- PinsApi$new()
#'
#' # Configure OAuth2 access token for authorization: pinterest_oauth2
#' api.instance$apiClient$accessToken <- 'TODO_YOUR_ACCESS_TOKEN';
#'
#' result <- api.instance$PinsGet(var.pin.id, ad.account.id=var.ad.account.id)
#'
#'
#' }
#' @importFrom R6 R6Class
#' @importFrom base64enc base64encode
#' @export
PinsApi <- R6::R6Class(
  'PinsApi',
  public = list(
    apiClient = NULL,
    initialize = function(apiClient){
      if (!missing(apiClient)) {
        self$apiClient <- apiClient
      }
      else {
        self$apiClient <- ApiClient$new()
      }
    },
    PinsAnalytics = function(pin.id, start.date, end.date, metric.types, app.types='ALL', split.field='NO_SPLIT', ad.account.id=NULL, ...){
      apiResponse <- self$PinsAnalyticsWithHttpInfo(pin.id, start.date, end.date, metric.types, app.types, split.field, ad.account.id, ...)
      resp <- apiResponse$response
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        apiResponse$content
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        apiResponse
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        apiResponse
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        apiResponse
      }
    },

    PinsAnalyticsWithHttpInfo = function(pin.id, start.date, end.date, metric.types, app.types='ALL', split.field='NO_SPLIT', ad.account.id=NULL, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- c()

      if (missing(`pin.id`)) {
        stop("Missing required parameter `pin.id`.")
      }

      if (missing(`start.date`)) {
        stop("Missing required parameter `start.date`.")
      }

      if (missing(`end.date`)) {
        stop("Missing required parameter `end.date`.")
      }

      if (missing(`metric.types`)) {
        stop("Missing required parameter `metric.types`.")
      }

      queryParams['start_date'] <- start.date

      queryParams['end_date'] <- end.date

      queryParams['app_types'] <- app.types

      queryParams['metric_types'] <- metric.types

      queryParams['split_field'] <- split.field

      queryParams['ad_account_id'] <- ad.account.id

      body <- NULL
      urlPath <- "/pins/{pin_id}/analytics"
      if (!missing(`pin.id`)) {
        urlPath <- gsub(paste0("\\{", "pin_id", "\\}"), URLencode(as.character(`pin.id`), reserved = TRUE), urlPath)
      }

      # OAuth token
      headerParams['Authorization'] <- paste("Bearer", self$apiClient$accessToken, sep=" ")

      resp <- self$apiClient$CallApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "GET",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)

      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        deserializedRespObj <- tryCatch(
          self$apiClient$deserialize(resp, "map(AnalyticsMetricsResponse)", loadNamespace("openapi")),
          error = function(e){
             stop("Failed to deserialize response")
          }
        )
        ApiResponse$new(deserializedRespObj, resp)
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        ApiResponse$new(paste("Server returned " , httr::status_code(resp) , " response status code."), resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        ApiResponse$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        ApiResponse$new("API server error", resp)
      }
    },
    PinsCreate = function(pin, ...){
      apiResponse <- self$PinsCreateWithHttpInfo(pin, ...)
      resp <- apiResponse$response
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        apiResponse$content
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        apiResponse
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        apiResponse
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        apiResponse
      }
    },

    PinsCreateWithHttpInfo = function(pin, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- c()

      if (missing(`pin`)) {
        stop("Missing required parameter `pin`.")
      }

      if (!missing(`pin`)) {
        body <- `pin`$toJSONString()
      } else {
        body <- NULL
      }

      urlPath <- "/pins"
      # OAuth token
      headerParams['Authorization'] <- paste("Bearer", self$apiClient$accessToken, sep=" ")

      resp <- self$apiClient$CallApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "POST",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)

      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        deserializedRespObj <- tryCatch(
          self$apiClient$deserialize(resp, "Pin", loadNamespace("openapi")),
          error = function(e){
             stop("Failed to deserialize response")
          }
        )
        ApiResponse$new(deserializedRespObj, resp)
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        ApiResponse$new(paste("Server returned " , httr::status_code(resp) , " response status code."), resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        ApiResponse$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        ApiResponse$new("API server error", resp)
      }
    },
    PinsDelete = function(pin.id, ...){
      apiResponse <- self$PinsDeleteWithHttpInfo(pin.id, ...)
      resp <- apiResponse$response
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        apiResponse$content
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        apiResponse
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        apiResponse
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        apiResponse
      }
    },

    PinsDeleteWithHttpInfo = function(pin.id, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- c()

      if (missing(`pin.id`)) {
        stop("Missing required parameter `pin.id`.")
      }

      body <- NULL
      urlPath <- "/pins/{pin_id}"
      if (!missing(`pin.id`)) {
        urlPath <- gsub(paste0("\\{", "pin_id", "\\}"), URLencode(as.character(`pin.id`), reserved = TRUE), urlPath)
      }

      # OAuth token
      headerParams['Authorization'] <- paste("Bearer", self$apiClient$accessToken, sep=" ")

      resp <- self$apiClient$CallApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "DELETE",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)

      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        ApiResponse$new(NULL, resp)
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        ApiResponse$new(paste("Server returned " , httr::status_code(resp) , " response status code."), resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        ApiResponse$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        ApiResponse$new("API server error", resp)
      }
    },
    PinsGet = function(pin.id, ad.account.id=NULL, ...){
      apiResponse <- self$PinsGetWithHttpInfo(pin.id, ad.account.id, ...)
      resp <- apiResponse$response
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        apiResponse$content
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        apiResponse
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        apiResponse
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        apiResponse
      }
    },

    PinsGetWithHttpInfo = function(pin.id, ad.account.id=NULL, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- c()

      if (missing(`pin.id`)) {
        stop("Missing required parameter `pin.id`.")
      }

      queryParams['ad_account_id'] <- ad.account.id

      body <- NULL
      urlPath <- "/pins/{pin_id}"
      if (!missing(`pin.id`)) {
        urlPath <- gsub(paste0("\\{", "pin_id", "\\}"), URLencode(as.character(`pin.id`), reserved = TRUE), urlPath)
      }

      # OAuth token
      headerParams['Authorization'] <- paste("Bearer", self$apiClient$accessToken, sep=" ")

      resp <- self$apiClient$CallApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "GET",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)

      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        deserializedRespObj <- tryCatch(
          self$apiClient$deserialize(resp, "Pin", loadNamespace("openapi")),
          error = function(e){
             stop("Failed to deserialize response")
          }
        )
        ApiResponse$new(deserializedRespObj, resp)
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        ApiResponse$new(paste("Server returned " , httr::status_code(resp) , " response status code."), resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        ApiResponse$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        ApiResponse$new("API server error", resp)
      }
    }
  )
)
