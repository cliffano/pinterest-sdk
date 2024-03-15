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
class BULK_UPSERT_REQUEST




feature --Access

    var_create: detachable BULK_UPSERT_REQUEST_CREATE
      
    update: detachable BULK_UPSERT_REQUEST_UPDATE
      

feature -- Change Element

    set_var_create (a_name: like var_create)
        -- Set 'var_create' with 'a_name'.
      do
        var_create := a_name
      ensure
        var_create_set: var_create = a_name
      end

    set_update (a_name: like update)
        -- Set 'update' with 'a_name'.
      do
        update := a_name
      ensure
        update_set: update = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass BULK_UPSERT_REQUEST%N")
        if attached var_create as l_var_create then
          Result.append ("%Nvar_create:")
          Result.append (l_var_create.out)
          Result.append ("%N")
        end
        if attached update as l_update then
          Result.append ("%Nupdate:")
          Result.append (l_update.out)
          Result.append ("%N")
        end
      end
end

