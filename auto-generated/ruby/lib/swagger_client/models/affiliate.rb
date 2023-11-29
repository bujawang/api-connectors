=begin
#BitMEX API

### REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 

OpenAPI spec version: 1.2.0
Contact: support@bitmex.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.4.38-SNAPSHOT

=end

require 'date'

module SwaggerClient
  class Affiliate
    attr_accessor :account

    attr_accessor :currency

    attr_accessor :prev_payout

    attr_accessor :prev_turnover

    attr_accessor :prev_comm

    attr_accessor :prev_timestamp

    attr_accessor :exec_turnover

    attr_accessor :exec_comm

    attr_accessor :total_referrals

    attr_accessor :total_turnover

    attr_accessor :total_comm

    attr_accessor :payout_pcnt

    attr_accessor :pending_payout

    attr_accessor :timestamp

    attr_accessor :referrer_account

    attr_accessor :referral_discount

    attr_accessor :affiliate_payout

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'account' => :'account',
        :'currency' => :'currency',
        :'prev_payout' => :'prevPayout',
        :'prev_turnover' => :'prevTurnover',
        :'prev_comm' => :'prevComm',
        :'prev_timestamp' => :'prevTimestamp',
        :'exec_turnover' => :'execTurnover',
        :'exec_comm' => :'execComm',
        :'total_referrals' => :'totalReferrals',
        :'total_turnover' => :'totalTurnover',
        :'total_comm' => :'totalComm',
        :'payout_pcnt' => :'payoutPcnt',
        :'pending_payout' => :'pendingPayout',
        :'timestamp' => :'timestamp',
        :'referrer_account' => :'referrerAccount',
        :'referral_discount' => :'referralDiscount',
        :'affiliate_payout' => :'affiliatePayout'
      }
    end

    # Attribute type mapping.
    def self.swagger_types
      {
        :'account' => :'Float',
        :'currency' => :'String',
        :'prev_payout' => :'Float',
        :'prev_turnover' => :'Float',
        :'prev_comm' => :'Float',
        :'prev_timestamp' => :'DateTime',
        :'exec_turnover' => :'Float',
        :'exec_comm' => :'Float',
        :'total_referrals' => :'Float',
        :'total_turnover' => :'Float',
        :'total_comm' => :'Float',
        :'payout_pcnt' => :'Float',
        :'pending_payout' => :'Float',
        :'timestamp' => :'DateTime',
        :'referrer_account' => :'Float',
        :'referral_discount' => :'Float',
        :'affiliate_payout' => :'Float'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      return unless attributes.is_a?(Hash)

      # convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h| h[k.to_sym] = v }

      if attributes.has_key?(:'account')
        self.account = attributes[:'account']
      end

      if attributes.has_key?(:'currency')
        self.currency = attributes[:'currency']
      end

      if attributes.has_key?(:'prevPayout')
        self.prev_payout = attributes[:'prevPayout']
      end

      if attributes.has_key?(:'prevTurnover')
        self.prev_turnover = attributes[:'prevTurnover']
      end

      if attributes.has_key?(:'prevComm')
        self.prev_comm = attributes[:'prevComm']
      end

      if attributes.has_key?(:'prevTimestamp')
        self.prev_timestamp = attributes[:'prevTimestamp']
      end

      if attributes.has_key?(:'execTurnover')
        self.exec_turnover = attributes[:'execTurnover']
      end

      if attributes.has_key?(:'execComm')
        self.exec_comm = attributes[:'execComm']
      end

      if attributes.has_key?(:'totalReferrals')
        self.total_referrals = attributes[:'totalReferrals']
      end

      if attributes.has_key?(:'totalTurnover')
        self.total_turnover = attributes[:'totalTurnover']
      end

      if attributes.has_key?(:'totalComm')
        self.total_comm = attributes[:'totalComm']
      end

      if attributes.has_key?(:'payoutPcnt')
        self.payout_pcnt = attributes[:'payoutPcnt']
      end

      if attributes.has_key?(:'pendingPayout')
        self.pending_payout = attributes[:'pendingPayout']
      end

      if attributes.has_key?(:'timestamp')
        self.timestamp = attributes[:'timestamp']
      end

      if attributes.has_key?(:'referrerAccount')
        self.referrer_account = attributes[:'referrerAccount']
      end

      if attributes.has_key?(:'referralDiscount')
        self.referral_discount = attributes[:'referralDiscount']
      end

      if attributes.has_key?(:'affiliatePayout')
        self.affiliate_payout = attributes[:'affiliatePayout']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @account.nil?
        invalid_properties.push('invalid value for "account", account cannot be nil.')
      end

      if @currency.nil?
        invalid_properties.push('invalid value for "currency", currency cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @account.nil?
      return false if @currency.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          account == o.account &&
          currency == o.currency &&
          prev_payout == o.prev_payout &&
          prev_turnover == o.prev_turnover &&
          prev_comm == o.prev_comm &&
          prev_timestamp == o.prev_timestamp &&
          exec_turnover == o.exec_turnover &&
          exec_comm == o.exec_comm &&
          total_referrals == o.total_referrals &&
          total_turnover == o.total_turnover &&
          total_comm == o.total_comm &&
          payout_pcnt == o.payout_pcnt &&
          pending_payout == o.pending_payout &&
          timestamp == o.timestamp &&
          referrer_account == o.referrer_account &&
          referral_discount == o.referral_discount &&
          affiliate_payout == o.affiliate_payout
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Fixnum] Hash code
    def hash
      [account, currency, prev_payout, prev_turnover, prev_comm, prev_timestamp, exec_turnover, exec_comm, total_referrals, total_turnover, total_comm, payout_pcnt, pending_payout, timestamp, referrer_account, referral_discount, affiliate_payout].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.swagger_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :BOOLEAN
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        temp_model = SwaggerClient.const_get(type).new
        temp_model.build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        next if value.nil?
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end

  end
end
