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

import io.swagger.client.model.Error
import io.swagger.client.model.Number
import io.swagger.client.model.Position
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

class PositionApi(
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
  val helper = new PositionApiAsyncHelper(client, config)

  /**
   * Get your positions.
   * This endpoint is used for retrieving position information. The fields largely follow the [FIX spec](http://www.onixs.biz/fix-dictionary/5.0.SP2/msgType_AP_6580.html) definitions. Some selected fields are explained in more detail below.  The fields _account_, _symbol_, _currency_ are unique to each position and form its key.  Spot trading symbols returns a subset of the position fields, mainly the open order aggregates.  - **account**: Your unique account ID. - **symbol**: The contract for this position. - **currency**: The margin currency for this position. - **underlying**: Meta data of the _symbol_. - **quoteCurrency**: Meta data of the _symbol_, All prices are in the _quoteCurrency_ - **commission**: The maximum of the maker, taker, and settlement fee. - **initMarginReq**: The initial margin requirement. This will be at least the symbol&#39;s default initial maintenance margin, but can be higher if you choose lower leverage. - **maintMarginReq**: The maintenance margin requirement. This will be at least the symbol&#39;s default maintenance maintenance margin, but can be higher if you choose a higher risk limit. - **riskLimit**: This is a function of your _maintMarginReq_. - **leverage**: 1 / initMarginReq. - **crossMargin**: True/false depending on whether you set cross margin on this position. - **deleveragePercentile**: Indicates where your position is in the ADL queue. - **rebalancedPnl**: The value of realised PNL that has transferred to your wallet for this position. - **prevRealisedPnl**: The value of realised PNL that has transferred to your wallet for this position since the position was closed. - **currentQty**: The current position amount in contracts. - **currentCost**: The current cost of the position in the settlement currency of the symbol (_currency_). - **currentComm**: The current commission of the position in the settlement currency of the symbol (_currency_). - **realisedCost**: The realised cost of this position calculated with regard to average cost accounting. - **unrealisedCost**: _currentCost_ - _realisedCost_. - **grossOpenPremium**: The amount your bidding above the mark price in the settlement currency of the symbol (_currency_). - **markPrice**: The mark price of the symbol in _quoteCurrency_. - **markValue**: The _currentQty_ at the mark price in the settlement currency of the symbol (_currency_). - **homeNotional**: Value of position in units of _underlying_. - **foreignNotional**: Value of position in units of _quoteCurrency_. - **realisedPnl**: The negative of _realisedCost_. - **unrealisedPnl**: _unrealisedGrossPnl_. - **liquidationPrice**: Once markPrice reaches this price, this position will be liquidated. - **bankruptPrice**: Once markPrice reaches this price, this position will have no equity. 
   *
   * @param filter Table filter. For example, send {\&quot;symbol\&quot;: \&quot;XBTUSD\&quot;}. (optional)
   * @param columns Which columns to fetch. For example, send [\&quot;columnName\&quot;]. (optional)
   * @param count Number of rows to fetch. (optional)
   * @return List[Position]
   */
  def positionGet(filter: Option[String] = None, columns: Option[String] = None, count: Option[Number] = None): Option[List[Position]] = {
    val await = Try(Await.result(positionGetAsync(filter, columns, count), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get your positions. asynchronously
   * This endpoint is used for retrieving position information. The fields largely follow the [FIX spec](http://www.onixs.biz/fix-dictionary/5.0.SP2/msgType_AP_6580.html) definitions. Some selected fields are explained in more detail below.  The fields _account_, _symbol_, _currency_ are unique to each position and form its key.  Spot trading symbols returns a subset of the position fields, mainly the open order aggregates.  - **account**: Your unique account ID. - **symbol**: The contract for this position. - **currency**: The margin currency for this position. - **underlying**: Meta data of the _symbol_. - **quoteCurrency**: Meta data of the _symbol_, All prices are in the _quoteCurrency_ - **commission**: The maximum of the maker, taker, and settlement fee. - **initMarginReq**: The initial margin requirement. This will be at least the symbol&#39;s default initial maintenance margin, but can be higher if you choose lower leverage. - **maintMarginReq**: The maintenance margin requirement. This will be at least the symbol&#39;s default maintenance maintenance margin, but can be higher if you choose a higher risk limit. - **riskLimit**: This is a function of your _maintMarginReq_. - **leverage**: 1 / initMarginReq. - **crossMargin**: True/false depending on whether you set cross margin on this position. - **deleveragePercentile**: Indicates where your position is in the ADL queue. - **rebalancedPnl**: The value of realised PNL that has transferred to your wallet for this position. - **prevRealisedPnl**: The value of realised PNL that has transferred to your wallet for this position since the position was closed. - **currentQty**: The current position amount in contracts. - **currentCost**: The current cost of the position in the settlement currency of the symbol (_currency_). - **currentComm**: The current commission of the position in the settlement currency of the symbol (_currency_). - **realisedCost**: The realised cost of this position calculated with regard to average cost accounting. - **unrealisedCost**: _currentCost_ - _realisedCost_. - **grossOpenPremium**: The amount your bidding above the mark price in the settlement currency of the symbol (_currency_). - **markPrice**: The mark price of the symbol in _quoteCurrency_. - **markValue**: The _currentQty_ at the mark price in the settlement currency of the symbol (_currency_). - **homeNotional**: Value of position in units of _underlying_. - **foreignNotional**: Value of position in units of _quoteCurrency_. - **realisedPnl**: The negative of _realisedCost_. - **unrealisedPnl**: _unrealisedGrossPnl_. - **liquidationPrice**: Once markPrice reaches this price, this position will be liquidated. - **bankruptPrice**: Once markPrice reaches this price, this position will have no equity. 
   *
   * @param filter Table filter. For example, send {\&quot;symbol\&quot;: \&quot;XBTUSD\&quot;}. (optional)
   * @param columns Which columns to fetch. For example, send [\&quot;columnName\&quot;]. (optional)
   * @param count Number of rows to fetch. (optional)
   * @return Future(List[Position])
   */
  def positionGetAsync(filter: Option[String] = None, columns: Option[String] = None, count: Option[Number] = None): Future[List[Position]] = {
      helper.positionGet(filter, columns, count)
  }

  /**
   * Enable isolated margin or cross margin per-position.
   * Users can switch isolate margin per-position. This function allows switching margin isolation (aka fixed margin) on and off.
   *
   * @param symbol Position symbol to isolate. 
   * @param enabled True for isolated margin, false for cross margin. (optional, default to true)
   * @return Position
   */
  def positionIsolateMargin(symbol: String, enabled: Option[Boolean] = Option(true)): Option[Position] = {
    val await = Try(Await.result(positionIsolateMarginAsync(symbol, enabled), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Enable isolated margin or cross margin per-position. asynchronously
   * Users can switch isolate margin per-position. This function allows switching margin isolation (aka fixed margin) on and off.
   *
   * @param symbol Position symbol to isolate. 
   * @param enabled True for isolated margin, false for cross margin. (optional, default to true)
   * @return Future(Position)
   */
  def positionIsolateMarginAsync(symbol: String, enabled: Option[Boolean] = Option(true)): Future[Position] = {
      helper.positionIsolateMargin(symbol, enabled)
  }

  /**
   * Transfer equity in or out of a position.
   * When margin is isolated on a position, use this function to add or remove margin from the position. Note that you cannot remove margin below the initial margin threshold.
   *
   * @param symbol Symbol of position to isolate. 
   * @param amount Amount to transfer, in Satoshis. May be negative. 
   * @param targetAccountId AccountId for the position that the margin would be transfered to, must be a paired account with main user. (optional)
   * @return Position
   */
  def positionTransferIsolatedMargin(symbol: String, amount: Number, targetAccountId: Option[Double] = None): Option[Position] = {
    val await = Try(Await.result(positionTransferIsolatedMarginAsync(symbol, amount, targetAccountId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Transfer equity in or out of a position. asynchronously
   * When margin is isolated on a position, use this function to add or remove margin from the position. Note that you cannot remove margin below the initial margin threshold.
   *
   * @param symbol Symbol of position to isolate. 
   * @param amount Amount to transfer, in Satoshis. May be negative. 
   * @param targetAccountId AccountId for the position that the margin would be transfered to, must be a paired account with main user. (optional)
   * @return Future(Position)
   */
  def positionTransferIsolatedMarginAsync(symbol: String, amount: Number, targetAccountId: Option[Double] = None): Future[Position] = {
      helper.positionTransferIsolatedMargin(symbol, amount, targetAccountId)
  }

  /**
   * Choose leverage for a position.
   * Users can choose an isolated leverage. This will automatically enable isolated margin.
   *
   * @param symbol Symbol of position to adjust. 
   * @param leverage Leverage value. Send a number between 0.01 and 100 to enable isolated margin with a fixed leverage. Send 0 to enable cross margin. 
   * @param targetAccountId AccountId for the position that the leverage would be changed on, must be a paired account with main user. (optional)
   * @return Position
   */
  def positionUpdateLeverage(symbol: String, leverage: Double, targetAccountId: Option[Double] = None): Option[Position] = {
    val await = Try(Await.result(positionUpdateLeverageAsync(symbol, leverage, targetAccountId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Choose leverage for a position. asynchronously
   * Users can choose an isolated leverage. This will automatically enable isolated margin.
   *
   * @param symbol Symbol of position to adjust. 
   * @param leverage Leverage value. Send a number between 0.01 and 100 to enable isolated margin with a fixed leverage. Send 0 to enable cross margin. 
   * @param targetAccountId AccountId for the position that the leverage would be changed on, must be a paired account with main user. (optional)
   * @return Future(Position)
   */
  def positionUpdateLeverageAsync(symbol: String, leverage: Double, targetAccountId: Option[Double] = None): Future[Position] = {
      helper.positionUpdateLeverage(symbol, leverage, targetAccountId)
  }

  /**
   * Update your risk limit.
   * Risk Limits limit the size of positions you can trade at various margin levels. Larger positions require more margin. Please see the Risk Limit documentation for more details.
   *
   * @param symbol Symbol of position to update risk limit on. 
   * @param riskLimit New Risk Limit, in Satoshis. 
   * @param targetAccountId AccountId for the position that the risk limit would be updated on, must be a paired account with main user. (optional)
   * @return Position
   */
  def positionUpdateRiskLimit(symbol: String, riskLimit: Number, targetAccountId: Option[Double] = None): Option[Position] = {
    val await = Try(Await.result(positionUpdateRiskLimitAsync(symbol, riskLimit, targetAccountId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Update your risk limit. asynchronously
   * Risk Limits limit the size of positions you can trade at various margin levels. Larger positions require more margin. Please see the Risk Limit documentation for more details.
   *
   * @param symbol Symbol of position to update risk limit on. 
   * @param riskLimit New Risk Limit, in Satoshis. 
   * @param targetAccountId AccountId for the position that the risk limit would be updated on, must be a paired account with main user. (optional)
   * @return Future(Position)
   */
  def positionUpdateRiskLimitAsync(symbol: String, riskLimit: Number, targetAccountId: Option[Double] = None): Future[Position] = {
      helper.positionUpdateRiskLimit(symbol, riskLimit, targetAccountId)
  }

}

class PositionApiAsyncHelper(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def positionGet(filter: Option[String] = None,
    columns: Option[String] = None,
    count: Option[Number] = None
    )(implicit reader: ClientResponseReader[List[Position]]): Future[List[Position]] = {
    // create path and map variables
    val path = (addFmt("/position"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    filter match {
      case Some(param) => queryParams += "filter" -> param.toString
      case _ => queryParams
    }
    columns match {
      case Some(param) => queryParams += "columns" -> param.toString
      case _ => queryParams
    }
    count match {
      case Some(param) => queryParams += "count" -> param.toString
      case _ => queryParams
    }

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def positionIsolateMargin(symbol: String,
    enabled: Option[Boolean] = Option(true)
    )(implicit reader: ClientResponseReader[Position]): Future[Position] = {
    // create path and map variables
    val path = (addFmt("/position/isolate"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (symbol == null) throw new Exception("Missing required parameter 'symbol' when calling PositionApi->positionIsolateMargin")


    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def positionTransferIsolatedMargin(symbol: String,
    amount: Number,
    targetAccountId: Option[Double] = None
    )(implicit reader: ClientResponseReader[Position]): Future[Position] = {
    // create path and map variables
    val path = (addFmt("/position/transferMargin"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (symbol == null) throw new Exception("Missing required parameter 'symbol' when calling PositionApi->positionTransferIsolatedMargin")


    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def positionUpdateLeverage(symbol: String,
    leverage: Double,
    targetAccountId: Option[Double] = None
    )(implicit reader: ClientResponseReader[Position]): Future[Position] = {
    // create path and map variables
    val path = (addFmt("/position/leverage"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (symbol == null) throw new Exception("Missing required parameter 'symbol' when calling PositionApi->positionUpdateLeverage")


    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def positionUpdateRiskLimit(symbol: String,
    riskLimit: Number,
    targetAccountId: Option[Double] = None
    )(implicit reader: ClientResponseReader[Position]): Future[Position] = {
    // create path and map variables
    val path = (addFmt("/position/riskLimit"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (symbol == null) throw new Exception("Missing required parameter 'symbol' when calling PositionApi->positionUpdateRiskLimit")


    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
