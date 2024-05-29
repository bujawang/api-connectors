=begin
#BitMEX API

### REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 

OpenAPI spec version: 1.2.0
Contact: support@bitmex.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.4.42-SNAPSHOT

=end

require 'spec_helper'
require 'json'

# Unit tests for SwaggerClient::InstrumentApi
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'InstrumentApi' do
  before do
    # run before each test
    @instance = SwaggerClient::InstrumentApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of InstrumentApi' do
    it 'should create an instance of InstrumentApi' do
      expect(@instance).to be_instance_of(SwaggerClient::InstrumentApi)
    end
  end

  # unit tests for instrument_get
  # Get instruments.
  # This returns all instruments and indices, including those that have settled or are unlisted. Use this endpoint if you want to query for individual instruments or use a complex filter. Use &#x60;/instrument/active&#x60; to return active instruments, or use a filter like &#x60;{\&quot;state\&quot;: \&quot;Open\&quot;}&#x60;.  The instrument type is specified by the &#x60;typ&#x60; param.  - Perpetual Contracts - &#x60;FFWCSX&#x60; - Perpetual Contracts (FX underliers) - &#x60;FFWCSF&#x60; - Spot - &#x60;IFXXXP&#x60; - Futures - &#x60;FFCCSX&#x60; - BitMEX Basket Index - &#x60;MRBXXX&#x60; - BitMEX Crypto Index - &#x60;MRCXXX&#x60; - BitMEX FX Index - &#x60;MRFXXX&#x60; - BitMEX Lending/Premium Index - &#x60;MRRXXX&#x60; - BitMEX Volatility Index - &#x60;MRIXXX&#x60; 
  # @param [Hash] opts the optional parameters
  # @option opts [String] :symbol Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;.  Symbols are case-insensitive.
  # @option opts [String] :filter Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details.
  # @option opts [String] :columns Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect.
  # @option opts [Integer] :count Number of results to fetch. Must be a positive integer.
  # @option opts [Integer] :start Starting point for results.
  # @option opts [BOOLEAN] :reverse If true, will sort results newest first.
  # @option opts [DateTime] :start_time Starting date filter for results.
  # @option opts [DateTime] :end_time Ending date filter for results.
  # @return [Array<Instrument>]
  describe 'instrument_get test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for instrument_get_active
  # Get all active instruments and instruments that have expired in &lt;24hrs.
  # @param [Hash] opts the optional parameters
  # @return [Array<Instrument>]
  describe 'instrument_get_active test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for instrument_get_active_and_indices
  # Helper method. Gets all active instruments and all indices. This is a join of the result of /indices and /active.
  # @param [Hash] opts the optional parameters
  # @return [Array<Instrument>]
  describe 'instrument_get_active_and_indices test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for instrument_get_active_intervals
  # Return all active contract series and interval pairs.
  # This endpoint is useful for determining which pairs are live. It returns two arrays of   strings. The first is intervals, such as &#x60;[\&quot;XBT:perpetual\&quot;, \&quot;XBT:quarterly\&quot;, \&quot;XBT:biquarterly\&quot;, \&quot;ETH:quarterly\&quot;, ...]&#x60;. These identifiers are usable in any query&#39;s &#x60;symbol&#x60; param. The second array is the current resolution of these intervals. Results are mapped at the same index.
  # @param [Hash] opts the optional parameters
  # @return [InstrumentInterval]
  describe 'instrument_get_active_intervals test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for instrument_get_composite_index
  # Show constituent parts of an index.
  # Composite indices are built from multiple external price sources.  Use this endpoint to get the underlying prices of an index. For example, send a &#x60;symbol&#x60; of &#x60;.BXBT&#x60; to get the ticks and weights of the constituent exchanges that build the \&quot;.BXBT\&quot; index.  A tick with reference &#x60;\&quot;BMI\&quot;&#x60; and weight &#x60;null&#x60; is the composite index tick. 
  # @param [Hash] opts the optional parameters
  # @option opts [String] :symbol The composite index symbol.
  # @option opts [String] :filter Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;.
  # @option opts [String] :columns Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect.
  # @option opts [Integer] :count Number of results to fetch. Must be a positive integer.
  # @option opts [Integer] :start Starting point for results.
  # @option opts [BOOLEAN] :reverse If true, will sort results newest first.
  # @option opts [DateTime] :start_time Starting date filter for results.
  # @option opts [DateTime] :end_time Ending date filter for results.
  # @return [Array<IndexComposite>]
  describe 'instrument_get_composite_index test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for instrument_get_indices
  # Get all price indices.
  # @param [Hash] opts the optional parameters
  # @return [Array<Instrument>]
  describe 'instrument_get_indices test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for instrument_get_usd_volume
  # Get a summary of exchange statistics in USD.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :symbol Filter by symbol.
  # @option opts [String] :columns Array of column names to fetch.
  # @return [Array<StatsUSDBySymbol>]
  describe 'instrument_get_usd_volume test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
