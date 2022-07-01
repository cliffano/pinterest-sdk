note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.3.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class ADS_ANALYTICS_GET_ASYNC_RESPONSE




feature --Access

    report_status: detachable STRING_32
      
    url: detachable STRING_32
      
 	size: REAL_32
    	 

feature -- Change Element

    set_report_status (a_name: like report_status)
        -- Set 'report_status' with 'a_name'.
      do
        report_status := a_name
      ensure
        report_status_set: report_status = a_name
      end

    set_url (a_name: like url)
        -- Set 'url' with 'a_name'.
      do
        url := a_name
      ensure
        url_set: url = a_name
      end

    set_size (a_name: like size)
        -- Set 'size' with 'a_name'.
      do
        size := a_name
      ensure
        size_set: size = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ADS_ANALYTICS_GET_ASYNC_RESPONSE%N")
        if attached report_status as l_report_status then
          Result.append ("%Nreport_status:")
          Result.append (l_report_status.out)
          Result.append ("%N")
        end
        if attached url as l_url then
          Result.append ("%Nurl:")
          Result.append (l_url.out)
          Result.append ("%N")
        end
        if attached size as l_size then
          Result.append ("%Nsize:")
          Result.append (l_size.out)
          Result.append ("%N")
        end
      end
end

