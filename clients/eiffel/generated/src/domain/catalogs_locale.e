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
class CATALOGS_LOCALE

feature -- Access

  value: detachable STRING_32
      -- enumerated value.
    note
            option: stable
    attribute
    end

feature -- Enum

 val_af_za: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("af-ZA")
    end

 val_ar_sa: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("ar-SA")
    end

 val_bg_bg: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("bg-BG")
    end

 val_bn_in: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("bn-IN")
    end

 val_cs_cz: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("cs-CZ")
    end

 val_da_dk: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("da-DK")
    end

 val_de: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("de")
    end

 val_el_gr: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("el-GR")
    end

 val_en_au: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("en-AU")
    end

 val_en_ca: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("en-CA")
    end

 val_en_gb: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("en-GB")
    end

 val_en_in: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("en-IN")
    end

 val_en_us: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("en-US")
    end

 val_es_419: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("es-419")
    end

 val_es_ar: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("es-AR")
    end

 val_es_es: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("es-ES")
    end

 val_es_mx: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("es-MX")
    end

 val_fi_fi: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("fi-FI")
    end

 val_fr: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("fr")
    end

 val_fr_ca: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("fr-CA")
    end

 val_he_il: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("he-IL")
    end

 val_hi_in: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("hi-IN")
    end

 val_hr_hr: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("hr-HR")
    end

 val_hu_hu: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("hu-HU")
    end

 val_id_id: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("id-ID")
    end

 val_it: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("it")
    end

 val_ja: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("ja")
    end

 val_ko_kr: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("ko-KR")
    end

 val_ms_my: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("ms-MY")
    end

 val_nb_no: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("nb-NO")
    end

 val_nl: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("nl")
    end

 val_pl_pl: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("pl-PL")
    end

 val_pt_br: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("pt-BR")
    end

 val_pt_pt: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("pt-PT")
    end

 val_ro_ro: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("ro-RO")
    end

 val_ru_ru: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("ru-RU")
    end

 val_sk_sk: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("sk-SK")
    end

 val_sv_se: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("sv-SE")
    end

 val_te_in: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("te-IN")
    end

 val_th_th: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("th-TH")
    end

 val_tl_ph: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("tl-PH")
    end

 val_tr: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("tr")
    end

 val_uk_ua: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("uk-UA")
    end

 val_vi_vn: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("vi-VN")
    end

 val_zh_cn: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("zh-CN")
    end

 val_zh_tw: CATALOGS_LOCALE
    once
      create Result
      Result.set_value ("zh-TW")
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

