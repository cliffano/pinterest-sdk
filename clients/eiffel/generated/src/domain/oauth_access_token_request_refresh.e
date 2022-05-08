note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.3.0
 	    Contact: pinterest-api@pinterest.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class OAUTH_ACCESS_TOKEN_REQUEST_REFRESH

inherit


  OAUTH_ACCESS_TOKEN_REQUEST

feature --Access

    refresh_token: detachable STRING_32
      
    scope: detachable STRING_32
      

feature -- Change Element

    set_refresh_token (a_name: like refresh_token)
        -- Set 'refresh_token' with 'a_name'.
      do
        refresh_token := a_name
      ensure
        refresh_token_set: refresh_token = a_name
      end

    set_scope (a_name: like scope)
        -- Set 'scope' with 'a_name'.
      do
        scope := a_name
      ensure
        scope_set: scope = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append(out_oauthaccesstokenrequest)
        Result.append("%Nclass OAUTH_ACCESS_TOKEN_REQUEST_REFRESH%N")
        if attached refresh_token as l_refresh_token then
          Result.append ("%Nrefresh_token:")
          Result.append (l_refresh_token.out)
          Result.append ("%N")
        end
        if attached scope as l_scope then
          Result.append ("%Nscope:")
          Result.append (l_scope.out)
          Result.append ("%N")
        end
      end
end

