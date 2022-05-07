/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.api

import java.text.SimpleDateFormat

import org.openapitools.client.model.Account
import org.openapitools.client.model.AnalyticsMetricsResponse
import java.util.Date
import org.openapitools.client.model.Error
import org.openapitools.client.{ApiInvoker, ApiException}

import collection.mutable
import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart
import com.wordnik.swagger.client._
import com.wordnik.swagger.client.ClientResponseReaders.Json4sFormatsReader._
import com.wordnik.swagger.client.RequestWriters.Json4sFormatsWriter._
import javax.ws.rs.core.Response.Status.Family

import java.net.URI
import java.io.File
import java.util.Date
import java.util.TimeZone
import javax.ws.rs.core.{MediaType, Response}

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent._
import scala.concurrent.duration._
import scala.collection.mutable.HashMap
import scala.util.{Failure, Success, Try}

import org.json4s._

class UserAccountApi(
  val defBasePath: String = "https://api.pinterest.com/v5",
  defApiInvoker: ApiInvoker = ApiInvoker
) {
  private lazy val dateTimeFormatter = {
    val formatter = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ")
    formatter.setTimeZone(TimeZone.getTimeZone("UTC"))
    formatter
  }
  private val dateFormatter = {
    val formatter = new SimpleDateFormat("yyyy-MM-dd")
    formatter.setTimeZone(TimeZone.getTimeZone("UTC"))
    formatter
  }
  implicit val formats = new org.json4s.DefaultFormats {
    override def dateFormatter = dateTimeFormatter
  }
  implicit val stringReader: ClientResponseReader[String] = ClientResponseReaders.StringReader
  implicit val unitReader: ClientResponseReader[Unit] = ClientResponseReaders.UnitReader
  implicit val jvalueReader: ClientResponseReader[JValue] = ClientResponseReaders.JValueReader
  implicit val jsonReader: ClientResponseReader[Nothing] = JsonFormatsReader
  implicit val stringWriter: RequestWriter[String] = RequestWriters.StringWriter
  implicit val jsonWriter: RequestWriter[Nothing] = JsonFormatsWriter

  var basePath: String = defBasePath
  var apiInvoker: ApiInvoker = defApiInvoker

  def addHeader(key: String, value: String): mutable.HashMap[String, String] = {
    apiInvoker.defaultHeaders += key -> value
  }

  val config: SwaggerConfig = SwaggerConfig.forUrl(new URI(defBasePath))
  val client = new RestClient(config)
  val helper = new UserAccountApiAsyncHelper(client, config)

  /**
   * Get user account analytics
   * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
   *
   * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD 
   * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD 
   * @param fromClaimedContent Filter on Pins that match your claimed domain. (optional, default to BOTH)
   * @param pinFormat Pin formats to get data for, default is all. (optional, default to ALL)
   * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
   * @param metricTypes Metric types to get data for, default is all.  (optional, default to new ListBuffer[String]() )
   * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
   * @param adAccountId Unique identifier of an ad account. (optional)
   * @return Map[String, AnalyticsMetricsResponse]
   */
  def userAccountAnalytics(startDate: Date, endDate: Date, fromClaimedContent: Option[String] = None, pinFormat: Option[String] = None, appTypes: Option[String] = None, metricTypes: Option[List[String]] = None, splitField: Option[String] = None, adAccountId: Option[String] = None): Option[Map[String, AnalyticsMetricsResponse]] = {
    val await = Try(Await.result(userAccountAnalyticsAsync(startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get user account analytics asynchronously
   * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
   *
   * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD 
   * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD 
   * @param fromClaimedContent Filter on Pins that match your claimed domain. (optional, default to BOTH)
   * @param pinFormat Pin formats to get data for, default is all. (optional, default to ALL)
   * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
   * @param metricTypes Metric types to get data for, default is all.  (optional, default to new ListBuffer[String]() )
   * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
   * @param adAccountId Unique identifier of an ad account. (optional)
   * @return Future(Map[String, AnalyticsMetricsResponse])
   */
  def userAccountAnalyticsAsync(startDate: Date, endDate: Date, fromClaimedContent: Option[String] = None, pinFormat: Option[String] = None, appTypes: Option[String] = None, metricTypes: Option[List[String]] = None, splitField: Option[String] = None, adAccountId: Option[String] = None): Future[Map[String, AnalyticsMetricsResponse]] = {
      helper.userAccountAnalytics(startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId)
  }

  /**
   * Get user account
   * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
   *
   * @param adAccountId Unique identifier of an ad account. (optional)
   * @return Account
   */
  def userAccountGet(adAccountId: Option[String] = None): Option[Account] = {
    val await = Try(Await.result(userAccountGetAsync(adAccountId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get user account asynchronously
   * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
   *
   * @param adAccountId Unique identifier of an ad account. (optional)
   * @return Future(Account)
   */
  def userAccountGetAsync(adAccountId: Option[String] = None): Future[Account] = {
      helper.userAccountGet(adAccountId)
  }

}

class UserAccountApiAsyncHelper(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def userAccountAnalytics(startDate: Date,
    endDate: Date,
    fromClaimedContent: Option[String] = None,
    pinFormat: Option[String] = None,
    appTypes: Option[String] = None,
    metricTypes: Option[List[String]] = None,
    splitField: Option[String] = None,
    adAccountId: Option[String] = None
    )(implicit reader: ClientResponseReader[Map[String, AnalyticsMetricsResponse]]): Future[Map[String, AnalyticsMetricsResponse]] = {
    // create path and map variables
    val path = (addFmt("/user_account/analytics"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    queryParams += "start_date" -> startDate.toString
    queryParams += "end_date" -> endDate.toString
    fromClaimedContent match {
      case Some(param) => queryParams += "from_claimed_content" -> param.toString
      case _ => queryParams
    }
    pinFormat match {
      case Some(param) => queryParams += "pin_format" -> param.toString
      case _ => queryParams
    }
    appTypes match {
      case Some(param) => queryParams += "app_types" -> param.toString
      case _ => queryParams
    }
    metricTypes match {
      case Some(param) => queryParams += "metric_types" -> param.toString
      case _ => queryParams
    }
    splitField match {
      case Some(param) => queryParams += "split_field" -> param.toString
      case _ => queryParams
    }
    adAccountId match {
      case Some(param) => queryParams += "ad_account_id" -> param.toString
      case _ => queryParams
    }

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def userAccountGet(adAccountId: Option[String] = None
    )(implicit reader: ClientResponseReader[Account]): Future[Account] = {
    // create path and map variables
    val path = (addFmt("/user_account"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    adAccountId match {
      case Some(param) => queryParams += "ad_account_id" -> param.toString
      case _ => queryParams
    }

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }


}
