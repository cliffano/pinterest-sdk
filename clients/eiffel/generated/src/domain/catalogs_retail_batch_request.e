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
class CATALOGS_RETAIL_BATCH_REQUEST




feature --Access

    catalog_type: detachable CATALOGS_TYPE
      
    country: detachable COUNTRY
      
    language: detachable LANGUAGE
      
    items: detachable LIST [CATALOGS_RETAIL_BATCH_REQUEST_ITEMS_INNER]
      -- Array with catalogs item operations

feature -- Change Element

    set_catalog_type (a_name: like catalog_type)
        -- Set 'catalog_type' with 'a_name'.
      do
        catalog_type := a_name
      ensure
        catalog_type_set: catalog_type = a_name
      end

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
        Result.append("%Nclass CATALOGS_RETAIL_BATCH_REQUEST%N")
        if attached catalog_type as l_catalog_type then
          Result.append ("%Ncatalog_type:")
          Result.append (l_catalog_type.out)
          Result.append ("%N")
        end
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
        if attached items as l_items then
          across l_items as ic loop
            Result.append ("%N items:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

