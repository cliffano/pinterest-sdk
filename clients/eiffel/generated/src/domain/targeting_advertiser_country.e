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
class TARGETING_ADVERTISER_COUNTRY

feature -- Access

  value: detachable STRING_32
      -- enumerated value.
    note
            option: stable
    attribute
    end

feature -- Enum

 val_us: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("US")
    end

 val_gb: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("GB")
    end

 val_ca: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("CA")
    end

 val_ie: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("IE")
    end

 val_au: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("AU")
    end

 val_nz: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("NZ")
    end

 val_fr: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("FR")
    end

 val_se: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("SE")
    end

 val_il: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("IL")
    end

 val_de: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("DE")
    end

 val_at: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("AT")
    end

 val_it: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("IT")
    end

 val_es: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("ES")
    end

 val_nl: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("NL")
    end

 val_be: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("BE")
    end

 val_pt: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("PT")
    end

 val_ch: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("CH")
    end

 val_hk: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("HK")
    end

 val_jp: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("JP")
    end

 val_kr: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("KR")
    end

 val_sg: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("SG")
    end

 val_no: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("NO")
    end

 val_dk: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("DK")
    end

 val_fi: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("FI")
    end

 val_cy: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("CY")
    end

 val_lu: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("LU")
    end

 val_mt: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("MT")
    end

 val_pl: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("PL")
    end

 val_ro: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("RO")
    end

 val_hu: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("HU")
    end

 val_cz: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("CZ")
    end

 val_gr: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("GR")
    end

 val_sk: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("SK")
    end

 val_br: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("BR")
    end

 val_mx: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("MX")
    end

 val_ar: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("AR")
    end

 val_cl: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("CL")
    end

 val_co: TARGETING_ADVERTISER_COUNTRY
    once
      create Result
      Result.set_value ("CO")
    end


feature -- Element Change

  set_value (a_val: like value)
      -- Set `value' with `a_value'.
    do
      value := a_val
    ensure
      value_set: value = a_val
    end


end

