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
class INTEGRATION_LOGS_INVALID_LOG_RESPONSE_REJECTED_LOGS_INNER




feature --Access

    log_index: INTEGER_32
      -- Index of the log in the batch.
    field: detachable STRING_32
      -- The field name containing an invalid value.
    value: detachable STRING_32
      -- The value that is invalid.
    reason: detachable STRING_32
      -- The reason the value is invalid.

feature -- Change Element

    set_log_index (a_name: like log_index)
        -- Set 'log_index' with 'a_name'.
      do
        log_index := a_name
      ensure
        log_index_set: log_index = a_name
      end

    set_field (a_name: like field)
        -- Set 'field' with 'a_name'.
      do
        field := a_name
      ensure
        field_set: field = a_name
      end

    set_value (a_name: like value)
        -- Set 'value' with 'a_name'.
      do
        value := a_name
      ensure
        value_set: value = a_name
      end

    set_reason (a_name: like reason)
        -- Set 'reason' with 'a_name'.
      do
        reason := a_name
      ensure
        reason_set: reason = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass INTEGRATION_LOGS_INVALID_LOG_RESPONSE_REJECTED_LOGS_INNER%N")
        if attached log_index as l_log_index then
          Result.append ("%Nlog_index:")
          Result.append (l_log_index.out)
          Result.append ("%N")
        end
        if attached field as l_field then
          Result.append ("%Nfield:")
          Result.append (l_field.out)
          Result.append ("%N")
        end
        if attached value as l_value then
          Result.append ("%Nvalue:")
          Result.append (l_value.out)
          Result.append ("%N")
        end
        if attached reason as l_reason then
          Result.append ("%Nreason:")
          Result.append (l_reason.out)
          Result.append ("%N")
        end
      end
end

