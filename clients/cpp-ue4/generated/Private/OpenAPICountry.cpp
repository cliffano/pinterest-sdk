/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICountry.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICountry::Values& Value)
{
	switch (Value)
	{
	case OpenAPICountry::Values::Ad:
		return TEXT("AD");
	case OpenAPICountry::Values::Ae:
		return TEXT("AE");
	case OpenAPICountry::Values::Af:
		return TEXT("AF");
	case OpenAPICountry::Values::Ag:
		return TEXT("AG");
	case OpenAPICountry::Values::Ai:
		return TEXT("AI");
	case OpenAPICountry::Values::Al:
		return TEXT("AL");
	case OpenAPICountry::Values::Am:
		return TEXT("AM");
	case OpenAPICountry::Values::Ao:
		return TEXT("AO");
	case OpenAPICountry::Values::Aq:
		return TEXT("AQ");
	case OpenAPICountry::Values::Ar:
		return TEXT("AR");
	case OpenAPICountry::Values::As:
		return TEXT("AS");
	case OpenAPICountry::Values::At:
		return TEXT("AT");
	case OpenAPICountry::Values::Au:
		return TEXT("AU");
	case OpenAPICountry::Values::Aw:
		return TEXT("AW");
	case OpenAPICountry::Values::Ax:
		return TEXT("AX");
	case OpenAPICountry::Values::Az:
		return TEXT("AZ");
	case OpenAPICountry::Values::Ba:
		return TEXT("BA");
	case OpenAPICountry::Values::Bb:
		return TEXT("BB");
	case OpenAPICountry::Values::Bd:
		return TEXT("BD");
	case OpenAPICountry::Values::Be:
		return TEXT("BE");
	case OpenAPICountry::Values::Bf:
		return TEXT("BF");
	case OpenAPICountry::Values::Bg:
		return TEXT("BG");
	case OpenAPICountry::Values::Bh:
		return TEXT("BH");
	case OpenAPICountry::Values::Bi:
		return TEXT("BI");
	case OpenAPICountry::Values::Bj:
		return TEXT("BJ");
	case OpenAPICountry::Values::Bl:
		return TEXT("BL");
	case OpenAPICountry::Values::Bm:
		return TEXT("BM");
	case OpenAPICountry::Values::Bn:
		return TEXT("BN");
	case OpenAPICountry::Values::Bo:
		return TEXT("BO");
	case OpenAPICountry::Values::Bq:
		return TEXT("BQ");
	case OpenAPICountry::Values::Br:
		return TEXT("BR");
	case OpenAPICountry::Values::Bs:
		return TEXT("BS");
	case OpenAPICountry::Values::Bt:
		return TEXT("BT");
	case OpenAPICountry::Values::Bv:
		return TEXT("BV");
	case OpenAPICountry::Values::Bw:
		return TEXT("BW");
	case OpenAPICountry::Values::By:
		return TEXT("BY");
	case OpenAPICountry::Values::Bz:
		return TEXT("BZ");
	case OpenAPICountry::Values::Ca:
		return TEXT("CA");
	case OpenAPICountry::Values::Cc:
		return TEXT("CC");
	case OpenAPICountry::Values::Cd:
		return TEXT("CD");
	case OpenAPICountry::Values::Cf:
		return TEXT("CF");
	case OpenAPICountry::Values::Cg:
		return TEXT("CG");
	case OpenAPICountry::Values::Ch:
		return TEXT("CH");
	case OpenAPICountry::Values::Ci:
		return TEXT("CI");
	case OpenAPICountry::Values::Ck:
		return TEXT("CK");
	case OpenAPICountry::Values::Cl:
		return TEXT("CL");
	case OpenAPICountry::Values::Cm:
		return TEXT("CM");
	case OpenAPICountry::Values::Co:
		return TEXT("CO");
	case OpenAPICountry::Values::Cr:
		return TEXT("CR");
	case OpenAPICountry::Values::Cu:
		return TEXT("CU");
	case OpenAPICountry::Values::Cv:
		return TEXT("CV");
	case OpenAPICountry::Values::Cw:
		return TEXT("CW");
	case OpenAPICountry::Values::Cx:
		return TEXT("CX");
	case OpenAPICountry::Values::Cy:
		return TEXT("CY");
	case OpenAPICountry::Values::Cz:
		return TEXT("CZ");
	case OpenAPICountry::Values::De:
		return TEXT("DE");
	case OpenAPICountry::Values::Dj:
		return TEXT("DJ");
	case OpenAPICountry::Values::Dk:
		return TEXT("DK");
	case OpenAPICountry::Values::Dm:
		return TEXT("DM");
	case OpenAPICountry::Values::_Do:
		return TEXT("DO");
	case OpenAPICountry::Values::Dz:
		return TEXT("DZ");
	case OpenAPICountry::Values::Ec:
		return TEXT("EC");
	case OpenAPICountry::Values::Ee:
		return TEXT("EE");
	case OpenAPICountry::Values::Eg:
		return TEXT("EG");
	case OpenAPICountry::Values::Eh:
		return TEXT("EH");
	case OpenAPICountry::Values::Er:
		return TEXT("ER");
	case OpenAPICountry::Values::Es:
		return TEXT("ES");
	case OpenAPICountry::Values::Et:
		return TEXT("ET");
	case OpenAPICountry::Values::Fi:
		return TEXT("FI");
	case OpenAPICountry::Values::Fj:
		return TEXT("FJ");
	case OpenAPICountry::Values::Fk:
		return TEXT("FK");
	case OpenAPICountry::Values::Fm:
		return TEXT("FM");
	case OpenAPICountry::Values::Fo:
		return TEXT("FO");
	case OpenAPICountry::Values::Fr:
		return TEXT("FR");
	case OpenAPICountry::Values::Ga:
		return TEXT("GA");
	case OpenAPICountry::Values::Gb:
		return TEXT("GB");
	case OpenAPICountry::Values::Gd:
		return TEXT("GD");
	case OpenAPICountry::Values::Ge:
		return TEXT("GE");
	case OpenAPICountry::Values::Gf:
		return TEXT("GF");
	case OpenAPICountry::Values::Gg:
		return TEXT("GG");
	case OpenAPICountry::Values::Gh:
		return TEXT("GH");
	case OpenAPICountry::Values::Gi:
		return TEXT("GI");
	case OpenAPICountry::Values::Gl:
		return TEXT("GL");
	case OpenAPICountry::Values::Gm:
		return TEXT("GM");
	case OpenAPICountry::Values::Gn:
		return TEXT("GN");
	case OpenAPICountry::Values::Gp:
		return TEXT("GP");
	case OpenAPICountry::Values::Gq:
		return TEXT("GQ");
	case OpenAPICountry::Values::Gr:
		return TEXT("GR");
	case OpenAPICountry::Values::Gs:
		return TEXT("GS");
	case OpenAPICountry::Values::Gt:
		return TEXT("GT");
	case OpenAPICountry::Values::Gu:
		return TEXT("GU");
	case OpenAPICountry::Values::Gw:
		return TEXT("GW");
	case OpenAPICountry::Values::Gy:
		return TEXT("GY");
	case OpenAPICountry::Values::Hk:
		return TEXT("HK");
	case OpenAPICountry::Values::Hm:
		return TEXT("HM");
	case OpenAPICountry::Values::Hn:
		return TEXT("HN");
	case OpenAPICountry::Values::Hr:
		return TEXT("HR");
	case OpenAPICountry::Values::Ht:
		return TEXT("HT");
	case OpenAPICountry::Values::Hu:
		return TEXT("HU");
	case OpenAPICountry::Values::Id:
		return TEXT("ID");
	case OpenAPICountry::Values::Ie:
		return TEXT("IE");
	case OpenAPICountry::Values::Il:
		return TEXT("IL");
	case OpenAPICountry::Values::Im:
		return TEXT("IM");
	case OpenAPICountry::Values::In:
		return TEXT("IN");
	case OpenAPICountry::Values::Io:
		return TEXT("IO");
	case OpenAPICountry::Values::Iq:
		return TEXT("IQ");
	case OpenAPICountry::Values::Ir:
		return TEXT("IR");
	case OpenAPICountry::Values::Is:
		return TEXT("IS");
	case OpenAPICountry::Values::It:
		return TEXT("IT");
	case OpenAPICountry::Values::Je:
		return TEXT("JE");
	case OpenAPICountry::Values::Jm:
		return TEXT("JM");
	case OpenAPICountry::Values::Jo:
		return TEXT("JO");
	case OpenAPICountry::Values::Jp:
		return TEXT("JP");
	case OpenAPICountry::Values::Ke:
		return TEXT("KE");
	case OpenAPICountry::Values::Kg:
		return TEXT("KG");
	case OpenAPICountry::Values::Kh:
		return TEXT("KH");
	case OpenAPICountry::Values::Ki:
		return TEXT("KI");
	case OpenAPICountry::Values::Km:
		return TEXT("KM");
	case OpenAPICountry::Values::Kn:
		return TEXT("KN");
	case OpenAPICountry::Values::Kr:
		return TEXT("KR");
	case OpenAPICountry::Values::Kw:
		return TEXT("KW");
	case OpenAPICountry::Values::Ky:
		return TEXT("KY");
	case OpenAPICountry::Values::Kz:
		return TEXT("KZ");
	case OpenAPICountry::Values::La:
		return TEXT("LA");
	case OpenAPICountry::Values::Lb:
		return TEXT("LB");
	case OpenAPICountry::Values::Lc:
		return TEXT("LC");
	case OpenAPICountry::Values::Li:
		return TEXT("LI");
	case OpenAPICountry::Values::Lk:
		return TEXT("LK");
	case OpenAPICountry::Values::Lr:
		return TEXT("LR");
	case OpenAPICountry::Values::Ls:
		return TEXT("LS");
	case OpenAPICountry::Values::Lt:
		return TEXT("LT");
	case OpenAPICountry::Values::Lu:
		return TEXT("LU");
	case OpenAPICountry::Values::Lv:
		return TEXT("LV");
	case OpenAPICountry::Values::Ly:
		return TEXT("LY");
	case OpenAPICountry::Values::Ma:
		return TEXT("MA");
	case OpenAPICountry::Values::Mc:
		return TEXT("MC");
	case OpenAPICountry::Values::Md:
		return TEXT("MD");
	case OpenAPICountry::Values::Me:
		return TEXT("ME");
	case OpenAPICountry::Values::Mf:
		return TEXT("MF");
	case OpenAPICountry::Values::Mg:
		return TEXT("MG");
	case OpenAPICountry::Values::Mh:
		return TEXT("MH");
	case OpenAPICountry::Values::Mk:
		return TEXT("MK");
	case OpenAPICountry::Values::Ml:
		return TEXT("ML");
	case OpenAPICountry::Values::Mm:
		return TEXT("MM");
	case OpenAPICountry::Values::Mn:
		return TEXT("MN");
	case OpenAPICountry::Values::Mo:
		return TEXT("MO");
	case OpenAPICountry::Values::Mp:
		return TEXT("MP");
	case OpenAPICountry::Values::Mq:
		return TEXT("MQ");
	case OpenAPICountry::Values::Mr:
		return TEXT("MR");
	case OpenAPICountry::Values::Ms:
		return TEXT("MS");
	case OpenAPICountry::Values::Mt:
		return TEXT("MT");
	case OpenAPICountry::Values::Mu:
		return TEXT("MU");
	case OpenAPICountry::Values::Mv:
		return TEXT("MV");
	case OpenAPICountry::Values::Mw:
		return TEXT("MW");
	case OpenAPICountry::Values::Mx:
		return TEXT("MX");
	case OpenAPICountry::Values::My:
		return TEXT("MY");
	case OpenAPICountry::Values::Mz:
		return TEXT("MZ");
	case OpenAPICountry::Values::Na:
		return TEXT("NA");
	case OpenAPICountry::Values::Nc:
		return TEXT("NC");
	case OpenAPICountry::Values::Ne:
		return TEXT("NE");
	case OpenAPICountry::Values::Nf:
		return TEXT("NF");
	case OpenAPICountry::Values::Ng:
		return TEXT("NG");
	case OpenAPICountry::Values::Ni:
		return TEXT("NI");
	case OpenAPICountry::Values::Nl:
		return TEXT("NL");
	case OpenAPICountry::Values::No:
		return TEXT("NO");
	case OpenAPICountry::Values::Np:
		return TEXT("NP");
	case OpenAPICountry::Values::Nr:
		return TEXT("NR");
	case OpenAPICountry::Values::Nu:
		return TEXT("NU");
	case OpenAPICountry::Values::Nz:
		return TEXT("NZ");
	case OpenAPICountry::Values::Om:
		return TEXT("OM");
	case OpenAPICountry::Values::Pa:
		return TEXT("PA");
	case OpenAPICountry::Values::Pe:
		return TEXT("PE");
	case OpenAPICountry::Values::Pf:
		return TEXT("PF");
	case OpenAPICountry::Values::Pg:
		return TEXT("PG");
	case OpenAPICountry::Values::Ph:
		return TEXT("PH");
	case OpenAPICountry::Values::Pk:
		return TEXT("PK");
	case OpenAPICountry::Values::Pl:
		return TEXT("PL");
	case OpenAPICountry::Values::Pm:
		return TEXT("PM");
	case OpenAPICountry::Values::Pn:
		return TEXT("PN");
	case OpenAPICountry::Values::Pr:
		return TEXT("PR");
	case OpenAPICountry::Values::Ps:
		return TEXT("PS");
	case OpenAPICountry::Values::Pt:
		return TEXT("PT");
	case OpenAPICountry::Values::Pw:
		return TEXT("PW");
	case OpenAPICountry::Values::Py:
		return TEXT("PY");
	case OpenAPICountry::Values::Qa:
		return TEXT("QA");
	case OpenAPICountry::Values::Re:
		return TEXT("RE");
	case OpenAPICountry::Values::Ro:
		return TEXT("RO");
	case OpenAPICountry::Values::Rs:
		return TEXT("RS");
	case OpenAPICountry::Values::Ru:
		return TEXT("RU");
	case OpenAPICountry::Values::Rw:
		return TEXT("RW");
	case OpenAPICountry::Values::Sa:
		return TEXT("SA");
	case OpenAPICountry::Values::Sb:
		return TEXT("SB");
	case OpenAPICountry::Values::Sc:
		return TEXT("SC");
	case OpenAPICountry::Values::Sd:
		return TEXT("SD");
	case OpenAPICountry::Values::Se:
		return TEXT("SE");
	case OpenAPICountry::Values::Sg:
		return TEXT("SG");
	case OpenAPICountry::Values::Sh:
		return TEXT("SH");
	case OpenAPICountry::Values::Si:
		return TEXT("SI");
	case OpenAPICountry::Values::Sj:
		return TEXT("SJ");
	case OpenAPICountry::Values::Sk:
		return TEXT("SK");
	case OpenAPICountry::Values::Sl:
		return TEXT("SL");
	case OpenAPICountry::Values::Sm:
		return TEXT("SM");
	case OpenAPICountry::Values::Sn:
		return TEXT("SN");
	case OpenAPICountry::Values::So:
		return TEXT("SO");
	case OpenAPICountry::Values::Sr:
		return TEXT("SR");
	case OpenAPICountry::Values::Ss:
		return TEXT("SS");
	case OpenAPICountry::Values::St:
		return TEXT("ST");
	case OpenAPICountry::Values::Sv:
		return TEXT("SV");
	case OpenAPICountry::Values::Sx:
		return TEXT("SX");
	case OpenAPICountry::Values::Sy:
		return TEXT("SY");
	case OpenAPICountry::Values::Sz:
		return TEXT("SZ");
	case OpenAPICountry::Values::Tc:
		return TEXT("TC");
	case OpenAPICountry::Values::Td:
		return TEXT("TD");
	case OpenAPICountry::Values::Tf:
		return TEXT("TF");
	case OpenAPICountry::Values::Tg:
		return TEXT("TG");
	case OpenAPICountry::Values::Th:
		return TEXT("TH");
	case OpenAPICountry::Values::Tj:
		return TEXT("TJ");
	case OpenAPICountry::Values::Tk:
		return TEXT("TK");
	case OpenAPICountry::Values::Tl:
		return TEXT("TL");
	case OpenAPICountry::Values::Tm:
		return TEXT("TM");
	case OpenAPICountry::Values::Tn:
		return TEXT("TN");
	case OpenAPICountry::Values::To:
		return TEXT("TO");
	case OpenAPICountry::Values::Tr:
		return TEXT("TR");
	case OpenAPICountry::Values::Tt:
		return TEXT("TT");
	case OpenAPICountry::Values::Tv:
		return TEXT("TV");
	case OpenAPICountry::Values::Tw:
		return TEXT("TW");
	case OpenAPICountry::Values::Tz:
		return TEXT("TZ");
	case OpenAPICountry::Values::Ua:
		return TEXT("UA");
	case OpenAPICountry::Values::Ug:
		return TEXT("UG");
	case OpenAPICountry::Values::Um:
		return TEXT("UM");
	case OpenAPICountry::Values::Us:
		return TEXT("US");
	case OpenAPICountry::Values::Uy:
		return TEXT("UY");
	case OpenAPICountry::Values::Uz:
		return TEXT("UZ");
	case OpenAPICountry::Values::Va:
		return TEXT("VA");
	case OpenAPICountry::Values::Vc:
		return TEXT("VC");
	case OpenAPICountry::Values::Ve:
		return TEXT("VE");
	case OpenAPICountry::Values::Vg:
		return TEXT("VG");
	case OpenAPICountry::Values::Vi:
		return TEXT("VI");
	case OpenAPICountry::Values::Vn:
		return TEXT("VN");
	case OpenAPICountry::Values::Vu:
		return TEXT("VU");
	case OpenAPICountry::Values::Wf:
		return TEXT("WF");
	case OpenAPICountry::Values::Ws:
		return TEXT("WS");
	case OpenAPICountry::Values::Ye:
		return TEXT("YE");
	case OpenAPICountry::Values::Yt:
		return TEXT("YT");
	case OpenAPICountry::Values::Za:
		return TEXT("ZA");
	case OpenAPICountry::Values::Zm:
		return TEXT("ZM");
	case OpenAPICountry::Values::Zw:
		return TEXT("ZW");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICountry::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICountry::EnumToString(const OpenAPICountry::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICountry::Values& Value)
{
	static TMap<FString, OpenAPICountry::Values> StringToEnum = { 
		{ TEXT("AD"), OpenAPICountry::Values::Ad },
		{ TEXT("AE"), OpenAPICountry::Values::Ae },
		{ TEXT("AF"), OpenAPICountry::Values::Af },
		{ TEXT("AG"), OpenAPICountry::Values::Ag },
		{ TEXT("AI"), OpenAPICountry::Values::Ai },
		{ TEXT("AL"), OpenAPICountry::Values::Al },
		{ TEXT("AM"), OpenAPICountry::Values::Am },
		{ TEXT("AO"), OpenAPICountry::Values::Ao },
		{ TEXT("AQ"), OpenAPICountry::Values::Aq },
		{ TEXT("AR"), OpenAPICountry::Values::Ar },
		{ TEXT("AS"), OpenAPICountry::Values::As },
		{ TEXT("AT"), OpenAPICountry::Values::At },
		{ TEXT("AU"), OpenAPICountry::Values::Au },
		{ TEXT("AW"), OpenAPICountry::Values::Aw },
		{ TEXT("AX"), OpenAPICountry::Values::Ax },
		{ TEXT("AZ"), OpenAPICountry::Values::Az },
		{ TEXT("BA"), OpenAPICountry::Values::Ba },
		{ TEXT("BB"), OpenAPICountry::Values::Bb },
		{ TEXT("BD"), OpenAPICountry::Values::Bd },
		{ TEXT("BE"), OpenAPICountry::Values::Be },
		{ TEXT("BF"), OpenAPICountry::Values::Bf },
		{ TEXT("BG"), OpenAPICountry::Values::Bg },
		{ TEXT("BH"), OpenAPICountry::Values::Bh },
		{ TEXT("BI"), OpenAPICountry::Values::Bi },
		{ TEXT("BJ"), OpenAPICountry::Values::Bj },
		{ TEXT("BL"), OpenAPICountry::Values::Bl },
		{ TEXT("BM"), OpenAPICountry::Values::Bm },
		{ TEXT("BN"), OpenAPICountry::Values::Bn },
		{ TEXT("BO"), OpenAPICountry::Values::Bo },
		{ TEXT("BQ"), OpenAPICountry::Values::Bq },
		{ TEXT("BR"), OpenAPICountry::Values::Br },
		{ TEXT("BS"), OpenAPICountry::Values::Bs },
		{ TEXT("BT"), OpenAPICountry::Values::Bt },
		{ TEXT("BV"), OpenAPICountry::Values::Bv },
		{ TEXT("BW"), OpenAPICountry::Values::Bw },
		{ TEXT("BY"), OpenAPICountry::Values::By },
		{ TEXT("BZ"), OpenAPICountry::Values::Bz },
		{ TEXT("CA"), OpenAPICountry::Values::Ca },
		{ TEXT("CC"), OpenAPICountry::Values::Cc },
		{ TEXT("CD"), OpenAPICountry::Values::Cd },
		{ TEXT("CF"), OpenAPICountry::Values::Cf },
		{ TEXT("CG"), OpenAPICountry::Values::Cg },
		{ TEXT("CH"), OpenAPICountry::Values::Ch },
		{ TEXT("CI"), OpenAPICountry::Values::Ci },
		{ TEXT("CK"), OpenAPICountry::Values::Ck },
		{ TEXT("CL"), OpenAPICountry::Values::Cl },
		{ TEXT("CM"), OpenAPICountry::Values::Cm },
		{ TEXT("CO"), OpenAPICountry::Values::Co },
		{ TEXT("CR"), OpenAPICountry::Values::Cr },
		{ TEXT("CU"), OpenAPICountry::Values::Cu },
		{ TEXT("CV"), OpenAPICountry::Values::Cv },
		{ TEXT("CW"), OpenAPICountry::Values::Cw },
		{ TEXT("CX"), OpenAPICountry::Values::Cx },
		{ TEXT("CY"), OpenAPICountry::Values::Cy },
		{ TEXT("CZ"), OpenAPICountry::Values::Cz },
		{ TEXT("DE"), OpenAPICountry::Values::De },
		{ TEXT("DJ"), OpenAPICountry::Values::Dj },
		{ TEXT("DK"), OpenAPICountry::Values::Dk },
		{ TEXT("DM"), OpenAPICountry::Values::Dm },
		{ TEXT("DO"), OpenAPICountry::Values::_Do },
		{ TEXT("DZ"), OpenAPICountry::Values::Dz },
		{ TEXT("EC"), OpenAPICountry::Values::Ec },
		{ TEXT("EE"), OpenAPICountry::Values::Ee },
		{ TEXT("EG"), OpenAPICountry::Values::Eg },
		{ TEXT("EH"), OpenAPICountry::Values::Eh },
		{ TEXT("ER"), OpenAPICountry::Values::Er },
		{ TEXT("ES"), OpenAPICountry::Values::Es },
		{ TEXT("ET"), OpenAPICountry::Values::Et },
		{ TEXT("FI"), OpenAPICountry::Values::Fi },
		{ TEXT("FJ"), OpenAPICountry::Values::Fj },
		{ TEXT("FK"), OpenAPICountry::Values::Fk },
		{ TEXT("FM"), OpenAPICountry::Values::Fm },
		{ TEXT("FO"), OpenAPICountry::Values::Fo },
		{ TEXT("FR"), OpenAPICountry::Values::Fr },
		{ TEXT("GA"), OpenAPICountry::Values::Ga },
		{ TEXT("GB"), OpenAPICountry::Values::Gb },
		{ TEXT("GD"), OpenAPICountry::Values::Gd },
		{ TEXT("GE"), OpenAPICountry::Values::Ge },
		{ TEXT("GF"), OpenAPICountry::Values::Gf },
		{ TEXT("GG"), OpenAPICountry::Values::Gg },
		{ TEXT("GH"), OpenAPICountry::Values::Gh },
		{ TEXT("GI"), OpenAPICountry::Values::Gi },
		{ TEXT("GL"), OpenAPICountry::Values::Gl },
		{ TEXT("GM"), OpenAPICountry::Values::Gm },
		{ TEXT("GN"), OpenAPICountry::Values::Gn },
		{ TEXT("GP"), OpenAPICountry::Values::Gp },
		{ TEXT("GQ"), OpenAPICountry::Values::Gq },
		{ TEXT("GR"), OpenAPICountry::Values::Gr },
		{ TEXT("GS"), OpenAPICountry::Values::Gs },
		{ TEXT("GT"), OpenAPICountry::Values::Gt },
		{ TEXT("GU"), OpenAPICountry::Values::Gu },
		{ TEXT("GW"), OpenAPICountry::Values::Gw },
		{ TEXT("GY"), OpenAPICountry::Values::Gy },
		{ TEXT("HK"), OpenAPICountry::Values::Hk },
		{ TEXT("HM"), OpenAPICountry::Values::Hm },
		{ TEXT("HN"), OpenAPICountry::Values::Hn },
		{ TEXT("HR"), OpenAPICountry::Values::Hr },
		{ TEXT("HT"), OpenAPICountry::Values::Ht },
		{ TEXT("HU"), OpenAPICountry::Values::Hu },
		{ TEXT("ID"), OpenAPICountry::Values::Id },
		{ TEXT("IE"), OpenAPICountry::Values::Ie },
		{ TEXT("IL"), OpenAPICountry::Values::Il },
		{ TEXT("IM"), OpenAPICountry::Values::Im },
		{ TEXT("IN"), OpenAPICountry::Values::In },
		{ TEXT("IO"), OpenAPICountry::Values::Io },
		{ TEXT("IQ"), OpenAPICountry::Values::Iq },
		{ TEXT("IR"), OpenAPICountry::Values::Ir },
		{ TEXT("IS"), OpenAPICountry::Values::Is },
		{ TEXT("IT"), OpenAPICountry::Values::It },
		{ TEXT("JE"), OpenAPICountry::Values::Je },
		{ TEXT("JM"), OpenAPICountry::Values::Jm },
		{ TEXT("JO"), OpenAPICountry::Values::Jo },
		{ TEXT("JP"), OpenAPICountry::Values::Jp },
		{ TEXT("KE"), OpenAPICountry::Values::Ke },
		{ TEXT("KG"), OpenAPICountry::Values::Kg },
		{ TEXT("KH"), OpenAPICountry::Values::Kh },
		{ TEXT("KI"), OpenAPICountry::Values::Ki },
		{ TEXT("KM"), OpenAPICountry::Values::Km },
		{ TEXT("KN"), OpenAPICountry::Values::Kn },
		{ TEXT("KR"), OpenAPICountry::Values::Kr },
		{ TEXT("KW"), OpenAPICountry::Values::Kw },
		{ TEXT("KY"), OpenAPICountry::Values::Ky },
		{ TEXT("KZ"), OpenAPICountry::Values::Kz },
		{ TEXT("LA"), OpenAPICountry::Values::La },
		{ TEXT("LB"), OpenAPICountry::Values::Lb },
		{ TEXT("LC"), OpenAPICountry::Values::Lc },
		{ TEXT("LI"), OpenAPICountry::Values::Li },
		{ TEXT("LK"), OpenAPICountry::Values::Lk },
		{ TEXT("LR"), OpenAPICountry::Values::Lr },
		{ TEXT("LS"), OpenAPICountry::Values::Ls },
		{ TEXT("LT"), OpenAPICountry::Values::Lt },
		{ TEXT("LU"), OpenAPICountry::Values::Lu },
		{ TEXT("LV"), OpenAPICountry::Values::Lv },
		{ TEXT("LY"), OpenAPICountry::Values::Ly },
		{ TEXT("MA"), OpenAPICountry::Values::Ma },
		{ TEXT("MC"), OpenAPICountry::Values::Mc },
		{ TEXT("MD"), OpenAPICountry::Values::Md },
		{ TEXT("ME"), OpenAPICountry::Values::Me },
		{ TEXT("MF"), OpenAPICountry::Values::Mf },
		{ TEXT("MG"), OpenAPICountry::Values::Mg },
		{ TEXT("MH"), OpenAPICountry::Values::Mh },
		{ TEXT("MK"), OpenAPICountry::Values::Mk },
		{ TEXT("ML"), OpenAPICountry::Values::Ml },
		{ TEXT("MM"), OpenAPICountry::Values::Mm },
		{ TEXT("MN"), OpenAPICountry::Values::Mn },
		{ TEXT("MO"), OpenAPICountry::Values::Mo },
		{ TEXT("MP"), OpenAPICountry::Values::Mp },
		{ TEXT("MQ"), OpenAPICountry::Values::Mq },
		{ TEXT("MR"), OpenAPICountry::Values::Mr },
		{ TEXT("MS"), OpenAPICountry::Values::Ms },
		{ TEXT("MT"), OpenAPICountry::Values::Mt },
		{ TEXT("MU"), OpenAPICountry::Values::Mu },
		{ TEXT("MV"), OpenAPICountry::Values::Mv },
		{ TEXT("MW"), OpenAPICountry::Values::Mw },
		{ TEXT("MX"), OpenAPICountry::Values::Mx },
		{ TEXT("MY"), OpenAPICountry::Values::My },
		{ TEXT("MZ"), OpenAPICountry::Values::Mz },
		{ TEXT("NA"), OpenAPICountry::Values::Na },
		{ TEXT("NC"), OpenAPICountry::Values::Nc },
		{ TEXT("NE"), OpenAPICountry::Values::Ne },
		{ TEXT("NF"), OpenAPICountry::Values::Nf },
		{ TEXT("NG"), OpenAPICountry::Values::Ng },
		{ TEXT("NI"), OpenAPICountry::Values::Ni },
		{ TEXT("NL"), OpenAPICountry::Values::Nl },
		{ TEXT("NO"), OpenAPICountry::Values::No },
		{ TEXT("NP"), OpenAPICountry::Values::Np },
		{ TEXT("NR"), OpenAPICountry::Values::Nr },
		{ TEXT("NU"), OpenAPICountry::Values::Nu },
		{ TEXT("NZ"), OpenAPICountry::Values::Nz },
		{ TEXT("OM"), OpenAPICountry::Values::Om },
		{ TEXT("PA"), OpenAPICountry::Values::Pa },
		{ TEXT("PE"), OpenAPICountry::Values::Pe },
		{ TEXT("PF"), OpenAPICountry::Values::Pf },
		{ TEXT("PG"), OpenAPICountry::Values::Pg },
		{ TEXT("PH"), OpenAPICountry::Values::Ph },
		{ TEXT("PK"), OpenAPICountry::Values::Pk },
		{ TEXT("PL"), OpenAPICountry::Values::Pl },
		{ TEXT("PM"), OpenAPICountry::Values::Pm },
		{ TEXT("PN"), OpenAPICountry::Values::Pn },
		{ TEXT("PR"), OpenAPICountry::Values::Pr },
		{ TEXT("PS"), OpenAPICountry::Values::Ps },
		{ TEXT("PT"), OpenAPICountry::Values::Pt },
		{ TEXT("PW"), OpenAPICountry::Values::Pw },
		{ TEXT("PY"), OpenAPICountry::Values::Py },
		{ TEXT("QA"), OpenAPICountry::Values::Qa },
		{ TEXT("RE"), OpenAPICountry::Values::Re },
		{ TEXT("RO"), OpenAPICountry::Values::Ro },
		{ TEXT("RS"), OpenAPICountry::Values::Rs },
		{ TEXT("RU"), OpenAPICountry::Values::Ru },
		{ TEXT("RW"), OpenAPICountry::Values::Rw },
		{ TEXT("SA"), OpenAPICountry::Values::Sa },
		{ TEXT("SB"), OpenAPICountry::Values::Sb },
		{ TEXT("SC"), OpenAPICountry::Values::Sc },
		{ TEXT("SD"), OpenAPICountry::Values::Sd },
		{ TEXT("SE"), OpenAPICountry::Values::Se },
		{ TEXT("SG"), OpenAPICountry::Values::Sg },
		{ TEXT("SH"), OpenAPICountry::Values::Sh },
		{ TEXT("SI"), OpenAPICountry::Values::Si },
		{ TEXT("SJ"), OpenAPICountry::Values::Sj },
		{ TEXT("SK"), OpenAPICountry::Values::Sk },
		{ TEXT("SL"), OpenAPICountry::Values::Sl },
		{ TEXT("SM"), OpenAPICountry::Values::Sm },
		{ TEXT("SN"), OpenAPICountry::Values::Sn },
		{ TEXT("SO"), OpenAPICountry::Values::So },
		{ TEXT("SR"), OpenAPICountry::Values::Sr },
		{ TEXT("SS"), OpenAPICountry::Values::Ss },
		{ TEXT("ST"), OpenAPICountry::Values::St },
		{ TEXT("SV"), OpenAPICountry::Values::Sv },
		{ TEXT("SX"), OpenAPICountry::Values::Sx },
		{ TEXT("SY"), OpenAPICountry::Values::Sy },
		{ TEXT("SZ"), OpenAPICountry::Values::Sz },
		{ TEXT("TC"), OpenAPICountry::Values::Tc },
		{ TEXT("TD"), OpenAPICountry::Values::Td },
		{ TEXT("TF"), OpenAPICountry::Values::Tf },
		{ TEXT("TG"), OpenAPICountry::Values::Tg },
		{ TEXT("TH"), OpenAPICountry::Values::Th },
		{ TEXT("TJ"), OpenAPICountry::Values::Tj },
		{ TEXT("TK"), OpenAPICountry::Values::Tk },
		{ TEXT("TL"), OpenAPICountry::Values::Tl },
		{ TEXT("TM"), OpenAPICountry::Values::Tm },
		{ TEXT("TN"), OpenAPICountry::Values::Tn },
		{ TEXT("TO"), OpenAPICountry::Values::To },
		{ TEXT("TR"), OpenAPICountry::Values::Tr },
		{ TEXT("TT"), OpenAPICountry::Values::Tt },
		{ TEXT("TV"), OpenAPICountry::Values::Tv },
		{ TEXT("TW"), OpenAPICountry::Values::Tw },
		{ TEXT("TZ"), OpenAPICountry::Values::Tz },
		{ TEXT("UA"), OpenAPICountry::Values::Ua },
		{ TEXT("UG"), OpenAPICountry::Values::Ug },
		{ TEXT("UM"), OpenAPICountry::Values::Um },
		{ TEXT("US"), OpenAPICountry::Values::Us },
		{ TEXT("UY"), OpenAPICountry::Values::Uy },
		{ TEXT("UZ"), OpenAPICountry::Values::Uz },
		{ TEXT("VA"), OpenAPICountry::Values::Va },
		{ TEXT("VC"), OpenAPICountry::Values::Vc },
		{ TEXT("VE"), OpenAPICountry::Values::Ve },
		{ TEXT("VG"), OpenAPICountry::Values::Vg },
		{ TEXT("VI"), OpenAPICountry::Values::Vi },
		{ TEXT("VN"), OpenAPICountry::Values::Vn },
		{ TEXT("VU"), OpenAPICountry::Values::Vu },
		{ TEXT("WF"), OpenAPICountry::Values::Wf },
		{ TEXT("WS"), OpenAPICountry::Values::Ws },
		{ TEXT("YE"), OpenAPICountry::Values::Ye },
		{ TEXT("YT"), OpenAPICountry::Values::Yt },
		{ TEXT("ZA"), OpenAPICountry::Values::Za },
		{ TEXT("ZM"), OpenAPICountry::Values::Zm },
		{ TEXT("ZW"), OpenAPICountry::Values::Zw }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICountry::EnumFromString(const FString& EnumAsString, OpenAPICountry::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICountry::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICountry::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICountry::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICountry::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPICountry::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
