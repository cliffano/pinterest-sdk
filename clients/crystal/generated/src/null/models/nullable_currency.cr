# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.3.0
#Contact: blah@cliffano.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 5.4.0
#

require "json"
require "time"

module 
  class NullableCurrency
    AED = "AED"
  
    AFN = "AFN"
  
    ALL = "ALL"
  
    AMD = "AMD"
  
    ANG = "ANG"
  
    AOA = "AOA"
  
    ARS = "ARS"
  
    AUD = "AUD"
  
    AWG = "AWG"
  
    AZN = "AZN"
  
    BAM = "BAM"
  
    BBD = "BBD"
  
    BDT = "BDT"
  
    BGN = "BGN"
  
    BHD = "BHD"
  
    BIF = "BIF"
  
    BMD = "BMD"
  
    BND = "BND"
  
    BOB = "BOB"
  
    BRL = "BRL"
  
    BSD = "BSD"
  
    BTN = "BTN"
  
    BWP = "BWP"
  
    BYN = "BYN"
  
    BYR = "BYR"
  
    BZD = "BZD"
  
    CAD = "CAD"
  
    CDF = "CDF"
  
    CHF = "CHF"
  
    CLP = "CLP"
  
    CNY = "CNY"
  
    COP = "COP"
  
    CRC = "CRC"
  
    CUC = "CUC"
  
    CUP = "CUP"
  
    CVE = "CVE"
  
    CZK = "CZK"
  
    DJF = "DJF"
  
    DKK = "DKK"
  
    DOP = "DOP"
  
    DZD = "DZD"
  
    EGP = "EGP"
  
    ERN = "ERN"
  
    ETB = "ETB"
  
    EUR = "EUR"
  
    FJD = "FJD"
  
    FKP = "FKP"
  
    GBP = "GBP"
  
    GEL = "GEL"
  
    GGP = "GGP"
  
    GHS = "GHS"
  
    GIP = "GIP"
  
    GMD = "GMD"
  
    GNF = "GNF"
  
    GTQ = "GTQ"
  
    GYD = "GYD"
  
    HKD = "HKD"
  
    HNL = "HNL"
  
    HRK = "HRK"
  
    HTG = "HTG"
  
    HUF = "HUF"
  
    IDR = "IDR"
  
    ILS = "ILS"
  
    IMP = "IMP"
  
    INR = "INR"
  
    IQD = "IQD"
  
    IRR = "IRR"
  
    ISK = "ISK"
  
    JEP = "JEP"
  
    JMD = "JMD"
  
    JOD = "JOD"
  
    JPY = "JPY"
  
    KES = "KES"
  
    KGS = "KGS"
  
    KHR = "KHR"
  
    KMF = "KMF"
  
    KPW = "KPW"
  
    KRW = "KRW"
  
    KWD = "KWD"
  
    KYD = "KYD"
  
    KZT = "KZT"
  
    LAK = "LAK"
  
    LBP = "LBP"
  
    LKR = "LKR"
  
    LRD = "LRD"
  
    LSL = "LSL"
  
    LYD = "LYD"
  
    MAD = "MAD"
  
    MDL = "MDL"
  
    MGA = "MGA"
  
    MKD = "MKD"
  
    MMK = "MMK"
  
    MNT = "MNT"
  
    MOP = "MOP"
  
    MRO = "MRO"
  
    MUR = "MUR"
  
    MVR = "MVR"
  
    MWK = "MWK"
  
    MXN = "MXN"
  
    MYR = "MYR"
  
    MZN = "MZN"
  
    NAD = "NAD"
  
    NGN = "NGN"
  
    NIO = "NIO"
  
    NOK = "NOK"
  
    NPR = "NPR"
  
    NZD = "NZD"
  
    OMR = "OMR"
  
    PAB = "PAB"
  
    PEN = "PEN"
  
    PGK = "PGK"
  
    PHP = "PHP"
  
    PKR = "PKR"
  
    PLN = "PLN"
  
    PYG = "PYG"
  
    QAR = "QAR"
  
    RON = "RON"
  
    RSD = "RSD"
  
    RUB = "RUB"
  
    RWF = "RWF"
  
    SAR = "SAR"
  
    SBD = "SBD"
  
    SCR = "SCR"
  
    SDG = "SDG"
  
    SEK = "SEK"
  
    SGD = "SGD"
  
    SHP = "SHP"
  
    SLL = "SLL"
  
    SOS = "SOS"
  
    SPL = "SPL"
  
    SRD = "SRD"
  
    STD = "STD"
  
    SVC = "SVC"
  
    SYP = "SYP"
  
    SZL = "SZL"
  
    THB = "THB"
  
    TJS = "TJS"
  
    TMT = "TMT"
  
    TND = "TND"
  
    TOP = "TOP"
  
    TRY = "TRY"
  
    TTD = "TTD"
  
    TVD = "TVD"
  
    TWD = "TWD"
  
    TZS = "TZS"
  
    UAH = "UAH"
  
    UGX = "UGX"
  
    USD = "USD"
  
    UYU = "UYU"
  
    UZS = "UZS"
  
    VEF = "VEF"
  
    VND = "VND"
  
    VUV = "VUV"
  
    WST = "WST"
  
    XAF = "XAF"
  
    XCD = "XCD"
  
    XDR = "XDR"
  
    XOF = "XOF"
  
    XPF = "XPF"
  
    YER = "YER"
  
    ZAR = "ZAR"
  
    ZMW = "ZMW"
  
    ZWD = "ZWD"
  
    NULL = "null"
   
    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def self.build_from_hash(value)
      new.build_from_hash(value)
    end

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def build_from_hash(value)
      case value
      when "AED"
        AED
      when "AFN"
        AFN
      when "ALL"
        ALL
      when "AMD"
        AMD
      when "ANG"
        ANG
      when "AOA"
        AOA
      when "ARS"
        ARS
      when "AUD"
        AUD
      when "AWG"
        AWG
      when "AZN"
        AZN
      when "BAM"
        BAM
      when "BBD"
        BBD
      when "BDT"
        BDT
      when "BGN"
        BGN
      when "BHD"
        BHD
      when "BIF"
        BIF
      when "BMD"
        BMD
      when "BND"
        BND
      when "BOB"
        BOB
      when "BRL"
        BRL
      when "BSD"
        BSD
      when "BTN"
        BTN
      when "BWP"
        BWP
      when "BYN"
        BYN
      when "BYR"
        BYR
      when "BZD"
        BZD
      when "CAD"
        CAD
      when "CDF"
        CDF
      when "CHF"
        CHF
      when "CLP"
        CLP
      when "CNY"
        CNY
      when "COP"
        COP
      when "CRC"
        CRC
      when "CUC"
        CUC
      when "CUP"
        CUP
      when "CVE"
        CVE
      when "CZK"
        CZK
      when "DJF"
        DJF
      when "DKK"
        DKK
      when "DOP"
        DOP
      when "DZD"
        DZD
      when "EGP"
        EGP
      when "ERN"
        ERN
      when "ETB"
        ETB
      when "EUR"
        EUR
      when "FJD"
        FJD
      when "FKP"
        FKP
      when "GBP"
        GBP
      when "GEL"
        GEL
      when "GGP"
        GGP
      when "GHS"
        GHS
      when "GIP"
        GIP
      when "GMD"
        GMD
      when "GNF"
        GNF
      when "GTQ"
        GTQ
      when "GYD"
        GYD
      when "HKD"
        HKD
      when "HNL"
        HNL
      when "HRK"
        HRK
      when "HTG"
        HTG
      when "HUF"
        HUF
      when "IDR"
        IDR
      when "ILS"
        ILS
      when "IMP"
        IMP
      when "INR"
        INR
      when "IQD"
        IQD
      when "IRR"
        IRR
      when "ISK"
        ISK
      when "JEP"
        JEP
      when "JMD"
        JMD
      when "JOD"
        JOD
      when "JPY"
        JPY
      when "KES"
        KES
      when "KGS"
        KGS
      when "KHR"
        KHR
      when "KMF"
        KMF
      when "KPW"
        KPW
      when "KRW"
        KRW
      when "KWD"
        KWD
      when "KYD"
        KYD
      when "KZT"
        KZT
      when "LAK"
        LAK
      when "LBP"
        LBP
      when "LKR"
        LKR
      when "LRD"
        LRD
      when "LSL"
        LSL
      when "LYD"
        LYD
      when "MAD"
        MAD
      when "MDL"
        MDL
      when "MGA"
        MGA
      when "MKD"
        MKD
      when "MMK"
        MMK
      when "MNT"
        MNT
      when "MOP"
        MOP
      when "MRO"
        MRO
      when "MUR"
        MUR
      when "MVR"
        MVR
      when "MWK"
        MWK
      when "MXN"
        MXN
      when "MYR"
        MYR
      when "MZN"
        MZN
      when "NAD"
        NAD
      when "NGN"
        NGN
      when "NIO"
        NIO
      when "NOK"
        NOK
      when "NPR"
        NPR
      when "NZD"
        NZD
      when "OMR"
        OMR
      when "PAB"
        PAB
      when "PEN"
        PEN
      when "PGK"
        PGK
      when "PHP"
        PHP
      when "PKR"
        PKR
      when "PLN"
        PLN
      when "PYG"
        PYG
      when "QAR"
        QAR
      when "RON"
        RON
      when "RSD"
        RSD
      when "RUB"
        RUB
      when "RWF"
        RWF
      when "SAR"
        SAR
      when "SBD"
        SBD
      when "SCR"
        SCR
      when "SDG"
        SDG
      when "SEK"
        SEK
      when "SGD"
        SGD
      when "SHP"
        SHP
      when "SLL"
        SLL
      when "SOS"
        SOS
      when "SPL"
        SPL
      when "SRD"
        SRD
      when "STD"
        STD
      when "SVC"
        SVC
      when "SYP"
        SYP
      when "SZL"
        SZL
      when "THB"
        THB
      when "TJS"
        TJS
      when "TMT"
        TMT
      when "TND"
        TND
      when "TOP"
        TOP
      when "TRY"
        TRY
      when "TTD"
        TTD
      when "TVD"
        TVD
      when "TWD"
        TWD
      when "TZS"
        TZS
      when "UAH"
        UAH
      when "UGX"
        UGX
      when "USD"
        USD
      when "UYU"
        UYU
      when "UZS"
        UZS
      when "VEF"
        VEF
      when "VND"
        VND
      when "VUV"
        VUV
      when "WST"
        WST
      when "XAF"
        XAF
      when "XCD"
        XCD
      when "XDR"
        XDR
      when "XOF"
        XOF
      when "XPF"
        XPF
      when "YER"
        YER
      when "ZAR"
        ZAR
      when "ZMW"
        ZMW
      when "ZWD"
        ZWD
      when "null"
        NULL
      else
        raise "Invalid ENUM value #{value} for class #NullableCurrency"
      end
    end
  end
end
