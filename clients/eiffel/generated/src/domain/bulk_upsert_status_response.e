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
class BULK_UPSERT_STATUS_RESPONSE




feature --Access

    status: detachable BULK_UPSERT_STATUS
      
    result_url: detachable STRING_32
      

feature -- Change Element

    set_status (a_name: like status)
        -- Set 'status' with 'a_name'.
      do
        status := a_name
      ensure
        status_set: status = a_name
      end

    set_result_url (a_name: like result_url)
        -- Set 'result_url' with 'a_name'.
      do
        result_url := a_name
      ensure
        result_url_set: result_url = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass BULK_UPSERT_STATUS_RESPONSE%N")
        if attached status as l_status then
          Result.append ("%Nstatus:")
          Result.append (l_status.out)
          Result.append ("%N")
        end
        if attached result_url as l_result_url then
          Result.append ("%Nresult_url:")
          Result.append (l_result_url.out)
          Result.append ("%N")
        end
      end
end

