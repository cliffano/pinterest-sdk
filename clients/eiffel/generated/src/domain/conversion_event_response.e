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
class CONVERSION_EVENT_RESPONSE




feature --Access

    conversion_event: detachable CONVERSION_TAG_TYPE
      
    conversion_tag_id: detachable STRING_32
      -- Id of the tag.
    ad_account_id: detachable STRING_32
      -- Id of the ad account.
    created_time: INTEGER_32
      -- Creation date in epoch format.

feature -- Change Element

    set_conversion_event (a_name: like conversion_event)
        -- Set 'conversion_event' with 'a_name'.
      do
        conversion_event := a_name
      ensure
        conversion_event_set: conversion_event = a_name
      end

    set_conversion_tag_id (a_name: like conversion_tag_id)
        -- Set 'conversion_tag_id' with 'a_name'.
      do
        conversion_tag_id := a_name
      ensure
        conversion_tag_id_set: conversion_tag_id = a_name
      end

    set_ad_account_id (a_name: like ad_account_id)
        -- Set 'ad_account_id' with 'a_name'.
      do
        ad_account_id := a_name
      ensure
        ad_account_id_set: ad_account_id = a_name
      end

    set_created_time (a_name: like created_time)
        -- Set 'created_time' with 'a_name'.
      do
        created_time := a_name
      ensure
        created_time_set: created_time = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CONVERSION_EVENT_RESPONSE%N")
        if attached conversion_event as l_conversion_event then
          Result.append ("%Nconversion_event:")
          Result.append (l_conversion_event.out)
          Result.append ("%N")
        end
        if attached conversion_tag_id as l_conversion_tag_id then
          Result.append ("%Nconversion_tag_id:")
          Result.append (l_conversion_tag_id.out)
          Result.append ("%N")
        end
        if attached ad_account_id as l_ad_account_id then
          Result.append ("%Nad_account_id:")
          Result.append (l_ad_account_id.out)
          Result.append ("%N")
        end
        if attached created_time as l_created_time then
          Result.append ("%Ncreated_time:")
          Result.append (l_created_time.out)
          Result.append ("%N")
        end
      end
end

