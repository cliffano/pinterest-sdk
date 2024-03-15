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
  # Catalogs Retail Feed object
  class CatalogsRetailFeed
    include JSON::Serializable

    # Required properties
    # A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
    @[JSON::Field(key: "name", type: String, nillable: false, emit_null: false)]
    property name : String

    @[JSON::Field(key: "format", type: CatalogsFormat, nillable: false, emit_null: false)]
    property format : CatalogsFormat

    @[JSON::Field(key: "catalog_type", type: CatalogsType, nillable: false, emit_null: false)]
    property catalog_type : CatalogsType

    @[JSON::Field(key: "credentials", type: CatalogsFeedCredentials, nillable: false, emit_null: false)]
    property credentials : CatalogsFeedCredentials

    # The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    @[JSON::Field(key: "location", type: String, nillable: false, emit_null: false)]
    property location : String

    @[JSON::Field(key: "preferred_processing_schedule", type: CatalogsFeedProcessingSchedule, nillable: false, emit_null: false)]
    property preferred_processing_schedule : CatalogsFeedProcessingSchedule

    @[JSON::Field(key: "status", type: CatalogsStatus, nillable: false, emit_null: false)]
    property status : CatalogsStatus

    @[JSON::Field(key: "default_currency", type: NullableCurrency, nillable: false, emit_null: false)]
    property default_currency : NullableCurrency

    # The locale used within a feed for product descriptions.
    @[JSON::Field(key: "default_locale", type: String, nillable: false, emit_null: false)]
    property default_locale : String

    @[JSON::Field(key: "default_country", type: Country, nillable: false, emit_null: false)]
    property default_country : Country

    @[JSON::Field(key: "default_availability", type: ProductAvailabilityType, nillable: false, emit_null: false)]
    property default_availability : ProductAvailabilityType

    # Optional properties
    @[JSON::Field(key: "created_at", type: Time?, nillable: true, emit_null: false)]
    property created_at : Time?

    @[JSON::Field(key: "id", type: String?, nillable: true, emit_null: false)]
    property id : String?

    @[JSON::Field(key: "updated_at", type: Time?, nillable: true, emit_null: false)]
    property updated_at : Time?

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

    # List of class defined in allOf (OpenAPI v3)
    def self.openapi_all_of
      [
      :"CatalogsDbItem"
      ]
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(@name : String, @format : CatalogsFormat, @catalog_type : CatalogsType, @credentials : CatalogsFeedCredentials, @location : String, @preferred_processing_schedule : CatalogsFeedProcessingSchedule, @status : CatalogsStatus, @default_currency : NullableCurrency, @default_locale : String, @default_country : Country, @default_availability : ProductAvailabilityType, @created_at : Time?, @id : String?, @updated_at : Time?)
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
          created_at == o.created_at &&
          id == o.id &&
          updated_at == o.updated_at &&
          name == o.name &&
          format == o.format &&
          catalog_type == o.catalog_type &&
          credentials == o.credentials &&
          location == o.location &&
          preferred_processing_schedule == o.preferred_processing_schedule &&
          status == o.status &&
          default_currency == o.default_currency &&
          default_locale == o.default_locale &&
          default_country == o.default_country &&
          default_availability == o.default_availability
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [created_at, id, updated_at, name, format, catalog_type, credentials, location, preferred_processing_schedule, status, default_currency, default_locale, default_country, default_availability].hash
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
