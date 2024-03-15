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
  # Order Line
  class OrderLines
    include JSON::Serializable

    # Optional properties
    # Order line ID.
    @[JSON::Field(key: "id", type: String?, nillable: true, emit_null: false)]
    property id : String?

    # Always \"orderline\".
    @[JSON::Field(key: "type", type: String?, nillable: true, emit_null: false)]
    property _type : String?

    # Ad account ID.
    @[JSON::Field(key: "ad_account_id", type: String?, nillable: true, emit_null: false)]
    property ad_account_id : String?

    # Purchase order ID.
    @[JSON::Field(key: "purchase_order_id", type: String?, nillable: true, emit_null: false)]
    property purchase_order_id : String?

    # Start time. Unix timestamp.
    @[JSON::Field(key: "start_time", type: Float64?, nillable: true, emit_null: false)]
    property start_time : Float64?

    # End time. Unix timestamp.
    @[JSON::Field(key: "end_time", type: Float64?, nillable: true, emit_null: false)]
    property end_time : Float64?

    # Order line budget in micro currency.
    @[JSON::Field(key: "budget", type: Float64?, nillable: true, emit_null: false)]
    property budget : Float64?

    # Order line paid budget in micro currency.
    @[JSON::Field(key: "paid_budget", type: Float64?, nillable: true, emit_null: false)]
    property paid_budget : Float64?

    # Order line status.
    @[JSON::Field(key: "status", type: OrderLineStatus?, nillable: true, emit_null: false)]
    property status : OrderLineStatus?

    # Order line name.
    @[JSON::Field(key: "name", type: String?, nillable: true, emit_null: false)]
    property name : String?

    # Order line paid type.
    @[JSON::Field(key: "paid_type", type: OrderLinePaidType?, nillable: true, emit_null: false)]
    property paid_type : OrderLinePaidType?

    class EnumAttributeValidator
      getter datatype : String
      getter allowable_values : Array(String)

      def initialize(datatype, allowable_values)
        @datatype = datatype
        @allowable_values = allowable_values.map do |value|
          case datatype.to_s
          when /Integer/i
            value.to_i
          when /Float/i
            value.to_f
          else
            value
          end
        end
      end

      def valid?(value)
        !value || allowable_values.includes?(value)
      end
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(@id : String?, @_type : String?, @ad_account_id : String?, @purchase_order_id : String?, @start_time : Float64?, @end_time : Float64?, @budget : Float64?, @paid_budget : Float64?, @status : OrderLineStatus?, @name : String?, @paid_type : OrderLinePaidType?)
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array(String).new
      pattern = Regexp.new(/^\d+$/)
      if !@id.nil? && @id !~ pattern
        invalid_properties.push("invalid value for \"id\", must conform to the pattern #{pattern}.")
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if !@id.nil? && @id !~ Regexp.new(/^\d+$/)
      true
    end

    # Custom attribute writer method with validation
    # @param [Object] id Value to be assigned
    def id=(id)
      pattern = Regexp.new(/^\d+$/)
      if !id.nil? && id !~ pattern
        raise ArgumentError.new("invalid value for \"id\", must conform to the pattern #{pattern}.")
      end

      @id = id
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.same?(o)
      self.class == o.class &&
          id == o.id &&
          _type == o._type &&
          ad_account_id == o.ad_account_id &&
          purchase_order_id == o.purchase_order_id &&
          start_time == o.start_time &&
          end_time == o.end_time &&
          budget == o.budget &&
          paid_budget == o.paid_budget &&
          status == o.status &&
          name == o.name &&
          paid_type == o.paid_type
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [id, _type, ad_account_id, purchase_order_id, start_time, end_time, budget, paid_budget, status, name, paid_type].hash
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
