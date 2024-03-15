note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.12.0
 	    Contact: blah+oapicf@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class CONVERSION_EVENTS_DATA_INNER




feature --Access

    event_name: detachable STRING_32
      -- The type of the user event. Please use the right event_name otherwise the event won’t be accepted and show up correctly in reports. <li><code>add_to_cart</code> <li><code>checkout</code> <li><code>custom</code> <li><code>lead</code> <li><code>page_visit</code> <li><code>search</code> <li><code>signup</code> <li><code>view_category</code> <li><code>watch_video</code>
    action_source: detachable STRING_32
      -- The source indicating where the conversion event occurred. <li><code>app_android</code> <li><code>app_ios</code> <li><code>web</code> <li><code>offline</code>
    event_time: INTEGER_64
      -- The time when the event happened. Unix timestamp in seconds.
    event_id: detachable STRING_32
      -- A unique id string that identifies this event and can be used for deduping between events ingested via both the conversion API and Pinterest tracking. Without this, event's data is likely to be double counted and will cause report metric inflation. Third-party vendors make sure this field is updated on both Pinterest tag and Conversions API side before rolling out template for Conversions API.
    event_source_url: detachable STRING_32
      -- URL of the web conversion event.
    opt_out: BOOLEAN
      -- When action_source is web or offline, it defines whether the user has opted out of tracking for web conversion events. While when action_source is app_android or app_ios, it defines whether the user has enabled Limit Ad Tracking on their iOS device, or opted out of Ads Personalization on their Android device.
    partner_name: detachable STRING_32
      -- The third party partner name responsible to send the event to Conversions API on behalf of the advertiser. The naming convention is \"ss-partnername\" lowercase. E.g ‘ss-shopify’
    user_data: detachable CONVERSION_EVENTS_USER_DATA
      
    custom_data: detachable CONVERSION_EVENTS_DATA_INNER_CUSTOM_DATA
      
    app_id: detachable STRING_32
      -- The app store app ID.
    app_name: detachable STRING_32
      -- Name of the app.
    app_version: detachable STRING_32
      -- Version of the app.
    device_brand: detachable STRING_32
      -- Brand of the user device.
    device_carrier: detachable STRING_32
      -- User device's mobile carrier.
    device_model: detachable STRING_32
      -- Model of the user device.
    device_type: detachable STRING_32
      -- Type of the user device.
    os_version: detachable STRING_32
      -- Version of the device operating system.
    wifi: BOOLEAN
      -- Whether the event occurred when the user device was connected to wifi.
    language: detachable STRING_32
      -- Two-character ISO-639-1 language code indicating the user's language.

