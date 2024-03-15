/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


/**
* Country ID from ISO 3166-1 alpha-2.
* Values: AD,AE,AF,AG,AI,AL,AM,AO,AQ,AR,AS,AT,AU,AW,AX,AZ,BA,BB,BD,BE,BF,BG,BH,BI,BJ,BL,BM,BN,BO,BQ,BR,BS,BT,BV,BW,BY,BZ,CA,CC,CD,CF,CG,CH,CI,CK,CL,CM,CN,CO,CR,CU,CV,CW,CX,CY,CZ,DE,DJ,DK,DM,DO,DZ,EC,EE,EG,EH,ER,ES,ET,FI,FJ,FK,FM,FO,FR,GA,GB,GD,GE,GF,GG,GH,GI,GL,GM,GN,GP,GQ,GR,GS,GT,GU,GW,GY,HK,HM,HN,HR,HT,HU,ID,IE,IL,IM,IN,IO,IQ,IR,IS,IT,JE,JM,JO,JP,KE,KG,KH,KI,KM,KN,KR,KW,KY,KZ,LA,LB,LC,LI,LK,LR,LS,LT,LU,LV,LY,MA,MC,MD,ME,MF,MG,MH,MK,ML,MM,MN,MO,MP,MQ,MR,MS,MT,MU,MV,MW,MX,MY,MZ,NA,NC,NE,NF,NG,NI,NL,NO,NP,NR,NU,NZ,OM,PA,PE,PF,PG,PH,PK,PL,PM,PN,PR,PS,PT,PW,PY,QA,RE,RO,RS,RU,RW,SA,SB,SC,SD,SE,SG,SH,SI,SJ,SK,SL,SM,SN,SO,SR,SS,ST,SV,SX,SY,SZ,TC,TD,TF,TG,TH,TJ,TK,TL,TM,TN,TO,TR,TT,TV,TW,TZ,UA,UG,UM,US,UY,UZ,VA,VC,VE,VG,VI,VN,VU,WF,WS,YE,YT,ZA,ZM,ZW
*/

enum class Country(val value: kotlin.String){


    AD("AD"),


    AE("AE"),


    AF("AF"),


    AG("AG"),


    AI("AI"),


    AL("AL"),


    AM("AM"),


    AO("AO"),


    AQ("AQ"),


    AR("AR"),


    AS("AS"),


    AT("AT"),


    AU("AU"),


    AW("AW"),


    AX("AX"),


    AZ("AZ"),


    BA("BA"),


    BB("BB"),


    BD("BD"),


    BE("BE"),


    BF("BF"),


    BG("BG"),


    BH("BH"),


    BI("BI"),


    BJ("BJ"),


    BL("BL"),


    BM("BM"),


    BN("BN"),


    BO("BO"),


    BQ("BQ"),


    BR("BR"),


    BS("BS"),


    BT("BT"),


    BV("BV"),


    BW("BW"),


    BY("BY"),


    BZ("BZ"),


    CA("CA"),


    CC("CC"),


    CD("CD"),


    CF("CF"),


    CG("CG"),


    CH("CH"),


    CI("CI"),


    CK("CK"),


    CL("CL"),


    CM("CM"),


    CN("CN"),


    CO("CO"),


    CR("CR"),


    CU("CU"),


    CV("CV"),


    CW("CW"),


    CX("CX"),


    CY("CY"),


    CZ("CZ"),


    DE("DE"),


    DJ("DJ"),


    DK("DK"),


    DM("DM"),


    DO("DO"),


    DZ("DZ"),


    EC("EC"),


    EE("EE"),


    EG("EG"),


    EH("EH"),


    ER("ER"),


    ES("ES"),


    ET("ET"),


    FI("FI"),


    FJ("FJ"),


    FK("FK"),


    FM("FM"),


    FO("FO"),


    FR("FR"),


    GA("GA"),


    GB("GB"),


    GD("GD"),


    GE("GE"),


    GF("GF"),


    GG("GG"),


    GH("GH"),


    GI("GI"),


