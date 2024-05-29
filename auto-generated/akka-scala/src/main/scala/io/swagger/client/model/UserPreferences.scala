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
package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class UserPreferences (
  alertOnLiquidations: Option[Boolean] = None,
  animationsEnabled: Option[Boolean] = None,
  announcementsLastSeen: Option[DateTime] = None,
  chatChannelID: Option[Double] = None,
  colorTheme: Option[String] = None,
  currency: Option[String] = None,
  debug: Option[Boolean] = None,
  disableEmails: Option[Seq[String]] = None,
  disablePush: Option[Seq[String]] = None,
  displayCorpEnrollUpsell: Option[Boolean] = None,
  equivalentCurrency: Option[String] = None,
  features: Option[Seq[String]] = None,
  favourites: Option[Seq[String]] = None,
  favouritesAssets: Option[Seq[String]] = None,
  favouritesOrdered: Option[Seq[String]] = None,
  favouriteBots: Option[Seq[String]] = None,
  hasSetTradingCurrencies: Option[Boolean] = None,
  hideConfirmDialogs: Option[Seq[String]] = None,
  hideConnectionModal: Option[Boolean] = None,
  hideFromLeaderboard: Option[Boolean] = None,
  hideNameFromLeaderboard: Option[Boolean] = None,
  hidePnlInGuilds: Option[Boolean] = None,
  hideRoiInGuilds: Option[Boolean] = None,
  hideNotifications: Option[Seq[String]] = None,
  hidePhoneConfirm: Option[Boolean] = None,
  isSensitiveInfoVisible: Option[Boolean] = None,
  isWalletZeroBalanceHidden: Option[Boolean] = None,
  locale: Option[String] = None,
  localeSetTime: Option[Double] = None,
  marginPnlRow: Option[String] = None,
  marginPnlRowKind: Option[String] = None,
  mobileLocale: Option[String] = None,
  msgsSeen: Option[Seq[String]] = None,
  notifications: Option[Any] = None,
  optionsBeta: Option[Boolean] = None,
  orderBookBinning: Option[Any] = None,
  orderBookType: Option[String] = None,
  orderClearImmediate: Option[Boolean] = None,
  orderControlsPlusMinus: Option[Boolean] = None,
  platformLayout: Option[String] = None,
  selectedFiatCurrency: Option[String] = None,
  showChartBottomToolbar: Option[Boolean] = None,
  showLocaleNumbers: Option[Boolean] = None,
  sounds: Option[Seq[String]] = None,
  spacingPreference: Option[String] = None,
  strictIPCheck: Option[Boolean] = None,
  strictTimeout: Option[Boolean] = None,
  tickerGroup: Option[String] = None,
  tickerPinned: Option[Boolean] = None,
  tradeLayout: Option[String] = None,
  userColor: Option[String] = None
) extends ApiModel