feature -- Change Element

    set_event_name (a_name: like event_name)
        -- Set 'event_name' with 'a_name'.
      do
        event_name := a_name
      ensure
        event_name_set: event_name = a_name
      end

    set_action_source (a_name: like action_source)
        -- Set 'action_source' with 'a_name'.
      do
        action_source := a_name
      ensure
        action_source_set: action_source = a_name
      end

    set_event_time (a_name: like event_time)
        -- Set 'event_time' with 'a_name'.
      do
        event_time := a_name
      ensure
        event_time_set: event_time = a_name
      end

    set_event_id (a_name: like event_id)
        -- Set 'event_id' with 'a_name'.
      do
        event_id := a_name
      ensure
        event_id_set: event_id = a_name
      end

    set_event_source_url (a_name: like event_source_url)
        -- Set 'event_source_url' with 'a_name'.
      do
        event_source_url := a_name
      ensure
        event_source_url_set: event_source_url = a_name
      end

    set_opt_out (a_name: like opt_out)
        -- Set 'opt_out' with 'a_name'.
      do
        opt_out := a_name
      ensure
        opt_out_set: opt_out = a_name
      end

    set_partner_name (a_name: like partner_name)
        -- Set 'partner_name' with 'a_name'.
      do
        partner_name := a_name
      ensure
        partner_name_set: partner_name = a_name
      end

    set_user_data (a_name: like user_data)
        -- Set 'user_data' with 'a_name'.
      do
        user_data := a_name
      ensure
        user_data_set: user_data = a_name
      end

    set_custom_data (a_name: like custom_data)
        -- Set 'custom_data' with 'a_name'.
      do
        custom_data := a_name
      ensure
        custom_data_set: custom_data = a_name
      end

    set_app_id (a_name: like app_id)
        -- Set 'app_id' with 'a_name'.
      do
        app_id := a_name
      ensure
        app_id_set: app_id = a_name
      end

    set_app_name (a_name: like app_name)
        -- Set 'app_name' with 'a_name'.
      do
        app_name := a_name
      ensure
        app_name_set: app_name = a_name
      end

    set_app_version (a_name: like app_version)
        -- Set 'app_version' with 'a_name'.
      do
        app_version := a_name
      ensure
        app_version_set: app_version = a_name
      end

    set_device_brand (a_name: like device_brand)
        -- Set 'device_brand' with 'a_name'.
      do
        device_brand := a_name
      ensure
        device_brand_set: device_brand = a_name
      end

    set_device_carrier (a_name: like device_carrier)
        -- Set 'device_carrier' with 'a_name'.
      do
        device_carrier := a_name
      ensure
        device_carrier_set: device_carrier = a_name
      end

    set_device_model (a_name: like device_model)
        -- Set 'device_model' with 'a_name'.
      do
        device_model := a_name
      ensure
        device_model_set: device_model = a_name
      end

    set_device_type (a_name: like device_type)
        -- Set 'device_type' with 'a_name'.
      do
        device_type := a_name
      ensure
        device_type_set: device_type = a_name
      end

    set_os_version (a_name: like os_version)
        -- Set 'os_version' with 'a_name'.
      do
        os_version := a_name
      ensure
        os_version_set: os_version = a_name
      end

    set_wifi (a_name: like wifi)
        -- Set 'wifi' with 'a_name'.
      do
        wifi := a_name
      ensure
        wifi_set: wifi = a_name
      end

    set_language (a_name: like language)
        -- Set 'language' with 'a_name'.
      do
        language := a_name
      ensure
        language_set: language = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CONVERSION_EVENTS_DATA_INNER%N")
        if attached event_name as l_event_name then
          Result.append ("%Nevent_name:")
          Result.append (l_event_name.out)
          Result.append ("%N")
        end
        if attached action_source as l_action_source then
          Result.append ("%Naction_source:")
          Result.append (l_action_source.out)
          Result.append ("%N")
        end
        if attached event_time as l_event_time then
          Result.append ("%Nevent_time:")
          Result.append (l_event_time.out)
          Result.append ("%N")
        end
        if attached event_id as l_event_id then
          Result.append ("%Nevent_id:")
          Result.append (l_event_id.out)
          Result.append ("%N")
        end
        if attached event_source_url as l_event_source_url then
          Result.append ("%Nevent_source_url:")
          Result.append (l_event_source_url.out)
          Result.append ("%N")
        end
        if attached opt_out as l_opt_out then
          Result.append ("%Nopt_out:")
          Result.append (l_opt_out.out)
          Result.append ("%N")
        end
        if attached partner_name as l_partner_name then
          Result.append ("%Npartner_name:")
          Result.append (l_partner_name.out)
          Result.append ("%N")
        end
        if attached user_data as l_user_data then
          Result.append ("%Nuser_data:")
          Result.append (l_user_data.out)
          Result.append ("%N")
        end
        if attached custom_data as l_custom_data then
          Result.append ("%Ncustom_data:")
          Result.append (l_custom_data.out)
          Result.append ("%N")
        end
        if attached app_id as l_app_id then
          Result.append ("%Napp_id:")
          Result.append (l_app_id.out)
          Result.append ("%N")
        end
        if attached app_name as l_app_name then
          Result.append ("%Napp_name:")
          Result.append (l_app_name.out)
          Result.append ("%N")
        end
        if attached app_version as l_app_version then
          Result.append ("%Napp_version:")
          Result.append (l_app_version.out)
          Result.append ("%N")
        end
        if attached device_brand as l_device_brand then
          Result.append ("%Ndevice_brand:")
          Result.append (l_device_brand.out)
          Result.append ("%N")
        end
        if attached device_carrier as l_device_carrier then
          Result.append ("%Ndevice_carrier:")
          Result.append (l_device_carrier.out)
          Result.append ("%N")
        end
        if attached device_model as l_device_model then
          Result.append ("%Ndevice_model:")
          Result.append (l_device_model.out)
          Result.append ("%N")
        end
        if attached device_type as l_device_type then
          Result.append ("%Ndevice_type:")
          Result.append (l_device_type.out)
          Result.append ("%N")
        end
        if attached os_version as l_os_version then
          Result.append ("%Nos_version:")
          Result.append (l_os_version.out)
          Result.append ("%N")
        end
        if attached wifi as l_wifi then
          Result.append ("%Nwifi:")
          Result.append (l_wifi.out)
          Result.append ("%N")
        end
        if attached language as l_language then
          Result.append ("%Nlanguage:")
          Result.append (l_language.out)
          Result.append ("%N")
        end
      end
end

