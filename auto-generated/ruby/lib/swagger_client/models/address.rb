=begin
#BitMEX API

### REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 

OpenAPI spec version: 1.2.0
Contact: support@bitmex.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.4.42-SNAPSHOT

=end

require 'date'

module SwaggerClient
  class Address
    attr_accessor :id

    attr_accessor :currency

    attr_accessor :created

    attr_accessor :user_id

    attr_accessor :address

    attr_accessor :name

    attr_accessor :note

    attr_accessor :skip_confirm

    attr_accessor :skip_confirm_verified

    attr_accessor :skip2_fa

    attr_accessor :skip2_fa_verified

    attr_accessor :network

    attr_accessor :memo

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'id' => :'id',
        :'currency' => :'currency',
        :'created' => :'created',
        :'user_id' => :'userId',
        :'address' => :'address',
        :'name' => :'name',
        :'note' => :'note',
        :'skip_confirm' => :'skipConfirm',
        :'skip_confirm_verified' => :'skipConfirmVerified',
        :'skip2_fa' => :'skip2FA',
        :'skip2_fa_verified' => :'skip2FAVerified',
        :'network' => :'network',
        :'memo' => :'memo'
      }
    end

    # Attribute type mapping.
    def self.swagger_types
      {
        :'id' => :'Float',
        :'currency' => :'String',
        :'created' => :'DateTime',
        :'user_id' => :'Float',
        :'address' => :'String',
        :'name' => :'String',
        :'note' => :'String',
        :'skip_confirm' => :'BOOLEAN',
        :'skip_confirm_verified' => :'BOOLEAN',
        :'skip2_fa' => :'BOOLEAN',
        :'skip2_fa_verified' => :'BOOLEAN',
        :'network' => :'String',
        :'memo' => :'String'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      return unless attributes.is_a?(Hash)

      # convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h| h[k.to_sym] = v }

      if attributes.has_key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.has_key?(:'currency')
        self.currency = attributes[:'currency']
      end

      if attributes.has_key?(:'created')
        self.created = attributes[:'created']
      end

      if attributes.has_key?(:'userId')
        self.user_id = attributes[:'userId']
      end

      if attributes.has_key?(:'address')
        self.address = attributes[:'address']
      end

      if attributes.has_key?(:'name')
        self.name = attributes[:'name']
      end

      if attributes.has_key?(:'note')
        self.note = attributes[:'note']
      end

      if attributes.has_key?(:'skipConfirm')
        self.skip_confirm = attributes[:'skipConfirm']
      end

      if attributes.has_key?(:'skipConfirmVerified')
        self.skip_confirm_verified = attributes[:'skipConfirmVerified']
      end

      if attributes.has_key?(:'skip2FA')
        self.skip2_fa = attributes[:'skip2FA']
      end

      if attributes.has_key?(:'skip2FAVerified')
        self.skip2_fa_verified = attributes[:'skip2FAVerified']
      end

      if attributes.has_key?(:'network')
        self.network = attributes[:'network']
      end

      if attributes.has_key?(:'memo')
        self.memo = attributes[:'memo']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @address.nil?
        invalid_properties.push('invalid value for "address", address cannot be nil.')
      end

      if @name.nil?
        invalid_properties.push('invalid value for "name", name cannot be nil.')
      end

      if @network.nil?
        invalid_properties.push('invalid value for "network", network cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @address.nil?
      return false if @name.nil?
      return false if @network.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          id == o.id &&
          currency == o.currency &&
          created == o.created &&
          user_id == o.user_id &&
          address == o.address &&
          name == o.name &&
          note == o.note &&
          skip_confirm == o.skip_confirm &&
          skip_confirm_verified == o.skip_confirm_verified &&
          skip2_fa == o.skip2_fa &&
          skip2_fa_verified == o.skip2_fa_verified &&
          network == o.network &&
          memo == o.memo
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Fixnum] Hash code
    def hash
      [id, currency, created, user_id, address, name, note, skip_confirm, skip_confirm_verified, skip2_fa, skip2_fa_verified, network, memo].hash
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
