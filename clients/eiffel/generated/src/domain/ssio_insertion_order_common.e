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
class SSIO_INSERTION_ORDER_COMMON




feature --Access

    start_date: detachable STRING_32
      -- Starting date of time period. Format: YYYY-MM-DD
    end_date: detachable STRING_32
      -- End date of time period. Format: YYYY-MM-DD
    po_number: detachable STRING_32
      -- The po number
    budget_amount: REAL_32
      -- If Budget order line, the budget amount.
    billing_contact_firstname: detachable STRING_32
      -- The billing contact first name
    billing_contact_lastname: detachable STRING_32
      -- The billing contact last name
    billing_contact_email: detachable STRING_32
      -- The billing contact email
    media_contact_firstname: detachable STRING_32
      -- The media contact first name
    media_contact_lastname: detachable STRING_32
      -- The media contact last name
    media_contact_email: detachable STRING_32
      -- The media contact email
    agency_link: detachable STRING_32
      -- URL link for agency
    user_email: detachable STRING_32
      -- The email of user submitting the insertion order

feature -- Change Element

    set_start_date (a_name: like start_date)
        -- Set 'start_date' with 'a_name'.
      do
        start_date := a_name
      ensure
        start_date_set: start_date = a_name
      end

    set_end_date (a_name: like end_date)
        -- Set 'end_date' with 'a_name'.
      do
        end_date := a_name
      ensure
        end_date_set: end_date = a_name
      end

    set_po_number (a_name: like po_number)
        -- Set 'po_number' with 'a_name'.
      do
        po_number := a_name
      ensure
        po_number_set: po_number = a_name
      end

    set_budget_amount (a_name: like budget_amount)
        -- Set 'budget_amount' with 'a_name'.
      do
        budget_amount := a_name
      ensure
        budget_amount_set: budget_amount = a_name
      end

    set_billing_contact_firstname (a_name: like billing_contact_firstname)
        -- Set 'billing_contact_firstname' with 'a_name'.
      do
        billing_contact_firstname := a_name
      ensure
        billing_contact_firstname_set: billing_contact_firstname = a_name
      end

    set_billing_contact_lastname (a_name: like billing_contact_lastname)
        -- Set 'billing_contact_lastname' with 'a_name'.
      do
        billing_contact_lastname := a_name
      ensure
        billing_contact_lastname_set: billing_contact_lastname = a_name
      end

    set_billing_contact_email (a_name: like billing_contact_email)
        -- Set 'billing_contact_email' with 'a_name'.
      do
        billing_contact_email := a_name
      ensure
        billing_contact_email_set: billing_contact_email = a_name
      end

    set_media_contact_firstname (a_name: like media_contact_firstname)
        -- Set 'media_contact_firstname' with 'a_name'.
      do
        media_contact_firstname := a_name
      ensure
        media_contact_firstname_set: media_contact_firstname = a_name
      end

    set_media_contact_lastname (a_name: like media_contact_lastname)
        -- Set 'media_contact_lastname' with 'a_name'.
      do
        media_contact_lastname := a_name
      ensure
        media_contact_lastname_set: media_contact_lastname = a_name
      end

    set_media_contact_email (a_name: like media_contact_email)
        -- Set 'media_contact_email' with 'a_name'.
      do
        media_contact_email := a_name
      ensure
        media_contact_email_set: media_contact_email = a_name
      end

    set_agency_link (a_name: like agency_link)
        -- Set 'agency_link' with 'a_name'.
      do
        agency_link := a_name
      ensure
        agency_link_set: agency_link = a_name
      end

    set_user_email (a_name: like user_email)
        -- Set 'user_email' with 'a_name'.
      do
        user_email := a_name
      ensure
        user_email_set: user_email = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass SSIO_INSERTION_ORDER_COMMON%N")
        if attached start_date as l_start_date then
          Result.append ("%Nstart_date:")
          Result.append (l_start_date.out)
          Result.append ("%N")
        end
        if attached end_date as l_end_date then
          Result.append ("%Nend_date:")
          Result.append (l_end_date.out)
          Result.append ("%N")
        end
        if attached po_number as l_po_number then
          Result.append ("%Npo_number:")
          Result.append (l_po_number.out)
          Result.append ("%N")
        end
        if attached budget_amount as l_budget_amount then
          Result.append ("%Nbudget_amount:")
          Result.append (l_budget_amount.out)
          Result.append ("%N")
        end
        if attached billing_contact_firstname as l_billing_contact_firstname then
          Result.append ("%Nbilling_contact_firstname:")
          Result.append (l_billing_contact_firstname.out)
          Result.append ("%N")
        end
        if attached billing_contact_lastname as l_billing_contact_lastname then
          Result.append ("%Nbilling_contact_lastname:")
          Result.append (l_billing_contact_lastname.out)
          Result.append ("%N")
        end
        if attached billing_contact_email as l_billing_contact_email then
          Result.append ("%Nbilling_contact_email:")
          Result.append (l_billing_contact_email.out)
          Result.append ("%N")
        end
        if attached media_contact_firstname as l_media_contact_firstname then
          Result.append ("%Nmedia_contact_firstname:")
          Result.append (l_media_contact_firstname.out)
          Result.append ("%N")
        end
        if attached media_contact_lastname as l_media_contact_lastname then
          Result.append ("%Nmedia_contact_lastname:")
          Result.append (l_media_contact_lastname.out)
          Result.append ("%N")
        end
        if attached media_contact_email as l_media_contact_email then
          Result.append ("%Nmedia_contact_email:")
          Result.append (l_media_contact_email.out)
          Result.append ("%N")
        end
        if attached agency_link as l_agency_link then
          Result.append ("%Nagency_link:")
          Result.append (l_agency_link.out)
          Result.append ("%N")
        end
        if attached user_email as l_user_email then
          Result.append ("%Nuser_email:")
          Result.append (l_user_email.out)
          Result.append ("%N")
        end
      end
end
