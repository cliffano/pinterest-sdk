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
class CATALOGS_UPDATABLE_HOTEL_ATTRIBUTES




feature --Access

    name: detachable STRING_32
      -- The hotel's name.
    link: detachable STRING_32
      -- Link to the product page
    description: detachable STRING_32
      -- Brief description of the hotel.
    brand: detachable STRING_32
      -- The brand to which this hotel belongs to.
    latitude: REAL_32
      -- Latitude of the hotel.
    longitude: REAL_32
      -- Longitude of the hotel.
    neighborhood: detachable LIST [STRING_32]
      -- A list of neighborhoods where the hotel is located
    address: detachable CATALOGS_HOTEL_ADDRESS
      
    custom_label_0: detachable STRING_32
      -- Custom grouping of hotels
    custom_label_1: detachable STRING_32
      -- Custom grouping of hotels
    custom_label_2: detachable STRING_32
      -- Custom grouping of hotels
    custom_label_3: detachable STRING_32
      -- Custom grouping of hotels
    custom_label_4: detachable STRING_32
      -- Custom grouping of hotels
    category: detachable STRING_32
      -- The type of property. The category can be any type of internal description desired.
    base_price: detachable STRING_32
      -- Base price of the hotel room per night followed by the ISO currency code
    sale_price: detachable STRING_32
      -- Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.
    guest_ratings: detachable CATALOGS_HOTEL_GUEST_RATINGS
      

feature -- Change Element

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name
      end

    set_link (a_name: like link)
        -- Set 'link' with 'a_name'.
      do
        link := a_name
      ensure
        link_set: link = a_name
      end

    set_description (a_name: like description)
        -- Set 'description' with 'a_name'.
      do
        description := a_name
      ensure
        description_set: description = a_name
      end

    set_brand (a_name: like brand)
        -- Set 'brand' with 'a_name'.
      do
        brand := a_name
      ensure
        brand_set: brand = a_name
      end

    set_latitude (a_name: like latitude)
        -- Set 'latitude' with 'a_name'.
      do
        latitude := a_name
      ensure
        latitude_set: latitude = a_name
      end

    set_longitude (a_name: like longitude)
        -- Set 'longitude' with 'a_name'.
      do
        longitude := a_name
      ensure
        longitude_set: longitude = a_name
      end

    set_neighborhood (a_name: like neighborhood)
        -- Set 'neighborhood' with 'a_name'.
      do
        neighborhood := a_name
      ensure
        neighborhood_set: neighborhood = a_name
      end

    set_address (a_name: like address)
        -- Set 'address' with 'a_name'.
      do
        address := a_name
      ensure
        address_set: address = a_name
      end

    set_custom_label_0 (a_name: like custom_label_0)
        -- Set 'custom_label_0' with 'a_name'.
      do
        custom_label_0 := a_name
      ensure
        custom_label_0_set: custom_label_0 = a_name
      end

    set_custom_label_1 (a_name: like custom_label_1)
        -- Set 'custom_label_1' with 'a_name'.
      do
        custom_label_1 := a_name
      ensure
        custom_label_1_set: custom_label_1 = a_name
      end

    set_custom_label_2 (a_name: like custom_label_2)
        -- Set 'custom_label_2' with 'a_name'.
      do
        custom_label_2 := a_name
      ensure
        custom_label_2_set: custom_label_2 = a_name
      end

    set_custom_label_3 (a_name: like custom_label_3)
        -- Set 'custom_label_3' with 'a_name'.
      do
        custom_label_3 := a_name
      ensure
        custom_label_3_set: custom_label_3 = a_name
      end

    set_custom_label_4 (a_name: like custom_label_4)
        -- Set 'custom_label_4' with 'a_name'.
      do
        custom_label_4 := a_name
      ensure
        custom_label_4_set: custom_label_4 = a_name
      end

    set_category (a_name: like category)
        -- Set 'category' with 'a_name'.
      do
        category := a_name
      ensure
        category_set: category = a_name
      end

    set_base_price (a_name: like base_price)
        -- Set 'base_price' with 'a_name'.
      do
        base_price := a_name
      ensure
        base_price_set: base_price = a_name
      end

    set_sale_price (a_name: like sale_price)
        -- Set 'sale_price' with 'a_name'.
      do
        sale_price := a_name
      ensure
        sale_price_set: sale_price = a_name
      end

    set_guest_ratings (a_name: like guest_ratings)
        -- Set 'guest_ratings' with 'a_name'.
      do
        guest_ratings := a_name
      ensure
        guest_ratings_set: guest_ratings = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_UPDATABLE_HOTEL_ATTRIBUTES%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")
        end
        if attached link as l_link then
          Result.append ("%Nlink:")
          Result.append (l_link.out)
          Result.append ("%N")
        end
        if attached description as l_description then
          Result.append ("%Ndescription:")
          Result.append (l_description.out)
          Result.append ("%N")
        end
        if attached brand as l_brand then
          Result.append ("%Nbrand:")
          Result.append (l_brand.out)
          Result.append ("%N")
        end
        if attached latitude as l_latitude then
          Result.append ("%Nlatitude:")
          Result.append (l_latitude.out)
          Result.append ("%N")
        end
        if attached longitude as l_longitude then
          Result.append ("%Nlongitude:")
          Result.append (l_longitude.out)
          Result.append ("%N")
        end
        if attached neighborhood as l_neighborhood then
          across l_neighborhood as ic loop
            Result.append ("%N neighborhood:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached address as l_address then
          Result.append ("%Naddress:")
          Result.append (l_address.out)
          Result.append ("%N")
        end
        if attached custom_label_0 as l_custom_label_0 then
          Result.append ("%Ncustom_label_0:")
          Result.append (l_custom_label_0.out)
          Result.append ("%N")
        end
        if attached custom_label_1 as l_custom_label_1 then
          Result.append ("%Ncustom_label_1:")
          Result.append (l_custom_label_1.out)
          Result.append ("%N")
        end
        if attached custom_label_2 as l_custom_label_2 then
          Result.append ("%Ncustom_label_2:")
          Result.append (l_custom_label_2.out)
          Result.append ("%N")
        end
        if attached custom_label_3 as l_custom_label_3 then
          Result.append ("%Ncustom_label_3:")
          Result.append (l_custom_label_3.out)
          Result.append ("%N")
        end
        if attached custom_label_4 as l_custom_label_4 then
          Result.append ("%Ncustom_label_4:")
          Result.append (l_custom_label_4.out)
          Result.append ("%N")
        end
        if attached category as l_category then
          Result.append ("%Ncategory:")
          Result.append (l_category.out)
          Result.append ("%N")
        end
        if attached base_price as l_base_price then
          Result.append ("%Nbase_price:")
          Result.append (l_base_price.out)
          Result.append ("%N")
        end
        if attached sale_price as l_sale_price then
          Result.append ("%Nsale_price:")
          Result.append (l_sale_price.out)
          Result.append ("%N")
        end
        if attached guest_ratings as l_guest_ratings then
          Result.append ("%Nguest_ratings:")
          Result.append (l_guest_ratings.out)
          Result.append ("%N")
        end
      end
end
