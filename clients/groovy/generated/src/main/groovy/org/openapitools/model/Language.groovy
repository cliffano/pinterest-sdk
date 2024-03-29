package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;

enum Language {

    AM("AM"),
    
    AR("AR"),
    
    AZ("AZ"),
    
    BG("BG"),
    
    BN("BN"),
    
    BS("BS"),
    
    CA("CA"),
    
    CS("CS"),
    
    DA("DA"),
    
    DV("DV"),
    
    DZ("DZ"),
    
    DE("DE"),
    
    EL("EL"),
    
    EN("EN"),
    
    ES("ES"),
    
    ET("ET"),
    
    FA("FA"),
    
    FI("FI"),
    
    FR("FR"),
    
    HE("HE"),
    
    HI("HI"),
    
    HR("HR"),
    
    HU("HU"),
    
    HY("HY"),
    
    ID("ID"),
    
    IN("IN"),
    
    IS("IS"),
    
    IT("IT"),
    
    IW("IW"),
    
    JA("JA"),
    
    KA("KA"),
    
    KM("KM"),
    
    KO("KO"),
    
    LO("LO"),
    
    LT("LT"),
    
    LV("LV"),
    
    MK("MK"),
    
    MN("MN"),
    
    MS("MS"),
    
    MY("MY"),
    
    NB("NB"),
    
    NE("NE"),
    
    NL("NL"),
    
    NO("NO"),
    
    PL("PL"),
    
    PT("PT"),
    
    RO("RO"),
    
    RU("RU"),
    
    SK("SK"),
    
    SL("SL"),
    
    SQ("SQ"),
    
    SR("SR"),
    
    SV("SV"),
    
    TL("TL"),
    
    UK("UK"),
    
    VI("VI"),
    
    TE("TE"),
    
    TH("TH"),
    
    TR("TR"),
    
    XX("XX"),
    
    ZH("ZH")

    private final String value

    Language(String value) {
        this.value = value
    }

    String getValue() {
        value
    }

    @Override
    String toString() {
        String.valueOf(value)
    }
}