    GL("GL"),


    GM("GM"),


    GN("GN"),


    GP("GP"),


    GQ("GQ"),


    GR("GR"),


    GS("GS"),


    GT("GT"),


    GU("GU"),


    GW("GW"),


    GY("GY"),


    HK("HK"),


    HM("HM"),


    HN("HN"),


    HR("HR"),


    HT("HT"),


    HU("HU"),


    ID("ID"),


    IE("IE"),


    IL("IL"),


    IM("IM"),


    IN("IN"),


    IO("IO"),


    IQ("IQ"),


    IR("IR"),


    IS("IS"),


    IT("IT"),


    JE("JE"),


    JM("JM"),


    JO("JO"),


    JP("JP"),


    KE("KE"),


    KG("KG"),


    KH("KH"),


    KI("KI"),


    KM("KM"),


    KN("KN"),


    KR("KR"),


    KW("KW"),


    KY("KY"),


    KZ("KZ"),


    LA("LA"),


    LB("LB"),


    LC("LC"),


    LI("LI"),


    LK("LK"),


    LR("LR"),


    LS("LS"),


    LT("LT"),


    LU("LU"),


    LV("LV"),


    LY("LY"),


    MA("MA"),


    MC("MC"),


    MD("MD"),


    ME("ME"),


    MF("MF"),


    MG("MG"),


    MH("MH"),


    MK("MK"),


    ML("ML"),


    MM("MM"),


    MN("MN"),


    MO("MO"),


    MP("MP"),


    MQ("MQ"),


    MR("MR"),


    MS("MS"),


    MT("MT"),


    MU("MU"),


    MV("MV"),


    MW("MW"),


    MX("MX"),


    MY("MY"),


    MZ("MZ"),


    NA("NA"),


    NC("NC"),


    NE("NE"),


    NF("NF"),


    NG("NG"),


    NI("NI"),


    NL("NL"),


    NO("NO"),


    NP("NP"),


    NR("NR"),


    NU("NU"),


    NZ("NZ"),


    OM("OM"),


    PA("PA"),


    PE("PE"),


    PF("PF"),


    PG("PG"),


    PH("PH"),


    PK("PK"),


    PL("PL"),


    PM("PM"),


    PN("PN"),


    PR("PR"),


    PS("PS"),


    PT("PT"),


    PW("PW"),


    PY("PY"),


    QA("QA"),


    RE("RE"),


    RO("RO"),


    RS("RS"),


    RU("RU"),


    RW("RW"),


    SA("SA"),


    SB("SB"),


    SC("SC"),


    SD("SD"),


    SE("SE"),


    SG("SG"),


    SH("SH"),


    SI("SI"),


    SJ("SJ"),


    SK("SK"),


    SL("SL"),


    SM("SM"),


    SN("SN"),


    SO("SO"),


    SR("SR"),


    SS("SS"),


    ST("ST"),


    SV("SV"),


    SX("SX"),


    SY("SY"),


    SZ("SZ"),


    TC("TC"),


    TD("TD"),


    TF("TF"),


    TG("TG"),


    TH("TH"),


    TJ("TJ"),


    TK("TK"),


    TL("TL"),


    TM("TM"),


    TN("TN"),


    TO("TO"),


    TR("TR"),


    TT("TT"),


    TV("TV"),


    TW("TW"),


    TZ("TZ"),


    UA("UA"),


    UG("UG"),


    UM("UM"),


    US("US"),


    UY("UY"),


    UZ("UZ"),


    VA("VA"),


    VC("VC"),


    VE("VE"),


    VG("VG"),


    VI("VI"),


    VN("VN"),


    VU("VU"),


    WF("WF"),


    WS("WS"),


    YE("YE"),


    YT("YT"),


    ZA("ZA"),


    ZM("ZM"),


    ZW("ZW");



    /**
    This override toString avoids using the enum var name and uses the actual api value instead.
    In cases the var name and value are different, the client would send incorrect enums to the server.
    **/
    override fun toString(): String {
        return value
    }

}

