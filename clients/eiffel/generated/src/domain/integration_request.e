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
class INTEGRATION_REQUEST




feature --Access

    external_business_id: detachable STRING_32
      -- External business ID for the integration.
    connected_merchant_id: detachable STRING_32
      
    connected_advertiser_id: detachable STRING_32
      
    connected_lba_id: detachable STRING_32
      
    connected_tag_id: detachable STRING_32
      
    partner_access_token: detachable STRING_32
      
    partner_refresh_token: detachable STRING_32
      
    partner_primary_email: detachable STRING_32
      
    partner_access_token_expiry: INTEGER_32
      
    partner_refresh_token_expiry: INTEGER_32
      
    scopes: detachable STRING_32
      
    additional_id_1: detachable STRING_32
      
    partner_metadata: detachable STRING_32
      

feature -- Change Element

    set_external_business_id (a_name: like external_business_id)
        -- Set 'external_business_id' with 'a_name'.
      do
        external_business_id := a_name
      ensure
        external_business_id_set: external_business_id = a_name
      end

    set_connected_merchant_id (a_name: like connected_merchant_id)
        -- Set 'connected_merchant_id' with 'a_name'.
      do
        connected_merchant_id := a_name
      ensure
        connected_merchant_id_set: connected_merchant_id = a_name
      end

    set_connected_advertiser_id (a_name: like connected_advertiser_id)
        -- Set 'connected_advertiser_id' with 'a_name'.
      do
        connected_advertiser_id := a_name
      ensure
        connected_advertiser_id_set: connected_advertiser_id = a_name
      end

    set_connected_lba_id (a_name: like connected_lba_id)
        -- Set 'connected_lba_id' with 'a_name'.
      do
        connected_lba_id := a_name
      ensure
        connected_lba_id_set: connected_lba_id = a_name
      end

    set_connected_tag_id (a_name: like connected_tag_id)
        -- Set 'connected_tag_id' with 'a_name'.
      do
        connected_tag_id := a_name
      ensure
        connected_tag_id_set: connected_tag_id = a_name
      end

    set_partner_access_token (a_name: like partner_access_token)
        -- Set 'partner_access_token' with 'a_name'.
      do
        partner_access_token := a_name
      ensure
        partner_access_token_set: partner_access_token = a_name
      end

    set_partner_refresh_token (a_name: like partner_refresh_token)
        -- Set 'partner_refresh_token' with 'a_name'.
      do
        partner_refresh_token := a_name
      ensure
        partner_refresh_token_set: partner_refresh_token = a_name
      end

    set_partner_primary_email (a_name: like partner_primary_email)
        -- Set 'partner_primary_email' with 'a_name'.
      do
        partner_primary_email := a_name
      ensure
        partner_primary_email_set: partner_primary_email = a_name
      end

    set_partner_access_token_expiry (a_name: like partner_access_token_expiry)
        -- Set 'partner_access_token_expiry' with 'a_name'.
      do
        partner_access_token_expiry := a_name
      ensure
        partner_access_token_expiry_set: partner_access_token_expiry = a_name
      end

    set_partner_refresh_token_expiry (a_name: like partner_refresh_token_expiry)
        -- Set 'partner_refresh_token_expiry' with 'a_name'.
      do
        partner_refresh_token_expiry := a_name
      ensure
        partner_refresh_token_expiry_set: partner_refresh_token_expiry = a_name
      end

    set_scopes (a_name: like scopes)
        -- Set 'scopes' with 'a_name'.
      do
        scopes := a_name
      ensure
        scopes_set: scopes = a_name
      end

    set_additional_id_1 (a_name: like additional_id_1)
        -- Set 'additional_id_1' with 'a_name'.
      do
        additional_id_1 := a_name
      ensure
        additional_id_1_set: additional_id_1 = a_name
      end

    set_partner_metadata (a_name: like partner_metadata)
        -- Set 'partner_metadata' with 'a_name'.
      do
        partner_metadata := a_name
      ensure
        partner_metadata_set: partner_metadata = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass INTEGRATION_REQUEST%N")
        if attached external_business_id as l_external_business_id then
          Result.append ("%Nexternal_business_id:")
          Result.append (l_external_business_id.out)
          Result.append ("%N")
        end
        if attached connected_merchant_id as l_connected_merchant_id then
          Result.append ("%Nconnected_merchant_id:")
          Result.append (l_connected_merchant_id.out)
          Result.append ("%N")
        end
        if attached connected_advertiser_id as l_connected_advertiser_id then
          Result.append ("%Nconnected_advertiser_id:")
          Result.append (l_connected_advertiser_id.out)
          Result.append ("%N")
        end
        if attached connected_lba_id as l_connected_lba_id then
          Result.append ("%Nconnected_lba_id:")
          Result.append (l_connected_lba_id.out)
          Result.append ("%N")
        end
        if attached connected_tag_id as l_connected_tag_id then
          Result.append ("%Nconnected_tag_id:")
          Result.append (l_connected_tag_id.out)
          Result.append ("%N")
        end
        if attached partner_access_token as l_partner_access_token then
          Result.append ("%Npartner_access_token:")
          Result.append (l_partner_access_token.out)
          Result.append ("%N")
        end
        if attached partner_refresh_token as l_partner_refresh_token then
          Result.append ("%Npartner_refresh_token:")
          Result.append (l_partner_refresh_token.out)
          Result.append ("%N")
        end
        if attached partner_primary_email as l_partner_primary_email then
          Result.append ("%Npartner_primary_email:")
          Result.append (l_partner_primary_email.out)
          Result.append ("%N")
        end
        if attached partner_access_token_expiry as l_partner_access_token_expiry then
          Result.append ("%Npartner_access_token_expiry:")
          Result.append (l_partner_access_token_expiry.out)
          Result.append ("%N")
        end
        if attached partner_refresh_token_expiry as l_partner_refresh_token_expiry then
          Result.append ("%Npartner_refresh_token_expiry:")
          Result.append (l_partner_refresh_token_expiry.out)
          Result.append ("%N")
        end
        if attached scopes as l_scopes then
          Result.append ("%Nscopes:")
          Result.append (l_scopes.out)
          Result.append ("%N")
        end
        if attached additional_id_1 as l_additional_id_1 then
          Result.append ("%Nadditional_id_1:")
          Result.append (l_additional_id_1.out)
          Result.append ("%N")
        end
        if attached partner_metadata as l_partner_metadata then
          Result.append ("%Npartner_metadata:")
          Result.append (l_partner_metadata.out)
          Result.append ("%N")
        end
      end
end

