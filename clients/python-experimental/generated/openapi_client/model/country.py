# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: pinterest-api@pinterest.com
    Generated by: https://openapi-generator.tech
"""

import re  # noqa: F401
import sys  # noqa: F401
import typing  # noqa: F401

from frozendict import frozendict  # noqa: F401

import decimal  # noqa: F401
from datetime import date, datetime  # noqa: F401
from frozendict import frozendict  # noqa: F401

from openapi_client.schemas import (  # noqa: F401
    AnyTypeSchema,
    ComposedSchema,
    DictSchema,
    ListSchema,
    StrSchema,
    IntSchema,
    Int32Schema,
    Int64Schema,
    Float32Schema,
    Float64Schema,
    NumberSchema,
    DateSchema,
    DateTimeSchema,
    DecimalSchema,
    BoolSchema,
    BinarySchema,
    NoneSchema,
    none_type,
    InstantiationMetadata,
    Unset,
    unset,
    ComposedBase,
    ListBase,
    DictBase,
    NoneBase,
    StrBase,
    IntBase,
    NumberBase,
    DateBase,
    DateTimeBase,
    BoolBase,
    BinaryBase,
    Schema,
    _SchemaValidator,
    _SchemaTypeChecker,
    _SchemaEnumMaker
)


class Country(
    _SchemaEnumMaker(
        enum_value_to_name={
            "AD": "AD",
            "AE": "AE",
            "AF": "AF",
            "AG": "AG",
            "AI": "AI",
            "AL": "AL",
            "AM": "AM",
            "AO": "AO",
            "AQ": "AQ",
            "AR": "AR",
            "AS": "AS",
            "AT": "AT",
            "AU": "AU",
            "AW": "AW",
            "AX": "AX",
            "AZ": "AZ",
            "BA": "BA",
            "BB": "BB",
            "BD": "BD",
            "BE": "BE",
            "BF": "BF",
            "BG": "BG",
            "BH": "BH",
            "BI": "BI",
            "BJ": "BJ",
            "BL": "BL",
            "BM": "BM",
            "BN": "BN",
            "BO": "BO",
            "BQ": "BQ",
            "BR": "BR",
            "BS": "BS",
            "BT": "BT",
            "BV": "BV",
            "BW": "BW",
            "BY": "BY",
            "BZ": "BZ",
            "CA": "CA",
            "CC": "CC",
            "CD": "CD",
            "CF": "CF",
            "CG": "CG",
            "CH": "CH",
            "CI": "CI",
            "CK": "CK",
            "CL": "CL",
            "CM": "CM",
            "CO": "CO",
            "CR": "CR",
            "CU": "CU",
            "CV": "CV",
            "CW": "CW",
            "CX": "CX",
            "CY": "CY",
            "CZ": "CZ",
            "DE": "DE",
            "DJ": "DJ",
            "DK": "DK",
            "DM": "DM",
            "DO": "DO",
            "DZ": "DZ",
            "EC": "EC",
            "EE": "EE",
            "EG": "EG",
            "EH": "EH",
            "ER": "ER",
            "ES": "ES",
            "ET": "ET",
            "FI": "FI",
            "FJ": "FJ",
            "FK": "FK",
            "FM": "FM",
            "FO": "FO",
            "FR": "FR",
            "GA": "GA",
            "GB": "GB",
            "GD": "GD",
            "GE": "GE",
            "GF": "GF",
            "GG": "GG",
            "GH": "GH",
            "GI": "GI",
            "GL": "GL",
            "GM": "GM",
            "GN": "GN",
            "GP": "GP",
            "GQ": "GQ",
            "GR": "GR",
            "GS": "GS",
            "GT": "GT",
            "GU": "GU",
            "GW": "GW",
            "GY": "GY",
            "HK": "HK",
            "HM": "HM",
            "HN": "HN",
            "HR": "HR",
            "HT": "HT",
            "HU": "HU",
            "ID": "ID",
            "IE": "IE",
            "IL": "IL",
            "IM": "IM",
            "IN": "IN",
            "IO": "IO",
            "IQ": "IQ",
            "IR": "IR",
            "IS": "IS",
            "IT": "IT",
            "JE": "JE",
            "JM": "JM",
            "JO": "JO",
            "JP": "JP",
            "KE": "KE",
            "KG": "KG",
            "KH": "KH",
            "KI": "KI",
            "KM": "KM",
            "KN": "KN",
            "KR": "KR",
            "KW": "KW",
            "KY": "KY",
            "KZ": "KZ",
            "LA": "LA",
            "LB": "LB",
            "LC": "LC",
            "LI": "LI",
            "LK": "LK",
            "LR": "LR",
            "LS": "LS",
            "LT": "LT",
            "LU": "LU",
            "LV": "LV",
            "LY": "LY",
            "MA": "MA",
            "MC": "MC",
            "MD": "MD",
            "ME": "ME",
            "MF": "MF",
            "MG": "MG",
            "MH": "MH",
            "MK": "MK",
            "ML": "ML",
            "MM": "MM",
            "MN": "MN",
            "MO": "MO",
            "MP": "MP",
            "MQ": "MQ",
            "MR": "MR",
            "MS": "MS",
            "MT": "MT",
            "MU": "MU",
            "MV": "MV",
            "MW": "MW",
            "MX": "MX",
            "MY": "MY",
            "MZ": "MZ",
            "NA": "NA",
            "NC": "NC",
            "NE": "NE",
            "NF": "NF",
            "NG": "NG",
            "NI": "NI",
            "NL": "NL",
            "NO": "NO",
            "NP": "NP",
            "NR": "NR",
            "NU": "NU",
            "NZ": "NZ",
            "OM": "OM",
            "PA": "PA",
            "PE": "PE",
            "PF": "PF",
            "PG": "PG",
            "PH": "PH",
            "PK": "PK",
            "PL": "PL",
            "PM": "PM",
            "PN": "PN",
            "PR": "PR",
            "PS": "PS",
            "PT": "PT",
            "PW": "PW",
            "PY": "PY",
            "QA": "QA",
            "RE": "RE",
            "RO": "RO",
            "RS": "RS",
            "RU": "RU",
            "RW": "RW",
            "SA": "SA",
            "SB": "SB",
            "SC": "SC",
            "SD": "SD",
            "SE": "SE",
            "SG": "SG",
            "SH": "SH",
            "SI": "SI",
            "SJ": "SJ",
            "SK": "SK",
            "SL": "SL",
            "SM": "SM",
            "SN": "SN",
            "SO": "SO",
            "SR": "SR",
            "SS": "SS",
            "ST": "ST",
            "SV": "SV",
            "SX": "SX",
            "SY": "SY",
            "SZ": "SZ",
            "TC": "TC",
            "TD": "TD",
            "TF": "TF",
            "TG": "TG",
            "TH": "TH",
            "TJ": "TJ",
            "TK": "TK",
            "TL": "TL",
            "TM": "TM",
            "TN": "TN",
            "TO": "TO",
            "TR": "TR",
            "TT": "TT",
            "TV": "TV",
            "TW": "TW",
            "TZ": "TZ",
            "UA": "UA",
            "UG": "UG",
            "UM": "UM",
            "US": "US",
            "UY": "UY",
            "UZ": "UZ",
            "VA": "VA",
            "VC": "VC",
            "VE": "VE",
            "VG": "VG",
            "VI": "VI",
            "VN": "VN",
            "VU": "VU",
            "WF": "WF",
            "WS": "WS",
            "YE": "YE",
            "YT": "YT",
            "ZA": "ZA",
            "ZM": "ZM",
            "ZW": "ZW",
        }
    ),
    StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Country ID from ISO 3166-1 alpha-2.
    """
    
    @classmethod
    @property
    def AD(cls):
        return cls._enum_by_value["AD"]("AD")
    
    @classmethod
    @property
    def AE(cls):
        return cls._enum_by_value["AE"]("AE")
    
    @classmethod
    @property
    def AF(cls):
        return cls._enum_by_value["AF"]("AF")
    
    @classmethod
    @property
    def AG(cls):
        return cls._enum_by_value["AG"]("AG")
    
    @classmethod
    @property
    def AI(cls):
        return cls._enum_by_value["AI"]("AI")
    
    @classmethod
    @property
    def AL(cls):
        return cls._enum_by_value["AL"]("AL")
    
    @classmethod
    @property
    def AM(cls):
        return cls._enum_by_value["AM"]("AM")
    
    @classmethod
    @property
    def AO(cls):
        return cls._enum_by_value["AO"]("AO")
    
    @classmethod
    @property
    def AQ(cls):
        return cls._enum_by_value["AQ"]("AQ")
    
    @classmethod
    @property
    def AR(cls):
        return cls._enum_by_value["AR"]("AR")
    
    @classmethod
    @property
    def AS(cls):
        return cls._enum_by_value["AS"]("AS")
    
    @classmethod
    @property
    def AT(cls):
        return cls._enum_by_value["AT"]("AT")
    
    @classmethod
    @property
    def AU(cls):
        return cls._enum_by_value["AU"]("AU")
    
    @classmethod
    @property
    def AW(cls):
        return cls._enum_by_value["AW"]("AW")
    
    @classmethod
    @property
    def AX(cls):
        return cls._enum_by_value["AX"]("AX")
    
    @classmethod
    @property
    def AZ(cls):
        return cls._enum_by_value["AZ"]("AZ")
    
    @classmethod
    @property
    def BA(cls):
        return cls._enum_by_value["BA"]("BA")
    
    @classmethod
    @property
    def BB(cls):
        return cls._enum_by_value["BB"]("BB")
    
    @classmethod
    @property
    def BD(cls):
        return cls._enum_by_value["BD"]("BD")
    
    @classmethod
    @property
    def BE(cls):
        return cls._enum_by_value["BE"]("BE")
    
    @classmethod
    @property
    def BF(cls):
        return cls._enum_by_value["BF"]("BF")
    
    @classmethod
    @property
    def BG(cls):
        return cls._enum_by_value["BG"]("BG")
    
    @classmethod
    @property
    def BH(cls):
        return cls._enum_by_value["BH"]("BH")
    
    @classmethod
    @property
    def BI(cls):
        return cls._enum_by_value["BI"]("BI")
    
    @classmethod
    @property
    def BJ(cls):
        return cls._enum_by_value["BJ"]("BJ")
    
    @classmethod
    @property
    def BL(cls):
        return cls._enum_by_value["BL"]("BL")
    
    @classmethod
    @property
    def BM(cls):
        return cls._enum_by_value["BM"]("BM")
    
    @classmethod
    @property
    def BN(cls):
        return cls._enum_by_value["BN"]("BN")
    
    @classmethod
    @property
    def BO(cls):
        return cls._enum_by_value["BO"]("BO")
    
    @classmethod
    @property
    def BQ(cls):
        return cls._enum_by_value["BQ"]("BQ")
    
    @classmethod
    @property
    def BR(cls):
        return cls._enum_by_value["BR"]("BR")
    
    @classmethod
    @property
    def BS(cls):
        return cls._enum_by_value["BS"]("BS")
    
    @classmethod
    @property
    def BT(cls):
        return cls._enum_by_value["BT"]("BT")
    
    @classmethod
    @property
    def BV(cls):
        return cls._enum_by_value["BV"]("BV")
    
    @classmethod
    @property
    def BW(cls):
        return cls._enum_by_value["BW"]("BW")
    
    @classmethod
    @property
    def BY(cls):
        return cls._enum_by_value["BY"]("BY")
    
    @classmethod
    @property
    def BZ(cls):
        return cls._enum_by_value["BZ"]("BZ")
    
    @classmethod
    @property
    def CA(cls):
        return cls._enum_by_value["CA"]("CA")
    
    @classmethod
    @property
    def CC(cls):
        return cls._enum_by_value["CC"]("CC")
    
    @classmethod
    @property
    def CD(cls):
        return cls._enum_by_value["CD"]("CD")
    
    @classmethod
    @property
    def CF(cls):
        return cls._enum_by_value["CF"]("CF")
    
    @classmethod
    @property
    def CG(cls):
        return cls._enum_by_value["CG"]("CG")
    
    @classmethod
    @property
    def CH(cls):
        return cls._enum_by_value["CH"]("CH")
    
    @classmethod
    @property
    def CI(cls):
        return cls._enum_by_value["CI"]("CI")
    
    @classmethod
    @property
    def CK(cls):
        return cls._enum_by_value["CK"]("CK")
    
    @classmethod
    @property
    def CL(cls):
        return cls._enum_by_value["CL"]("CL")
    
    @classmethod
    @property
    def CM(cls):
        return cls._enum_by_value["CM"]("CM")
    
    @classmethod
    @property
    def CO(cls):
        return cls._enum_by_value["CO"]("CO")
    
    @classmethod
    @property
    def CR(cls):
        return cls._enum_by_value["CR"]("CR")
    
    @classmethod
    @property
    def CU(cls):
        return cls._enum_by_value["CU"]("CU")
    
    @classmethod
    @property
    def CV(cls):
        return cls._enum_by_value["CV"]("CV")
    
    @classmethod
    @property
    def CW(cls):
        return cls._enum_by_value["CW"]("CW")
    
    @classmethod
    @property
    def CX(cls):
        return cls._enum_by_value["CX"]("CX")
    
    @classmethod
    @property
    def CY(cls):
        return cls._enum_by_value["CY"]("CY")
    
    @classmethod
    @property
    def CZ(cls):
        return cls._enum_by_value["CZ"]("CZ")
    
    @classmethod
    @property
    def DE(cls):
        return cls._enum_by_value["DE"]("DE")
    
    @classmethod
    @property
    def DJ(cls):
        return cls._enum_by_value["DJ"]("DJ")
    
    @classmethod
    @property
    def DK(cls):
        return cls._enum_by_value["DK"]("DK")
    
    @classmethod
    @property
    def DM(cls):
        return cls._enum_by_value["DM"]("DM")
    
    @classmethod
    @property
    def DO(cls):
        return cls._enum_by_value["DO"]("DO")
    
    @classmethod
    @property
    def DZ(cls):
        return cls._enum_by_value["DZ"]("DZ")
    
    @classmethod
    @property
    def EC(cls):
        return cls._enum_by_value["EC"]("EC")
    
    @classmethod
    @property
    def EE(cls):
        return cls._enum_by_value["EE"]("EE")
    
    @classmethod
    @property
    def EG(cls):
        return cls._enum_by_value["EG"]("EG")
    
    @classmethod
    @property
    def EH(cls):
        return cls._enum_by_value["EH"]("EH")
    
    @classmethod
    @property
    def ER(cls):
        return cls._enum_by_value["ER"]("ER")
    
    @classmethod
    @property
    def ES(cls):
        return cls._enum_by_value["ES"]("ES")
    
    @classmethod
    @property
    def ET(cls):
        return cls._enum_by_value["ET"]("ET")
    
    @classmethod
    @property
    def FI(cls):
        return cls._enum_by_value["FI"]("FI")
    
    @classmethod
    @property
    def FJ(cls):
        return cls._enum_by_value["FJ"]("FJ")
    
    @classmethod
    @property
    def FK(cls):
        return cls._enum_by_value["FK"]("FK")
    
    @classmethod
    @property
    def FM(cls):
        return cls._enum_by_value["FM"]("FM")
    
    @classmethod
    @property
    def FO(cls):
        return cls._enum_by_value["FO"]("FO")
    
    @classmethod
    @property
    def FR(cls):
        return cls._enum_by_value["FR"]("FR")
    
    @classmethod
    @property
    def GA(cls):
        return cls._enum_by_value["GA"]("GA")
    
    @classmethod
    @property
    def GB(cls):
        return cls._enum_by_value["GB"]("GB")
    
    @classmethod
    @property
    def GD(cls):
        return cls._enum_by_value["GD"]("GD")
    
    @classmethod
    @property
    def GE(cls):
        return cls._enum_by_value["GE"]("GE")
    
    @classmethod
    @property
    def GF(cls):
        return cls._enum_by_value["GF"]("GF")
    
    @classmethod
    @property
    def GG(cls):
        return cls._enum_by_value["GG"]("GG")
    
    @classmethod
    @property
    def GH(cls):
        return cls._enum_by_value["GH"]("GH")
    
    @classmethod
    @property
    def GI(cls):
        return cls._enum_by_value["GI"]("GI")
    
    @classmethod
    @property
    def GL(cls):
        return cls._enum_by_value["GL"]("GL")
    
    @classmethod
    @property
    def GM(cls):
        return cls._enum_by_value["GM"]("GM")
    
    @classmethod
    @property
    def GN(cls):
        return cls._enum_by_value["GN"]("GN")
    
    @classmethod
    @property
    def GP(cls):
        return cls._enum_by_value["GP"]("GP")
    
    @classmethod
    @property
    def GQ(cls):
        return cls._enum_by_value["GQ"]("GQ")
    
    @classmethod
    @property
    def GR(cls):
        return cls._enum_by_value["GR"]("GR")
    
    @classmethod
    @property
    def GS(cls):
        return cls._enum_by_value["GS"]("GS")
    
    @classmethod
    @property
    def GT(cls):
        return cls._enum_by_value["GT"]("GT")
    
    @classmethod
    @property
    def GU(cls):
        return cls._enum_by_value["GU"]("GU")
    
    @classmethod
    @property
    def GW(cls):
        return cls._enum_by_value["GW"]("GW")
    
    @classmethod
    @property
    def GY(cls):
        return cls._enum_by_value["GY"]("GY")
    
    @classmethod
    @property
    def HK(cls):
        return cls._enum_by_value["HK"]("HK")
    
    @classmethod
    @property
    def HM(cls):
        return cls._enum_by_value["HM"]("HM")
    
    @classmethod
    @property
    def HN(cls):
        return cls._enum_by_value["HN"]("HN")
    
    @classmethod
    @property
    def HR(cls):
        return cls._enum_by_value["HR"]("HR")
    
    @classmethod
    @property
    def HT(cls):
        return cls._enum_by_value["HT"]("HT")
    
    @classmethod
    @property
    def HU(cls):
        return cls._enum_by_value["HU"]("HU")
    
    @classmethod
    @property
    def ID(cls):
        return cls._enum_by_value["ID"]("ID")
    
    @classmethod
    @property
    def IE(cls):
        return cls._enum_by_value["IE"]("IE")
    
    @classmethod
    @property
    def IL(cls):
        return cls._enum_by_value["IL"]("IL")
    
    @classmethod
    @property
    def IM(cls):
        return cls._enum_by_value["IM"]("IM")
    
    @classmethod
    @property
    def IN(cls):
        return cls._enum_by_value["IN"]("IN")
    
    @classmethod
    @property
    def IO(cls):
        return cls._enum_by_value["IO"]("IO")
    
    @classmethod
    @property
    def IQ(cls):
        return cls._enum_by_value["IQ"]("IQ")
    
    @classmethod
    @property
    def IR(cls):
        return cls._enum_by_value["IR"]("IR")
    
    @classmethod
    @property
    def IS(cls):
        return cls._enum_by_value["IS"]("IS")
    
    @classmethod
    @property
    def IT(cls):
        return cls._enum_by_value["IT"]("IT")
    
    @classmethod
    @property
    def JE(cls):
        return cls._enum_by_value["JE"]("JE")
    
    @classmethod
    @property
    def JM(cls):
        return cls._enum_by_value["JM"]("JM")
    
    @classmethod
    @property
    def JO(cls):
        return cls._enum_by_value["JO"]("JO")
    
    @classmethod
    @property
    def JP(cls):
        return cls._enum_by_value["JP"]("JP")
    
    @classmethod
    @property
    def KE(cls):
        return cls._enum_by_value["KE"]("KE")
    
    @classmethod
    @property
    def KG(cls):
        return cls._enum_by_value["KG"]("KG")
    
    @classmethod
    @property
    def KH(cls):
        return cls._enum_by_value["KH"]("KH")
    
    @classmethod
    @property
    def KI(cls):
        return cls._enum_by_value["KI"]("KI")
    
    @classmethod
    @property
    def KM(cls):
        return cls._enum_by_value["KM"]("KM")
    
    @classmethod
    @property
    def KN(cls):
        return cls._enum_by_value["KN"]("KN")
    
    @classmethod
    @property
    def KR(cls):
        return cls._enum_by_value["KR"]("KR")
    
    @classmethod
    @property
    def KW(cls):
        return cls._enum_by_value["KW"]("KW")
    
    @classmethod
    @property
    def KY(cls):
        return cls._enum_by_value["KY"]("KY")
    
    @classmethod
    @property
    def KZ(cls):
        return cls._enum_by_value["KZ"]("KZ")
    
    @classmethod
    @property
    def LA(cls):
        return cls._enum_by_value["LA"]("LA")
    
    @classmethod
    @property
    def LB(cls):
        return cls._enum_by_value["LB"]("LB")
    
    @classmethod
    @property
    def LC(cls):
        return cls._enum_by_value["LC"]("LC")
    
    @classmethod
    @property
    def LI(cls):
        return cls._enum_by_value["LI"]("LI")
    
    @classmethod
    @property
    def LK(cls):
        return cls._enum_by_value["LK"]("LK")
    
    @classmethod
    @property
    def LR(cls):
        return cls._enum_by_value["LR"]("LR")
    
    @classmethod
    @property
    def LS(cls):
        return cls._enum_by_value["LS"]("LS")
    
    @classmethod
    @property
    def LT(cls):
        return cls._enum_by_value["LT"]("LT")
    
    @classmethod
    @property
    def LU(cls):
        return cls._enum_by_value["LU"]("LU")
    
    @classmethod
    @property
    def LV(cls):
        return cls._enum_by_value["LV"]("LV")
    
    @classmethod
    @property
    def LY(cls):
        return cls._enum_by_value["LY"]("LY")
    
    @classmethod
    @property
    def MA(cls):
        return cls._enum_by_value["MA"]("MA")
    
    @classmethod
    @property
    def MC(cls):
        return cls._enum_by_value["MC"]("MC")
    
    @classmethod
    @property
    def MD(cls):
        return cls._enum_by_value["MD"]("MD")
    
    @classmethod
    @property
    def ME(cls):
        return cls._enum_by_value["ME"]("ME")
    
    @classmethod
    @property
    def MF(cls):
        return cls._enum_by_value["MF"]("MF")
    
    @classmethod
    @property
    def MG(cls):
        return cls._enum_by_value["MG"]("MG")
    
    @classmethod
    @property
    def MH(cls):
        return cls._enum_by_value["MH"]("MH")
    
    @classmethod
    @property
    def MK(cls):
        return cls._enum_by_value["MK"]("MK")
    
    @classmethod
    @property
    def ML(cls):
        return cls._enum_by_value["ML"]("ML")
    
    @classmethod
    @property
    def MM(cls):
        return cls._enum_by_value["MM"]("MM")
    
    @classmethod
    @property
    def MN(cls):
        return cls._enum_by_value["MN"]("MN")
    
    @classmethod
    @property
    def MO(cls):
        return cls._enum_by_value["MO"]("MO")
    
    @classmethod
    @property
    def MP(cls):
        return cls._enum_by_value["MP"]("MP")
    
    @classmethod
    @property
    def MQ(cls):
        return cls._enum_by_value["MQ"]("MQ")
    
    @classmethod
    @property
    def MR(cls):
        return cls._enum_by_value["MR"]("MR")
    
    @classmethod
    @property
    def MS(cls):
        return cls._enum_by_value["MS"]("MS")
    
    @classmethod
    @property
    def MT(cls):
        return cls._enum_by_value["MT"]("MT")
    
    @classmethod
    @property
    def MU(cls):
        return cls._enum_by_value["MU"]("MU")
    
    @classmethod
    @property
    def MV(cls):
        return cls._enum_by_value["MV"]("MV")
    
    @classmethod
    @property
    def MW(cls):
        return cls._enum_by_value["MW"]("MW")
    
    @classmethod
    @property
    def MX(cls):
        return cls._enum_by_value["MX"]("MX")
    
    @classmethod
    @property
    def MY(cls):
        return cls._enum_by_value["MY"]("MY")
    
    @classmethod
    @property
    def MZ(cls):
        return cls._enum_by_value["MZ"]("MZ")
    
    @classmethod
    @property
    def NA(cls):
        return cls._enum_by_value["NA"]("NA")
    
    @classmethod
    @property
    def NC(cls):
        return cls._enum_by_value["NC"]("NC")
    
    @classmethod
    @property
    def NE(cls):
        return cls._enum_by_value["NE"]("NE")
    
    @classmethod
    @property
    def NF(cls):
        return cls._enum_by_value["NF"]("NF")
    
    @classmethod
    @property
    def NG(cls):
        return cls._enum_by_value["NG"]("NG")
    
    @classmethod
    @property
    def NI(cls):
        return cls._enum_by_value["NI"]("NI")
    
    @classmethod
    @property
    def NL(cls):
        return cls._enum_by_value["NL"]("NL")
    
    @classmethod
    @property
    def NO(cls):
        return cls._enum_by_value["NO"]("NO")
    
    @classmethod
    @property
    def NP(cls):
        return cls._enum_by_value["NP"]("NP")
    
    @classmethod
    @property
    def NR(cls):
        return cls._enum_by_value["NR"]("NR")
    
    @classmethod
    @property
    def NU(cls):
        return cls._enum_by_value["NU"]("NU")
    
    @classmethod
    @property
    def NZ(cls):
        return cls._enum_by_value["NZ"]("NZ")
    
    @classmethod
    @property
    def OM(cls):
        return cls._enum_by_value["OM"]("OM")
    
    @classmethod
    @property
    def PA(cls):
        return cls._enum_by_value["PA"]("PA")
    
    @classmethod
    @property
    def PE(cls):
        return cls._enum_by_value["PE"]("PE")
    
    @classmethod
    @property
    def PF(cls):
        return cls._enum_by_value["PF"]("PF")
    
    @classmethod
    @property
    def PG(cls):
        return cls._enum_by_value["PG"]("PG")
    
    @classmethod
    @property
    def PH(cls):
        return cls._enum_by_value["PH"]("PH")
    
    @classmethod
    @property
    def PK(cls):
        return cls._enum_by_value["PK"]("PK")
    
    @classmethod
    @property
    def PL(cls):
        return cls._enum_by_value["PL"]("PL")
    
    @classmethod
    @property
    def PM(cls):
        return cls._enum_by_value["PM"]("PM")
    
    @classmethod
    @property
    def PN(cls):
        return cls._enum_by_value["PN"]("PN")
    
    @classmethod
    @property
    def PR(cls):
        return cls._enum_by_value["PR"]("PR")
    
    @classmethod
    @property
    def PS(cls):
        return cls._enum_by_value["PS"]("PS")
    
    @classmethod
    @property
    def PT(cls):
        return cls._enum_by_value["PT"]("PT")
    
    @classmethod
    @property
    def PW(cls):
        return cls._enum_by_value["PW"]("PW")
    
    @classmethod
    @property
    def PY(cls):
        return cls._enum_by_value["PY"]("PY")
    
    @classmethod
    @property
    def QA(cls):
        return cls._enum_by_value["QA"]("QA")
    
    @classmethod
    @property
    def RE(cls):
        return cls._enum_by_value["RE"]("RE")
    
    @classmethod
    @property
    def RO(cls):
        return cls._enum_by_value["RO"]("RO")
    
    @classmethod
    @property
    def RS(cls):
        return cls._enum_by_value["RS"]("RS")
    
    @classmethod
    @property
    def RU(cls):
        return cls._enum_by_value["RU"]("RU")
    
    @classmethod
    @property
    def RW(cls):
        return cls._enum_by_value["RW"]("RW")
    
    @classmethod
    @property
    def SA(cls):
        return cls._enum_by_value["SA"]("SA")
    
    @classmethod
    @property
    def SB(cls):
        return cls._enum_by_value["SB"]("SB")
    
    @classmethod
    @property
    def SC(cls):
        return cls._enum_by_value["SC"]("SC")
    
    @classmethod
    @property
    def SD(cls):
        return cls._enum_by_value["SD"]("SD")
    
    @classmethod
    @property
    def SE(cls):
        return cls._enum_by_value["SE"]("SE")
    
    @classmethod
    @property
    def SG(cls):
        return cls._enum_by_value["SG"]("SG")
    
    @classmethod
    @property
    def SH(cls):
        return cls._enum_by_value["SH"]("SH")
    
    @classmethod
    @property
    def SI(cls):
        return cls._enum_by_value["SI"]("SI")
    
    @classmethod
    @property
    def SJ(cls):
        return cls._enum_by_value["SJ"]("SJ")
    
    @classmethod
    @property
    def SK(cls):
        return cls._enum_by_value["SK"]("SK")
    
    @classmethod
    @property
    def SL(cls):
        return cls._enum_by_value["SL"]("SL")
    
    @classmethod
    @property
    def SM(cls):
        return cls._enum_by_value["SM"]("SM")
    
    @classmethod
    @property
    def SN(cls):
        return cls._enum_by_value["SN"]("SN")
    
    @classmethod
    @property
    def SO(cls):
        return cls._enum_by_value["SO"]("SO")
    
    @classmethod
    @property
    def SR(cls):
        return cls._enum_by_value["SR"]("SR")
    
    @classmethod
    @property
    def SS(cls):
        return cls._enum_by_value["SS"]("SS")
    
    @classmethod
    @property
    def ST(cls):
        return cls._enum_by_value["ST"]("ST")
    
    @classmethod
    @property
    def SV(cls):
        return cls._enum_by_value["SV"]("SV")
    
    @classmethod
    @property
    def SX(cls):
        return cls._enum_by_value["SX"]("SX")
    
    @classmethod
    @property
    def SY(cls):
        return cls._enum_by_value["SY"]("SY")
    
    @classmethod
    @property
    def SZ(cls):
        return cls._enum_by_value["SZ"]("SZ")
    
    @classmethod
    @property
    def TC(cls):
        return cls._enum_by_value["TC"]("TC")
    
    @classmethod
    @property
    def TD(cls):
        return cls._enum_by_value["TD"]("TD")
    
    @classmethod
    @property
    def TF(cls):
        return cls._enum_by_value["TF"]("TF")
    
    @classmethod
    @property
    def TG(cls):
        return cls._enum_by_value["TG"]("TG")
    
    @classmethod
    @property
    def TH(cls):
        return cls._enum_by_value["TH"]("TH")
    
    @classmethod
    @property
    def TJ(cls):
        return cls._enum_by_value["TJ"]("TJ")
    
    @classmethod
    @property
    def TK(cls):
        return cls._enum_by_value["TK"]("TK")
    
    @classmethod
    @property
    def TL(cls):
        return cls._enum_by_value["TL"]("TL")
    
    @classmethod
    @property
    def TM(cls):
        return cls._enum_by_value["TM"]("TM")
    
    @classmethod
    @property
    def TN(cls):
        return cls._enum_by_value["TN"]("TN")
    
    @classmethod
    @property
    def TO(cls):
        return cls._enum_by_value["TO"]("TO")
    
    @classmethod
    @property
    def TR(cls):
        return cls._enum_by_value["TR"]("TR")
    
    @classmethod
    @property
    def TT(cls):
        return cls._enum_by_value["TT"]("TT")
    
    @classmethod
    @property
    def TV(cls):
        return cls._enum_by_value["TV"]("TV")
    
    @classmethod
    @property
    def TW(cls):
        return cls._enum_by_value["TW"]("TW")
    
    @classmethod
    @property
    def TZ(cls):
        return cls._enum_by_value["TZ"]("TZ")
    
    @classmethod
    @property
    def UA(cls):
        return cls._enum_by_value["UA"]("UA")
    
    @classmethod
    @property
    def UG(cls):
        return cls._enum_by_value["UG"]("UG")
    
    @classmethod
    @property
    def UM(cls):
        return cls._enum_by_value["UM"]("UM")
    
    @classmethod
    @property
    def US(cls):
        return cls._enum_by_value["US"]("US")
    
    @classmethod
    @property
    def UY(cls):
        return cls._enum_by_value["UY"]("UY")
    
    @classmethod
    @property
    def UZ(cls):
        return cls._enum_by_value["UZ"]("UZ")
    
    @classmethod
    @property
    def VA(cls):
        return cls._enum_by_value["VA"]("VA")
    
    @classmethod
    @property
    def VC(cls):
        return cls._enum_by_value["VC"]("VC")
    
    @classmethod
    @property
    def VE(cls):
        return cls._enum_by_value["VE"]("VE")
    
    @classmethod
    @property
    def VG(cls):
        return cls._enum_by_value["VG"]("VG")
    
    @classmethod
    @property
    def VI(cls):
        return cls._enum_by_value["VI"]("VI")
    
    @classmethod
    @property
    def VN(cls):
        return cls._enum_by_value["VN"]("VN")
    
    @classmethod
    @property
    def VU(cls):
        return cls._enum_by_value["VU"]("VU")
    
    @classmethod
    @property
    def WF(cls):
        return cls._enum_by_value["WF"]("WF")
    
    @classmethod
    @property
    def WS(cls):
        return cls._enum_by_value["WS"]("WS")
    
    @classmethod
    @property
    def YE(cls):
        return cls._enum_by_value["YE"]("YE")
    
    @classmethod
    @property
    def YT(cls):
        return cls._enum_by_value["YT"]("YT")
    
    @classmethod
    @property
    def ZA(cls):
        return cls._enum_by_value["ZA"]("ZA")
    
    @classmethod
    @property
    def ZM(cls):
        return cls._enum_by_value["ZM"]("ZM")
    
    @classmethod
    @property
    def ZW(cls):
        return cls._enum_by_value["ZW"]("ZW")
