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
class CATALOGS_RETAIL_FEED




feature --Access

    created_at: detachable DATE_TIME
      
    id: detachable STRING_32
      
    updated_at: detachable DATE_TIME
      
    name: detachable STRING_32
      -- A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
    format: detachable CATALOGS_FORMAT
      
    catalog_type: detachable CATALOGS_TYPE
      
    credentials: detachable CATALOGS_FEED_CREDENTIALS
      
    location: detachable STRING_32
      -- The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    preferred_processing_schedule: detachable CATALOGS_FEED_PROCESSING_SCHEDULE
      
    status: detachable CATALOGS_STATUS
      
    default_currency: detachable NULLABLE_CURRENCY
      
    default_locale: detachable STRING_32
      -- The locale used within a feed for product descriptions.
    default_country: detachable COUNTRY
      
    default_availability: detachable PRODUCT_AVAILABILITY_TYPE
      

feature -- Change Element

    set_created_at (a_name: like created_at)
        -- Set 'created_at' with 'a_name'.
      do
        created_at := a_name
      ensure
        created_at_set: created_at = a_name
      end

    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name
      end

    set_updated_at (a_name: like updated_at)
        -- Set 'updated_at' with 'a_name'.
      do
        updated_at := a_name
      ensure
        updated_at_set: updated_at = a_name
      end

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name
      end

    set_format (a_name: like format)
        -- Set 'format' with 'a_name'.
      do
        format := a_name
      ensure
        format_set: format = a_name
      end

    set_catalog_type (a_name: like catalog_type)
        -- Set 'catalog_type' with 'a_name'.
      do
        catalog_type := a_name
      ensure
        catalog_type_set: catalog_type = a_name
      end

    set_credentials (a_name: like credentials)
        -- Set 'credentials' with 'a_name'.
      do
        credentials := a_name
      ensure
        credentials_set: credentials = a_name
      end

    set_location (a_name: like location)
        -- Set 'location' with 'a_name'.
      do
        location := a_name
      ensure
        location_set: location = a_name
      end

    set_preferred_processing_schedule (a_name: like preferred_processing_schedule)
        -- Set 'preferred_processing_schedule' with 'a_name'.
      do
        preferred_processing_schedule := a_name
      ensure
        preferred_processing_schedule_set: preferred_processing_schedule = a_name
      end

    set_status (a_name: like status)
        -- Set 'status' with 'a_name'.
      do
        status := a_name
      ensure
        status_set: status = a_name
      end

    set_default_currency (a_name: like default_currency)
        -- Set 'default_currency' with 'a_name'.
      do
        default_currency := a_name
      ensure
        default_currency_set: default_currency = a_name
      end

    set_default_locale (a_name: like default_locale)
        -- Set 'default_locale' with 'a_name'.
      do
        default_locale := a_name
      ensure
        default_locale_set: default_locale = a_name
      end

    set_default_country (a_name: like default_country)
        -- Set 'default_country' with 'a_name'.
      do
        default_country := a_name
      ensure
        default_country_set: default_country = a_name
      end

    set_default_availability (a_name: like default_availability)
        -- Set 'default_availability' with 'a_name'.
      do
        default_availability := a_name
      ensure
        default_availability_set: default_availability = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_RETAIL_FEED%N")
        if attached created_at as l_created_at then
          Result.append ("%Ncreated_at:")
          Result.append (l_created_at.out)
          Result.append ("%N")
        end
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")
        end
        if attached updated_at as l_updated_at then
          Result.append ("%Nupdated_at:")
          Result.append (l_updated_at.out)
          Result.append ("%N")
        end
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")
        end
        if attached format as l_format then
          Result.append ("%Nformat:")
          Result.append (l_format.out)
          Result.append ("%N")
        end
        if attached catalog_type as l_catalog_type then
          Result.append ("%Ncatalog_type:")
          Result.append (l_catalog_type.out)
          Result.append ("%N")
        end
        if attached credentials as l_credentials then
          Result.append ("%Ncredentials:")
          Result.append (l_credentials.out)
          Result.append ("%N")
        end
        if attached location as l_location then
          Result.append ("%Nlocation:")
          Result.append (l_location.out)
          Result.append ("%N")
        end
        if attached preferred_processing_schedule as l_preferred_processing_schedule then
          Result.append ("%Npreferred_processing_schedule:")
          Result.append (l_preferred_processing_schedule.out)
          Result.append ("%N")
        end
        if attached status as l_status then
          Result.append ("%Nstatus:")
          Result.append (l_status.out)
          Result.append ("%N")
        end
        if attached default_currency as l_default_currency then
          Result.append ("%Ndefault_currency:")
          Result.append (l_default_currency.out)
          Result.append ("%N")
        end
        if attached default_locale as l_default_locale then
          Result.append ("%Ndefault_locale:")
          Result.append (l_default_locale.out)
          Result.append ("%N")
        end
        if attached default_country as l_default_country then
          Result.append ("%Ndefault_country:")
          Result.append (l_default_country.out)
          Result.append ("%N")
        end
        if attached default_availability as l_default_availability then
          Result.append ("%Ndefault_availability:")
          Result.append (l_default_availability.out)
          Result.append ("%N")
        end
      end
end

