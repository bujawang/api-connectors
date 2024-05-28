/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.42-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * TradeApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_TradeApi_H_
#define IO_SWAGGER_CLIENT_API_TradeApi_H_


#include "../ApiClient.h"

#include "Error.h"
#include "Trade.h"
#include "TradeBin.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  TradeApi
{
public:
    TradeApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~TradeApi();
    /// <summary>
    /// Get Trades.
    /// </summary>
    /// <remarks>
    /// Please note that indices (symbols starting with &#x60;.&#x60;) post trades at intervals to the trade feed. These have a &#x60;size&#x60; of 0 and are used only to indicate a changing price.  See [the FIX Spec](http://www.onixs.biz/fix-dictionary/5.0.SP2/msgType_AE_6569.html) for explanations of these fields.
    /// </remarks>
    /// <param name="symbol">Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;.  Symbols are case-insensitive. (optional)</param>
    /// <param name="filter">Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)</param>
    /// <param name="columns">Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)</param>
    /// <param name="count">Number of results to fetch. Must be a positive integer. (optional, default to 100)</param>
    /// <param name="start">Starting point for results. (optional, default to 0)</param>
    /// <param name="reverse">If true, will sort results newest first. (optional, default to false)</param>
    /// <param name="startTime">Starting date filter for results. (optional)</param>
    /// <param name="endTime">Ending date filter for results. (optional)</param>
    pplx::task<std::vector<std::shared_ptr<Trade>>> trade_get(
        boost::optional<utility::string_t> symbol,
        boost::optional<utility::string_t> filter,
        boost::optional<utility::string_t> columns,
        boost::optional<double> count,
        boost::optional<double> start,
        boost::optional<bool> reverse,
        boost::optional<utility::datetime> startTime,
        boost::optional<utility::datetime> endTime
    );
    /// <summary>
    /// Get previous trades in time buckets.
    /// </summary>
    /// <remarks>
    /// Timestamps returned by our bucketed endpoints are the **end** of the period, indicating when the bucket was written to disk. Some other common systems use the timestamp as the beginning of the period. Please be aware of this when using this endpoint.  Also note the &#x60;open&#x60; price is equal to the &#x60;close&#x60; price of the previous timeframe bucket.
    /// </remarks>
    /// <param name="binSize">Time interval to bucket by. Available options: [1m,5m,1h,1d]. (optional, default to 1m)</param>
    /// <param name="partial">If true, will send in-progress (incomplete) bins for the current time period. (optional, default to false)</param>
    /// <param name="symbol">Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;.  Symbols are case-insensitive. (optional)</param>
    /// <param name="filter">Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)</param>
    /// <param name="columns">Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)</param>
    /// <param name="count">Number of results to fetch. Must be a positive integer. (optional, default to 100)</param>
    /// <param name="start">Starting point for results. (optional, default to 0)</param>
    /// <param name="reverse">If true, will sort results newest first. (optional, default to false)</param>
    /// <param name="startTime">Starting date filter for results. (optional)</param>
    /// <param name="endTime">Ending date filter for results. (optional)</param>
    pplx::task<std::vector<std::shared_ptr<TradeBin>>> trade_getBucketed(
        boost::optional<utility::string_t> binSize,
        boost::optional<bool> partial,
        boost::optional<utility::string_t> symbol,
        boost::optional<utility::string_t> filter,
        boost::optional<utility::string_t> columns,
        boost::optional<double> count,
        boost::optional<double> start,
        boost::optional<bool> reverse,
        boost::optional<utility::datetime> startTime,
        boost::optional<utility::datetime> endTime
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_TradeApi_H_ */

