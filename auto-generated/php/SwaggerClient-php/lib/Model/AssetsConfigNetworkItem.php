<?php
/**
 * AssetsConfigNetworkItem
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
 * AssetsConfigNetworkItem Class Doc Comment
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class AssetsConfigNetworkItem implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $swaggerModelName = 'AssetsConfigNetworkItem';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerTypes = [
        'asset' => 'string',
        'token_address' => 'string',
        'deposit_enabled' => 'bool',
        'withdrawal_enabled' => 'bool',
        'withdrawal_fee' => 'double',
        'min_fee' => 'double',
        'max_fee' => 'double'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerFormats = [
        'asset' => null,
        'token_address' => null,
        'deposit_enabled' => null,
        'withdrawal_enabled' => null,
        'withdrawal_fee' => 'double',
        'min_fee' => 'double',
        'max_fee' => 'double'
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
        'asset' => 'asset',
        'token_address' => 'tokenAddress',
        'deposit_enabled' => 'depositEnabled',
        'withdrawal_enabled' => 'withdrawalEnabled',
        'withdrawal_fee' => 'withdrawalFee',
        'min_fee' => 'minFee',
        'max_fee' => 'maxFee'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'asset' => 'setAsset',
        'token_address' => 'setTokenAddress',
        'deposit_enabled' => 'setDepositEnabled',
        'withdrawal_enabled' => 'setWithdrawalEnabled',
        'withdrawal_fee' => 'setWithdrawalFee',
        'min_fee' => 'setMinFee',
        'max_fee' => 'setMaxFee'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'asset' => 'getAsset',
        'token_address' => 'getTokenAddress',
        'deposit_enabled' => 'getDepositEnabled',
        'withdrawal_enabled' => 'getWithdrawalEnabled',
        'withdrawal_fee' => 'getWithdrawalFee',
        'min_fee' => 'getMinFee',
        'max_fee' => 'getMaxFee'
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
        $this->container['asset'] = isset($data['asset']) ? $data['asset'] : 'BTC';
        $this->container['token_address'] = isset($data['token_address']) ? $data['token_address'] : '';
        $this->container['deposit_enabled'] = isset($data['deposit_enabled']) ? $data['deposit_enabled'] : true;
        $this->container['withdrawal_enabled'] = isset($data['withdrawal_enabled']) ? $data['withdrawal_enabled'] : true;
        $this->container['withdrawal_fee'] = isset($data['withdrawal_fee']) ? $data['withdrawal_fee'] : null;
        $this->container['min_fee'] = isset($data['min_fee']) ? $data['min_fee'] : null;
        $this->container['max_fee'] = isset($data['max_fee']) ? $data['max_fee'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['asset'] === null) {
            $invalidProperties[] = "'asset' can't be null";
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
     * Gets asset
     *
     * @return string
     */
    public function getAsset()
    {
        return $this->container['asset'];
    }

    /**
     * Sets asset
     *
     * @param string $asset asset
     *
     * @return $this
     */
    public function setAsset($asset)
    {
        $this->container['asset'] = $asset;

        return $this;
    }

    /**
     * Gets token_address
     *
     * @return string
     */
    public function getTokenAddress()
    {
        return $this->container['token_address'];
    }

    /**
     * Sets token_address
     *
     * @param string $token_address token_address
     *
     * @return $this
     */
    public function setTokenAddress($token_address)
    {
        $this->container['token_address'] = $token_address;

        return $this;
    }

    /**
     * Gets deposit_enabled
     *
     * @return bool
     */
    public function getDepositEnabled()
    {
        return $this->container['deposit_enabled'];
    }

    /**
     * Sets deposit_enabled
     *
     * @param bool $deposit_enabled deposit_enabled
     *
     * @return $this
     */
    public function setDepositEnabled($deposit_enabled)
    {
        $this->container['deposit_enabled'] = $deposit_enabled;

        return $this;
    }

    /**
     * Gets withdrawal_enabled
     *
     * @return bool
     */
    public function getWithdrawalEnabled()
    {
        return $this->container['withdrawal_enabled'];
    }

    /**
     * Sets withdrawal_enabled
     *
     * @param bool $withdrawal_enabled withdrawal_enabled
     *
     * @return $this
     */
    public function setWithdrawalEnabled($withdrawal_enabled)
    {
        $this->container['withdrawal_enabled'] = $withdrawal_enabled;

        return $this;
    }

    /**
     * Gets withdrawal_fee
     *
     * @return double
     */
    public function getWithdrawalFee()
    {
        return $this->container['withdrawal_fee'];
    }

    /**
     * Sets withdrawal_fee
     *
     * @param double $withdrawal_fee withdrawal_fee
     *
     * @return $this
     */
    public function setWithdrawalFee($withdrawal_fee)
    {
        $this->container['withdrawal_fee'] = $withdrawal_fee;

        return $this;
    }

    /**
     * Gets min_fee
     *
     * @return double
     */
    public function getMinFee()
    {
        return $this->container['min_fee'];
    }

    /**
     * Sets min_fee
     *
     * @param double $min_fee min_fee
     *
     * @return $this
     */
    public function setMinFee($min_fee)
    {
        $this->container['min_fee'] = $min_fee;

        return $this;
    }

    /**
     * Gets max_fee
     *
     * @return double
     */
    public function getMaxFee()
    {
        return $this->container['max_fee'];
    }

    /**
     * Sets max_fee
     *
     * @param double $max_fee max_fee
     *
     * @return $this
     */
    public function setMaxFee($max_fee)
    {
        $this->container['max_fee'] = $max_fee;

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


