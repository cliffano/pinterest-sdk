/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


/**
 * Daily processing schedule. This field is **OPTIONAL**. Use this to configure the preferred time for processing a feed (otherwise random).
 */
export interface CatalogsFeedProcessingSchedule { 
    /**
     * A time in format HH:MM with leading 0 (zero)
     */
    time: string;
    /**
     * The timezone considered for the processing schedule time.
     */
    timezone: CatalogsFeedProcessingSchedule.TimezoneEnum | null;
}
export namespace CatalogsFeedProcessingSchedule {
    export type TimezoneEnum = 'Africa/Abidjan' | 'Africa/Accra' | 'Africa/Algiers' | 'Africa/Bissau' | 'Africa/Cairo' | 'Africa/Casablanca' | 'Africa/Ceuta' | 'Africa/El_Aaiun' | 'Africa/Johannesburg' | 'Africa/Juba' | 'Africa/Khartoum' | 'Africa/Lagos' | 'Africa/Maputo' | 'Africa/Monrovia' | 'Africa/Nairobi' | 'Africa/Ndjamena' | 'Africa/Sao_Tome' | 'Africa/Tripoli' | 'Africa/Tunis' | 'Africa/Windhoek' | 'America/Adak' | 'America/Anchorage' | 'America/Araguaina' | 'America/Argentina/Buenos_Aires' | 'America/Argentina/Catamarca' | 'America/Argentina/Cordoba' | 'America/Argentina/Jujuy' | 'America/Argentina/La_Rioja' | 'America/Argentina/Mendoza' | 'America/Argentina/Rio_Gallegos' | 'America/Argentina/Salta' | 'America/Argentina/San_Juan' | 'America/Argentina/San_Luis' | 'America/Argentina/Tucuman' | 'America/Argentina/Ushuaia' | 'America/Asuncion' | 'America/Atikokan' | 'America/Bahia' | 'America/Bahia_Banderas' | 'America/Barbados' | 'America/Belem' | 'America/Belize' | 'America/Blanc-Sablon' | 'America/Boa_Vista' | 'America/Bogota' | 'America/Boise' | 'America/Cambridge_Bay' | 'America/Campo_Grande' | 'America/Cancun' | 'America/Caracas' | 'America/Cayenne' | 'America/Chicago' | 'America/Chihuahua' | 'America/Costa_Rica' | 'America/Creston' | 'America/Cuiaba' | 'America/Curacao' | 'America/Danmarkshavn' | 'America/Dawson' | 'America/Dawson_Creek' | 'America/Denver' | 'America/Detroit' | 'America/Edmonton' | 'America/Eirunepe' | 'America/El_Salvador' | 'America/Fort_Nelson' | 'America/Fortaleza' | 'America/Glace_Bay' | 'America/Goose_Bay' | 'America/Grand_Turk' | 'America/Guatemala' | 'America/Guayaquil' | 'America/Guyana' | 'America/Halifax' | 'America/Havana' | 'America/Hermosillo' | 'America/Indiana/Indianapolis' | 'America/Indiana/Knox' | 'America/Indiana/Marengo' | 'America/Indiana/Petersburg' | 'America/Indiana/Tell_City' | 'America/Indiana/Vevay' | 'America/Indiana/Vincennes' | 'America/Indiana/Winamac' | 'America/Inuvik' | 'America/Iqaluit' | 'America/Jamaica' | 'America/Juneau' | 'America/Kentucky/Louisville' | 'America/Kentucky/Monticello' | 'America/La_Paz' | 'America/Lima' | 'America/Los_Angeles' | 'America/Maceio' | 'America/Managua' | 'America/Manaus' | 'America/Martinique' | 'America/Matamoros' | 'America/Mazatlan' | 'America/Menominee' | 'America/Merida' | 'America/Metlakatla' | 'America/Mexico_City' | 'America/Miquelon' | 'America/Moncton' | 'America/Monterrey' | 'America/Montevideo' | 'America/Nassau' | 'America/New_York' | 'America/Nipigon' | 'America/Nome' | 'America/Noronha' | 'America/North_Dakota/Beulah' | 'America/North_Dakota/Center' | 'America/North_Dakota/New_Salem' | 'America/Nuuk' | 'America/Ojinaga' | 'America/Panama' | 'America/Pangnirtung' | 'America/Paramaribo' | 'America/Phoenix' | 'America/Port-au-Prince' | 'America/Port_of_Spain' | 'America/Porto_Velho' | 'America/Puerto_Rico' | 'America/Punta_Arenas' | 'America/Rainy_River' | 'America/Rankin_Inlet' | 'America/Recife' | 'America/Regina' | 'America/Resolute' | 'America/Rio_Branco' | 'America/Santarem' | 'America/Santiago' | 'America/Santo_Domingo' | 'America/Sao_Paulo' | 'America/Scoresbysund' | 'America/Sitka' | 'America/St_Johns' | 'America/Swift_Current' | 'America/Tegucigalpa' | 'America/Thule' | 'America/Thunder_Bay' | 'America/Tijuana' | 'America/Toronto' | 'America/Vancouver' | 'America/Whitehorse' | 'America/Winnipeg' | 'America/Yakutat' | 'America/Yellowknife' | 'Antarctica/Casey' | 'Antarctica/Davis' | 'Antarctica/DumontDUrville' | 'Antarctica/Macquarie' | 'Antarctica/Mawson' | 'Antarctica/Palmer' | 'Antarctica/Rothera' | 'Antarctica/Syowa' | 'Antarctica/Troll' | 'Antarctica/Vostok' | 'Asia/Almaty' | 'Asia/Amman' | 'Asia/Anadyr' | 'Asia/Aqtau' | 'Asia/Aqtobe' | 'Asia/Ashgabat' | 'Asia/Atyrau' | 'Asia/Baghdad' | 'Asia/Baku' | 'Asia/Bangkok' | 'Asia/Barnaul' | 'Asia/Beirut' | 'Asia/Bishkek' | 'Asia/Brunei' | 'Asia/Chita' | 'Asia/Choibalsan' | 'Asia/Colombo' | 'Asia/Damascus' | 'Asia/Dhaka' | 'Asia/Dili' | 'Asia/Dubai' | 'Asia/Dushanbe' | 'Asia/Famagusta' | 'Asia/Gaza' | 'Asia/Hebron' | 'Asia/Ho_Chi_Minh' | 'Asia/Hong_Kong' | 'Asia/Hovd' | 'Asia/Irkutsk' | 'Asia/Jakarta' | 'Asia/Jayapura' | 'Asia/Jerusalem' | 'Asia/Kabul' | 'Asia/Kamchatka' | 'Asia/Karachi' | 'Asia/Kathmandu' | 'Asia/Khandyga' | 'Asia/Kolkata' | 'Asia/Krasnoyarsk' | 'Asia/Kuala_Lumpur' | 'Asia/Kuching' | 'Asia/Macau' | 'Asia/Magadan' | 'Asia/Makassar' | 'Asia/Manila' | 'Asia/Nicosia' | 'Asia/Novokuznetsk' | 'Asia/Novosibirsk' | 'Asia/Omsk' | 'Asia/Oral' | 'Asia/Pontianak' | 'Asia/Pyongyang' | 'Asia/Qatar' | 'Asia/Qostanay' | 'Asia/Qyzylorda' | 'Asia/Riyadh' | 'Asia/Sakhalin' | 'Asia/Samarkand' | 'Asia/Seoul' | 'Asia/Shanghai' | 'Asia/Singapore' | 'Asia/Srednekolymsk' | 'Asia/Taipei' | 'Asia/Tashkent' | 'Asia/Tbilisi' | 'Asia/Tehran' | 'Asia/Thimphu' | 'Asia/Tokyo' | 'Asia/Tomsk' | 'Asia/Ulaanbaatar' | 'Asia/Urumqi' | 'Asia/Ust-Nera' | 'Asia/Vladivostok' | 'Asia/Yakutsk' | 'Asia/Yangon' | 'Asia/Yekaterinburg' | 'Asia/Yerevan' | 'Atlantic/Azores' | 'Atlantic/Bermuda' | 'Atlantic/Canary' | 'Atlantic/Cape_Verde' | 'Atlantic/Faroe' | 'Atlantic/Madeira' | 'Atlantic/Reykjavik' | 'Atlantic/South_Georgia' | 'Atlantic/Stanley' | 'Australia/Adelaide' | 'Australia/Brisbane' | 'Australia/Broken_Hill' | 'Australia/Currie' | 'Australia/Darwin' | 'Australia/Eucla' | 'Australia/Hobart' | 'Australia/Lindeman' | 'Australia/Lord_Howe' | 'Australia/Melbourne' | 'Australia/Perth' | 'Australia/Sydney' | 'CET' | 'CST6CDT' | 'EET' | 'EST' | 'EST5EDT' | 'Etc/GMT' | 'Etc/GMT+1' | 'Etc/GMT+10' | 'Etc/GMT+11' | 'Etc/GMT+12' | 'Etc/GMT+2' | 'Etc/GMT+3' | 'Etc/GMT+4' | 'Etc/GMT+5' | 'Etc/GMT+6' | 'Etc/GMT+7' | 'Etc/GMT+8' | 'Etc/GMT+9' | 'Etc/GMT-1' | 'Etc/GMT-10' | 'Etc/GMT-11' | 'Etc/GMT-12' | 'Etc/GMT-13' | 'Etc/GMT-14' | 'Etc/GMT-2' | 'Etc/GMT-3' | 'Etc/GMT-4' | 'Etc/GMT-5' | 'Etc/GMT-6' | 'Etc/GMT-7' | 'Etc/GMT-8' | 'Etc/GMT-9' | 'Etc/UTC' | 'Europe/Amsterdam' | 'Europe/Andorra' | 'Europe/Astrakhan' | 'Europe/Athens' | 'Europe/Belgrade' | 'Europe/Berlin' | 'Europe/Brussels' | 'Europe/Bucharest' | 'Europe/Budapest' | 'Europe/Chisinau' | 'Europe/Copenhagen' | 'Europe/Dublin' | 'Europe/Gibraltar' | 'Europe/Helsinki' | 'Europe/Istanbul' | 'Europe/Kaliningrad' | 'Europe/Kiev' | 'Europe/Kirov' | 'Europe/Lisbon' | 'Europe/London' | 'Europe/Luxembourg' | 'Europe/Madrid' | 'Europe/Malta' | 'Europe/Minsk' | 'Europe/Monaco' | 'Europe/Moscow' | 'Europe/Oslo' | 'Europe/Paris' | 'Europe/Prague' | 'Europe/Riga' | 'Europe/Rome' | 'Europe/Samara' | 'Europe/Saratov' | 'Europe/Simferopol' | 'Europe/Sofia' | 'Europe/Stockholm' | 'Europe/Tallinn' | 'Europe/Tirane' | 'Europe/Ulyanovsk' | 'Europe/Uzhgorod' | 'Europe/Vienna' | 'Europe/Vilnius' | 'Europe/Volgograd' | 'Europe/Warsaw' | 'Europe/Zaporozhye' | 'Europe/Zurich' | 'HST' | 'Indian/Chagos' | 'Indian/Christmas' | 'Indian/Cocos' | 'Indian/Kerguelen' | 'Indian/Mahe' | 'Indian/Maldives' | 'Indian/Mauritius' | 'Indian/Reunion' | 'MET' | 'MST' | 'MST7MDT' | 'PST8PDT' | 'Pacific/Apia' | 'Pacific/Auckland' | 'Pacific/Bougainville' | 'Pacific/Chatham' | 'Pacific/Chuuk' | 'Pacific/Easter' | 'Pacific/Efate' | 'Pacific/Enderbury' | 'Pacific/Fakaofo' | 'Pacific/Fiji' | 'Pacific/Funafuti' | 'Pacific/Galapagos' | 'Pacific/Gambier' | 'Pacific/Guadalcanal' | 'Pacific/Guam' | 'Pacific/Honolulu' | 'Pacific/Kiritimati' | 'Pacific/Kosrae' | 'Pacific/Kwajalein' | 'Pacific/Majuro' | 'Pacific/Marquesas' | 'Pacific/Nauru' | 'Pacific/Niue' | 'Pacific/Norfolk' | 'Pacific/Noumea' | 'Pacific/Pago_Pago' | 'Pacific/Palau' | 'Pacific/Pitcairn' | 'Pacific/Pohnpei' | 'Pacific/Port_Moresby' | 'Pacific/Rarotonga' | 'Pacific/Tahiti' | 'Pacific/Tarawa' | 'Pacific/Tongatapu' | 'Pacific/Wake' | 'Pacific/Wallis' | 'WET' | 'null';
    export const TimezoneEnum = {
        AfricaAbidjan: 'Africa/Abidjan' as TimezoneEnum,
        AfricaAccra: 'Africa/Accra' as TimezoneEnum,
        AfricaAlgiers: 'Africa/Algiers' as TimezoneEnum,
        AfricaBissau: 'Africa/Bissau' as TimezoneEnum,
        AfricaCairo: 'Africa/Cairo' as TimezoneEnum,
        AfricaCasablanca: 'Africa/Casablanca' as TimezoneEnum,
        AfricaCeuta: 'Africa/Ceuta' as TimezoneEnum,
        AfricaElAaiun: 'Africa/El_Aaiun' as TimezoneEnum,
        AfricaJohannesburg: 'Africa/Johannesburg' as TimezoneEnum,
        AfricaJuba: 'Africa/Juba' as TimezoneEnum,
        AfricaKhartoum: 'Africa/Khartoum' as TimezoneEnum,
        AfricaLagos: 'Africa/Lagos' as TimezoneEnum,
        AfricaMaputo: 'Africa/Maputo' as TimezoneEnum,
        AfricaMonrovia: 'Africa/Monrovia' as TimezoneEnum,
        AfricaNairobi: 'Africa/Nairobi' as TimezoneEnum,
        AfricaNdjamena: 'Africa/Ndjamena' as TimezoneEnum,
        AfricaSaoTome: 'Africa/Sao_Tome' as TimezoneEnum,
        AfricaTripoli: 'Africa/Tripoli' as TimezoneEnum,
        AfricaTunis: 'Africa/Tunis' as TimezoneEnum,
        AfricaWindhoek: 'Africa/Windhoek' as TimezoneEnum,
        AmericaAdak: 'America/Adak' as TimezoneEnum,
        AmericaAnchorage: 'America/Anchorage' as TimezoneEnum,
        AmericaAraguaina: 'America/Araguaina' as TimezoneEnum,
        AmericaArgentinaBuenosAires: 'America/Argentina/Buenos_Aires' as TimezoneEnum,
        AmericaArgentinaCatamarca: 'America/Argentina/Catamarca' as TimezoneEnum,
        AmericaArgentinaCordoba: 'America/Argentina/Cordoba' as TimezoneEnum,
        AmericaArgentinaJujuy: 'America/Argentina/Jujuy' as TimezoneEnum,
        AmericaArgentinaLaRioja: 'America/Argentina/La_Rioja' as TimezoneEnum,
        AmericaArgentinaMendoza: 'America/Argentina/Mendoza' as TimezoneEnum,
        AmericaArgentinaRioGallegos: 'America/Argentina/Rio_Gallegos' as TimezoneEnum,
        AmericaArgentinaSalta: 'America/Argentina/Salta' as TimezoneEnum,
        AmericaArgentinaSanJuan: 'America/Argentina/San_Juan' as TimezoneEnum,
        AmericaArgentinaSanLuis: 'America/Argentina/San_Luis' as TimezoneEnum,
        AmericaArgentinaTucuman: 'America/Argentina/Tucuman' as TimezoneEnum,
        AmericaArgentinaUshuaia: 'America/Argentina/Ushuaia' as TimezoneEnum,
        AmericaAsuncion: 'America/Asuncion' as TimezoneEnum,
        AmericaAtikokan: 'America/Atikokan' as TimezoneEnum,
        AmericaBahia: 'America/Bahia' as TimezoneEnum,
        AmericaBahiaBanderas: 'America/Bahia_Banderas' as TimezoneEnum,
        AmericaBarbados: 'America/Barbados' as TimezoneEnum,
        AmericaBelem: 'America/Belem' as TimezoneEnum,
        AmericaBelize: 'America/Belize' as TimezoneEnum,
        AmericaBlancSablon: 'America/Blanc-Sablon' as TimezoneEnum,
        AmericaBoaVista: 'America/Boa_Vista' as TimezoneEnum,
        AmericaBogota: 'America/Bogota' as TimezoneEnum,
        AmericaBoise: 'America/Boise' as TimezoneEnum,
        AmericaCambridgeBay: 'America/Cambridge_Bay' as TimezoneEnum,
        AmericaCampoGrande: 'America/Campo_Grande' as TimezoneEnum,
        AmericaCancun: 'America/Cancun' as TimezoneEnum,
        AmericaCaracas: 'America/Caracas' as TimezoneEnum,
        AmericaCayenne: 'America/Cayenne' as TimezoneEnum,
        AmericaChicago: 'America/Chicago' as TimezoneEnum,
        AmericaChihuahua: 'America/Chihuahua' as TimezoneEnum,
        AmericaCostaRica: 'America/Costa_Rica' as TimezoneEnum,
        AmericaCreston: 'America/Creston' as TimezoneEnum,
        AmericaCuiaba: 'America/Cuiaba' as TimezoneEnum,
        AmericaCuracao: 'America/Curacao' as TimezoneEnum,
        AmericaDanmarkshavn: 'America/Danmarkshavn' as TimezoneEnum,
        AmericaDawson: 'America/Dawson' as TimezoneEnum,
        AmericaDawsonCreek: 'America/Dawson_Creek' as TimezoneEnum,
        AmericaDenver: 'America/Denver' as TimezoneEnum,
        AmericaDetroit: 'America/Detroit' as TimezoneEnum,
        AmericaEdmonton: 'America/Edmonton' as TimezoneEnum,
        AmericaEirunepe: 'America/Eirunepe' as TimezoneEnum,
        AmericaElSalvador: 'America/El_Salvador' as TimezoneEnum,
        AmericaFortNelson: 'America/Fort_Nelson' as TimezoneEnum,
        AmericaFortaleza: 'America/Fortaleza' as TimezoneEnum,
        AmericaGlaceBay: 'America/Glace_Bay' as TimezoneEnum,
        AmericaGooseBay: 'America/Goose_Bay' as TimezoneEnum,
        AmericaGrandTurk: 'America/Grand_Turk' as TimezoneEnum,
        AmericaGuatemala: 'America/Guatemala' as TimezoneEnum,
        AmericaGuayaquil: 'America/Guayaquil' as TimezoneEnum,
        AmericaGuyana: 'America/Guyana' as TimezoneEnum,
        AmericaHalifax: 'America/Halifax' as TimezoneEnum,
        AmericaHavana: 'America/Havana' as TimezoneEnum,
        AmericaHermosillo: 'America/Hermosillo' as TimezoneEnum,
        AmericaIndianaIndianapolis: 'America/Indiana/Indianapolis' as TimezoneEnum,
        AmericaIndianaKnox: 'America/Indiana/Knox' as TimezoneEnum,
        AmericaIndianaMarengo: 'America/Indiana/Marengo' as TimezoneEnum,
        AmericaIndianaPetersburg: 'America/Indiana/Petersburg' as TimezoneEnum,
        AmericaIndianaTellCity: 'America/Indiana/Tell_City' as TimezoneEnum,
        AmericaIndianaVevay: 'America/Indiana/Vevay' as TimezoneEnum,
        AmericaIndianaVincennes: 'America/Indiana/Vincennes' as TimezoneEnum,
        AmericaIndianaWinamac: 'America/Indiana/Winamac' as TimezoneEnum,
        AmericaInuvik: 'America/Inuvik' as TimezoneEnum,
        AmericaIqaluit: 'America/Iqaluit' as TimezoneEnum,
        AmericaJamaica: 'America/Jamaica' as TimezoneEnum,
        AmericaJuneau: 'America/Juneau' as TimezoneEnum,
        AmericaKentuckyLouisville: 'America/Kentucky/Louisville' as TimezoneEnum,
        AmericaKentuckyMonticello: 'America/Kentucky/Monticello' as TimezoneEnum,
        AmericaLaPaz: 'America/La_Paz' as TimezoneEnum,
        AmericaLima: 'America/Lima' as TimezoneEnum,
        AmericaLosAngeles: 'America/Los_Angeles' as TimezoneEnum,
        AmericaMaceio: 'America/Maceio' as TimezoneEnum,
        AmericaManagua: 'America/Managua' as TimezoneEnum,
        AmericaManaus: 'America/Manaus' as TimezoneEnum,
        AmericaMartinique: 'America/Martinique' as TimezoneEnum,
        AmericaMatamoros: 'America/Matamoros' as TimezoneEnum,
        AmericaMazatlan: 'America/Mazatlan' as TimezoneEnum,
        AmericaMenominee: 'America/Menominee' as TimezoneEnum,
        AmericaMerida: 'America/Merida' as TimezoneEnum,
        AmericaMetlakatla: 'America/Metlakatla' as TimezoneEnum,
        AmericaMexicoCity: 'America/Mexico_City' as TimezoneEnum,
        AmericaMiquelon: 'America/Miquelon' as TimezoneEnum,
        AmericaMoncton: 'America/Moncton' as TimezoneEnum,
        AmericaMonterrey: 'America/Monterrey' as TimezoneEnum,
        AmericaMontevideo: 'America/Montevideo' as TimezoneEnum,
        AmericaNassau: 'America/Nassau' as TimezoneEnum,
        AmericaNewYork: 'America/New_York' as TimezoneEnum,
        AmericaNipigon: 'America/Nipigon' as TimezoneEnum,
        AmericaNome: 'America/Nome' as TimezoneEnum,
        AmericaNoronha: 'America/Noronha' as TimezoneEnum,
        AmericaNorthDakotaBeulah: 'America/North_Dakota/Beulah' as TimezoneEnum,
        AmericaNorthDakotaCenter: 'America/North_Dakota/Center' as TimezoneEnum,
        AmericaNorthDakotaNewSalem: 'America/North_Dakota/New_Salem' as TimezoneEnum,
        AmericaNuuk: 'America/Nuuk' as TimezoneEnum,
        AmericaOjinaga: 'America/Ojinaga' as TimezoneEnum,
        AmericaPanama: 'America/Panama' as TimezoneEnum,
        AmericaPangnirtung: 'America/Pangnirtung' as TimezoneEnum,
        AmericaParamaribo: 'America/Paramaribo' as TimezoneEnum,
        AmericaPhoenix: 'America/Phoenix' as TimezoneEnum,
        AmericaPortAuPrince: 'America/Port-au-Prince' as TimezoneEnum,
        AmericaPortOfSpain: 'America/Port_of_Spain' as TimezoneEnum,
        AmericaPortoVelho: 'America/Porto_Velho' as TimezoneEnum,
        AmericaPuertoRico: 'America/Puerto_Rico' as TimezoneEnum,
        AmericaPuntaArenas: 'America/Punta_Arenas' as TimezoneEnum,
        AmericaRainyRiver: 'America/Rainy_River' as TimezoneEnum,
        AmericaRankinInlet: 'America/Rankin_Inlet' as TimezoneEnum,
        AmericaRecife: 'America/Recife' as TimezoneEnum,
        AmericaRegina: 'America/Regina' as TimezoneEnum,
        AmericaResolute: 'America/Resolute' as TimezoneEnum,
        AmericaRioBranco: 'America/Rio_Branco' as TimezoneEnum,
        AmericaSantarem: 'America/Santarem' as TimezoneEnum,
        AmericaSantiago: 'America/Santiago' as TimezoneEnum,
        AmericaSantoDomingo: 'America/Santo_Domingo' as TimezoneEnum,
        AmericaSaoPaulo: 'America/Sao_Paulo' as TimezoneEnum,
        AmericaScoresbysund: 'America/Scoresbysund' as TimezoneEnum,
        AmericaSitka: 'America/Sitka' as TimezoneEnum,
        AmericaStJohns: 'America/St_Johns' as TimezoneEnum,
        AmericaSwiftCurrent: 'America/Swift_Current' as TimezoneEnum,
        AmericaTegucigalpa: 'America/Tegucigalpa' as TimezoneEnum,
        AmericaThule: 'America/Thule' as TimezoneEnum,
        AmericaThunderBay: 'America/Thunder_Bay' as TimezoneEnum,
        AmericaTijuana: 'America/Tijuana' as TimezoneEnum,
        AmericaToronto: 'America/Toronto' as TimezoneEnum,
        AmericaVancouver: 'America/Vancouver' as TimezoneEnum,
        AmericaWhitehorse: 'America/Whitehorse' as TimezoneEnum,
        AmericaWinnipeg: 'America/Winnipeg' as TimezoneEnum,
        AmericaYakutat: 'America/Yakutat' as TimezoneEnum,
        AmericaYellowknife: 'America/Yellowknife' as TimezoneEnum,
        AntarcticaCasey: 'Antarctica/Casey' as TimezoneEnum,
        AntarcticaDavis: 'Antarctica/Davis' as TimezoneEnum,
        AntarcticaDumontDUrville: 'Antarctica/DumontDUrville' as TimezoneEnum,
        AntarcticaMacquarie: 'Antarctica/Macquarie' as TimezoneEnum,
        AntarcticaMawson: 'Antarctica/Mawson' as TimezoneEnum,
        AntarcticaPalmer: 'Antarctica/Palmer' as TimezoneEnum,
        AntarcticaRothera: 'Antarctica/Rothera' as TimezoneEnum,
        AntarcticaSyowa: 'Antarctica/Syowa' as TimezoneEnum,
        AntarcticaTroll: 'Antarctica/Troll' as TimezoneEnum,
        AntarcticaVostok: 'Antarctica/Vostok' as TimezoneEnum,
        AsiaAlmaty: 'Asia/Almaty' as TimezoneEnum,
        AsiaAmman: 'Asia/Amman' as TimezoneEnum,
        AsiaAnadyr: 'Asia/Anadyr' as TimezoneEnum,
        AsiaAqtau: 'Asia/Aqtau' as TimezoneEnum,
        AsiaAqtobe: 'Asia/Aqtobe' as TimezoneEnum,
        AsiaAshgabat: 'Asia/Ashgabat' as TimezoneEnum,
        AsiaAtyrau: 'Asia/Atyrau' as TimezoneEnum,
        AsiaBaghdad: 'Asia/Baghdad' as TimezoneEnum,
        AsiaBaku: 'Asia/Baku' as TimezoneEnum,
        AsiaBangkok: 'Asia/Bangkok' as TimezoneEnum,
        AsiaBarnaul: 'Asia/Barnaul' as TimezoneEnum,
        AsiaBeirut: 'Asia/Beirut' as TimezoneEnum,
        AsiaBishkek: 'Asia/Bishkek' as TimezoneEnum,
        AsiaBrunei: 'Asia/Brunei' as TimezoneEnum,
        AsiaChita: 'Asia/Chita' as TimezoneEnum,
        AsiaChoibalsan: 'Asia/Choibalsan' as TimezoneEnum,
        AsiaColombo: 'Asia/Colombo' as TimezoneEnum,
        AsiaDamascus: 'Asia/Damascus' as TimezoneEnum,
        AsiaDhaka: 'Asia/Dhaka' as TimezoneEnum,
        AsiaDili: 'Asia/Dili' as TimezoneEnum,
        AsiaDubai: 'Asia/Dubai' as TimezoneEnum,
        AsiaDushanbe: 'Asia/Dushanbe' as TimezoneEnum,
        AsiaFamagusta: 'Asia/Famagusta' as TimezoneEnum,
        AsiaGaza: 'Asia/Gaza' as TimezoneEnum,
        AsiaHebron: 'Asia/Hebron' as TimezoneEnum,
        AsiaHoChiMinh: 'Asia/Ho_Chi_Minh' as TimezoneEnum,
        AsiaHongKong: 'Asia/Hong_Kong' as TimezoneEnum,
        AsiaHovd: 'Asia/Hovd' as TimezoneEnum,
        AsiaIrkutsk: 'Asia/Irkutsk' as TimezoneEnum,
        AsiaJakarta: 'Asia/Jakarta' as TimezoneEnum,
        AsiaJayapura: 'Asia/Jayapura' as TimezoneEnum,
        AsiaJerusalem: 'Asia/Jerusalem' as TimezoneEnum,
        AsiaKabul: 'Asia/Kabul' as TimezoneEnum,
        AsiaKamchatka: 'Asia/Kamchatka' as TimezoneEnum,
        AsiaKarachi: 'Asia/Karachi' as TimezoneEnum,
        AsiaKathmandu: 'Asia/Kathmandu' as TimezoneEnum,
        AsiaKhandyga: 'Asia/Khandyga' as TimezoneEnum,
        AsiaKolkata: 'Asia/Kolkata' as TimezoneEnum,
        AsiaKrasnoyarsk: 'Asia/Krasnoyarsk' as TimezoneEnum,
        AsiaKualaLumpur: 'Asia/Kuala_Lumpur' as TimezoneEnum,
        AsiaKuching: 'Asia/Kuching' as TimezoneEnum,
        AsiaMacau: 'Asia/Macau' as TimezoneEnum,
        AsiaMagadan: 'Asia/Magadan' as TimezoneEnum,
        AsiaMakassar: 'Asia/Makassar' as TimezoneEnum,
        AsiaManila: 'Asia/Manila' as TimezoneEnum,
        AsiaNicosia: 'Asia/Nicosia' as TimezoneEnum,
        AsiaNovokuznetsk: 'Asia/Novokuznetsk' as TimezoneEnum,
        AsiaNovosibirsk: 'Asia/Novosibirsk' as TimezoneEnum,
        AsiaOmsk: 'Asia/Omsk' as TimezoneEnum,
        AsiaOral: 'Asia/Oral' as TimezoneEnum,
        AsiaPontianak: 'Asia/Pontianak' as TimezoneEnum,
        AsiaPyongyang: 'Asia/Pyongyang' as TimezoneEnum,
        AsiaQatar: 'Asia/Qatar' as TimezoneEnum,
        AsiaQostanay: 'Asia/Qostanay' as TimezoneEnum,
        AsiaQyzylorda: 'Asia/Qyzylorda' as TimezoneEnum,
        AsiaRiyadh: 'Asia/Riyadh' as TimezoneEnum,
        AsiaSakhalin: 'Asia/Sakhalin' as TimezoneEnum,
        AsiaSamarkand: 'Asia/Samarkand' as TimezoneEnum,
        AsiaSeoul: 'Asia/Seoul' as TimezoneEnum,
        AsiaShanghai: 'Asia/Shanghai' as TimezoneEnum,
        AsiaSingapore: 'Asia/Singapore' as TimezoneEnum,
        AsiaSrednekolymsk: 'Asia/Srednekolymsk' as TimezoneEnum,
        AsiaTaipei: 'Asia/Taipei' as TimezoneEnum,
        AsiaTashkent: 'Asia/Tashkent' as TimezoneEnum,
        AsiaTbilisi: 'Asia/Tbilisi' as TimezoneEnum,
        AsiaTehran: 'Asia/Tehran' as TimezoneEnum,
        AsiaThimphu: 'Asia/Thimphu' as TimezoneEnum,
        AsiaTokyo: 'Asia/Tokyo' as TimezoneEnum,
        AsiaTomsk: 'Asia/Tomsk' as TimezoneEnum,
        AsiaUlaanbaatar: 'Asia/Ulaanbaatar' as TimezoneEnum,
        AsiaUrumqi: 'Asia/Urumqi' as TimezoneEnum,
        AsiaUstNera: 'Asia/Ust-Nera' as TimezoneEnum,
        AsiaVladivostok: 'Asia/Vladivostok' as TimezoneEnum,
        AsiaYakutsk: 'Asia/Yakutsk' as TimezoneEnum,
        AsiaYangon: 'Asia/Yangon' as TimezoneEnum,
        AsiaYekaterinburg: 'Asia/Yekaterinburg' as TimezoneEnum,
        AsiaYerevan: 'Asia/Yerevan' as TimezoneEnum,
        AtlanticAzores: 'Atlantic/Azores' as TimezoneEnum,
        AtlanticBermuda: 'Atlantic/Bermuda' as TimezoneEnum,
        AtlanticCanary: 'Atlantic/Canary' as TimezoneEnum,
        AtlanticCapeVerde: 'Atlantic/Cape_Verde' as TimezoneEnum,
        AtlanticFaroe: 'Atlantic/Faroe' as TimezoneEnum,
        AtlanticMadeira: 'Atlantic/Madeira' as TimezoneEnum,
        AtlanticReykjavik: 'Atlantic/Reykjavik' as TimezoneEnum,
        AtlanticSouthGeorgia: 'Atlantic/South_Georgia' as TimezoneEnum,
        AtlanticStanley: 'Atlantic/Stanley' as TimezoneEnum,
        AustraliaAdelaide: 'Australia/Adelaide' as TimezoneEnum,
        AustraliaBrisbane: 'Australia/Brisbane' as TimezoneEnum,
        AustraliaBrokenHill: 'Australia/Broken_Hill' as TimezoneEnum,
        AustraliaCurrie: 'Australia/Currie' as TimezoneEnum,
        AustraliaDarwin: 'Australia/Darwin' as TimezoneEnum,
        AustraliaEucla: 'Australia/Eucla' as TimezoneEnum,
        AustraliaHobart: 'Australia/Hobart' as TimezoneEnum,
        AustraliaLindeman: 'Australia/Lindeman' as TimezoneEnum,
        AustraliaLordHowe: 'Australia/Lord_Howe' as TimezoneEnum,
        AustraliaMelbourne: 'Australia/Melbourne' as TimezoneEnum,
        AustraliaPerth: 'Australia/Perth' as TimezoneEnum,
        AustraliaSydney: 'Australia/Sydney' as TimezoneEnum,
        Cet: 'CET' as TimezoneEnum,
        Cst6Cdt: 'CST6CDT' as TimezoneEnum,
        Eet: 'EET' as TimezoneEnum,
        Est: 'EST' as TimezoneEnum,
        Est5Edt: 'EST5EDT' as TimezoneEnum,
        EtcGmt: 'Etc/GMT' as TimezoneEnum,
        EtcGmt1: 'Etc/GMT+1' as TimezoneEnum,
        EtcGmt10: 'Etc/GMT+10' as TimezoneEnum,
        EtcGmt11: 'Etc/GMT+11' as TimezoneEnum,
        EtcGmt122: 'Etc/GMT+12' as TimezoneEnum,
        EtcGmt2: 'Etc/GMT+2' as TimezoneEnum,
        EtcGmt3: 'Etc/GMT+3' as TimezoneEnum,
        EtcGmt4: 'Etc/GMT+4' as TimezoneEnum,
        EtcGmt5: 'Etc/GMT+5' as TimezoneEnum,
        EtcGmt6: 'Etc/GMT+6' as TimezoneEnum,
        EtcGmt7: 'Etc/GMT+7' as TimezoneEnum,
        EtcGmt8: 'Etc/GMT+8' as TimezoneEnum,
        EtcGmt9: 'Etc/GMT+9' as TimezoneEnum,
        EtcGmt12: 'Etc/GMT-1' as TimezoneEnum,
        EtcGmt102: 'Etc/GMT-10' as TimezoneEnum,
        EtcGmt112: 'Etc/GMT-11' as TimezoneEnum,
        EtcGmt122: 'Etc/GMT-12' as TimezoneEnum,
        EtcGmt13: 'Etc/GMT-13' as TimezoneEnum,
        EtcGmt14: 'Etc/GMT-14' as TimezoneEnum,
        EtcGmt22: 'Etc/GMT-2' as TimezoneEnum,
        EtcGmt32: 'Etc/GMT-3' as TimezoneEnum,
        EtcGmt42: 'Etc/GMT-4' as TimezoneEnum,
        EtcGmt52: 'Etc/GMT-5' as TimezoneEnum,
        EtcGmt62: 'Etc/GMT-6' as TimezoneEnum,
        EtcGmt72: 'Etc/GMT-7' as TimezoneEnum,
        EtcGmt82: 'Etc/GMT-8' as TimezoneEnum,
        EtcGmt92: 'Etc/GMT-9' as TimezoneEnum,
        EtcUtc: 'Etc/UTC' as TimezoneEnum,
        EuropeAmsterdam: 'Europe/Amsterdam' as TimezoneEnum,
        EuropeAndorra: 'Europe/Andorra' as TimezoneEnum,
        EuropeAstrakhan: 'Europe/Astrakhan' as TimezoneEnum,
        EuropeAthens: 'Europe/Athens' as TimezoneEnum,
        EuropeBelgrade: 'Europe/Belgrade' as TimezoneEnum,
        EuropeBerlin: 'Europe/Berlin' as TimezoneEnum,
        EuropeBrussels: 'Europe/Brussels' as TimezoneEnum,
        EuropeBucharest: 'Europe/Bucharest' as TimezoneEnum,
        EuropeBudapest: 'Europe/Budapest' as TimezoneEnum,
        EuropeChisinau: 'Europe/Chisinau' as TimezoneEnum,
        EuropeCopenhagen: 'Europe/Copenhagen' as TimezoneEnum,
        EuropeDublin: 'Europe/Dublin' as TimezoneEnum,
        EuropeGibraltar: 'Europe/Gibraltar' as TimezoneEnum,
        EuropeHelsinki: 'Europe/Helsinki' as TimezoneEnum,
        EuropeIstanbul: 'Europe/Istanbul' as TimezoneEnum,
        EuropeKaliningrad: 'Europe/Kaliningrad' as TimezoneEnum,
        EuropeKiev: 'Europe/Kiev' as TimezoneEnum,
        EuropeKirov: 'Europe/Kirov' as TimezoneEnum,
        EuropeLisbon: 'Europe/Lisbon' as TimezoneEnum,
        EuropeLondon: 'Europe/London' as TimezoneEnum,
        EuropeLuxembourg: 'Europe/Luxembourg' as TimezoneEnum,
        EuropeMadrid: 'Europe/Madrid' as TimezoneEnum,
        EuropeMalta: 'Europe/Malta' as TimezoneEnum,
        EuropeMinsk: 'Europe/Minsk' as TimezoneEnum,
        EuropeMonaco: 'Europe/Monaco' as TimezoneEnum,
        EuropeMoscow: 'Europe/Moscow' as TimezoneEnum,
        EuropeOslo: 'Europe/Oslo' as TimezoneEnum,
        EuropeParis: 'Europe/Paris' as TimezoneEnum,
        EuropePrague: 'Europe/Prague' as TimezoneEnum,
        EuropeRiga: 'Europe/Riga' as TimezoneEnum,
        EuropeRome: 'Europe/Rome' as TimezoneEnum,
        EuropeSamara: 'Europe/Samara' as TimezoneEnum,
        EuropeSaratov: 'Europe/Saratov' as TimezoneEnum,
        EuropeSimferopol: 'Europe/Simferopol' as TimezoneEnum,
        EuropeSofia: 'Europe/Sofia' as TimezoneEnum,
        EuropeStockholm: 'Europe/Stockholm' as TimezoneEnum,
        EuropeTallinn: 'Europe/Tallinn' as TimezoneEnum,
        EuropeTirane: 'Europe/Tirane' as TimezoneEnum,
        EuropeUlyanovsk: 'Europe/Ulyanovsk' as TimezoneEnum,
        EuropeUzhgorod: 'Europe/Uzhgorod' as TimezoneEnum,
        EuropeVienna: 'Europe/Vienna' as TimezoneEnum,
        EuropeVilnius: 'Europe/Vilnius' as TimezoneEnum,
        EuropeVolgograd: 'Europe/Volgograd' as TimezoneEnum,
        EuropeWarsaw: 'Europe/Warsaw' as TimezoneEnum,
        EuropeZaporozhye: 'Europe/Zaporozhye' as TimezoneEnum,
        EuropeZurich: 'Europe/Zurich' as TimezoneEnum,
        Hst: 'HST' as TimezoneEnum,
        IndianChagos: 'Indian/Chagos' as TimezoneEnum,
        IndianChristmas: 'Indian/Christmas' as TimezoneEnum,
        IndianCocos: 'Indian/Cocos' as TimezoneEnum,
        IndianKerguelen: 'Indian/Kerguelen' as TimezoneEnum,
        IndianMahe: 'Indian/Mahe' as TimezoneEnum,
        IndianMaldives: 'Indian/Maldives' as TimezoneEnum,
        IndianMauritius: 'Indian/Mauritius' as TimezoneEnum,
        IndianReunion: 'Indian/Reunion' as TimezoneEnum,
        Met: 'MET' as TimezoneEnum,
        Mst: 'MST' as TimezoneEnum,
        Mst7Mdt: 'MST7MDT' as TimezoneEnum,
        Pst8Pdt: 'PST8PDT' as TimezoneEnum,
        PacificApia: 'Pacific/Apia' as TimezoneEnum,
        PacificAuckland: 'Pacific/Auckland' as TimezoneEnum,
        PacificBougainville: 'Pacific/Bougainville' as TimezoneEnum,
        PacificChatham: 'Pacific/Chatham' as TimezoneEnum,
        PacificChuuk: 'Pacific/Chuuk' as TimezoneEnum,
        PacificEaster: 'Pacific/Easter' as TimezoneEnum,
        PacificEfate: 'Pacific/Efate' as TimezoneEnum,
        PacificEnderbury: 'Pacific/Enderbury' as TimezoneEnum,
        PacificFakaofo: 'Pacific/Fakaofo' as TimezoneEnum,
        PacificFiji: 'Pacific/Fiji' as TimezoneEnum,
        PacificFunafuti: 'Pacific/Funafuti' as TimezoneEnum,
        PacificGalapagos: 'Pacific/Galapagos' as TimezoneEnum,
        PacificGambier: 'Pacific/Gambier' as TimezoneEnum,
        PacificGuadalcanal: 'Pacific/Guadalcanal' as TimezoneEnum,
        PacificGuam: 'Pacific/Guam' as TimezoneEnum,
        PacificHonolulu: 'Pacific/Honolulu' as TimezoneEnum,
        PacificKiritimati: 'Pacific/Kiritimati' as TimezoneEnum,
        PacificKosrae: 'Pacific/Kosrae' as TimezoneEnum,
        PacificKwajalein: 'Pacific/Kwajalein' as TimezoneEnum,
        PacificMajuro: 'Pacific/Majuro' as TimezoneEnum,
        PacificMarquesas: 'Pacific/Marquesas' as TimezoneEnum,
        PacificNauru: 'Pacific/Nauru' as TimezoneEnum,
        PacificNiue: 'Pacific/Niue' as TimezoneEnum,
        PacificNorfolk: 'Pacific/Norfolk' as TimezoneEnum,
        PacificNoumea: 'Pacific/Noumea' as TimezoneEnum,
        PacificPagoPago: 'Pacific/Pago_Pago' as TimezoneEnum,
        PacificPalau: 'Pacific/Palau' as TimezoneEnum,
        PacificPitcairn: 'Pacific/Pitcairn' as TimezoneEnum,
        PacificPohnpei: 'Pacific/Pohnpei' as TimezoneEnum,
        PacificPortMoresby: 'Pacific/Port_Moresby' as TimezoneEnum,
        PacificRarotonga: 'Pacific/Rarotonga' as TimezoneEnum,
        PacificTahiti: 'Pacific/Tahiti' as TimezoneEnum,
        PacificTarawa: 'Pacific/Tarawa' as TimezoneEnum,
        PacificTongatapu: 'Pacific/Tongatapu' as TimezoneEnum,
        PacificWake: 'Pacific/Wake' as TimezoneEnum,
        PacificWallis: 'Pacific/Wallis' as TimezoneEnum,
        Wet: 'WET' as TimezoneEnum,
        Null: 'null' as TimezoneEnum
    };
}


