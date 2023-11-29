/*
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.38-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.BitMexApi) {
      root.BitMexApi = {};
    }
    root.BitMexApi.Stats = factory(root.BitMexApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';

  /**
   * The Stats model module.
   * @module model/Stats
   * @version 1.2.0
   */

  /**
   * Constructs a new <code>Stats</code>.
   * Exchange Statistics
   * @alias module:model/Stats
   * @class
   * @param rootSymbol {String} 
   */
  var exports = function(rootSymbol) {
    this.rootSymbol = rootSymbol;
  };

  /**
   * Constructs a <code>Stats</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/Stats} obj Optional instance to populate.
   * @return {module:model/Stats} The populated <code>Stats</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('rootSymbol'))
        obj.rootSymbol = ApiClient.convertToType(data['rootSymbol'], 'String');
      if (data.hasOwnProperty('currency'))
        obj.currency = ApiClient.convertToType(data['currency'], 'String');
      if (data.hasOwnProperty('volume24h'))
        obj.volume24h = ApiClient.convertToType(data['volume24h'], 'Number');
      if (data.hasOwnProperty('turnover24h'))
        obj.turnover24h = ApiClient.convertToType(data['turnover24h'], 'Number');
      if (data.hasOwnProperty('openInterest'))
        obj.openInterest = ApiClient.convertToType(data['openInterest'], 'Number');
      if (data.hasOwnProperty('openValue'))
        obj.openValue = ApiClient.convertToType(data['openValue'], 'Number');
    }
    return obj;
  }

  /**
   * @member {String} rootSymbol
   */
  exports.prototype.rootSymbol = undefined;

  /**
   * @member {String} currency
   */
  exports.prototype.currency = undefined;

  /**
   * @member {Number} volume24h
   */
  exports.prototype.volume24h = undefined;

  /**
   * @member {Number} turnover24h
   */
  exports.prototype.turnover24h = undefined;

  /**
   * @member {Number} openInterest
   */
  exports.prototype.openInterest = undefined;

  /**
   * @member {Number} openValue
   */
  exports.prototype.openValue = undefined;


  return exports;

}));
