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
  class AdResponse
    include JSON::Serializable

    # Optional properties
    # ID of the ad group that contains the ad.
    @[JSON::Field(key: "ad_group_id", type: String?, nillable: true, emit_null: false)]
    property ad_group_id : String?

    # Deep link URL for Android devices. Not currently available. Using this field will generate an error.
    @[JSON::Field(key: "android_deep_link", type: String?, nillable: true, emit_null: false)]
    property android_deep_link : String?

    # Comma-separated deep links for the carousel pin on Android.
    @[JSON::Field(key: "carousel_android_deep_links", type: Array(String)?, nillable: true, emit_null: false)]
    property carousel_android_deep_links : Array(String)?

    # Comma-separated destination URLs for the carousel pin to promote.
    @[JSON::Field(key: "carousel_destination_urls", type: Array(String)?, nillable: true, emit_null: false)]
    property carousel_destination_urls : Array(String)?

    # Comma-separated deep links for the carousel pin on iOS.
    @[JSON::Field(key: "carousel_ios_deep_links", type: Array(String)?, nillable: true, emit_null: false)]
    property carousel_ios_deep_links : Array(String)?

    # Tracking url for the ad clicks.
    @[JSON::Field(key: "click_tracking_url", type: String?, nillable: true, emit_null: false)]
    property click_tracking_url : String?

    @[JSON::Field(key: "creative_type", type: CreativeType?, nillable: true, emit_null: false)]
    property creative_type : CreativeType?

    # Destination URL.
    @[JSON::Field(key: "destination_url", type: String?, nillable: true, emit_null: false)]
    property destination_url : String?

    # Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
    @[JSON::Field(key: "ios_deep_link", type: String?, nillable: true, emit_null: false)]
    property ios_deep_link : String?

    # Is original pin deleted?
    @[JSON::Field(key: "is_pin_deleted", type: Bool?, nillable: true, emit_null: false)]
    property is_pin_deleted : Bool?

    # Is pin repinnable?
    @[JSON::Field(key: "is_removable", type: Bool?, nillable: true, emit_null: false)]
    property is_removable : Bool?

    # Name of the ad - 255 chars max.
    @[JSON::Field(key: "name", type: String?, nillable: true, emit_null: false)]
    property name : String?

    @[JSON::Field(key: "status", type: EntityStatus?, nillable: true, emit_null: false)]
    property status : EntityStatus?

    @[JSON::Field(key: "tracking_urls", type: AdCommonTrackingUrls?, nillable: true, emit_null: false)]
    property tracking_urls : AdCommonTrackingUrls?

    # Tracking URL for ad impressions.
    @[JSON::Field(key: "view_tracking_url", type: String?, nillable: true, emit_null: false)]
    property view_tracking_url : String?

    # Lead form ID for lead ad generation.
    @[JSON::Field(key: "lead_form_id", type: String?, nillable: true, emit_null: false)]
    property lead_form_id : String?

    @[JSON::Field(key: "grid_click_type", type: GridClickType?, nillable: true, emit_null: false)]
    property grid_click_type : GridClickType?

    # Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
    @[JSON::Field(key: "customizable_cta_type", type: String?, nillable: true, emit_null: false)]
    property customizable_cta_type : String?

    @[JSON::Field(key: "quiz_pin_data", type: AdCommonQuizPinData?, nillable: true, emit_null: false)]
    property quiz_pin_data : AdCommonQuizPinData?

    # Pin ID.
    @[JSON::Field(key: "pin_id", type: String?, nillable: true, emit_null: false)]
    property pin_id : String?

    # The ID of the advertiser that this ad belongs to.
    @[JSON::Field(key: "ad_account_id", type: String?, nillable: true, emit_null: false)]
    property ad_account_id : String?

    # ID of the ad campaign that contains this ad.
    @[JSON::Field(key: "campaign_id", type: String?, nillable: true, emit_null: false)]
    property campaign_id : String?

    # Destination URL template for all items within a collections drawer.
    @[JSON::Field(key: "collection_items_destination_url_template", type: String?, nillable: true, emit_null: false)]
    property collection_items_destination_url_template : String?

    # Pin creation time. Unix timestamp in seconds.
    @[JSON::Field(key: "created_time", type: Int32?, nillable: true, emit_null: false)]
    property created_time : Int32?

    # The ID of this ad.
    @[JSON::Field(key: "id", type: String?, nillable: true, emit_null: false)]
    property id : String?

    # Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
    @[JSON::Field(key: "rejected_reasons", type: Array(String)?, nillable: true, emit_null: false)]
    property rejected_reasons : Array(String)?

    # Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
    @[JSON::Field(key: "rejection_labels", type: Array(String)?, nillable: true, emit_null: false)]
    property rejection_labels : Array(String)?

    # Ad review status
    @[JSON::Field(key: "review_status", type: String?, nillable: true, emit_null: false)]
    property review_status : String?

    # Always \"ad\".
    @[JSON::Field(key: "type", type: String?, nillable: true, emit_null: false)]
    property _type : String?

    # Last update time. Unix timestamp in seconds.
    @[JSON::Field(key: "updated_time", type: Int32?, nillable: true, emit_null: false)]
    property updated_time : Int32?

    # Ad summary status
    @[JSON::Field(key: "summary_status", type: PinPromotionSummaryStatus?, nillable: true, emit_null: false)]
    property summary_status : PinPromotionSummaryStatus?

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
      :"AdCommon",
      :"AdPinId"
      ]
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(@ad_group_id : String?, @android_deep_link : String?, @carousel_android_deep_links : Array(String)?, @carousel_destination_urls : Array(String)?, @carousel_ios_deep_links : Array(String)?, @click_tracking_url : String?, @creative_type : CreativeType?, @destination_url : String?, @ios_deep_link : String?, @is_pin_deleted : Bool?, @is_removable : Bool?, @name : String?, @status : EntityStatus?, @tracking_urls : AdCommonTrackingUrls?, @view_tracking_url : String?, @lead_form_id : String?, @grid_click_type : GridClickType?, @customizable_cta_type : String?, @quiz_pin_data : AdCommonQuizPinData?, @pin_id : String?, @ad_account_id : String?, @campaign_id : String?, @collection_items_destination_url_template : String?, @created_time : Int32?, @id : String?, @rejected_reasons : Array(String)?, @rejection_labels : Array(String)?, @review_status : String?, @_type : String?, @updated_time : Int32?, @summary_status : PinPromotionSummaryStatus?)
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array(String).new
      pattern = Regexp.new(/^(AG)?\d+$/)
      if !@ad_group_id.nil? && @ad_group_id !~ pattern
        invalid_properties.push("invalid value for \"ad_group_id\", must conform to the pattern #{pattern}.")
      end

      pattern = Regexp.new(/^(AG)?\d+$/)
      if !@lead_form_id.nil? && @lead_form_id !~ pattern
        invalid_properties.push("invalid value for \"lead_form_id\", must conform to the pattern #{pattern}.")
      end

      pattern = Regexp.new(/^\d+$/)
      if !@pin_id.nil? && @pin_id !~ pattern
        invalid_properties.push("invalid value for \"pin_id\", must conform to the pattern #{pattern}.")
      end

      pattern = Regexp.new(/^\d+$/)
      if !@ad_account_id.nil? && @ad_account_id !~ pattern
        invalid_properties.push("invalid value for \"ad_account_id\", must conform to the pattern #{pattern}.")
      end

      pattern = Regexp.new(/^\d+$/)
      if !@campaign_id.nil? && @campaign_id !~ pattern
        invalid_properties.push("invalid value for \"campaign_id\", must conform to the pattern #{pattern}.")
      end

      pattern = Regexp.new(/^\d+$/)
      if !@id.nil? && @id !~ pattern
        invalid_properties.push("invalid value for \"id\", must conform to the pattern #{pattern}.")
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if !@ad_group_id.nil? && @ad_group_id !~ Regexp.new(/^(AG)?\d+$/)
      return false if !@lead_form_id.nil? && @lead_form_id !~ Regexp.new(/^(AG)?\d+$/)
      customizable_cta_type_validator = EnumAttributeValidator.new("String", ["GET_OFFER", "LEARN_MORE", "ORDER_NOW", "SHOP_NOW", "SIGN_UP", "SUBSCRIBE", "BUY_NOW", "CONTACT_US", "GET_QUOTE", "VISIT_WEBSITE", "APPLY_NOW", "BOOK_NOW", "REQUEST_DEMO", "REGISTER_NOW", "FIND_A_DEALER", "ADD_TO_CART", "WATCH_NOW", "READ_MORE", "null"])
      return false unless customizable_cta_type_validator.valid?(@customizable_cta_type)
      return false if !@pin_id.nil? && @pin_id !~ Regexp.new(/^\d+$/)
      return false if !@ad_account_id.nil? && @ad_account_id !~ Regexp.new(/^\d+$/)
      return false if !@campaign_id.nil? && @campaign_id !~ Regexp.new(/^\d+$/)
      return false if !@id.nil? && @id !~ Regexp.new(/^\d+$/)
      review_status_validator = EnumAttributeValidator.new("String", ["OTHER", "PENDING", "REJECTED", "APPROVED"])
      return false unless review_status_validator.valid?(@review_status)
      true
    end

    # Custom attribute writer method with validation
    # @param [Object] ad_group_id Value to be assigned
    def ad_group_id=(ad_group_id)
      pattern = Regexp.new(/^(AG)?\d+$/)
      if !ad_group_id.nil? && ad_group_id !~ pattern
        raise ArgumentError.new("invalid value for \"ad_group_id\", must conform to the pattern #{pattern}.")
      end

      @ad_group_id = ad_group_id
    end

    # Custom attribute writer method with validation
    # @param [Object] lead_form_id Value to be assigned
    def lead_form_id=(lead_form_id)
      pattern = Regexp.new(/^(AG)?\d+$/)
      if !lead_form_id.nil? && lead_form_id !~ pattern
        raise ArgumentError.new("invalid value for \"lead_form_id\", must conform to the pattern #{pattern}.")
      end

      @lead_form_id = lead_form_id
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] customizable_cta_type Object to be assigned
    def customizable_cta_type=(customizable_cta_type)
      validator = EnumAttributeValidator.new("String", ["GET_OFFER", "LEARN_MORE", "ORDER_NOW", "SHOP_NOW", "SIGN_UP", "SUBSCRIBE", "BUY_NOW", "CONTACT_US", "GET_QUOTE", "VISIT_WEBSITE", "APPLY_NOW", "BOOK_NOW", "REQUEST_DEMO", "REGISTER_NOW", "FIND_A_DEALER", "ADD_TO_CART", "WATCH_NOW", "READ_MORE", "null"])
      unless validator.valid?(customizable_cta_type)
        raise ArgumentError.new("invalid value for \"customizable_cta_type\", must be one of #{validator.allowable_values}.")
      end
      @customizable_cta_type = customizable_cta_type
    end

    # Custom attribute writer method with validation
    # @param [Object] pin_id Value to be assigned
    def pin_id=(pin_id)
      pattern = Regexp.new(/^\d+$/)
      if !pin_id.nil? && pin_id !~ pattern
        raise ArgumentError.new("invalid value for \"pin_id\", must conform to the pattern #{pattern}.")
      end

      @pin_id = pin_id
    end

    # Custom attribute writer method with validation
    # @param [Object] ad_account_id Value to be assigned
    def ad_account_id=(ad_account_id)
      pattern = Regexp.new(/^\d+$/)
      if !ad_account_id.nil? && ad_account_id !~ pattern
        raise ArgumentError.new("invalid value for \"ad_account_id\", must conform to the pattern #{pattern}.")
      end

      @ad_account_id = ad_account_id
    end

    # Custom attribute writer method with validation
    # @param [Object] campaign_id Value to be assigned
    def campaign_id=(campaign_id)
      pattern = Regexp.new(/^\d+$/)
      if !campaign_id.nil? && campaign_id !~ pattern
        raise ArgumentError.new("invalid value for \"campaign_id\", must conform to the pattern #{pattern}.")
      end

      @campaign_id = campaign_id
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

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] review_status Object to be assigned
    def review_status=(review_status)
      validator = EnumAttributeValidator.new("String", ["OTHER", "PENDING", "REJECTED", "APPROVED"])
      unless validator.valid?(review_status)
        raise ArgumentError.new("invalid value for \"review_status\", must be one of #{validator.allowable_values}.")
      end
      @review_status = review_status
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.same?(o)
      self.class == o.class &&
          ad_group_id == o.ad_group_id &&
          android_deep_link == o.android_deep_link &&
          carousel_android_deep_links == o.carousel_android_deep_links &&
          carousel_destination_urls == o.carousel_destination_urls &&
          carousel_ios_deep_links == o.carousel_ios_deep_links &&
          click_tracking_url == o.click_tracking_url &&
          creative_type == o.creative_type &&
          destination_url == o.destination_url &&
          ios_deep_link == o.ios_deep_link &&
          is_pin_deleted == o.is_pin_deleted &&
          is_removable == o.is_removable &&
          name == o.name &&
          status == o.status &&
          tracking_urls == o.tracking_urls &&
          view_tracking_url == o.view_tracking_url &&
          lead_form_id == o.lead_form_id &&
          grid_click_type == o.grid_click_type &&
          customizable_cta_type == o.customizable_cta_type &&
          quiz_pin_data == o.quiz_pin_data &&
          pin_id == o.pin_id &&
          ad_account_id == o.ad_account_id &&
          campaign_id == o.campaign_id &&
          collection_items_destination_url_template == o.collection_items_destination_url_template &&
          created_time == o.created_time &&
          id == o.id &&
          rejected_reasons == o.rejected_reasons &&
          rejection_labels == o.rejection_labels &&
          review_status == o.review_status &&
          _type == o._type &&
          updated_time == o.updated_time &&
          summary_status == o.summary_status
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [ad_group_id, android_deep_link, carousel_android_deep_links, carousel_destination_urls, carousel_ios_deep_links, click_tracking_url, creative_type, destination_url, ios_deep_link, is_pin_deleted, is_removable, name, status, tracking_urls, view_tracking_url, lead_form_id, grid_click_type, customizable_cta_type, quiz_pin_data, pin_id, ad_account_id, campaign_id, collection_items_destination_url_template, created_time, id, rejected_reasons, rejection_labels, review_status, _type, updated_time, summary_status].hash
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
