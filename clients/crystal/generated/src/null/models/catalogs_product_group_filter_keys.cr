# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.3.0
#Contact: pinterest-api@pinterest.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 5.4.0
#

require "json"
require "time"

module 
  class CatalogsProductGroupFilterKeys
    include JSON::Serializable

    # Required properties
    @[JSON::Field(key: "MIN_PRICE", type: CatalogsProductGroupPricingCriteria, nillable: false, emit_null: false)]
    property min_price : CatalogsProductGroupPricingCriteria

    @[JSON::Field(key: "MAX_PRICE", type: CatalogsProductGroupPricingCriteria, nillable: false, emit_null: false)]
    property max_price : CatalogsProductGroupPricingCriteria

    @[JSON::Field(key: "CURRENCY", type: CatalogsProductGroupCurrencyCriteria, nillable: false, emit_null: false)]
    property currency : CatalogsProductGroupCurrencyCriteria

    @[JSON::Field(key: "ITEM_ID", type: CatalogsProductGroupCurrencyCriteria, nillable: false, emit_null: false)]
    property item_id : CatalogsProductGroupCurrencyCriteria

    @[JSON::Field(key: "AVAILABILITY", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property availability : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "BRAND", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property brand : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "CONDITION", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property condition : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "CUSTOM_LABEL_0", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property custom_label_0 : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "CUSTOM_LABEL_1", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property custom_label_1 : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "CUSTOM_LABEL_2", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property custom_label_2 : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "CUSTOM_LABEL_3", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property custom_label_3 : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "CUSTOM_LABEL_4", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property custom_label_4 : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "ITEM_GROUP_ID", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property item_group_id : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "GENDER", type: CatalogsProductGroupMultipleStringCriteria, nillable: false, emit_null: false)]
    property gender : CatalogsProductGroupMultipleStringCriteria

    @[JSON::Field(key: "PRODUCT_TYPE_4", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property product_type_4 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "PRODUCT_TYPE_3", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property product_type_3 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "PRODUCT_TYPE_2", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property product_type_2 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "PRODUCT_TYPE_1", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property product_type_1 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "PRODUCT_TYPE_0", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property product_type_0 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "GOOGLE_PRODUCT_CATEGORY_6", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property google_product_category_6 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "GOOGLE_PRODUCT_CATEGORY_5", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property google_product_category_5 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "GOOGLE_PRODUCT_CATEGORY_4", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property google_product_category_4 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "GOOGLE_PRODUCT_CATEGORY_3", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property google_product_category_3 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "GOOGLE_PRODUCT_CATEGORY_2", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property google_product_category_2 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "GOOGLE_PRODUCT_CATEGORY_1", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property google_product_category_1 : CatalogsProductGroupMultipleStringListCriteria

    @[JSON::Field(key: "GOOGLE_PRODUCT_CATEGORY_0", type: CatalogsProductGroupMultipleStringListCriteria, nillable: false, emit_null: false)]
    property google_product_category_0 : CatalogsProductGroupMultipleStringListCriteria

    # List of class defined in anyOf (OpenAPI v3)
    def self.openapi_any_of
      [
      :"AvailabilityFilter",
      :"BrandFilter",
      :"ConditionFilter",
      :"CurrencyFilter",
      :"CustomLabel0Filter",
      :"CustomLabel1Filter",
      :"CustomLabel2Filter",
      :"CustomLabel3Filter",
      :"CustomLabel4Filter",
      :"GenderFilter",
      :"GoogleProductCategory0Filter",
      :"GoogleProductCategory1Filter",
      :"GoogleProductCategory2Filter",
      :"GoogleProductCategory3Filter",
      :"GoogleProductCategory4Filter",
      :"GoogleProductCategory5Filter",
      :"GoogleProductCategory6Filter",
      :"ItemGroupIdFilter",
      :"ItemIdFilter",
      :"MaxPriceFilter",
      :"MinPriceFilter",
      :"ProductType0Filter",
      :"ProductType1Filter",
      :"ProductType2Filter",
      :"ProductType3Filter",
      :"ProductType4Filter"
      ]
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(@min_price : CatalogsProductGroupPricingCriteria, @max_price : CatalogsProductGroupPricingCriteria, @currency : CatalogsProductGroupCurrencyCriteria, @item_id : CatalogsProductGroupCurrencyCriteria, @availability : CatalogsProductGroupMultipleStringCriteria, @brand : CatalogsProductGroupMultipleStringCriteria, @condition : CatalogsProductGroupMultipleStringCriteria, @custom_label_0 : CatalogsProductGroupMultipleStringCriteria, @custom_label_1 : CatalogsProductGroupMultipleStringCriteria, @custom_label_2 : CatalogsProductGroupMultipleStringCriteria, @custom_label_3 : CatalogsProductGroupMultipleStringCriteria, @custom_label_4 : CatalogsProductGroupMultipleStringCriteria, @item_group_id : CatalogsProductGroupMultipleStringCriteria, @gender : CatalogsProductGroupMultipleStringCriteria, @product_type_4 : CatalogsProductGroupMultipleStringListCriteria, @product_type_3 : CatalogsProductGroupMultipleStringListCriteria, @product_type_2 : CatalogsProductGroupMultipleStringListCriteria, @product_type_1 : CatalogsProductGroupMultipleStringListCriteria, @product_type_0 : CatalogsProductGroupMultipleStringListCriteria, @google_product_category_6 : CatalogsProductGroupMultipleStringListCriteria, @google_product_category_5 : CatalogsProductGroupMultipleStringListCriteria, @google_product_category_4 : CatalogsProductGroupMultipleStringListCriteria, @google_product_category_3 : CatalogsProductGroupMultipleStringListCriteria, @google_product_category_2 : CatalogsProductGroupMultipleStringListCriteria, @google_product_category_1 : CatalogsProductGroupMultipleStringListCriteria, @google_product_category_0 : CatalogsProductGroupMultipleStringListCriteria)
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
      _any_of_found = false
      self.class.openapi_any_of.each do |_class|
        _any_of = .const_get(_class).build_from_hash(self.to_hash)
        if _any_of.valid?
          _any_of_found = true
        end
      end

      if !_any_of_found
        return false
      end

      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.same?(o)
      self.class == o.class &&
          min_price == o.min_price &&
          max_price == o.max_price &&
          currency == o.currency &&
          item_id == o.item_id &&
          availability == o.availability &&
          brand == o.brand &&
          condition == o.condition &&
          custom_label_0 == o.custom_label_0 &&
          custom_label_1 == o.custom_label_1 &&
          custom_label_2 == o.custom_label_2 &&
          custom_label_3 == o.custom_label_3 &&
          custom_label_4 == o.custom_label_4 &&
          item_group_id == o.item_group_id &&
          gender == o.gender &&
          product_type_4 == o.product_type_4 &&
          product_type_3 == o.product_type_3 &&
          product_type_2 == o.product_type_2 &&
          product_type_1 == o.product_type_1 &&
          product_type_0 == o.product_type_0 &&
          google_product_category_6 == o.google_product_category_6 &&
          google_product_category_5 == o.google_product_category_5 &&
          google_product_category_4 == o.google_product_category_4 &&
          google_product_category_3 == o.google_product_category_3 &&
          google_product_category_2 == o.google_product_category_2 &&
          google_product_category_1 == o.google_product_category_1 &&
          google_product_category_0 == o.google_product_category_0
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [min_price, max_price, currency, item_id, availability, brand, condition, custom_label_0, custom_label_1, custom_label_2, custom_label_3, custom_label_4, item_group_id, gender, product_type_4, product_type_3, product_type_2, product_type_1, product_type_0, google_product_category_6, google_product_category_5, google_product_category_4, google_product_category_3, google_product_category_2, google_product_category_1, google_product_category_0].hash
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
        klass = .const_get(type)
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
