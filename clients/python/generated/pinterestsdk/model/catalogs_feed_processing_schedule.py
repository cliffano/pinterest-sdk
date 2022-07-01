"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


import re  # noqa: F401
import sys  # noqa: F401

from pinterestsdk.model_utils import (  # noqa: F401
    ApiTypeError,
    ModelComposed,
    ModelNormal,
    ModelSimple,
    cached_property,
    change_keys_js_to_python,
    convert_js_args_to_python_args,
    date,
    datetime,
    file_type,
    none_type,
    validate_get_composed_info,
    OpenApiModel
)
from pinterestsdk.exceptions import ApiAttributeError



class CatalogsFeedProcessingSchedule(ModelNormal):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Attributes:
      allowed_values (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          with a capitalized key describing the allowed value and an allowed
          value. These dicts store the allowed enum values.
      attribute_map (dict): The key is attribute name
          and the value is json key in definition.
      discriminator_value_class_map (dict): A dict to go from the discriminator
          variable value to the discriminator class name.
      validations (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          that stores validations for max_length, min_length, max_items,
          min_items, exclusive_maximum, inclusive_maximum, exclusive_minimum,
          inclusive_minimum, and regex.
      additional_properties_type (tuple): A tuple of classes accepted
          as additional properties values.
    """

    allowed_values = {
        ('timezone',): {
            'None': None,
            'AFRICA/ABIDJAN': "Africa/Abidjan",
            'AFRICA/ACCRA': "Africa/Accra",
            'AFRICA/ALGIERS': "Africa/Algiers",
            'AFRICA/BISSAU': "Africa/Bissau",
            'AFRICA/CAIRO': "Africa/Cairo",
            'AFRICA/CASABLANCA': "Africa/Casablanca",
            'AFRICA/CEUTA': "Africa/Ceuta",
            'AFRICA/EL_AAIUN': "Africa/El_Aaiun",
            'AFRICA/JOHANNESBURG': "Africa/Johannesburg",
            'AFRICA/JUBA': "Africa/Juba",
            'AFRICA/KHARTOUM': "Africa/Khartoum",
            'AFRICA/LAGOS': "Africa/Lagos",
            'AFRICA/MAPUTO': "Africa/Maputo",
            'AFRICA/MONROVIA': "Africa/Monrovia",
            'AFRICA/NAIROBI': "Africa/Nairobi",
            'AFRICA/NDJAMENA': "Africa/Ndjamena",
            'AFRICA/SAO_TOME': "Africa/Sao_Tome",
            'AFRICA/TRIPOLI': "Africa/Tripoli",
            'AFRICA/TUNIS': "Africa/Tunis",
            'AFRICA/WINDHOEK': "Africa/Windhoek",
            'AMERICA/ADAK': "America/Adak",
            'AMERICA/ANCHORAGE': "America/Anchorage",
            'AMERICA/ARAGUAINA': "America/Araguaina",
            'AMERICA/ARGENTINA/BUENOS_AIRES': "America/Argentina/Buenos_Aires",
            'AMERICA/ARGENTINA/CATAMARCA': "America/Argentina/Catamarca",
            'AMERICA/ARGENTINA/CORDOBA': "America/Argentina/Cordoba",
            'AMERICA/ARGENTINA/JUJUY': "America/Argentina/Jujuy",
            'AMERICA/ARGENTINA/LA_RIOJA': "America/Argentina/La_Rioja",
            'AMERICA/ARGENTINA/MENDOZA': "America/Argentina/Mendoza",
            'AMERICA/ARGENTINA/RIO_GALLEGOS': "America/Argentina/Rio_Gallegos",
            'AMERICA/ARGENTINA/SALTA': "America/Argentina/Salta",
            'AMERICA/ARGENTINA/SAN_JUAN': "America/Argentina/San_Juan",
            'AMERICA/ARGENTINA/SAN_LUIS': "America/Argentina/San_Luis",
            'AMERICA/ARGENTINA/TUCUMAN': "America/Argentina/Tucuman",
            'AMERICA/ARGENTINA/USHUAIA': "America/Argentina/Ushuaia",
            'AMERICA/ASUNCION': "America/Asuncion",
            'AMERICA/ATIKOKAN': "America/Atikokan",
            'AMERICA/BAHIA': "America/Bahia",
            'AMERICA/BAHIA_BANDERAS': "America/Bahia_Banderas",
            'AMERICA/BARBADOS': "America/Barbados",
            'AMERICA/BELEM': "America/Belem",
            'AMERICA/BELIZE': "America/Belize",
            'AMERICA/BLANC-SABLON': "America/Blanc-Sablon",
            'AMERICA/BOA_VISTA': "America/Boa_Vista",
            'AMERICA/BOGOTA': "America/Bogota",
            'AMERICA/BOISE': "America/Boise",
            'AMERICA/CAMBRIDGE_BAY': "America/Cambridge_Bay",
            'AMERICA/CAMPO_GRANDE': "America/Campo_Grande",
            'AMERICA/CANCUN': "America/Cancun",
            'AMERICA/CARACAS': "America/Caracas",
            'AMERICA/CAYENNE': "America/Cayenne",
            'AMERICA/CHICAGO': "America/Chicago",
            'AMERICA/CHIHUAHUA': "America/Chihuahua",
            'AMERICA/COSTA_RICA': "America/Costa_Rica",
            'AMERICA/CRESTON': "America/Creston",
            'AMERICA/CUIABA': "America/Cuiaba",
            'AMERICA/CURACAO': "America/Curacao",
            'AMERICA/DANMARKSHAVN': "America/Danmarkshavn",
            'AMERICA/DAWSON': "America/Dawson",
            'AMERICA/DAWSON_CREEK': "America/Dawson_Creek",
            'AMERICA/DENVER': "America/Denver",
            'AMERICA/DETROIT': "America/Detroit",
            'AMERICA/EDMONTON': "America/Edmonton",
            'AMERICA/EIRUNEPE': "America/Eirunepe",
            'AMERICA/EL_SALVADOR': "America/El_Salvador",
            'AMERICA/FORT_NELSON': "America/Fort_Nelson",
            'AMERICA/FORTALEZA': "America/Fortaleza",
            'AMERICA/GLACE_BAY': "America/Glace_Bay",
            'AMERICA/GOOSE_BAY': "America/Goose_Bay",
            'AMERICA/GRAND_TURK': "America/Grand_Turk",
            'AMERICA/GUATEMALA': "America/Guatemala",
            'AMERICA/GUAYAQUIL': "America/Guayaquil",
            'AMERICA/GUYANA': "America/Guyana",
            'AMERICA/HALIFAX': "America/Halifax",
            'AMERICA/HAVANA': "America/Havana",
            'AMERICA/HERMOSILLO': "America/Hermosillo",
            'AMERICA/INDIANA/INDIANAPOLIS': "America/Indiana/Indianapolis",
            'AMERICA/INDIANA/KNOX': "America/Indiana/Knox",
            'AMERICA/INDIANA/MARENGO': "America/Indiana/Marengo",
            'AMERICA/INDIANA/PETERSBURG': "America/Indiana/Petersburg",
            'AMERICA/INDIANA/TELL_CITY': "America/Indiana/Tell_City",
            'AMERICA/INDIANA/VEVAY': "America/Indiana/Vevay",
            'AMERICA/INDIANA/VINCENNES': "America/Indiana/Vincennes",
            'AMERICA/INDIANA/WINAMAC': "America/Indiana/Winamac",
            'AMERICA/INUVIK': "America/Inuvik",
            'AMERICA/IQALUIT': "America/Iqaluit",
            'AMERICA/JAMAICA': "America/Jamaica",
            'AMERICA/JUNEAU': "America/Juneau",
            'AMERICA/KENTUCKY/LOUISVILLE': "America/Kentucky/Louisville",
            'AMERICA/KENTUCKY/MONTICELLO': "America/Kentucky/Monticello",
            'AMERICA/LA_PAZ': "America/La_Paz",
            'AMERICA/LIMA': "America/Lima",
            'AMERICA/LOS_ANGELES': "America/Los_Angeles",
            'AMERICA/MACEIO': "America/Maceio",
            'AMERICA/MANAGUA': "America/Managua",
            'AMERICA/MANAUS': "America/Manaus",
            'AMERICA/MARTINIQUE': "America/Martinique",
            'AMERICA/MATAMOROS': "America/Matamoros",
            'AMERICA/MAZATLAN': "America/Mazatlan",
            'AMERICA/MENOMINEE': "America/Menominee",
            'AMERICA/MERIDA': "America/Merida",
            'AMERICA/METLAKATLA': "America/Metlakatla",
            'AMERICA/MEXICO_CITY': "America/Mexico_City",
            'AMERICA/MIQUELON': "America/Miquelon",
            'AMERICA/MONCTON': "America/Moncton",
            'AMERICA/MONTERREY': "America/Monterrey",
            'AMERICA/MONTEVIDEO': "America/Montevideo",
            'AMERICA/NASSAU': "America/Nassau",
            'AMERICA/NEW_YORK': "America/New_York",
            'AMERICA/NIPIGON': "America/Nipigon",
            'AMERICA/NOME': "America/Nome",
            'AMERICA/NORONHA': "America/Noronha",
            'AMERICA/NORTH_DAKOTA/BEULAH': "America/North_Dakota/Beulah",
            'AMERICA/NORTH_DAKOTA/CENTER': "America/North_Dakota/Center",
            'AMERICA/NORTH_DAKOTA/NEW_SALEM': "America/North_Dakota/New_Salem",
            'AMERICA/NUUK': "America/Nuuk",
            'AMERICA/OJINAGA': "America/Ojinaga",
            'AMERICA/PANAMA': "America/Panama",
            'AMERICA/PANGNIRTUNG': "America/Pangnirtung",
            'AMERICA/PARAMARIBO': "America/Paramaribo",
            'AMERICA/PHOENIX': "America/Phoenix",
            'AMERICA/PORT-AU-PRINCE': "America/Port-au-Prince",
            'AMERICA/PORT_OF_SPAIN': "America/Port_of_Spain",
            'AMERICA/PORTO_VELHO': "America/Porto_Velho",
            'AMERICA/PUERTO_RICO': "America/Puerto_Rico",
            'AMERICA/PUNTA_ARENAS': "America/Punta_Arenas",
            'AMERICA/RAINY_RIVER': "America/Rainy_River",
            'AMERICA/RANKIN_INLET': "America/Rankin_Inlet",
            'AMERICA/RECIFE': "America/Recife",
            'AMERICA/REGINA': "America/Regina",
            'AMERICA/RESOLUTE': "America/Resolute",
            'AMERICA/RIO_BRANCO': "America/Rio_Branco",
            'AMERICA/SANTAREM': "America/Santarem",
            'AMERICA/SANTIAGO': "America/Santiago",
            'AMERICA/SANTO_DOMINGO': "America/Santo_Domingo",
            'AMERICA/SAO_PAULO': "America/Sao_Paulo",
            'AMERICA/SCORESBYSUND': "America/Scoresbysund",
            'AMERICA/SITKA': "America/Sitka",
            'AMERICA/ST_JOHNS': "America/St_Johns",
            'AMERICA/SWIFT_CURRENT': "America/Swift_Current",
            'AMERICA/TEGUCIGALPA': "America/Tegucigalpa",
            'AMERICA/THULE': "America/Thule",
            'AMERICA/THUNDER_BAY': "America/Thunder_Bay",
            'AMERICA/TIJUANA': "America/Tijuana",
            'AMERICA/TORONTO': "America/Toronto",
            'AMERICA/VANCOUVER': "America/Vancouver",
            'AMERICA/WHITEHORSE': "America/Whitehorse",
            'AMERICA/WINNIPEG': "America/Winnipeg",
            'AMERICA/YAKUTAT': "America/Yakutat",
            'AMERICA/YELLOWKNIFE': "America/Yellowknife",
            'ANTARCTICA/CASEY': "Antarctica/Casey",
            'ANTARCTICA/DAVIS': "Antarctica/Davis",
            'ANTARCTICA/DUMONTDURVILLE': "Antarctica/DumontDUrville",
            'ANTARCTICA/MACQUARIE': "Antarctica/Macquarie",
            'ANTARCTICA/MAWSON': "Antarctica/Mawson",
            'ANTARCTICA/PALMER': "Antarctica/Palmer",
            'ANTARCTICA/ROTHERA': "Antarctica/Rothera",
            'ANTARCTICA/SYOWA': "Antarctica/Syowa",
            'ANTARCTICA/TROLL': "Antarctica/Troll",
            'ANTARCTICA/VOSTOK': "Antarctica/Vostok",
            'ASIA/ALMATY': "Asia/Almaty",
            'ASIA/AMMAN': "Asia/Amman",
            'ASIA/ANADYR': "Asia/Anadyr",
            'ASIA/AQTAU': "Asia/Aqtau",
            'ASIA/AQTOBE': "Asia/Aqtobe",
            'ASIA/ASHGABAT': "Asia/Ashgabat",
            'ASIA/ATYRAU': "Asia/Atyrau",
            'ASIA/BAGHDAD': "Asia/Baghdad",
            'ASIA/BAKU': "Asia/Baku",
            'ASIA/BANGKOK': "Asia/Bangkok",
            'ASIA/BARNAUL': "Asia/Barnaul",
            'ASIA/BEIRUT': "Asia/Beirut",
            'ASIA/BISHKEK': "Asia/Bishkek",
            'ASIA/BRUNEI': "Asia/Brunei",
            'ASIA/CHITA': "Asia/Chita",
            'ASIA/CHOIBALSAN': "Asia/Choibalsan",
            'ASIA/COLOMBO': "Asia/Colombo",
            'ASIA/DAMASCUS': "Asia/Damascus",
            'ASIA/DHAKA': "Asia/Dhaka",
            'ASIA/DILI': "Asia/Dili",
            'ASIA/DUBAI': "Asia/Dubai",
            'ASIA/DUSHANBE': "Asia/Dushanbe",
            'ASIA/FAMAGUSTA': "Asia/Famagusta",
            'ASIA/GAZA': "Asia/Gaza",
            'ASIA/HEBRON': "Asia/Hebron",
            'ASIA/HO_CHI_MINH': "Asia/Ho_Chi_Minh",
            'ASIA/HONG_KONG': "Asia/Hong_Kong",
            'ASIA/HOVD': "Asia/Hovd",
            'ASIA/IRKUTSK': "Asia/Irkutsk",
            'ASIA/JAKARTA': "Asia/Jakarta",
            'ASIA/JAYAPURA': "Asia/Jayapura",
            'ASIA/JERUSALEM': "Asia/Jerusalem",
            'ASIA/KABUL': "Asia/Kabul",
            'ASIA/KAMCHATKA': "Asia/Kamchatka",
            'ASIA/KARACHI': "Asia/Karachi",
            'ASIA/KATHMANDU': "Asia/Kathmandu",
            'ASIA/KHANDYGA': "Asia/Khandyga",
            'ASIA/KOLKATA': "Asia/Kolkata",
            'ASIA/KRASNOYARSK': "Asia/Krasnoyarsk",
            'ASIA/KUALA_LUMPUR': "Asia/Kuala_Lumpur",
            'ASIA/KUCHING': "Asia/Kuching",
            'ASIA/MACAU': "Asia/Macau",
            'ASIA/MAGADAN': "Asia/Magadan",
            'ASIA/MAKASSAR': "Asia/Makassar",
            'ASIA/MANILA': "Asia/Manila",
            'ASIA/NICOSIA': "Asia/Nicosia",
            'ASIA/NOVOKUZNETSK': "Asia/Novokuznetsk",
            'ASIA/NOVOSIBIRSK': "Asia/Novosibirsk",
            'ASIA/OMSK': "Asia/Omsk",
            'ASIA/ORAL': "Asia/Oral",
            'ASIA/PONTIANAK': "Asia/Pontianak",
            'ASIA/PYONGYANG': "Asia/Pyongyang",
            'ASIA/QATAR': "Asia/Qatar",
            'ASIA/QOSTANAY': "Asia/Qostanay",
            'ASIA/QYZYLORDA': "Asia/Qyzylorda",
            'ASIA/RIYADH': "Asia/Riyadh",
            'ASIA/SAKHALIN': "Asia/Sakhalin",
            'ASIA/SAMARKAND': "Asia/Samarkand",
            'ASIA/SEOUL': "Asia/Seoul",
            'ASIA/SHANGHAI': "Asia/Shanghai",
            'ASIA/SINGAPORE': "Asia/Singapore",
            'ASIA/SREDNEKOLYMSK': "Asia/Srednekolymsk",
            'ASIA/TAIPEI': "Asia/Taipei",
            'ASIA/TASHKENT': "Asia/Tashkent",
            'ASIA/TBILISI': "Asia/Tbilisi",
            'ASIA/TEHRAN': "Asia/Tehran",
            'ASIA/THIMPHU': "Asia/Thimphu",
            'ASIA/TOKYO': "Asia/Tokyo",
            'ASIA/TOMSK': "Asia/Tomsk",
            'ASIA/ULAANBAATAR': "Asia/Ulaanbaatar",
            'ASIA/URUMQI': "Asia/Urumqi",
            'ASIA/UST-NERA': "Asia/Ust-Nera",
            'ASIA/VLADIVOSTOK': "Asia/Vladivostok",
            'ASIA/YAKUTSK': "Asia/Yakutsk",
            'ASIA/YANGON': "Asia/Yangon",
            'ASIA/YEKATERINBURG': "Asia/Yekaterinburg",
            'ASIA/YEREVAN': "Asia/Yerevan",
            'ATLANTIC/AZORES': "Atlantic/Azores",
            'ATLANTIC/BERMUDA': "Atlantic/Bermuda",
            'ATLANTIC/CANARY': "Atlantic/Canary",
            'ATLANTIC/CAPE_VERDE': "Atlantic/Cape_Verde",
            'ATLANTIC/FAROE': "Atlantic/Faroe",
            'ATLANTIC/MADEIRA': "Atlantic/Madeira",
            'ATLANTIC/REYKJAVIK': "Atlantic/Reykjavik",
            'ATLANTIC/SOUTH_GEORGIA': "Atlantic/South_Georgia",
            'ATLANTIC/STANLEY': "Atlantic/Stanley",
            'AUSTRALIA/ADELAIDE': "Australia/Adelaide",
            'AUSTRALIA/BRISBANE': "Australia/Brisbane",
            'AUSTRALIA/BROKEN_HILL': "Australia/Broken_Hill",
            'AUSTRALIA/CURRIE': "Australia/Currie",
            'AUSTRALIA/DARWIN': "Australia/Darwin",
            'AUSTRALIA/EUCLA': "Australia/Eucla",
            'AUSTRALIA/HOBART': "Australia/Hobart",
            'AUSTRALIA/LINDEMAN': "Australia/Lindeman",
            'AUSTRALIA/LORD_HOWE': "Australia/Lord_Howe",
            'AUSTRALIA/MELBOURNE': "Australia/Melbourne",
            'AUSTRALIA/PERTH': "Australia/Perth",
            'AUSTRALIA/SYDNEY': "Australia/Sydney",
            'CET': "CET",
            'CST6CDT': "CST6CDT",
            'EET': "EET",
            'EST': "EST",
            'EST5EDT': "EST5EDT",
            'ETC/GMT': "Etc/GMT",
            'ETC/GMT+1': "Etc/GMT+1",
            'ETC/GMT+10': "Etc/GMT+10",
            'ETC/GMT+11': "Etc/GMT+11",
            'ETC/GMT+12': "Etc/GMT+12",
            'ETC/GMT+2': "Etc/GMT+2",
            'ETC/GMT+3': "Etc/GMT+3",
            'ETC/GMT+4': "Etc/GMT+4",
            'ETC/GMT+5': "Etc/GMT+5",
            'ETC/GMT+6': "Etc/GMT+6",
            'ETC/GMT+7': "Etc/GMT+7",
            'ETC/GMT+8': "Etc/GMT+8",
            'ETC/GMT+9': "Etc/GMT+9",
            'ETC/GMT-1': "Etc/GMT-1",
            'ETC/GMT-10': "Etc/GMT-10",
            'ETC/GMT-11': "Etc/GMT-11",
            'ETC/GMT-12': "Etc/GMT-12",
            'ETC/GMT-13': "Etc/GMT-13",
            'ETC/GMT-14': "Etc/GMT-14",
            'ETC/GMT-2': "Etc/GMT-2",
            'ETC/GMT-3': "Etc/GMT-3",
            'ETC/GMT-4': "Etc/GMT-4",
            'ETC/GMT-5': "Etc/GMT-5",
            'ETC/GMT-6': "Etc/GMT-6",
            'ETC/GMT-7': "Etc/GMT-7",
            'ETC/GMT-8': "Etc/GMT-8",
            'ETC/GMT-9': "Etc/GMT-9",
            'ETC/UTC': "Etc/UTC",
            'EUROPE/AMSTERDAM': "Europe/Amsterdam",
            'EUROPE/ANDORRA': "Europe/Andorra",
            'EUROPE/ASTRAKHAN': "Europe/Astrakhan",
            'EUROPE/ATHENS': "Europe/Athens",
            'EUROPE/BELGRADE': "Europe/Belgrade",
            'EUROPE/BERLIN': "Europe/Berlin",
            'EUROPE/BRUSSELS': "Europe/Brussels",
            'EUROPE/BUCHAREST': "Europe/Bucharest",
            'EUROPE/BUDAPEST': "Europe/Budapest",
            'EUROPE/CHISINAU': "Europe/Chisinau",
            'EUROPE/COPENHAGEN': "Europe/Copenhagen",
            'EUROPE/DUBLIN': "Europe/Dublin",
            'EUROPE/GIBRALTAR': "Europe/Gibraltar",
            'EUROPE/HELSINKI': "Europe/Helsinki",
            'EUROPE/ISTANBUL': "Europe/Istanbul",
            'EUROPE/KALININGRAD': "Europe/Kaliningrad",
            'EUROPE/KIEV': "Europe/Kiev",
            'EUROPE/KIROV': "Europe/Kirov",
            'EUROPE/LISBON': "Europe/Lisbon",
            'EUROPE/LONDON': "Europe/London",
            'EUROPE/LUXEMBOURG': "Europe/Luxembourg",
            'EUROPE/MADRID': "Europe/Madrid",
            'EUROPE/MALTA': "Europe/Malta",
            'EUROPE/MINSK': "Europe/Minsk",
            'EUROPE/MONACO': "Europe/Monaco",
            'EUROPE/MOSCOW': "Europe/Moscow",
            'EUROPE/OSLO': "Europe/Oslo",
            'EUROPE/PARIS': "Europe/Paris",
            'EUROPE/PRAGUE': "Europe/Prague",
            'EUROPE/RIGA': "Europe/Riga",
            'EUROPE/ROME': "Europe/Rome",
            'EUROPE/SAMARA': "Europe/Samara",
            'EUROPE/SARATOV': "Europe/Saratov",
            'EUROPE/SIMFEROPOL': "Europe/Simferopol",
            'EUROPE/SOFIA': "Europe/Sofia",
            'EUROPE/STOCKHOLM': "Europe/Stockholm",
            'EUROPE/TALLINN': "Europe/Tallinn",
            'EUROPE/TIRANE': "Europe/Tirane",
            'EUROPE/ULYANOVSK': "Europe/Ulyanovsk",
            'EUROPE/UZHGOROD': "Europe/Uzhgorod",
            'EUROPE/VIENNA': "Europe/Vienna",
            'EUROPE/VILNIUS': "Europe/Vilnius",
            'EUROPE/VOLGOGRAD': "Europe/Volgograd",
            'EUROPE/WARSAW': "Europe/Warsaw",
            'EUROPE/ZAPOROZHYE': "Europe/Zaporozhye",
            'EUROPE/ZURICH': "Europe/Zurich",
            'HST': "HST",
            'INDIAN/CHAGOS': "Indian/Chagos",
            'INDIAN/CHRISTMAS': "Indian/Christmas",
            'INDIAN/COCOS': "Indian/Cocos",
            'INDIAN/KERGUELEN': "Indian/Kerguelen",
            'INDIAN/MAHE': "Indian/Mahe",
            'INDIAN/MALDIVES': "Indian/Maldives",
            'INDIAN/MAURITIUS': "Indian/Mauritius",
            'INDIAN/REUNION': "Indian/Reunion",
            'MET': "MET",
            'MST': "MST",
            'MST7MDT': "MST7MDT",
            'PST8PDT': "PST8PDT",
            'PACIFIC/APIA': "Pacific/Apia",
            'PACIFIC/AUCKLAND': "Pacific/Auckland",
            'PACIFIC/BOUGAINVILLE': "Pacific/Bougainville",
            'PACIFIC/CHATHAM': "Pacific/Chatham",
            'PACIFIC/CHUUK': "Pacific/Chuuk",
            'PACIFIC/EASTER': "Pacific/Easter",
            'PACIFIC/EFATE': "Pacific/Efate",
            'PACIFIC/ENDERBURY': "Pacific/Enderbury",
            'PACIFIC/FAKAOFO': "Pacific/Fakaofo",
            'PACIFIC/FIJI': "Pacific/Fiji",
            'PACIFIC/FUNAFUTI': "Pacific/Funafuti",
            'PACIFIC/GALAPAGOS': "Pacific/Galapagos",
            'PACIFIC/GAMBIER': "Pacific/Gambier",
            'PACIFIC/GUADALCANAL': "Pacific/Guadalcanal",
            'PACIFIC/GUAM': "Pacific/Guam",
            'PACIFIC/HONOLULU': "Pacific/Honolulu",
            'PACIFIC/KIRITIMATI': "Pacific/Kiritimati",
            'PACIFIC/KOSRAE': "Pacific/Kosrae",
            'PACIFIC/KWAJALEIN': "Pacific/Kwajalein",
            'PACIFIC/MAJURO': "Pacific/Majuro",
            'PACIFIC/MARQUESAS': "Pacific/Marquesas",
            'PACIFIC/NAURU': "Pacific/Nauru",
            'PACIFIC/NIUE': "Pacific/Niue",
            'PACIFIC/NORFOLK': "Pacific/Norfolk",
            'PACIFIC/NOUMEA': "Pacific/Noumea",
            'PACIFIC/PAGO_PAGO': "Pacific/Pago_Pago",
            'PACIFIC/PALAU': "Pacific/Palau",
            'PACIFIC/PITCAIRN': "Pacific/Pitcairn",
            'PACIFIC/POHNPEI': "Pacific/Pohnpei",
            'PACIFIC/PORT_MORESBY': "Pacific/Port_Moresby",
            'PACIFIC/RAROTONGA': "Pacific/Rarotonga",
            'PACIFIC/TAHITI': "Pacific/Tahiti",
            'PACIFIC/TARAWA': "Pacific/Tarawa",
            'PACIFIC/TONGATAPU': "Pacific/Tongatapu",
            'PACIFIC/WAKE': "Pacific/Wake",
            'PACIFIC/WALLIS': "Pacific/Wallis",
            'WET': "WET",
            'NULL': "null",
        },
    }

    validations = {
        ('time',): {
            'regex': {
                'pattern': r'^(0[0-9]|1[0-9]|2[0-3]):[0-5][0-9]$',  # noqa: E501
            },
        },
    }

    @cached_property
    def additional_properties_type():
        """
        This must be a method because a model may have properties that are
        of type self, this must run after the class is loaded
        """
        return (bool, date, datetime, dict, float, int, list, str, none_type,)  # noqa: E501

    _nullable = True

    @cached_property
    def openapi_types():
        """
        This must be a method because a model may have properties that are
        of type self, this must run after the class is loaded

        Returns
            openapi_types (dict): The key is attribute name
                and the value is attribute type.
        """
        return {
            'time': (str,),  # noqa: E501
            'timezone': (str, none_type,),  # noqa: E501
        }

    @cached_property
    def discriminator():
        return None


    attribute_map = {
        'time': 'time',  # noqa: E501
        'timezone': 'timezone',  # noqa: E501
    }

    read_only_vars = {
    }

    _composed_schemas = {}

    @classmethod
    @convert_js_args_to_python_args
    def _from_openapi_data(cls, time, timezone, *args, **kwargs):  # noqa: E501
        """CatalogsFeedProcessingSchedule - a model defined in OpenAPI

        Args:
            time (str): A time in format HH:MM with leading 0 (zero)
            timezone (str, none_type): The timezone considered for the processing schedule time.

        Keyword Args:
            _check_type (bool): if True, values for parameters in openapi_types
                                will be type checked and a TypeError will be
                                raised if the wrong type is input.
                                Defaults to True
            _path_to_item (tuple/list): This is a list of keys or values to
                                drill down to the model in received_data
                                when deserializing a response
            _spec_property_naming (bool): True if the variable names in the input data
                                are serialized names, as specified in the OpenAPI document.
                                False if the variable names in the input data
                                are pythonic names, e.g. snake case (default)
            _configuration (Configuration): the instance to use when
                                deserializing a file_type parameter.
                                If passed, type conversion is attempted
                                If omitted no type conversion is done.
            _visited_composed_classes (tuple): This stores a tuple of
                                classes that we have traveled through so that
                                if we see that class again we will not use its
                                discriminator again.
                                When traveling through a discriminator, the
                                composed schema that is
                                is traveled through is added to this set.
                                For example if Animal has a discriminator
                                petType and we pass in "Dog", and the class Dog
                                allOf includes Animal, we move through Animal
                                once using the discriminator, and pick Dog.
                                Then in Dog, we will make an instance of the
                                Animal class but this time we won't travel
                                through its discriminator because we passed in
                                _visited_composed_classes = (Animal,)
        """

        _check_type = kwargs.pop('_check_type', True)
        _spec_property_naming = kwargs.pop('_spec_property_naming', False)
        _path_to_item = kwargs.pop('_path_to_item', ())
        _configuration = kwargs.pop('_configuration', None)
        _visited_composed_classes = kwargs.pop('_visited_composed_classes', ())

        self = super(OpenApiModel, cls).__new__(cls)

        if args:
            raise ApiTypeError(
                "Invalid positional arguments=%s passed to %s. Remove those invalid positional arguments." % (
                    args,
                    self.__class__.__name__,
                ),
                path_to_item=_path_to_item,
                valid_classes=(self.__class__,),
            )

        self._data_store = {}
        self._check_type = _check_type
        self._spec_property_naming = _spec_property_naming
        self._path_to_item = _path_to_item
        self._configuration = _configuration
        self._visited_composed_classes = _visited_composed_classes + (self.__class__,)

        self.time = time
        self.timezone = timezone
        for var_name, var_value in kwargs.items():
            if var_name not in self.attribute_map and \
                        self._configuration is not None and \
                        self._configuration.discard_unknown_keys and \
                        self.additional_properties_type is None:
                # discard variable.
                continue
            setattr(self, var_name, var_value)
        return self

    required_properties = set([
        '_data_store',
        '_check_type',
        '_spec_property_naming',
        '_path_to_item',
        '_configuration',
        '_visited_composed_classes',
    ])

    @convert_js_args_to_python_args
    def __init__(self, time, timezone, *args, **kwargs):  # noqa: E501
        """CatalogsFeedProcessingSchedule - a model defined in OpenAPI

        Args:
            time (str): A time in format HH:MM with leading 0 (zero)
            timezone (str, none_type): The timezone considered for the processing schedule time.

        Keyword Args:
            _check_type (bool): if True, values for parameters in openapi_types
                                will be type checked and a TypeError will be
                                raised if the wrong type is input.
                                Defaults to True
            _path_to_item (tuple/list): This is a list of keys or values to
                                drill down to the model in received_data
                                when deserializing a response
            _spec_property_naming (bool): True if the variable names in the input data
                                are serialized names, as specified in the OpenAPI document.
                                False if the variable names in the input data
                                are pythonic names, e.g. snake case (default)
            _configuration (Configuration): the instance to use when
                                deserializing a file_type parameter.
                                If passed, type conversion is attempted
                                If omitted no type conversion is done.
            _visited_composed_classes (tuple): This stores a tuple of
                                classes that we have traveled through so that
                                if we see that class again we will not use its
                                discriminator again.
                                When traveling through a discriminator, the
                                composed schema that is
                                is traveled through is added to this set.
                                For example if Animal has a discriminator
                                petType and we pass in "Dog", and the class Dog
                                allOf includes Animal, we move through Animal
                                once using the discriminator, and pick Dog.
                                Then in Dog, we will make an instance of the
                                Animal class but this time we won't travel
                                through its discriminator because we passed in
                                _visited_composed_classes = (Animal,)
        """

        _check_type = kwargs.pop('_check_type', True)
        _spec_property_naming = kwargs.pop('_spec_property_naming', False)
        _path_to_item = kwargs.pop('_path_to_item', ())
        _configuration = kwargs.pop('_configuration', None)
        _visited_composed_classes = kwargs.pop('_visited_composed_classes', ())

        if args:
            raise ApiTypeError(
                "Invalid positional arguments=%s passed to %s. Remove those invalid positional arguments." % (
                    args,
                    self.__class__.__name__,
                ),
                path_to_item=_path_to_item,
                valid_classes=(self.__class__,),
            )

        self._data_store = {}
        self._check_type = _check_type
        self._spec_property_naming = _spec_property_naming
        self._path_to_item = _path_to_item
        self._configuration = _configuration
        self._visited_composed_classes = _visited_composed_classes + (self.__class__,)

        self.time = time
        self.timezone = timezone
        for var_name, var_value in kwargs.items():
            if var_name not in self.attribute_map and \
                        self._configuration is not None and \
                        self._configuration.discard_unknown_keys and \
                        self.additional_properties_type is None:
                # discard variable.
                continue
            setattr(self, var_name, var_value)
            if var_name in self.read_only_vars:
                raise ApiAttributeError(f"`{var_name}` is a read-only attribute. Use `from_openapi_data` to instantiate "
                                     f"class with read only attributes.")
