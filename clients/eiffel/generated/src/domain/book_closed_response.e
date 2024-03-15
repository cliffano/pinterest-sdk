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
class BOOK_CLOSED_RESPONSE




feature --Access

    conversion_metrics_ready: BOOLEAN
      -- Are conversion metrics ready?
    non_conversion_metrics_ready: BOOLEAN
      -- Are non-conversion metrics ready?

feature -- Change Element

    set_conversion_metrics_ready (a_name: like conversion_metrics_ready)
        -- Set 'conversion_metrics_ready' with 'a_name'.
      do
        conversion_metrics_ready := a_name
      ensure
        conversion_metrics_ready_set: conversion_metrics_ready = a_name
      end

    set_non_conversion_metrics_ready (a_name: like non_conversion_metrics_ready)
        -- Set 'non_conversion_metrics_ready' with 'a_name'.
      do
        non_conversion_metrics_ready := a_name
      ensure
        non_conversion_metrics_ready_set: non_conversion_metrics_ready = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass BOOK_CLOSED_RESPONSE%N")
        if attached conversion_metrics_ready as l_conversion_metrics_ready then
          Result.append ("%Nconversion_metrics_ready:")
          Result.append (l_conversion_metrics_ready.out)
          Result.append ("%N")
        end
        if attached non_conversion_metrics_ready as l_non_conversion_metrics_ready then
          Result.append ("%Nnon_conversion_metrics_ready:")
          Result.append (l_non_conversion_metrics_ready.out)
          Result.append ("%N")
        end
      end
end

