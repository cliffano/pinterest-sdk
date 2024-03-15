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
  class AdGroupCreateRequest
    include JSON::Serializable

    # Required properties
    # Ad group name.
    @[JSON::Field(key: "name", type: String, nillable: false, emit_null: false)]
    property name : String

    # Campaign ID of the ad group.
    @[JSON::Field(key: "campaign_id", type: String, nillable: false, emit_null: false)]
    property campaign_id : String

    @[JSON::Field(key: "billable_event", type: ActionType, nillable: false, emit_null: false)]
    property billable_event : ActionType

    # Optional properties
    # Ad group/entity status.
    @[JSON::Field(key: "status", type: EntityStatus?, nillable: true, emit_null: false)]
    property status : EntityStatus?

    # Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
    @[JSON::Field(key: "budget_in_micro_currency", type: Int32?, nillable: true, emit_null: false)]
    property budget_in_micro_currency : Int32?

    # Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
    @[JSON::Field(key: "bid_in_micro_currency", type: Int32?, nillable: true, emit_null: false)]
    property bid_in_micro_currency : Int32?

    @[JSON::Field(key: "optimization_goal_metadata", type: AdGroupCommonOptimizationGoalMetadata?, nillable: true, emit_null: false)]
    property optimization_goal_metadata : AdGroupCommonOptimizationGoalMetadata?

    @[JSON::Field(key: "budget_type", type: BudgetType?, default: "DAILY", nillable: true, emit_null: false)]
    property budget_type : BudgetType?

    # Ad group start time. Unix timestamp in seconds. Defaults to current time.
    @[JSON::Field(key: "start_time", type: Int32?, nillable: true, emit_null: false)]
    property start_time : Int32?

    # Ad group end time. Unix timestamp in seconds.
    @[JSON::Field(key: "end_time", type: Int32?, nillable: true, emit_null: false)]
    property end_time : Int32?

    @[JSON::Field(key: "targeting_spec", type: TargetingSpec?, nillable: true, emit_null: false)]
    property targeting_spec : TargetingSpec?

    # Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
    @[JSON::Field(key: "lifetime_frequency_cap", type: Int32?, nillable: true, emit_null: false)]
    property lifetime_frequency_cap : Int32?

    @[JSON::Field(key: "tracking_urls", type: AdGroupCommonTrackingUrls?, nillable: true, emit_null: false)]
    property tracking_urls : AdGroupCommonTrackingUrls?

    # Enable auto-targeting for ad group.Default value is True. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
    @[JSON::Field(key: "auto_targeting_enabled", type: Bool?, nillable: true, emit_null: false)]
    property auto_targeting_enabled : Bool?

    # <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
    @[JSON::Field(key: "placement_group", type: PlacementGroupType?, nillable: true, emit_null: false)]
    property placement_group : PlacementGroupType?

    @[JSON::Field(key: "pacing_delivery_type", type: PacingDeliveryType?, default: "STANDARD", nillable: true, emit_null: false)]
    property pacing_delivery_type : PacingDeliveryType?

    # Bid strategy type
    @[JSON::Field(key: "bid_strategy_type", type: String?, nillable: true, emit_null: false)]
    property bid_strategy_type : String?

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
      :"AdGroupCommon"
      ]
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(@name : String, @campaign_id : String, @billable_event : ActionType, @status : EntityStatus?, @budget_in_micro_currency : Int32?, @bid_in_micro_currency : Int32?, @optimization_goal_metadata : AdGroupCommonOptimizationGoalMetadata?, @budget_type : BudgetType?, @start_time : Int32?, @end_time : Int32?, @targeting_spec : TargetingSpec?, @lifetime_frequency_cap : Int32?, @tracking_urls : AdGroupCommonTrackingUrls?, @auto_targeting_enabled : Bool?, @placement_group : PlacementGroupType?, @pacing_delivery_type : PacingDeliveryType?, @bid_strategy_type : String?)
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array(String).new
      pattern = Regexp.new(/^[C]?\d+$/)
      if @campaign_id !~ pattern
        invalid_properties.push("invalid value for \"campaign_id\", must conform to the pattern #{pattern}.")
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @campaign_id !~ Regexp.new(/^[C]?\d+$/)
      bid_strategy_type_validator = EnumAttributeValidator.new("String", ["AUTOMATIC_BID", "MAX_BID", "TARGET_AVG", "null"])
      return false unless bid_strategy_type_validator.valid?(@bid_strategy_type)
      true
    end

    # Custom attribute writer method with validation
    # @param [Object] campaign_id Value to be assigned
    def campaign_id=(campaign_id)
      pattern = Regexp.new(/^[C]?\d+$/)
      if campaign_id !~ pattern
        raise ArgumentError.new("invalid value for \"campaign_id\", must conform to the pattern #{pattern}.")
      end

      @campaign_id = campaign_id
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] bid_strategy_type Object to be assigned
    def bid_strategy_type=(bid_strategy_type)
      validator = EnumAttributeValidator.new("String", ["AUTOMATIC_BID", "MAX_BID", "TARGET_AVG", "null"])
      unless validator.valid?(bid_strategy_type)
        raise ArgumentError.new("invalid value for \"bid_strategy_type\", must be one of #{validator.allowable_values}.")
      end
      @bid_strategy_type = bid_strategy_type
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.same?(o)
      self.class == o.class &&
          name == o.name &&
          status == o.status &&
          budget_in_micro_currency == o.budget_in_micro_currency &&
          bid_in_micro_currency == o.bid_in_micro_currency &&
          optimization_goal_metadata == o.optimization_goal_metadata &&
          budget_type == o.budget_type &&
          start_time == o.start_time &&
          end_time == o.end_time &&
          targeting_spec == o.targeting_spec &&
          lifetime_frequency_cap == o.lifetime_frequency_cap &&
          tracking_urls == o.tracking_urls &&
          auto_targeting_enabled == o.auto_targeting_enabled &&
          placement_group == o.placement_group &&
          pacing_delivery_type == o.pacing_delivery_type &&
          campaign_id == o.campaign_id &&
          billable_event == o.billable_event &&
          bid_strategy_type == o.bid_strategy_type
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [name, status, budget_in_micro_currency, bid_in_micro_currency, optimization_goal_metadata, budget_type, start_time, end_time, targeting_spec, lifetime_frequency_cap, tracking_urls, auto_targeting_enabled, placement_group, pacing_delivery_type, campaign_id, billable_event, bid_strategy_type].hash
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
