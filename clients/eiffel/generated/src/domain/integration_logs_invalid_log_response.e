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
class INTEGRATION_LOGS_INVALID_LOG_RESPONSE




feature --Access

    rejected_logs: detachable LIST [INTEGRATION_LOGS_INVALID_LOG_RESPONSE_REJECTED_LOGS_INNER]
      

feature -- Change Element

    set_rejected_logs (a_name: like rejected_logs)
        -- Set 'rejected_logs' with 'a_name'.
      do
        rejected_logs := a_name
      ensure
        rejected_logs_set: rejected_logs = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass INTEGRATION_LOGS_INVALID_LOG_RESPONSE%N")
        if attached rejected_logs as l_rejected_logs then
          across l_rejected_logs as ic loop
            Result.append ("%N rejected_logs:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

