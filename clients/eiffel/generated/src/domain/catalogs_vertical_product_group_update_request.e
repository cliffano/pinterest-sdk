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
class CATALOGS_VERTICAL_PRODUCT_GROUP_UPDATE_REQUEST




feature --Access

    catalog_type: detachable STRING_32
      
    name: detachable STRING_32
      
    description: detachable STRING_32
      
    filters: detachable CATALOGS_HOTEL_PRODUCT_GROUP_FILTERS
      

feature -- Change Element

    set_catalog_type (a_name: like catalog_type)
        -- Set 'catalog_type' with 'a_name'.
      do
        catalog_type := a_name
      ensure
        catalog_type_set: catalog_type = a_name
      end

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name
      end

    set_description (a_name: like description)
        -- Set 'description' with 'a_name'.
      do
        description := a_name
      ensure
        description_set: description = a_name
      end

    set_filters (a_name: like filters)
        -- Set 'filters' with 'a_name'.
      do
        filters := a_name
      ensure
        filters_set: filters = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_VERTICAL_PRODUCT_GROUP_UPDATE_REQUEST%N")
        if attached catalog_type as l_catalog_type then
          Result.append ("%Ncatalog_type:")
          Result.append (l_catalog_type.out)
          Result.append ("%N")
        end
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")
        end
        if attached description as l_description then
          Result.append ("%Ndescription:")
          Result.append (l_description.out)
          Result.append ("%N")
        end
        if attached filters as l_filters then
          Result.append ("%Nfilters:")
          Result.append (l_filters.out)
          Result.append ("%N")
        end
      end
end

