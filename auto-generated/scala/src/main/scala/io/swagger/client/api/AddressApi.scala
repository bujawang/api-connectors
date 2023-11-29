/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

package io.swagger.client.api

import java.text.SimpleDateFormat

import io.swagger.client.model.Address
import io.swagger.client.model.Error
import io.swagger.client.{ApiInvoker, ApiException}

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date
import java.util.TimeZone

import scala.collection.mutable.HashMap

import com.wordnik.swagger.client._
import scala.concurrent.Future
import collection.mutable

import java.net.URI

import com.wordnik.swagger.client.ClientResponseReaders.Json4sFormatsReader._
import com.wordnik.swagger.client.RequestWriters.Json4sFormatsWriter._

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent._
import scala.concurrent.duration._
import scala.util.{Failure, Success, Try}

import org.json4s._

class AddressApi(
  val defBasePath: String = "https://www.bitmex.com/api/v1",
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
  val helper = new AddressApiAsyncHelper(client, config)

  /**
   * Get your addresses.
   * 
   *
   * @return List[Address]
   */
  def addressGet(): Option[List[Address]] = {
    val await = Try(Await.result(addressGetAsync(), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get your addresses. asynchronously
   * 
   *
   * @return Future(List[Address])
   */
  def addressGetAsync(): Future[List[Address]] = {
      helper.addressGet()
  }

  /**
   * Creates a new saved address.
   * 
   *
   * @param currency Currency of the address. Options: &#x60;XBt&#x60;, &#x60;USDt&#x60; 
   * @param network Selected network. 
   * @param address Destination Address. 
   * @param name Name of the entry, eg. &#39;Hardware wallet&#39;. 
   * @param note Optional annotation. (optional)
   * @param skipConfirm Skip e-mail confirmations for transfers to this address. Will require an email confirmation after creation. (optional, default to false)
   * @param skip2FA Skip 2FA confirmations for transfers to this address. Will require an email confirmation after creation. (optional, default to false)
   * @return Address
   */
  def addressNew(currency: String, network: String, address: String, name: String, note: Option[String] = None, skipConfirm: Option[Boolean] = Option(false), skip2FA: Option[Boolean] = Option(false)): Option[Address] = {
    val await = Try(Await.result(addressNewAsync(currency, network, address, name, note, skipConfirm, skip2FA), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Creates a new saved address. asynchronously
   * 
   *
   * @param currency Currency of the address. Options: &#x60;XBt&#x60;, &#x60;USDt&#x60; 
   * @param network Selected network. 
   * @param address Destination Address. 
   * @param name Name of the entry, eg. &#39;Hardware wallet&#39;. 
   * @param note Optional annotation. (optional)
   * @param skipConfirm Skip e-mail confirmations for transfers to this address. Will require an email confirmation after creation. (optional, default to false)
   * @param skip2FA Skip 2FA confirmations for transfers to this address. Will require an email confirmation after creation. (optional, default to false)
   * @return Future(Address)
   */
  def addressNewAsync(currency: String, network: String, address: String, name: String, note: Option[String] = None, skipConfirm: Option[Boolean] = Option(false), skip2FA: Option[Boolean] = Option(false)): Future[Address] = {
      helper.addressNew(currency, network, address, name, note, skipConfirm, skip2FA)
  }

}

class AddressApiAsyncHelper(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def addressGet()(implicit reader: ClientResponseReader[List[Address]]): Future[List[Address]] = {
    // create path and map variables
    val path = (addFmt("/address"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def addressNew(currency: String,
    network: String,
    address: String,
    name: String,
    note: Option[String] = None,
    skipConfirm: Option[Boolean] = Option(false),
    skip2FA: Option[Boolean] = Option(false)
    )(implicit reader: ClientResponseReader[Address]): Future[Address] = {
    // create path and map variables
    val path = (addFmt("/address"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (currency == null) throw new Exception("Missing required parameter 'currency' when calling AddressApi->addressNew")

    if (network == null) throw new Exception("Missing required parameter 'network' when calling AddressApi->addressNew")

    if (address == null) throw new Exception("Missing required parameter 'address' when calling AddressApi->addressNew")

    if (name == null) throw new Exception("Missing required parameter 'name' when calling AddressApi->addressNew")


    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
