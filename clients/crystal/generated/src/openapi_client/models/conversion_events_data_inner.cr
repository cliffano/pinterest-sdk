# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.12.0
#Contact: blah+oapicf@cliffano.com
#Generated by: https://openapi-generator.tech
#Generator version: 7.4.0
#

require "big"
require "json"
require "time"

module OpenAPIClient
  class ConversionEventsDataInner
    include JSON::Serializable

    # Required properties
    # The type of the user event. Please use the right event_name otherwise the event won’t be accepted and show up correctly in reports. <li><code>add_to_cart</code> <li><code>checkout</code> <li><code>custom</code> <li><code>lead</code> <li><code>page_visit</code> <li><code>search</code> <li><code>signup</code> <li><code>view_category</code> <li><code>watch_video</code>
    @[JSON::Field(key: "event_name", type: String, nillable: false, emit_null: false)]
    property event_name : String

    # The source indicating where the conversion event occurred. <li><code>app_android</code> <li><code>app_ios</code> <li><code>web</code> <li><code>offline</code>
    @[JSON::Field(key: "action_source", type: String, nillable: false, emit_null: false)]
    property action_source : String

    # The time when the event happened. Unix timestamp in seconds.
    @[JSON::Field(key: "event_time", type: Int64, nillable: false, emit_null: false)]
    property event_time : Int64

    # A unique id string that identifies this event and can be used for deduping between events ingested via both the conversion API and Pinterest tracking. Without this, event's data is likely to be double counted and will cause report metric inflation. Third-party vendors make sure this field is updated on both Pinterest tag and Conversions API side before rolling out template for Conversions API.
    @[JSON::Field(key: "event_id", type: String, nillable: false, emit_null: false)]
    property event_id : String

    @[JSON::Field(key: "user_data", type: ConversionEventsUserData, nillable: false, emit_null: false)]
    property user_data : ConversionEventsUserData

    # Optional properties
    # URL of the web conversion event.
    @[JSON::Field(key: "event_source_url", type: String?, nillable: true, emit_null: false)]
    property event_source_url : String?

    # When action_source is web or offline, it defines whether the user has opted out of tracking for web conversion events. While when action_source is app_android or app_ios, it defines whether the user has enabled Limit Ad Tracking on their iOS device, or opted out of Ads Personalization on their Android device.
    @[JSON::Field(key: "opt_out", type: Bool?, nillable: true, emit_null: false)]
    property opt_out : Bool?

    # The third party partner name responsible to send the event to Conversions API on behalf of the advertiser. The naming convention is \"ss-partnername\" lowercase. E.g ‘ss-shopify’
    @[JSON::Field(key: "partner_name", type: String?, nillable: true, emit_null: false)]
    property partner_name : String?

    @[JSON::Field(key: "custom_data", type: ConversionEventsDataInnerCustomData?, nillable: true, emit_null: false)]
    property custom_data : ConversionEventsDataInnerCustomData?

    # The app store app ID.
    @[JSON::Field(key: "app_id", type: String?, nillable: true, emit_null: false)]
    property app_id : String?

    # Name of the app.
    @[JSON::Field(key: "app_name", type: String?, nillable: true, emit_null: false)]
    property app_name : String?

    # Version of the app.
    @[JSON::Field(key: "app_version", type: String?, nillable: true, emit_null: false)]
    property app_version : String?

    # Brand of the user device.
    @[JSON::Field(key: "device_brand", type: String?, nillable: true, emit_null: false)]
    property device_brand : String?

    # User device's mobile carrier.
    @[JSON::Field(key: "device_carrier", type: String?, nillable: true, emit_null: false)]
    property device_carrier : String?

    # Model of the user device.
    @[JSON::Field(key: "device_model", type: String?, nillable: true, emit_null: false)]
    property device_model : String?

    # Type of the user device.
    @[JSON::Field(key: "device_type", type: String?, nillable: true, emit_null: false)]
    property device_type : String?

    # Version of the device operating system.
    @[JSON::Field(key: "os_version", type: String?, nillable: true, emit_null: false)]
    property os_version : String?

    # Whether the event occurred when the user device was connected to wifi.
    @[JSON::Field(key: "wifi", type: Bool?, nillable: true, emit_null: false)]
    property wifi : Bool?

    # Two-character ISO-639-1 language code indicating the user's language.
    @[JSON::Field(key: "language", type: String?, nillable: true, emit_null: false)]
    property language : String?

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(@event_name : String, @action_source : String, @event_time : Int64, @event_id : String, @user_data : ConversionEventsUserData, @event_source_url : String?, @opt_out : Bool?, @partner_name : String?, @custom_data : ConversionEventsDataInnerCustomData?, @app_id : String?, @app_name : String?, @app_version : String?, @device_brand : String?, @device_carrier : String?, @device_model : String?, @device_type : String?, @os_version : String?, @wifi : Bool?, @language : String?)
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array(String).new
      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.same?(o)
      self.class == o.class &&
          event_name == o.event_name &&
          action_source == o.action_source &&
          event_time == o.event_time &&
          event_id == o.event_id &&
          event_source_url == o.event_source_url &&
          opt_out == o.opt_out &&
          partner_name == o.partner_name &&
          user_data == o.user_data &&
          custom_data == o.custom_data &&
          app_id == o.app_id &&
          app_name == o.app_name &&
          app_version == o.app_version &&
          device_brand == o.device_brand &&
          device_carrier == o.device_carrier &&
          device_model == o.device_model &&
          device_type == o.device_type &&
          os_version == o.os_version &&
          wifi == o.wifi &&
          language == o.language
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [event_name, action_source, event_time, event_id, event_source_url, opt_out, partner_name, user_data, custom_data, app_id, app_name, app_version, device_brand, device_carrier, device_model, device_type, os_version, wifi, language].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def self.build_from_hash(attributes)
      new.build_from_hash(attributes)
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.openapi_types.each_pair do |key, type|
        if !attributes[self.class.attribute_map[key]]? && self.class.openapi_nullable.includes?(key)
          self.send("#{key}=", nil)
        elsif type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :Time
        Time.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :Boolean
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
        ({} of Symbol => String).tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        # models (e.g. Pet) or oneOf
        klass = OpenAPIClient.const_get(type)
        klass.respond_to?(:openapi_one_of) ? klass.build(value) : klass.build_from_hash(value)
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
      hash = {} of Symbol => String
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        if value.nil?
          is_nullable = self.class.openapi_nullable.includes?(attr)
          next if !is_nullable || (is_nullable && !instance_variable_defined?(:"@#{attr}"))
        end

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
        ({} of Symbol => String).tap do |hash|
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