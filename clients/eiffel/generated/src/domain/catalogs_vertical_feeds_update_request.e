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
class CATALOGS_VERTICAL_FEEDS_UPDATE_REQUEST




feature --Access

    default_currency: detachable NULLABLE_CURRENCY
      
    name: detachable STRING_32
      -- A human-friendly name associated to a given feed.
    format: detachable CATALOGS_FORMAT
      
    credentials: detachable CATALOGS_FEED_CREDENTIALS
      
    location: detachable STRING_32
      -- The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    preferred_processing_schedule: detachable CATALOGS_FEED_PROCESSING_SCHEDULE
      
    status: detachable CATALOGS_STATUS
      
    catalog_type: detachable CATALOGS_TYPE
      
    default_availability: detachable PRODUCT_AVAILABILITY_TYPE
      

feature -- Change Element

    set_default_currency (a_name: like default_currency)
        -- Set 'default_currency' with 'a_name'.
      do
        default_currency := a_name
      ensure
        default_currency_set: default_currency = a_name
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

    set_catalog_type (a_name: like catalog_type)
        -- Set 'catalog_type' with 'a_name'.
      do
        catalog_type := a_name
      ensure
        catalog_type_set: catalog_type = a_name
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
        Result.append("%Nclass CATALOGS_VERTICAL_FEEDS_UPDATE_REQUEST%N")
        if attached default_currency as l_default_currency then
          Result.append ("%Ndefault_currency:")
          Result.append (l_default_currency.out)
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
        if attached catalog_type as l_catalog_type then
          Result.append ("%Ncatalog_type:")
          Result.append (l_catalog_type.out)
          Result.append ("%N")
        end
        if attached default_availability as l_default_availability then
          Result.append ("%Ndefault_availability:")
          Result.append (l_default_availability.out)
          Result.append ("%N")
        end
      end
end

