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
class CATALOGS_ITEMS_CREATE_BATCH_REQUEST




feature --Access

    country: detachable COUNTRY
      
    language: detachable LANGUAGE
      
    operation: detachable BATCH_OPERATION
      
    items: detachable LIST [ITEM_CREATE_BATCH_RECORD]
      -- Array with catalogs items

feature -- Change Element

    set_country (a_name: like country)
        -- Set 'country' with 'a_name'.
      do
        country := a_name
      ensure
        country_set: country = a_name
      end

    set_language (a_name: like language)
        -- Set 'language' with 'a_name'.
      do
        language := a_name
      ensure
        language_set: language = a_name
      end

    set_operation (a_name: like operation)
        -- Set 'operation' with 'a_name'.
      do
        operation := a_name
      ensure
        operation_set: operation = a_name
      end

    set_items (a_name: like items)
        -- Set 'items' with 'a_name'.
      do
        items := a_name
      ensure
        items_set: items = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_ITEMS_CREATE_BATCH_REQUEST%N")
        if attached country as l_country then
          Result.append ("%Ncountry:")
          Result.append (l_country.out)
          Result.append ("%N")
        end
        if attached language as l_language then
          Result.append ("%Nlanguage:")
          Result.append (l_language.out)
          Result.append ("%N")
        end
        if attached operation as l_operation then
          Result.append ("%Noperation:")
          Result.append (l_operation.out)
          Result.append ("%N")
        end
        if attached items as l_items then
          across l_items as ic loop
            Result.append ("%N items:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

