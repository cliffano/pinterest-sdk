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
class CURRENCY

feature -- Access

  value: detachable STRING_32
      -- enumerated value.
    note
            option: stable
    attribute
    end

feature -- Enum

 val_unk: CURRENCY
    once
      create Result
      Result.set_value ("UNK")
    end

 val_usd: CURRENCY
    once
      create Result
      Result.set_value ("USD")
    end

 val_gbp: CURRENCY
    once
      create Result
      Result.set_value ("GBP")
    end

 val_cad: CURRENCY
    once
      create Result
      Result.set_value ("CAD")
    end

 val_eur: CURRENCY
    once
      create Result
      Result.set_value ("EUR")
    end

 val_aud: CURRENCY
    once
      create Result
      Result.set_value ("AUD")
    end

 val_nzd: CURRENCY
    once
      create Result
      Result.set_value ("NZD")
    end

 val_sek: CURRENCY
    once
      create Result
      Result.set_value ("SEK")
    end

 val_ils: CURRENCY
    once
      create Result
      Result.set_value ("ILS")
    end

 val_chf: CURRENCY
    once
      create Result
      Result.set_value ("CHF")
    end

 val_hkd: CURRENCY
    once
      create Result
      Result.set_value ("HKD")
    end

 val_jpy: CURRENCY
    once
      create Result
      Result.set_value ("JPY")
    end

 val_sgd: CURRENCY
    once
      create Result
      Result.set_value ("SGD")
    end

 val_krw: CURRENCY
    once
      create Result
      Result.set_value ("KRW")
    end

 val_nok: CURRENCY
    once
      create Result
      Result.set_value ("NOK")
    end

 val_dkk: CURRENCY
    once
      create Result
      Result.set_value ("DKK")
    end

 val_pln: CURRENCY
    once
      create Result
      Result.set_value ("PLN")
    end

 val_ron: CURRENCY
    once
      create Result
      Result.set_value ("RON")
    end

 val_huf: CURRENCY
    once
      create Result
      Result.set_value ("HUF")
    end

 val_czk: CURRENCY
    once
      create Result
      Result.set_value ("CZK")
    end

 val_brl: CURRENCY
    once
      create Result
      Result.set_value ("BRL")
    end

 val_mxn: CURRENCY
    once
      create Result
      Result.set_value ("MXN")
    end

 val_ars: CURRENCY
    once
      create Result
      Result.set_value ("ARS")
    end

 val_clp: CURRENCY
    once
      create Result
      Result.set_value ("CLP")
    end

 val_cop: CURRENCY
    once
      create Result
      Result.set_value ("COP")
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

