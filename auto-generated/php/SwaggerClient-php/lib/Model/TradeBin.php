<?php
/**
 * TradeBin
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section.
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 * Swagger Codegen version: 2.4.42-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;
use \Swagger\Client\ObjectSerializer;

/**
 * TradeBin Class Doc Comment
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class TradeBin implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $swaggerModelName = 'TradeBin';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerTypes = [
        'timestamp' => '\DateTime',
        'symbol' => 'string',
        'open' => 'double',
        'high' => 'double',
        'low' => 'double',
        'close' => 'double',
        'trades' => 'float',
        'volume' => 'float',
        'vwap' => 'double',
        'last_size' => 'float',
        'turnover' => 'float',
        'home_notional' => 'double',
        'foreign_notional' => 'double'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerFormats = [
        'timestamp' => 'date-time',
        'symbol' => null,
        'open' => 'double',
        'high' => 'double',
        'low' => 'double',
        'close' => 'double',
        'trades' => 'int64',
        'volume' => 'int64',
        'vwap' => 'double',
        'last_size' => 'int64',
        'turnover' => 'int64',
        'home_notional' => 'double',
        'foreign_notional' => 'double'
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function swaggerFormats()
    {
        return self::$swaggerFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'timestamp' => 'timestamp',
        'symbol' => 'symbol',
        'open' => 'open',
        'high' => 'high',
        'low' => 'low',
        'close' => 'close',
        'trades' => 'trades',
        'volume' => 'volume',
        'vwap' => 'vwap',
        'last_size' => 'lastSize',
        'turnover' => 'turnover',
        'home_notional' => 'homeNotional',
        'foreign_notional' => 'foreignNotional'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'timestamp' => 'setTimestamp',
        'symbol' => 'setSymbol',
        'open' => 'setOpen',
        'high' => 'setHigh',
        'low' => 'setLow',
        'close' => 'setClose',
        'trades' => 'setTrades',
        'volume' => 'setVolume',
        'vwap' => 'setVwap',
        'last_size' => 'setLastSize',
        'turnover' => 'setTurnover',
        'home_notional' => 'setHomeNotional',
        'foreign_notional' => 'setForeignNotional'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'timestamp' => 'getTimestamp',
        'symbol' => 'getSymbol',
        'open' => 'getOpen',
        'high' => 'getHigh',
        'low' => 'getLow',
        'close' => 'getClose',
        'trades' => 'getTrades',
        'volume' => 'getVolume',
        'vwap' => 'getVwap',
        'last_size' => 'getLastSize',
        'turnover' => 'getTurnover',
        'home_notional' => 'getHomeNotional',
        'foreign_notional' => 'getForeignNotional'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$swaggerModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['timestamp'] = isset($data['timestamp']) ? $data['timestamp'] : null;
        $this->container['symbol'] = isset($data['symbol']) ? $data['symbol'] : null;
        $this->container['open'] = isset($data['open']) ? $data['open'] : null;
        $this->container['high'] = isset($data['high']) ? $data['high'] : null;
        $this->container['low'] = isset($data['low']) ? $data['low'] : null;
        $this->container['close'] = isset($data['close']) ? $data['close'] : null;
        $this->container['trades'] = isset($data['trades']) ? $data['trades'] : null;
        $this->container['volume'] = isset($data['volume']) ? $data['volume'] : null;
        $this->container['vwap'] = isset($data['vwap']) ? $data['vwap'] : null;
        $this->container['last_size'] = isset($data['last_size']) ? $data['last_size'] : null;
        $this->container['turnover'] = isset($data['turnover']) ? $data['turnover'] : null;
        $this->container['home_notional'] = isset($data['home_notional']) ? $data['home_notional'] : null;
        $this->container['foreign_notional'] = isset($data['foreign_notional']) ? $data['foreign_notional'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['timestamp'] === null) {
            $invalidProperties[] = "'timestamp' can't be null";
        }
        if ($this->container['symbol'] === null) {
            $invalidProperties[] = "'symbol' can't be null";
        }
        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets timestamp
     *
     * @return \DateTime
     */
    public function getTimestamp()
    {
        return $this->container['timestamp'];
    }

    /**
     * Sets timestamp
     *
     * @param \DateTime $timestamp timestamp
     *
     * @return $this
     */
    public function setTimestamp($timestamp)
    {
        $this->container['timestamp'] = $timestamp;

        return $this;
    }

    /**
     * Gets symbol
     *
     * @return string
     */
    public function getSymbol()
    {
        return $this->container['symbol'];
    }

    /**
     * Sets symbol
     *
     * @param string $symbol symbol
     *
     * @return $this
     */
    public function setSymbol($symbol)
    {
        $this->container['symbol'] = $symbol;

        return $this;
    }

    /**
     * Gets open
     *
     * @return double
     */
    public function getOpen()
    {
        return $this->container['open'];
    }

    /**
     * Sets open
     *
     * @param double $open open
     *
     * @return $this
     */
    public function setOpen($open)
    {
        $this->container['open'] = $open;

        return $this;
    }

    /**
     * Gets high
     *
     * @return double
     */
    public function getHigh()
    {
        return $this->container['high'];
    }

    /**
     * Sets high
     *
     * @param double $high high
     *
     * @return $this
     */
    public function setHigh($high)
    {
        $this->container['high'] = $high;

        return $this;
    }

    /**
     * Gets low
     *
     * @return double
     */
    public function getLow()
    {
        return $this->container['low'];
    }

    /**
     * Sets low
     *
     * @param double $low low
     *
     * @return $this
     */
    public function setLow($low)
    {
        $this->container['low'] = $low;

        return $this;
    }

    /**
     * Gets close
     *
     * @return double
     */
    public function getClose()
    {
        return $this->container['close'];
    }

    /**
     * Sets close
     *
     * @param double $close close
     *
     * @return $this
     */
    public function setClose($close)
    {
        $this->container['close'] = $close;

        return $this;
    }

    /**
     * Gets trades
     *
     * @return float
     */
    public function getTrades()
    {
        return $this->container['trades'];
    }

    /**
     * Sets trades
     *
     * @param float $trades trades
     *
     * @return $this
     */
    public function setTrades($trades)
    {
        $this->container['trades'] = $trades;

        return $this;
    }

    /**
     * Gets volume
     *
     * @return float
     */
    public function getVolume()
    {
        return $this->container['volume'];
    }

    /**
     * Sets volume
     *
     * @param float $volume volume
     *
     * @return $this
     */
    public function setVolume($volume)
    {
        $this->container['volume'] = $volume;

        return $this;
    }

    /**
     * Gets vwap
     *
     * @return double
     */
    public function getVwap()
    {
        return $this->container['vwap'];
    }

    /**
     * Sets vwap
     *
     * @param double $vwap vwap
     *
     * @return $this
     */
    public function setVwap($vwap)
    {
        $this->container['vwap'] = $vwap;

        return $this;
    }

    /**
     * Gets last_size
     *
     * @return float
     */
    public function getLastSize()
    {
        return $this->container['last_size'];
    }

    /**
     * Sets last_size
     *
     * @param float $last_size last_size
     *
     * @return $this
     */
    public function setLastSize($last_size)
    {
        $this->container['last_size'] = $last_size;

        return $this;
    }

    /**
     * Gets turnover
     *
     * @return float
     */
    public function getTurnover()
    {
        return $this->container['turnover'];
    }

    /**
     * Sets turnover
     *
     * @param float $turnover turnover
     *
     * @return $this
     */
    public function setTurnover($turnover)
    {
        $this->container['turnover'] = $turnover;

        return $this;
    }

    /**
     * Gets home_notional
     *
     * @return double
     */
    public function getHomeNotional()
    {
        return $this->container['home_notional'];
    }

    /**
     * Sets home_notional
     *
     * @param double $home_notional home_notional
     *
     * @return $this
     */
    public function setHomeNotional($home_notional)
    {
        $this->container['home_notional'] = $home_notional;

        return $this;
    }

    /**
     * Gets foreign_notional
     *
     * @return double
     */
    public function getForeignNotional()
    {
        return $this->container['foreign_notional'];
    }

    /**
     * Sets foreign_notional
     *
     * @param double $foreign_notional foreign_notional
     *
     * @return $this
     */
    public function setForeignNotional($foreign_notional)
    {
        $this->container['foreign_notional'] = $foreign_notional;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    #[\ReturnTypeWillChange]
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    #[\ReturnTypeWillChange]
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    #[\ReturnTypeWillChange]
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    #[\ReturnTypeWillChange]
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(
                ObjectSerializer::sanitizeForSerialization($this),
                JSON_PRETTY_PRINT
            );
        }

        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


