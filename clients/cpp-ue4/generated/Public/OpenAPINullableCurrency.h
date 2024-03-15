/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPINullableCurrency
 *
 * Currency Codes from ISO 4217.
 */
class OPENAPI_API OpenAPINullableCurrency : public Model
{
public:
    virtual ~OpenAPINullableCurrency() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		Aed,
		Afn,
		All,
		Amd,
		Ang,
		Aoa,
		Ars,
		Aud,
		Awg,
		Azn,
		Bam,
		Bbd,
		Bdt,
		Bgn,
		Bhd,
		Bif,
		Bmd,
		Bnd,
		Bob,
		Brl,
		Bsd,
		Btn,
		Bwp,
		Byn,
		Byr,
		Bzd,
		Cad,
		Cdf,
		Chf,
		Clp,
		Cny,
		Cop,
		Crc,
		Cuc,
		Cup,
		Cve,
		Czk,
		Djf,
		Dkk,
		Dop,
		Dzd,
		Egp,
		Ern,
		Etb,
		Eur,
		Fjd,
		Fkp,
		Gbp,
		Gel,
		Ggp,
		Ghs,
		Gip,
		Gmd,
		Gnf,
		Gtq,
		Gyd,
		Hkd,
		Hnl,
		Hrk,
		Htg,
		Huf,
		Idr,
		Ils,
		Imp,
		Inr,
		Iqd,
		Irr,
		Isk,
		Jep,
		Jmd,
		Jod,
		Jpy,
		Kes,
		Kgs,
		Khr,
		Kmf,
		Kpw,
		Krw,
		Kwd,
		Kyd,
		Kzt,
		Lak,
		Lbp,
		Lkr,
		Lrd,
		Lsl,
		Lyd,
		Mad,
		Mdl,
		Mga,
		Mkd,
		Mmk,
		Mnt,
		Mop,
		Mro,
		Mur,
		Mvr,
		Mwk,
		Mxn,
		Myr,
		Mzn,
		Nad,
		Ngn,
		Nio,
		Nok,
		Npr,
		Nzd,
		Omr,
		Pab,
		Pen,
		Pgk,
		Php,
		Pkr,
		Pln,
		Pyg,
		Qar,
		Ron,
		Rsd,
		Rub,
		Rwf,
		Sar,
		Sbd,
		Scr,
		Sdg,
		Sek,
		Sgd,
		Shp,
		Sll,
		Sos,
		Spl,
		Srd,
		Std,
		Svc,
		Syp,
		Szl,
		Thb,
		Tjs,
		Tmt,
		Tnd,
		Top,
		_Try,
		Ttd,
		Tvd,
		Twd,
		Tzs,
		Uah,
		Ugx,
		Usd,
		Uyu,
		Uzs,
		Vef,
		Vnd,
		Vuv,
		Wst,
		Xaf,
		Xcd,
		Xdr,
		Xof,
		Xpf,
		Yer,
		Zar,
		Zmw,
		Zwd,
		Null,
  	};

	Values Value;

	static FString EnumToString(const Values& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, Values& EnumValue);
};

}
