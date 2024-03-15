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
class INTEGRATION_LOG_CLIENT_REQUEST




feature --Access

    method: detachable STRING_32
      
    host: detachable STRING_32
      -- HTTP request host from host header.
    path: detachable STRING_32
      -- HTTP request path.
    request_headers: detachable STRING_TABLE [STRING_32]
      -- HTTP request headers as key-value pairs.
    response_headers: detachable STRING_TABLE [STRING_32]
      -- HTTP response headers as key-value pairs.
    response_status_code: INTEGER_32
      

feature -- Change Element

    set_method (a_name: like method)
        -- Set 'method' with 'a_name'.
      do
        method := a_name
      ensure
        method_set: method = a_name
      end

    set_host (a_name: like host)
        -- Set 'host' with 'a_name'.
      do
        host := a_name
      ensure
        host_set: host = a_name
      end

    set_path (a_name: like path)
        -- Set 'path' with 'a_name'.
      do
        path := a_name
      ensure
        path_set: path = a_name
      end

    set_request_headers (a_name: like request_headers)
        -- Set 'request_headers' with 'a_name'.
      do
        request_headers := a_name
      ensure
        request_headers_set: request_headers = a_name
      end

    set_response_headers (a_name: like response_headers)
        -- Set 'response_headers' with 'a_name'.
      do
        response_headers := a_name
      ensure
        response_headers_set: response_headers = a_name
      end

    set_response_status_code (a_name: like response_status_code)
        -- Set 'response_status_code' with 'a_name'.
      do
        response_status_code := a_name
      ensure
        response_status_code_set: response_status_code = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass INTEGRATION_LOG_CLIENT_REQUEST%N")
        if attached method as l_method then
          Result.append ("%Nmethod:")
          Result.append (l_method.out)
          Result.append ("%N")
        end
        if attached host as l_host then
          Result.append ("%Nhost:")
          Result.append (l_host.out)
          Result.append ("%N")
        end
        if attached path as l_path then
          Result.append ("%Npath:")
          Result.append (l_path.out)
          Result.append ("%N")
        end
        if attached request_headers as l_request_headers then
          Result.append ("%Nrequest_headers:")
          across l_request_headers as ic loop
            Result.append ("%N")
            Result.append ("key:")
            Result.append (ic.key.out)
            Result.append (" - ")
            Result.append ("val:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached response_headers as l_response_headers then
          Result.append ("%Nresponse_headers:")
          across l_response_headers as ic loop
            Result.append ("%N")
            Result.append ("key:")
            Result.append (ic.key.out)
            Result.append (" - ")
            Result.append ("val:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached response_status_code as l_response_status_code then
          Result.append ("%Nresponse_status_code:")
          Result.append (l_response_status_code.out)
          Result.append ("%N")
        end
      end
end

