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

import org.openapitools.client.model.AnalyticsMetricsResponse
import java.util.Date
import org.openapitools.client.model.Error
import org.openapitools.client.model.Pin
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

class PinsApi(
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
  val helper = new PinsApiAsyncHelper(client, config)

  /**
   * Get Pin analytics
   * Get analytics for a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\&quot;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
   *
   * @param pinId Unique identifier of a Pin. 
   * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD 
   * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD 
   * @param metricTypes Pin metric types to get data for, default is all. 
   * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
   * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
   * @param adAccountId Unique identifier of an ad account. (optional)
   * @return Map[String, AnalyticsMetricsResponse]
   */
  def pinsAnalytics(pinId: String, startDate: Date, endDate: Date, metricTypes: List[String], appTypes: Option[String] = None, splitField: Option[String] = None, adAccountId: Option[String] = None): Option[Map[String, AnalyticsMetricsResponse]] = {
    val await = Try(Await.result(pinsAnalyticsAsync(pinId, startDate, endDate, metricTypes, appTypes, splitField, adAccountId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get Pin analytics asynchronously
   * Get analytics for a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\&quot;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
   *
   * @param pinId Unique identifier of a Pin. 
   * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD 
   * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD 
   * @param metricTypes Pin metric types to get data for, default is all. 
   * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
   * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
   * @param adAccountId Unique identifier of an ad account. (optional)
   * @return Future(Map[String, AnalyticsMetricsResponse])
   */
  def pinsAnalyticsAsync(pinId: String, startDate: Date, endDate: Date, metricTypes: List[String], appTypes: Option[String] = None, splitField: Option[String] = None, adAccountId: Option[String] = None): Future[Map[String, AnalyticsMetricsResponse]] = {
      helper.pinsAnalytics(pinId, startDate, endDate, metricTypes, appTypes, splitField, adAccountId)
  }

  /**
   * Create Pin
   * Create a Pin on a board or board section owned by the \&quot;operation user_account\&quot;.  Note: If the current \&quot;operation user_account\&quot; (defined by the access token) has access to another user&#39;s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account&#39;s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id&#x3D;12345&amp;...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called &#39;curated content&#39;, please use our &lt;a href&#x3D;&#39;/docs/add-ons/save-button&#39;&gt;Save button&lt;/a&gt; instead. For more tips on creating fresh content for Pinterest, review our &lt;a href&#x3D;&#39;/docs/solutions/content-apps&#39;&gt;Content App Solutions Guide&lt;/a&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
   *
   * @param pin Create a new Pin. 
   * @return Pin
   */
  def pinsCreate(pin: Pin): Option[Pin] = {
    val await = Try(Await.result(pinsCreateAsync(pin), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Create Pin asynchronously
   * Create a Pin on a board or board section owned by the \&quot;operation user_account\&quot;.  Note: If the current \&quot;operation user_account\&quot; (defined by the access token) has access to another user&#39;s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account&#39;s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id&#x3D;12345&amp;...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called &#39;curated content&#39;, please use our &lt;a href&#x3D;&#39;/docs/add-ons/save-button&#39;&gt;Save button&lt;/a&gt; instead. For more tips on creating fresh content for Pinterest, review our &lt;a href&#x3D;&#39;/docs/solutions/content-apps&#39;&gt;Content App Solutions Guide&lt;/a&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
   *
   * @param pin Create a new Pin. 
   * @return Future(Pin)
   */
  def pinsCreateAsync(pin: Pin): Future[Pin] = {
      helper.pinsCreate(pin)
  }

  /**
   * Delete Pin
   * Delete a Pins owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
   *
   * @param pinId Unique identifier of a Pin. 
   * @return void
   */
  def pinsDelete(pinId: String) = {
    val await = Try(Await.result(pinsDeleteAsync(pinId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Delete Pin asynchronously
   * Delete a Pins owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
   *
   * @param pinId Unique identifier of a Pin. 
   * @return Future(void)
   */
  def pinsDeleteAsync(pinId: String) = {
      helper.pinsDelete(pinId)
  }

  /**
   * Get Pin
   * Get a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
   *
   * @param pinId Unique identifier of a Pin. 
   * @param adAccountId Unique identifier of an ad account. (optional)
   * @return Pin
   */
  def pinsGet(pinId: String, adAccountId: Option[String] = None): Option[Pin] = {
    val await = Try(Await.result(pinsGetAsync(pinId, adAccountId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get Pin asynchronously
   * Get a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
   *
   * @param pinId Unique identifier of a Pin. 
   * @param adAccountId Unique identifier of an ad account. (optional)
   * @return Future(Pin)
   */
  def pinsGetAsync(pinId: String, adAccountId: Option[String] = None): Future[Pin] = {
      helper.pinsGet(pinId, adAccountId)
  }

}

class PinsApiAsyncHelper(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def pinsAnalytics(pinId: String,
    startDate: Date,
    endDate: Date,
    metricTypes: List[String],
    appTypes: Option[String] = None,
    splitField: Option[String] = None,
    adAccountId: Option[String] = None
    )(implicit reader: ClientResponseReader[Map[String, AnalyticsMetricsResponse]]): Future[Map[String, AnalyticsMetricsResponse]] = {
    // create path and map variables
    val path = (addFmt("/pins/{pin_id}/analytics")
      replaceAll("\\{" + "pin_id" + "\\}", pinId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (pinId == null) throw new Exception("Missing required parameter 'pinId' when calling PinsApi->pinsAnalytics")

    if (metricTypes == null) throw new Exception("Missing required parameter 'metricTypes' when calling PinsApi->pinsAnalytics")
    queryParams += "start_date" -> startDate.toString
    queryParams += "end_date" -> endDate.toString
    appTypes match {
      case Some(param) => queryParams += "app_types" -> param.toString
      case _ => queryParams
    }
    queryParams += "metric_types" -> metricTypes.toString
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

  def pinsCreate(pin: Pin)(implicit reader: ClientResponseReader[Pin], writer: RequestWriter[Pin]): Future[Pin] = {
    // create path and map variables
    val path = (addFmt("/pins"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (pin == null) throw new Exception("Missing required parameter 'pin' when calling PinsApi->pinsCreate")

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, writer.write(pin))
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def pinsDelete(pinId: String)(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/pins/{pin_id}")
      replaceAll("\\{" + "pin_id" + "\\}", pinId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (pinId == null) throw new Exception("Missing required parameter 'pinId' when calling PinsApi->pinsDelete")


    val resFuture = client.submit("DELETE", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def pinsGet(pinId: String,
    adAccountId: Option[String] = None
    )(implicit reader: ClientResponseReader[Pin]): Future[Pin] = {
    // create path and map variables
    val path = (addFmt("/pins/{pin_id}")
      replaceAll("\\{" + "pin_id" + "\\}", pinId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (pinId == null) throw new Exception("Missing required parameter 'pinId' when calling PinsApi->pinsGet")

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
