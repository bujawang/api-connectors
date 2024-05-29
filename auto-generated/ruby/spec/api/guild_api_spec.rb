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

# Unit tests for SwaggerClient::GuildApi
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'GuildApi' do
  before do
    # run before each test
    @instance = SwaggerClient::GuildApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of GuildApi' do
    it 'should create an instance of GuildApi' do
      expect(@instance).to be_instance_of(SwaggerClient::GuildApi)
    end
  end

  # unit tests for guild_archive
  # Archive a guild
  # @param [Hash] opts the optional parameters
  # @return [Object]
  describe 'guild_archive test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for guild_edit
  # Edit guild new guild
  # @param name Name of the guild, must be unique, must be at least 5 characters
  # @param emoji Emoji name.
  # @param pot_distribution_percent How much of the pot should be distributed to the guild members, must be between 0 and 100
  # @param pot_distribution_type How the pot should be distributed to the guild members, must be one of the following: ROLL_OVER, TOP_3, TOP_5, TOP_10, VOLUME_PERCENTAGE, TOP_3_BY_ADV, TOP_5_BY_ADV, TOP_10_BY_ADV, TOP_3_BY_ROI, TOP_5_BY_ROI, TOP_10_BY_ROI, RANDOM
  # @param [Hash] opts the optional parameters
  # @option opts [Float] :pot_trader_id User ID of the guild member with order write permission for the pot
  # @option opts [String] :description Guild description, can be used to explain the guild to other users.
  # @option opts [String] :twitter Guild twitter handle.
  # @option opts [String] :discord Guild discord link.
  # @option opts [String] :telegram Guild telegram link.
  # @option opts [String] :img_url URL for the profile image of the guild, is used by clients to add some color to the guild, if no image is provided, a default image is used
  # @option opts [BOOLEAN] :is_private Guild privacy status
  # @return [Guild]
  describe 'guild_edit test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for guild_get
  # Get all guilds
  # @param [Hash] opts the optional parameters
  # @return [Array<XAny>]
  describe 'guild_get test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for guild_join
  # Request to Join a private guild or join a public guild
  # @param code 
  # @param [Hash] opts the optional parameters
  # @return [Object]
  describe 'guild_join test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for guild_kick
  # Kick member from guild
  # @param member_user_id 
  # @param [Hash] opts the optional parameters
  # @return [Object]
  describe 'guild_kick test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for guild_leave
  # Leave guild or cancel guild join request
  # @param [Hash] opts the optional parameters
  # @return [Object]
  describe 'guild_leave test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for guild_new
  # Creates a new guild
  # @param name Name of the guild, must be unique, must be at least 5 characters
  # @param emoji Emoji name.
  # @param pot_distribution_percent How much of the pot should be distributed to the guild members, must be between 0 and 100
  # @param pot_distribution_type How the pot should be distributed to the guild members, must be one of the following: ROLL_OVER, TOP_3, TOP_5, TOP_10, VOLUME_PERCENTAGE, TOP_3_BY_ADV, TOP_5_BY_ADV, TOP_10_BY_ADV, TOP_3_BY_ROI, TOP_5_BY_ROI, TOP_10_BY_ROI, RANDOM
  # @param [Hash] opts the optional parameters
  # @option opts [String] :description Guild description, can be used to explain the guild to other users.
  # @option opts [String] :twitter Guild twitter handle.
  # @option opts [String] :discord Guild discord link.
  # @option opts [String] :telegram Guild telegram link.
  # @option opts [String] :img_url URL for the profile image of the guild, is used by clients to add some color to the guild, if no image is provided, a default image is used
  # @option opts [BOOLEAN] :is_private Guild privacy status
  # @return [Guild]
  describe 'guild_new test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for guild_share_trades
  # Toggle share trades for your account, which controls whether your guild members can see your orders and positions in their UI
  # @param share_trades 
  # @param [Hash] opts the optional parameters
  # @return [Object]
  describe 'guild_share_trades test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
