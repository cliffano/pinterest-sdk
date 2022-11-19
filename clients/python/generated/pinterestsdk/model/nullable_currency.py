# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.6.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

from datetime import date, datetime  # noqa: F401
import decimal  # noqa: F401
import functools  # noqa: F401
import io  # noqa: F401
import re  # noqa: F401
import typing  # noqa: F401
import typing_extensions  # noqa: F401
import uuid  # noqa: F401

import frozendict  # noqa: F401

from pinterestsdk import schemas  # noqa: F401


class NullableCurrency(
    schemas.EnumBase,
    schemas.StrBase,
    schemas.NoneBase,
    schemas.Schema,
    schemas.NoneStrMixin
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Currency Codes from ISO 4217.
    """


    class MetaOapg:
        enum_value_to_name = {
            "AED": "AED",
            "AFN": "AFN",
            "ALL": "ALL",
            "AMD": "AMD",
            "ANG": "ANG",
            "AOA": "AOA",
            "ARS": "ARS",
            "AUD": "AUD",
            "AWG": "AWG",
            "AZN": "AZN",
            "BAM": "BAM",
            "BBD": "BBD",
            "BDT": "BDT",
            "BGN": "BGN",
            "BHD": "BHD",
            "BIF": "BIF",
            "BMD": "BMD",
            "BND": "BND",
            "BOB": "BOB",
            "BRL": "BRL",
            "BSD": "BSD",
            "BTN": "BTN",
            "BWP": "BWP",
            "BYN": "BYN",
            "BYR": "BYR",
            "BZD": "BZD",
            "CAD": "CAD",
            "CDF": "CDF",
            "CHF": "CHF",
            "CLP": "CLP",
            "CNY": "CNY",
            "COP": "COP",
            "CRC": "CRC",
            "CUC": "CUC",
            "CUP": "CUP",
            "CVE": "CVE",
            "CZK": "CZK",
            "DJF": "DJF",
            "DKK": "DKK",
            "DOP": "DOP",
            "DZD": "DZD",
            "EGP": "EGP",
            "ERN": "ERN",
            "ETB": "ETB",
            "EUR": "EUR",
            "FJD": "FJD",
            "FKP": "FKP",
            "GBP": "GBP",
            "GEL": "GEL",
            "GGP": "GGP",
            "GHS": "GHS",
            "GIP": "GIP",
            "GMD": "GMD",
            "GNF": "GNF",
            "GTQ": "GTQ",
            "GYD": "GYD",
            "HKD": "HKD",
            "HNL": "HNL",
            "HRK": "HRK",
            "HTG": "HTG",
            "HUF": "HUF",
            "IDR": "IDR",
            "ILS": "ILS",
            "IMP": "IMP",
            "INR": "INR",
            "IQD": "IQD",
            "IRR": "IRR",
            "ISK": "ISK",
            "JEP": "JEP",
            "JMD": "JMD",
            "JOD": "JOD",
            "JPY": "JPY",
            "KES": "KES",
            "KGS": "KGS",
            "KHR": "KHR",
            "KMF": "KMF",
            "KPW": "KPW",
            "KRW": "KRW",
            "KWD": "KWD",
            "KYD": "KYD",
            "KZT": "KZT",
            "LAK": "LAK",
            "LBP": "LBP",
            "LKR": "LKR",
            "LRD": "LRD",
            "LSL": "LSL",
            "LYD": "LYD",
            "MAD": "MAD",
            "MDL": "MDL",
            "MGA": "MGA",
            "MKD": "MKD",
            "MMK": "MMK",
            "MNT": "MNT",
            "MOP": "MOP",
            "MRO": "MRO",
            "MUR": "MUR",
            "MVR": "MVR",
            "MWK": "MWK",
            "MXN": "MXN",
            "MYR": "MYR",
            "MZN": "MZN",
            "NAD": "NAD",
            "NGN": "NGN",
            "NIO": "NIO",
            "NOK": "NOK",
            "NPR": "NPR",
            "NZD": "NZD",
            "OMR": "OMR",
            "PAB": "PAB",
            "PEN": "PEN",
            "PGK": "PGK",
            "PHP": "PHP",
            "PKR": "PKR",
            "PLN": "PLN",
            "PYG": "PYG",
            "QAR": "QAR",
            "RON": "RON",
            "RSD": "RSD",
            "RUB": "RUB",
            "RWF": "RWF",
            "SAR": "SAR",
            "SBD": "SBD",
            "SCR": "SCR",
            "SDG": "SDG",
            "SEK": "SEK",
            "SGD": "SGD",
            "SHP": "SHP",
            "SLL": "SLL",
            "SOS": "SOS",
            "SPL": "SPL",
            "SRD": "SRD",
            "STD": "STD",
            "SVC": "SVC",
            "SYP": "SYP",
            "SZL": "SZL",
            "THB": "THB",
            "TJS": "TJS",
            "TMT": "TMT",
            "TND": "TND",
            "TOP": "TOP",
            "TRY": "TRY",
            "TTD": "TTD",
            "TVD": "TVD",
            "TWD": "TWD",
            "TZS": "TZS",
            "UAH": "UAH",
            "UGX": "UGX",
            "USD": "USD",
            "UYU": "UYU",
            "UZS": "UZS",
            "VEF": "VEF",
            "VND": "VND",
            "VUV": "VUV",
            "WST": "WST",
            "XAF": "XAF",
            "XCD": "XCD",
            "XDR": "XDR",
            "XOF": "XOF",
            "XPF": "XPF",
            "YER": "YER",
            "ZAR": "ZAR",
            "ZMW": "ZMW",
            "ZWD": "ZWD",
            schemas.NoneClass.NONE: "NONE",
        }
    
    @schemas.classproperty
    def AED(cls):
        return cls("AED")
    
    @schemas.classproperty
    def AFN(cls):
        return cls("AFN")
    
    @schemas.classproperty
    def ALL(cls):
        return cls("ALL")
    
    @schemas.classproperty
    def AMD(cls):
        return cls("AMD")
    
    @schemas.classproperty
    def ANG(cls):
        return cls("ANG")
    
    @schemas.classproperty
    def AOA(cls):
        return cls("AOA")
    
    @schemas.classproperty
    def ARS(cls):
        return cls("ARS")
    
    @schemas.classproperty
    def AUD(cls):
        return cls("AUD")
    
    @schemas.classproperty
    def AWG(cls):
        return cls("AWG")
    
    @schemas.classproperty
    def AZN(cls):
        return cls("AZN")
    
    @schemas.classproperty
    def BAM(cls):
        return cls("BAM")
    
    @schemas.classproperty
    def BBD(cls):
        return cls("BBD")
    
    @schemas.classproperty
    def BDT(cls):
        return cls("BDT")
    
    @schemas.classproperty
    def BGN(cls):
        return cls("BGN")
    
    @schemas.classproperty
    def BHD(cls):
        return cls("BHD")
    
    @schemas.classproperty
    def BIF(cls):
        return cls("BIF")
    
    @schemas.classproperty
    def BMD(cls):
        return cls("BMD")
    
    @schemas.classproperty
    def BND(cls):
        return cls("BND")
    
    @schemas.classproperty
    def BOB(cls):
        return cls("BOB")
    
    @schemas.classproperty
    def BRL(cls):
        return cls("BRL")
    
    @schemas.classproperty
    def BSD(cls):
        return cls("BSD")
    
    @schemas.classproperty
    def BTN(cls):
        return cls("BTN")
    
    @schemas.classproperty
    def BWP(cls):
        return cls("BWP")
    
    @schemas.classproperty
    def BYN(cls):
        return cls("BYN")
    
    @schemas.classproperty
    def BYR(cls):
        return cls("BYR")
    
    @schemas.classproperty
    def BZD(cls):
        return cls("BZD")
    
    @schemas.classproperty
    def CAD(cls):
        return cls("CAD")
    
    @schemas.classproperty
    def CDF(cls):
        return cls("CDF")
    
    @schemas.classproperty
    def CHF(cls):
        return cls("CHF")
    
    @schemas.classproperty
    def CLP(cls):
        return cls("CLP")
    
    @schemas.classproperty
    def CNY(cls):
        return cls("CNY")
    
    @schemas.classproperty
    def COP(cls):
        return cls("COP")
    
    @schemas.classproperty
    def CRC(cls):
        return cls("CRC")
    
    @schemas.classproperty
    def CUC(cls):
        return cls("CUC")
    
    @schemas.classproperty
    def CUP(cls):
        return cls("CUP")
    
    @schemas.classproperty
    def CVE(cls):
        return cls("CVE")
    
    @schemas.classproperty
    def CZK(cls):
        return cls("CZK")
    
    @schemas.classproperty
    def DJF(cls):
        return cls("DJF")
    
    @schemas.classproperty
    def DKK(cls):
        return cls("DKK")
    
    @schemas.classproperty
    def DOP(cls):
        return cls("DOP")
    
    @schemas.classproperty
    def DZD(cls):
        return cls("DZD")
    
    @schemas.classproperty
    def EGP(cls):
        return cls("EGP")
    
    @schemas.classproperty
    def ERN(cls):
        return cls("ERN")
    
    @schemas.classproperty
    def ETB(cls):
        return cls("ETB")
    
    @schemas.classproperty
    def EUR(cls):
        return cls("EUR")
    
    @schemas.classproperty
    def FJD(cls):
        return cls("FJD")
    
    @schemas.classproperty
    def FKP(cls):
        return cls("FKP")
    
    @schemas.classproperty
    def GBP(cls):
        return cls("GBP")
    
    @schemas.classproperty
    def GEL(cls):
        return cls("GEL")
    
    @schemas.classproperty
    def GGP(cls):
        return cls("GGP")
    
    @schemas.classproperty
    def GHS(cls):
        return cls("GHS")
    
    @schemas.classproperty
    def GIP(cls):
        return cls("GIP")
    
    @schemas.classproperty
    def GMD(cls):
        return cls("GMD")
    
    @schemas.classproperty
    def GNF(cls):
        return cls("GNF")
    
    @schemas.classproperty
    def GTQ(cls):
        return cls("GTQ")
    
    @schemas.classproperty
    def GYD(cls):
        return cls("GYD")
    
    @schemas.classproperty
    def HKD(cls):
        return cls("HKD")
    
    @schemas.classproperty
    def HNL(cls):
        return cls("HNL")
    
    @schemas.classproperty
    def HRK(cls):
        return cls("HRK")
    
    @schemas.classproperty
    def HTG(cls):
        return cls("HTG")
    
    @schemas.classproperty
    def HUF(cls):
        return cls("HUF")
    
    @schemas.classproperty
    def IDR(cls):
        return cls("IDR")
    
    @schemas.classproperty
    def ILS(cls):
        return cls("ILS")
    
    @schemas.classproperty
    def IMP(cls):
        return cls("IMP")
    
    @schemas.classproperty
    def INR(cls):
        return cls("INR")
    
    @schemas.classproperty
    def IQD(cls):
        return cls("IQD")
    
    @schemas.classproperty
    def IRR(cls):
        return cls("IRR")
    
    @schemas.classproperty
    def ISK(cls):
        return cls("ISK")
    
    @schemas.classproperty
    def JEP(cls):
        return cls("JEP")
    
    @schemas.classproperty
    def JMD(cls):
        return cls("JMD")
    
    @schemas.classproperty
    def JOD(cls):
        return cls("JOD")
    
    @schemas.classproperty
    def JPY(cls):
        return cls("JPY")
    
    @schemas.classproperty
    def KES(cls):
        return cls("KES")
    
    @schemas.classproperty
    def KGS(cls):
        return cls("KGS")
    
    @schemas.classproperty
    def KHR(cls):
        return cls("KHR")
    
    @schemas.classproperty
    def KMF(cls):
        return cls("KMF")
    
    @schemas.classproperty
    def KPW(cls):
        return cls("KPW")
    
    @schemas.classproperty
    def KRW(cls):
        return cls("KRW")
    
    @schemas.classproperty
    def KWD(cls):
        return cls("KWD")
    
    @schemas.classproperty
    def KYD(cls):
        return cls("KYD")
    
    @schemas.classproperty
    def KZT(cls):
        return cls("KZT")
    
    @schemas.classproperty
    def LAK(cls):
        return cls("LAK")
    
    @schemas.classproperty
    def LBP(cls):
        return cls("LBP")
    
    @schemas.classproperty
    def LKR(cls):
        return cls("LKR")
    
    @schemas.classproperty
    def LRD(cls):
        return cls("LRD")
    
    @schemas.classproperty
    def LSL(cls):
        return cls("LSL")
    
    @schemas.classproperty
    def LYD(cls):
        return cls("LYD")
    
    @schemas.classproperty
    def MAD(cls):
        return cls("MAD")
    
    @schemas.classproperty
    def MDL(cls):
        return cls("MDL")
    
    @schemas.classproperty
    def MGA(cls):
        return cls("MGA")
    
    @schemas.classproperty
    def MKD(cls):
        return cls("MKD")
    
    @schemas.classproperty
    def MMK(cls):
        return cls("MMK")
    
    @schemas.classproperty
    def MNT(cls):
        return cls("MNT")
    
    @schemas.classproperty
    def MOP(cls):
        return cls("MOP")
    
    @schemas.classproperty
    def MRO(cls):
        return cls("MRO")
    
    @schemas.classproperty
    def MUR(cls):
        return cls("MUR")
    
    @schemas.classproperty
    def MVR(cls):
        return cls("MVR")
    
    @schemas.classproperty
    def MWK(cls):
        return cls("MWK")
    
    @schemas.classproperty
    def MXN(cls):
        return cls("MXN")
    
    @schemas.classproperty
    def MYR(cls):
        return cls("MYR")
    
    @schemas.classproperty
    def MZN(cls):
        return cls("MZN")
    
    @schemas.classproperty
    def NAD(cls):
        return cls("NAD")
    
    @schemas.classproperty
    def NGN(cls):
        return cls("NGN")
    
    @schemas.classproperty
    def NIO(cls):
        return cls("NIO")
    
    @schemas.classproperty
    def NOK(cls):
        return cls("NOK")
    
    @schemas.classproperty
    def NPR(cls):
        return cls("NPR")
    
    @schemas.classproperty
    def NZD(cls):
        return cls("NZD")
    
    @schemas.classproperty
    def OMR(cls):
        return cls("OMR")
    
    @schemas.classproperty
    def PAB(cls):
        return cls("PAB")
    
    @schemas.classproperty
    def PEN(cls):
        return cls("PEN")
    
    @schemas.classproperty
    def PGK(cls):
        return cls("PGK")
    
    @schemas.classproperty
    def PHP(cls):
        return cls("PHP")
    
    @schemas.classproperty
    def PKR(cls):
        return cls("PKR")
    
    @schemas.classproperty
    def PLN(cls):
        return cls("PLN")
    
    @schemas.classproperty
    def PYG(cls):
        return cls("PYG")
    
    @schemas.classproperty
    def QAR(cls):
        return cls("QAR")
    
    @schemas.classproperty
    def RON(cls):
        return cls("RON")
    
    @schemas.classproperty
    def RSD(cls):
        return cls("RSD")
    
    @schemas.classproperty
    def RUB(cls):
        return cls("RUB")
    
    @schemas.classproperty
    def RWF(cls):
        return cls("RWF")
    
    @schemas.classproperty
    def SAR(cls):
        return cls("SAR")
    
    @schemas.classproperty
    def SBD(cls):
        return cls("SBD")
    
    @schemas.classproperty
    def SCR(cls):
        return cls("SCR")
    
    @schemas.classproperty
    def SDG(cls):
        return cls("SDG")
    
    @schemas.classproperty
    def SEK(cls):
        return cls("SEK")
    
    @schemas.classproperty
    def SGD(cls):
        return cls("SGD")
    
    @schemas.classproperty
    def SHP(cls):
        return cls("SHP")
    
    @schemas.classproperty
    def SLL(cls):
        return cls("SLL")
    
    @schemas.classproperty
    def SOS(cls):
        return cls("SOS")
    
    @schemas.classproperty
    def SPL(cls):
        return cls("SPL")
    
    @schemas.classproperty
    def SRD(cls):
        return cls("SRD")
    
    @schemas.classproperty
    def STD(cls):
        return cls("STD")
    
    @schemas.classproperty
    def SVC(cls):
        return cls("SVC")
    
    @schemas.classproperty
    def SYP(cls):
        return cls("SYP")
    
    @schemas.classproperty
    def SZL(cls):
        return cls("SZL")
    
    @schemas.classproperty
    def THB(cls):
        return cls("THB")
    
    @schemas.classproperty
    def TJS(cls):
        return cls("TJS")
    
    @schemas.classproperty
    def TMT(cls):
        return cls("TMT")
    
    @schemas.classproperty
    def TND(cls):
        return cls("TND")
    
    @schemas.classproperty
    def TOP(cls):
        return cls("TOP")
    
    @schemas.classproperty
    def TRY(cls):
        return cls("TRY")
    
    @schemas.classproperty
    def TTD(cls):
        return cls("TTD")
    
    @schemas.classproperty
    def TVD(cls):
        return cls("TVD")
    
    @schemas.classproperty
    def TWD(cls):
        return cls("TWD")
    
    @schemas.classproperty
    def TZS(cls):
        return cls("TZS")
    
    @schemas.classproperty
    def UAH(cls):
        return cls("UAH")
    
    @schemas.classproperty
    def UGX(cls):
        return cls("UGX")
    
    @schemas.classproperty
    def USD(cls):
        return cls("USD")
    
    @schemas.classproperty
    def UYU(cls):
        return cls("UYU")
    
    @schemas.classproperty
    def UZS(cls):
        return cls("UZS")
    
    @schemas.classproperty
    def VEF(cls):
        return cls("VEF")
    
    @schemas.classproperty
    def VND(cls):
        return cls("VND")
    
    @schemas.classproperty
    def VUV(cls):
        return cls("VUV")
    
    @schemas.classproperty
    def WST(cls):
        return cls("WST")
    
    @schemas.classproperty
    def XAF(cls):
        return cls("XAF")
    
    @schemas.classproperty
    def XCD(cls):
        return cls("XCD")
    
    @schemas.classproperty
    def XDR(cls):
        return cls("XDR")
    
    @schemas.classproperty
    def XOF(cls):
        return cls("XOF")
    
    @schemas.classproperty
    def XPF(cls):
        return cls("XPF")
    
    @schemas.classproperty
    def YER(cls):
        return cls("YER")
    
    @schemas.classproperty
    def ZAR(cls):
        return cls("ZAR")
    
    @schemas.classproperty
    def ZMW(cls):
        return cls("ZMW")
    
    @schemas.classproperty
    def ZWD(cls):
        return cls("ZWD")
    
    @schemas.classproperty
    def NONE(cls):
        return cls(None)


    def __new__(
        cls,
        *args: typing.Union[None, str, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
    ) -> 'NullableCurrency':
        return super().__new__(
            cls,
            *args,
            _configuration=_configuration,
        )
