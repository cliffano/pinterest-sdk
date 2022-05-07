package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * Optional daily processing schedule. Use this to configure the preferred time for processing a feed (otherwise random).
 */
@ApiModel(description="Optional daily processing schedule. Use this to configure the preferred time for processing a feed (otherwise random).")

public class CatalogsFeedProcessingSchedule  {
  
 /**
  * A time in format HH:MM with leading 0 (zero)
  */
  @ApiModelProperty(example = "02:59", required = true, value = "A time in format HH:MM with leading 0 (zero)")
  private String time;

public enum TimezoneEnum {

    @JsonProperty("Africa/Abidjan") AFRICA_ABIDJAN(String.valueOf("Africa/Abidjan")),
    @JsonProperty("Africa/Accra") AFRICA_ACCRA(String.valueOf("Africa/Accra")),
    @JsonProperty("Africa/Algiers") AFRICA_ALGIERS(String.valueOf("Africa/Algiers")),
    @JsonProperty("Africa/Bissau") AFRICA_BISSAU(String.valueOf("Africa/Bissau")),
    @JsonProperty("Africa/Cairo") AFRICA_CAIRO(String.valueOf("Africa/Cairo")),
    @JsonProperty("Africa/Casablanca") AFRICA_CASABLANCA(String.valueOf("Africa/Casablanca")),
    @JsonProperty("Africa/Ceuta") AFRICA_CEUTA(String.valueOf("Africa/Ceuta")),
    @JsonProperty("Africa/El_Aaiun") AFRICA_EL_AAIUN(String.valueOf("Africa/El_Aaiun")),
    @JsonProperty("Africa/Johannesburg") AFRICA_JOHANNESBURG(String.valueOf("Africa/Johannesburg")),
    @JsonProperty("Africa/Juba") AFRICA_JUBA(String.valueOf("Africa/Juba")),
    @JsonProperty("Africa/Khartoum") AFRICA_KHARTOUM(String.valueOf("Africa/Khartoum")),
    @JsonProperty("Africa/Lagos") AFRICA_LAGOS(String.valueOf("Africa/Lagos")),
    @JsonProperty("Africa/Maputo") AFRICA_MAPUTO(String.valueOf("Africa/Maputo")),
    @JsonProperty("Africa/Monrovia") AFRICA_MONROVIA(String.valueOf("Africa/Monrovia")),
    @JsonProperty("Africa/Nairobi") AFRICA_NAIROBI(String.valueOf("Africa/Nairobi")),
    @JsonProperty("Africa/Ndjamena") AFRICA_NDJAMENA(String.valueOf("Africa/Ndjamena")),
    @JsonProperty("Africa/Sao_Tome") AFRICA_SAO_TOME(String.valueOf("Africa/Sao_Tome")),
    @JsonProperty("Africa/Tripoli") AFRICA_TRIPOLI(String.valueOf("Africa/Tripoli")),
    @JsonProperty("Africa/Tunis") AFRICA_TUNIS(String.valueOf("Africa/Tunis")),
    @JsonProperty("Africa/Windhoek") AFRICA_WINDHOEK(String.valueOf("Africa/Windhoek")),
    @JsonProperty("America/Adak") AMERICA_ADAK(String.valueOf("America/Adak")),
    @JsonProperty("America/Anchorage") AMERICA_ANCHORAGE(String.valueOf("America/Anchorage")),
    @JsonProperty("America/Araguaina") AMERICA_ARAGUAINA(String.valueOf("America/Araguaina")),
    @JsonProperty("America/Argentina/Buenos_Aires") AMERICA_ARGENTINA_BUENOS_AIRES(String.valueOf("America/Argentina/Buenos_Aires")),
    @JsonProperty("America/Argentina/Catamarca") AMERICA_ARGENTINA_CATAMARCA(String.valueOf("America/Argentina/Catamarca")),
    @JsonProperty("America/Argentina/Cordoba") AMERICA_ARGENTINA_CORDOBA(String.valueOf("America/Argentina/Cordoba")),
    @JsonProperty("America/Argentina/Jujuy") AMERICA_ARGENTINA_JUJUY(String.valueOf("America/Argentina/Jujuy")),
    @JsonProperty("America/Argentina/La_Rioja") AMERICA_ARGENTINA_LA_RIOJA(String.valueOf("America/Argentina/La_Rioja")),
    @JsonProperty("America/Argentina/Mendoza") AMERICA_ARGENTINA_MENDOZA(String.valueOf("America/Argentina/Mendoza")),
    @JsonProperty("America/Argentina/Rio_Gallegos") AMERICA_ARGENTINA_RIO_GALLEGOS(String.valueOf("America/Argentina/Rio_Gallegos")),
    @JsonProperty("America/Argentina/Salta") AMERICA_ARGENTINA_SALTA(String.valueOf("America/Argentina/Salta")),
    @JsonProperty("America/Argentina/San_Juan") AMERICA_ARGENTINA_SAN_JUAN(String.valueOf("America/Argentina/San_Juan")),
    @JsonProperty("America/Argentina/San_Luis") AMERICA_ARGENTINA_SAN_LUIS(String.valueOf("America/Argentina/San_Luis")),
    @JsonProperty("America/Argentina/Tucuman") AMERICA_ARGENTINA_TUCUMAN(String.valueOf("America/Argentina/Tucuman")),
    @JsonProperty("America/Argentina/Ushuaia") AMERICA_ARGENTINA_USHUAIA(String.valueOf("America/Argentina/Ushuaia")),
    @JsonProperty("America/Asuncion") AMERICA_ASUNCION(String.valueOf("America/Asuncion")),
    @JsonProperty("America/Atikokan") AMERICA_ATIKOKAN(String.valueOf("America/Atikokan")),
    @JsonProperty("America/Bahia") AMERICA_BAHIA(String.valueOf("America/Bahia")),
    @JsonProperty("America/Bahia_Banderas") AMERICA_BAHIA_BANDERAS(String.valueOf("America/Bahia_Banderas")),
    @JsonProperty("America/Barbados") AMERICA_BARBADOS(String.valueOf("America/Barbados")),
    @JsonProperty("America/Belem") AMERICA_BELEM(String.valueOf("America/Belem")),
    @JsonProperty("America/Belize") AMERICA_BELIZE(String.valueOf("America/Belize")),
    @JsonProperty("America/Blanc-Sablon") AMERICA_BLANC_SABLON(String.valueOf("America/Blanc-Sablon")),
    @JsonProperty("America/Boa_Vista") AMERICA_BOA_VISTA(String.valueOf("America/Boa_Vista")),
    @JsonProperty("America/Bogota") AMERICA_BOGOTA(String.valueOf("America/Bogota")),
    @JsonProperty("America/Boise") AMERICA_BOISE(String.valueOf("America/Boise")),
    @JsonProperty("America/Cambridge_Bay") AMERICA_CAMBRIDGE_BAY(String.valueOf("America/Cambridge_Bay")),
    @JsonProperty("America/Campo_Grande") AMERICA_CAMPO_GRANDE(String.valueOf("America/Campo_Grande")),
    @JsonProperty("America/Cancun") AMERICA_CANCUN(String.valueOf("America/Cancun")),
    @JsonProperty("America/Caracas") AMERICA_CARACAS(String.valueOf("America/Caracas")),
    @JsonProperty("America/Cayenne") AMERICA_CAYENNE(String.valueOf("America/Cayenne")),
    @JsonProperty("America/Chicago") AMERICA_CHICAGO(String.valueOf("America/Chicago")),
    @JsonProperty("America/Chihuahua") AMERICA_CHIHUAHUA(String.valueOf("America/Chihuahua")),
    @JsonProperty("America/Costa_Rica") AMERICA_COSTA_RICA(String.valueOf("America/Costa_Rica")),
    @JsonProperty("America/Creston") AMERICA_CRESTON(String.valueOf("America/Creston")),
    @JsonProperty("America/Cuiaba") AMERICA_CUIABA(String.valueOf("America/Cuiaba")),
    @JsonProperty("America/Curacao") AMERICA_CURACAO(String.valueOf("America/Curacao")),
    @JsonProperty("America/Danmarkshavn") AMERICA_DANMARKSHAVN(String.valueOf("America/Danmarkshavn")),
    @JsonProperty("America/Dawson") AMERICA_DAWSON(String.valueOf("America/Dawson")),
    @JsonProperty("America/Dawson_Creek") AMERICA_DAWSON_CREEK(String.valueOf("America/Dawson_Creek")),
    @JsonProperty("America/Denver") AMERICA_DENVER(String.valueOf("America/Denver")),
    @JsonProperty("America/Detroit") AMERICA_DETROIT(String.valueOf("America/Detroit")),
    @JsonProperty("America/Edmonton") AMERICA_EDMONTON(String.valueOf("America/Edmonton")),
    @JsonProperty("America/Eirunepe") AMERICA_EIRUNEPE(String.valueOf("America/Eirunepe")),
    @JsonProperty("America/El_Salvador") AMERICA_EL_SALVADOR(String.valueOf("America/El_Salvador")),
    @JsonProperty("America/Fort_Nelson") AMERICA_FORT_NELSON(String.valueOf("America/Fort_Nelson")),
    @JsonProperty("America/Fortaleza") AMERICA_FORTALEZA(String.valueOf("America/Fortaleza")),
    @JsonProperty("America/Glace_Bay") AMERICA_GLACE_BAY(String.valueOf("America/Glace_Bay")),
    @JsonProperty("America/Goose_Bay") AMERICA_GOOSE_BAY(String.valueOf("America/Goose_Bay")),
    @JsonProperty("America/Grand_Turk") AMERICA_GRAND_TURK(String.valueOf("America/Grand_Turk")),
    @JsonProperty("America/Guatemala") AMERICA_GUATEMALA(String.valueOf("America/Guatemala")),
    @JsonProperty("America/Guayaquil") AMERICA_GUAYAQUIL(String.valueOf("America/Guayaquil")),
    @JsonProperty("America/Guyana") AMERICA_GUYANA(String.valueOf("America/Guyana")),
    @JsonProperty("America/Halifax") AMERICA_HALIFAX(String.valueOf("America/Halifax")),
    @JsonProperty("America/Havana") AMERICA_HAVANA(String.valueOf("America/Havana")),
    @JsonProperty("America/Hermosillo") AMERICA_HERMOSILLO(String.valueOf("America/Hermosillo")),
    @JsonProperty("America/Indiana/Indianapolis") AMERICA_INDIANA_INDIANAPOLIS(String.valueOf("America/Indiana/Indianapolis")),
    @JsonProperty("America/Indiana/Knox") AMERICA_INDIANA_KNOX(String.valueOf("America/Indiana/Knox")),
    @JsonProperty("America/Indiana/Marengo") AMERICA_INDIANA_MARENGO(String.valueOf("America/Indiana/Marengo")),
    @JsonProperty("America/Indiana/Petersburg") AMERICA_INDIANA_PETERSBURG(String.valueOf("America/Indiana/Petersburg")),
    @JsonProperty("America/Indiana/Tell_City") AMERICA_INDIANA_TELL_CITY(String.valueOf("America/Indiana/Tell_City")),
    @JsonProperty("America/Indiana/Vevay") AMERICA_INDIANA_VEVAY(String.valueOf("America/Indiana/Vevay")),
    @JsonProperty("America/Indiana/Vincennes") AMERICA_INDIANA_VINCENNES(String.valueOf("America/Indiana/Vincennes")),
    @JsonProperty("America/Indiana/Winamac") AMERICA_INDIANA_WINAMAC(String.valueOf("America/Indiana/Winamac")),
    @JsonProperty("America/Inuvik") AMERICA_INUVIK(String.valueOf("America/Inuvik")),
    @JsonProperty("America/Iqaluit") AMERICA_IQALUIT(String.valueOf("America/Iqaluit")),
    @JsonProperty("America/Jamaica") AMERICA_JAMAICA(String.valueOf("America/Jamaica")),
    @JsonProperty("America/Juneau") AMERICA_JUNEAU(String.valueOf("America/Juneau")),
    @JsonProperty("America/Kentucky/Louisville") AMERICA_KENTUCKY_LOUISVILLE(String.valueOf("America/Kentucky/Louisville")),
    @JsonProperty("America/Kentucky/Monticello") AMERICA_KENTUCKY_MONTICELLO(String.valueOf("America/Kentucky/Monticello")),
    @JsonProperty("America/La_Paz") AMERICA_LA_PAZ(String.valueOf("America/La_Paz")),
    @JsonProperty("America/Lima") AMERICA_LIMA(String.valueOf("America/Lima")),
    @JsonProperty("America/Los_Angeles") AMERICA_LOS_ANGELES(String.valueOf("America/Los_Angeles")),
    @JsonProperty("America/Maceio") AMERICA_MACEIO(String.valueOf("America/Maceio")),
    @JsonProperty("America/Managua") AMERICA_MANAGUA(String.valueOf("America/Managua")),
    @JsonProperty("America/Manaus") AMERICA_MANAUS(String.valueOf("America/Manaus")),
    @JsonProperty("America/Martinique") AMERICA_MARTINIQUE(String.valueOf("America/Martinique")),
    @JsonProperty("America/Matamoros") AMERICA_MATAMOROS(String.valueOf("America/Matamoros")),
    @JsonProperty("America/Mazatlan") AMERICA_MAZATLAN(String.valueOf("America/Mazatlan")),
    @JsonProperty("America/Menominee") AMERICA_MENOMINEE(String.valueOf("America/Menominee")),
    @JsonProperty("America/Merida") AMERICA_MERIDA(String.valueOf("America/Merida")),
    @JsonProperty("America/Metlakatla") AMERICA_METLAKATLA(String.valueOf("America/Metlakatla")),
    @JsonProperty("America/Mexico_City") AMERICA_MEXICO_CITY(String.valueOf("America/Mexico_City")),
    @JsonProperty("America/Miquelon") AMERICA_MIQUELON(String.valueOf("America/Miquelon")),
    @JsonProperty("America/Moncton") AMERICA_MONCTON(String.valueOf("America/Moncton")),
    @JsonProperty("America/Monterrey") AMERICA_MONTERREY(String.valueOf("America/Monterrey")),
    @JsonProperty("America/Montevideo") AMERICA_MONTEVIDEO(String.valueOf("America/Montevideo")),
    @JsonProperty("America/Nassau") AMERICA_NASSAU(String.valueOf("America/Nassau")),
    @JsonProperty("America/New_York") AMERICA_NEW_YORK(String.valueOf("America/New_York")),
    @JsonProperty("America/Nipigon") AMERICA_NIPIGON(String.valueOf("America/Nipigon")),
    @JsonProperty("America/Nome") AMERICA_NOME(String.valueOf("America/Nome")),
    @JsonProperty("America/Noronha") AMERICA_NORONHA(String.valueOf("America/Noronha")),
    @JsonProperty("America/North_Dakota/Beulah") AMERICA_NORTH_DAKOTA_BEULAH(String.valueOf("America/North_Dakota/Beulah")),
    @JsonProperty("America/North_Dakota/Center") AMERICA_NORTH_DAKOTA_CENTER(String.valueOf("America/North_Dakota/Center")),
    @JsonProperty("America/North_Dakota/New_Salem") AMERICA_NORTH_DAKOTA_NEW_SALEM(String.valueOf("America/North_Dakota/New_Salem")),
    @JsonProperty("America/Nuuk") AMERICA_NUUK(String.valueOf("America/Nuuk")),
    @JsonProperty("America/Ojinaga") AMERICA_OJINAGA(String.valueOf("America/Ojinaga")),
    @JsonProperty("America/Panama") AMERICA_PANAMA(String.valueOf("America/Panama")),
    @JsonProperty("America/Pangnirtung") AMERICA_PANGNIRTUNG(String.valueOf("America/Pangnirtung")),
    @JsonProperty("America/Paramaribo") AMERICA_PARAMARIBO(String.valueOf("America/Paramaribo")),
    @JsonProperty("America/Phoenix") AMERICA_PHOENIX(String.valueOf("America/Phoenix")),
    @JsonProperty("America/Port-au-Prince") AMERICA_PORT_AU_PRINCE(String.valueOf("America/Port-au-Prince")),
    @JsonProperty("America/Port_of_Spain") AMERICA_PORT_OF_SPAIN(String.valueOf("America/Port_of_Spain")),
    @JsonProperty("America/Porto_Velho") AMERICA_PORTO_VELHO(String.valueOf("America/Porto_Velho")),
    @JsonProperty("America/Puerto_Rico") AMERICA_PUERTO_RICO(String.valueOf("America/Puerto_Rico")),
    @JsonProperty("America/Punta_Arenas") AMERICA_PUNTA_ARENAS(String.valueOf("America/Punta_Arenas")),
    @JsonProperty("America/Rainy_River") AMERICA_RAINY_RIVER(String.valueOf("America/Rainy_River")),
    @JsonProperty("America/Rankin_Inlet") AMERICA_RANKIN_INLET(String.valueOf("America/Rankin_Inlet")),
    @JsonProperty("America/Recife") AMERICA_RECIFE(String.valueOf("America/Recife")),
    @JsonProperty("America/Regina") AMERICA_REGINA(String.valueOf("America/Regina")),
    @JsonProperty("America/Resolute") AMERICA_RESOLUTE(String.valueOf("America/Resolute")),
    @JsonProperty("America/Rio_Branco") AMERICA_RIO_BRANCO(String.valueOf("America/Rio_Branco")),
    @JsonProperty("America/Santarem") AMERICA_SANTAREM(String.valueOf("America/Santarem")),
    @JsonProperty("America/Santiago") AMERICA_SANTIAGO(String.valueOf("America/Santiago")),
    @JsonProperty("America/Santo_Domingo") AMERICA_SANTO_DOMINGO(String.valueOf("America/Santo_Domingo")),
    @JsonProperty("America/Sao_Paulo") AMERICA_SAO_PAULO(String.valueOf("America/Sao_Paulo")),
    @JsonProperty("America/Scoresbysund") AMERICA_SCORESBYSUND(String.valueOf("America/Scoresbysund")),
    @JsonProperty("America/Sitka") AMERICA_SITKA(String.valueOf("America/Sitka")),
    @JsonProperty("America/St_Johns") AMERICA_ST_JOHNS(String.valueOf("America/St_Johns")),
    @JsonProperty("America/Swift_Current") AMERICA_SWIFT_CURRENT(String.valueOf("America/Swift_Current")),
    @JsonProperty("America/Tegucigalpa") AMERICA_TEGUCIGALPA(String.valueOf("America/Tegucigalpa")),
    @JsonProperty("America/Thule") AMERICA_THULE(String.valueOf("America/Thule")),
    @JsonProperty("America/Thunder_Bay") AMERICA_THUNDER_BAY(String.valueOf("America/Thunder_Bay")),
    @JsonProperty("America/Tijuana") AMERICA_TIJUANA(String.valueOf("America/Tijuana")),
    @JsonProperty("America/Toronto") AMERICA_TORONTO(String.valueOf("America/Toronto")),
    @JsonProperty("America/Vancouver") AMERICA_VANCOUVER(String.valueOf("America/Vancouver")),
    @JsonProperty("America/Whitehorse") AMERICA_WHITEHORSE(String.valueOf("America/Whitehorse")),
    @JsonProperty("America/Winnipeg") AMERICA_WINNIPEG(String.valueOf("America/Winnipeg")),
    @JsonProperty("America/Yakutat") AMERICA_YAKUTAT(String.valueOf("America/Yakutat")),
    @JsonProperty("America/Yellowknife") AMERICA_YELLOWKNIFE(String.valueOf("America/Yellowknife")),
    @JsonProperty("Antarctica/Casey") ANTARCTICA_CASEY(String.valueOf("Antarctica/Casey")),
    @JsonProperty("Antarctica/Davis") ANTARCTICA_DAVIS(String.valueOf("Antarctica/Davis")),
    @JsonProperty("Antarctica/DumontDUrville") ANTARCTICA_DUMONTDURVILLE(String.valueOf("Antarctica/DumontDUrville")),
    @JsonProperty("Antarctica/Macquarie") ANTARCTICA_MACQUARIE(String.valueOf("Antarctica/Macquarie")),
    @JsonProperty("Antarctica/Mawson") ANTARCTICA_MAWSON(String.valueOf("Antarctica/Mawson")),
    @JsonProperty("Antarctica/Palmer") ANTARCTICA_PALMER(String.valueOf("Antarctica/Palmer")),
    @JsonProperty("Antarctica/Rothera") ANTARCTICA_ROTHERA(String.valueOf("Antarctica/Rothera")),
    @JsonProperty("Antarctica/Syowa") ANTARCTICA_SYOWA(String.valueOf("Antarctica/Syowa")),
    @JsonProperty("Antarctica/Troll") ANTARCTICA_TROLL(String.valueOf("Antarctica/Troll")),
    @JsonProperty("Antarctica/Vostok") ANTARCTICA_VOSTOK(String.valueOf("Antarctica/Vostok")),
    @JsonProperty("Asia/Almaty") ASIA_ALMATY(String.valueOf("Asia/Almaty")),
    @JsonProperty("Asia/Amman") ASIA_AMMAN(String.valueOf("Asia/Amman")),
    @JsonProperty("Asia/Anadyr") ASIA_ANADYR(String.valueOf("Asia/Anadyr")),
    @JsonProperty("Asia/Aqtau") ASIA_AQTAU(String.valueOf("Asia/Aqtau")),
    @JsonProperty("Asia/Aqtobe") ASIA_AQTOBE(String.valueOf("Asia/Aqtobe")),
    @JsonProperty("Asia/Ashgabat") ASIA_ASHGABAT(String.valueOf("Asia/Ashgabat")),
    @JsonProperty("Asia/Atyrau") ASIA_ATYRAU(String.valueOf("Asia/Atyrau")),
    @JsonProperty("Asia/Baghdad") ASIA_BAGHDAD(String.valueOf("Asia/Baghdad")),
    @JsonProperty("Asia/Baku") ASIA_BAKU(String.valueOf("Asia/Baku")),
    @JsonProperty("Asia/Bangkok") ASIA_BANGKOK(String.valueOf("Asia/Bangkok")),
    @JsonProperty("Asia/Barnaul") ASIA_BARNAUL(String.valueOf("Asia/Barnaul")),
    @JsonProperty("Asia/Beirut") ASIA_BEIRUT(String.valueOf("Asia/Beirut")),
    @JsonProperty("Asia/Bishkek") ASIA_BISHKEK(String.valueOf("Asia/Bishkek")),
    @JsonProperty("Asia/Brunei") ASIA_BRUNEI(String.valueOf("Asia/Brunei")),
    @JsonProperty("Asia/Chita") ASIA_CHITA(String.valueOf("Asia/Chita")),
    @JsonProperty("Asia/Choibalsan") ASIA_CHOIBALSAN(String.valueOf("Asia/Choibalsan")),
    @JsonProperty("Asia/Colombo") ASIA_COLOMBO(String.valueOf("Asia/Colombo")),
    @JsonProperty("Asia/Damascus") ASIA_DAMASCUS(String.valueOf("Asia/Damascus")),
    @JsonProperty("Asia/Dhaka") ASIA_DHAKA(String.valueOf("Asia/Dhaka")),
    @JsonProperty("Asia/Dili") ASIA_DILI(String.valueOf("Asia/Dili")),
    @JsonProperty("Asia/Dubai") ASIA_DUBAI(String.valueOf("Asia/Dubai")),
    @JsonProperty("Asia/Dushanbe") ASIA_DUSHANBE(String.valueOf("Asia/Dushanbe")),
    @JsonProperty("Asia/Famagusta") ASIA_FAMAGUSTA(String.valueOf("Asia/Famagusta")),
    @JsonProperty("Asia/Gaza") ASIA_GAZA(String.valueOf("Asia/Gaza")),
    @JsonProperty("Asia/Hebron") ASIA_HEBRON(String.valueOf("Asia/Hebron")),
    @JsonProperty("Asia/Ho_Chi_Minh") ASIA_HO_CHI_MINH(String.valueOf("Asia/Ho_Chi_Minh")),
    @JsonProperty("Asia/Hong_Kong") ASIA_HONG_KONG(String.valueOf("Asia/Hong_Kong")),
    @JsonProperty("Asia/Hovd") ASIA_HOVD(String.valueOf("Asia/Hovd")),
    @JsonProperty("Asia/Irkutsk") ASIA_IRKUTSK(String.valueOf("Asia/Irkutsk")),
    @JsonProperty("Asia/Jakarta") ASIA_JAKARTA(String.valueOf("Asia/Jakarta")),
    @JsonProperty("Asia/Jayapura") ASIA_JAYAPURA(String.valueOf("Asia/Jayapura")),
    @JsonProperty("Asia/Jerusalem") ASIA_JERUSALEM(String.valueOf("Asia/Jerusalem")),
    @JsonProperty("Asia/Kabul") ASIA_KABUL(String.valueOf("Asia/Kabul")),
    @JsonProperty("Asia/Kamchatka") ASIA_KAMCHATKA(String.valueOf("Asia/Kamchatka")),
    @JsonProperty("Asia/Karachi") ASIA_KARACHI(String.valueOf("Asia/Karachi")),
    @JsonProperty("Asia/Kathmandu") ASIA_KATHMANDU(String.valueOf("Asia/Kathmandu")),
    @JsonProperty("Asia/Khandyga") ASIA_KHANDYGA(String.valueOf("Asia/Khandyga")),
    @JsonProperty("Asia/Kolkata") ASIA_KOLKATA(String.valueOf("Asia/Kolkata")),
    @JsonProperty("Asia/Krasnoyarsk") ASIA_KRASNOYARSK(String.valueOf("Asia/Krasnoyarsk")),
    @JsonProperty("Asia/Kuala_Lumpur") ASIA_KUALA_LUMPUR(String.valueOf("Asia/Kuala_Lumpur")),
    @JsonProperty("Asia/Kuching") ASIA_KUCHING(String.valueOf("Asia/Kuching")),
    @JsonProperty("Asia/Macau") ASIA_MACAU(String.valueOf("Asia/Macau")),
    @JsonProperty("Asia/Magadan") ASIA_MAGADAN(String.valueOf("Asia/Magadan")),
    @JsonProperty("Asia/Makassar") ASIA_MAKASSAR(String.valueOf("Asia/Makassar")),
    @JsonProperty("Asia/Manila") ASIA_MANILA(String.valueOf("Asia/Manila")),
    @JsonProperty("Asia/Nicosia") ASIA_NICOSIA(String.valueOf("Asia/Nicosia")),
    @JsonProperty("Asia/Novokuznetsk") ASIA_NOVOKUZNETSK(String.valueOf("Asia/Novokuznetsk")),
    @JsonProperty("Asia/Novosibirsk") ASIA_NOVOSIBIRSK(String.valueOf("Asia/Novosibirsk")),
    @JsonProperty("Asia/Omsk") ASIA_OMSK(String.valueOf("Asia/Omsk")),
    @JsonProperty("Asia/Oral") ASIA_ORAL(String.valueOf("Asia/Oral")),
    @JsonProperty("Asia/Pontianak") ASIA_PONTIANAK(String.valueOf("Asia/Pontianak")),
    @JsonProperty("Asia/Pyongyang") ASIA_PYONGYANG(String.valueOf("Asia/Pyongyang")),
    @JsonProperty("Asia/Qatar") ASIA_QATAR(String.valueOf("Asia/Qatar")),
    @JsonProperty("Asia/Qostanay") ASIA_QOSTANAY(String.valueOf("Asia/Qostanay")),
    @JsonProperty("Asia/Qyzylorda") ASIA_QYZYLORDA(String.valueOf("Asia/Qyzylorda")),
    @JsonProperty("Asia/Riyadh") ASIA_RIYADH(String.valueOf("Asia/Riyadh")),
    @JsonProperty("Asia/Sakhalin") ASIA_SAKHALIN(String.valueOf("Asia/Sakhalin")),
    @JsonProperty("Asia/Samarkand") ASIA_SAMARKAND(String.valueOf("Asia/Samarkand")),
    @JsonProperty("Asia/Seoul") ASIA_SEOUL(String.valueOf("Asia/Seoul")),
    @JsonProperty("Asia/Shanghai") ASIA_SHANGHAI(String.valueOf("Asia/Shanghai")),
    @JsonProperty("Asia/Singapore") ASIA_SINGAPORE(String.valueOf("Asia/Singapore")),
    @JsonProperty("Asia/Srednekolymsk") ASIA_SREDNEKOLYMSK(String.valueOf("Asia/Srednekolymsk")),
    @JsonProperty("Asia/Taipei") ASIA_TAIPEI(String.valueOf("Asia/Taipei")),
    @JsonProperty("Asia/Tashkent") ASIA_TASHKENT(String.valueOf("Asia/Tashkent")),
    @JsonProperty("Asia/Tbilisi") ASIA_TBILISI(String.valueOf("Asia/Tbilisi")),
    @JsonProperty("Asia/Tehran") ASIA_TEHRAN(String.valueOf("Asia/Tehran")),
    @JsonProperty("Asia/Thimphu") ASIA_THIMPHU(String.valueOf("Asia/Thimphu")),
    @JsonProperty("Asia/Tokyo") ASIA_TOKYO(String.valueOf("Asia/Tokyo")),
    @JsonProperty("Asia/Tomsk") ASIA_TOMSK(String.valueOf("Asia/Tomsk")),
    @JsonProperty("Asia/Ulaanbaatar") ASIA_ULAANBAATAR(String.valueOf("Asia/Ulaanbaatar")),
    @JsonProperty("Asia/Urumqi") ASIA_URUMQI(String.valueOf("Asia/Urumqi")),
    @JsonProperty("Asia/Ust-Nera") ASIA_UST_NERA(String.valueOf("Asia/Ust-Nera")),
    @JsonProperty("Asia/Vladivostok") ASIA_VLADIVOSTOK(String.valueOf("Asia/Vladivostok")),
    @JsonProperty("Asia/Yakutsk") ASIA_YAKUTSK(String.valueOf("Asia/Yakutsk")),
    @JsonProperty("Asia/Yangon") ASIA_YANGON(String.valueOf("Asia/Yangon")),
    @JsonProperty("Asia/Yekaterinburg") ASIA_YEKATERINBURG(String.valueOf("Asia/Yekaterinburg")),
    @JsonProperty("Asia/Yerevan") ASIA_YEREVAN(String.valueOf("Asia/Yerevan")),
    @JsonProperty("Atlantic/Azores") ATLANTIC_AZORES(String.valueOf("Atlantic/Azores")),
    @JsonProperty("Atlantic/Bermuda") ATLANTIC_BERMUDA(String.valueOf("Atlantic/Bermuda")),
    @JsonProperty("Atlantic/Canary") ATLANTIC_CANARY(String.valueOf("Atlantic/Canary")),
    @JsonProperty("Atlantic/Cape_Verde") ATLANTIC_CAPE_VERDE(String.valueOf("Atlantic/Cape_Verde")),
    @JsonProperty("Atlantic/Faroe") ATLANTIC_FAROE(String.valueOf("Atlantic/Faroe")),
    @JsonProperty("Atlantic/Madeira") ATLANTIC_MADEIRA(String.valueOf("Atlantic/Madeira")),
    @JsonProperty("Atlantic/Reykjavik") ATLANTIC_REYKJAVIK(String.valueOf("Atlantic/Reykjavik")),
    @JsonProperty("Atlantic/South_Georgia") ATLANTIC_SOUTH_GEORGIA(String.valueOf("Atlantic/South_Georgia")),
    @JsonProperty("Atlantic/Stanley") ATLANTIC_STANLEY(String.valueOf("Atlantic/Stanley")),
    @JsonProperty("Australia/Adelaide") AUSTRALIA_ADELAIDE(String.valueOf("Australia/Adelaide")),
    @JsonProperty("Australia/Brisbane") AUSTRALIA_BRISBANE(String.valueOf("Australia/Brisbane")),
    @JsonProperty("Australia/Broken_Hill") AUSTRALIA_BROKEN_HILL(String.valueOf("Australia/Broken_Hill")),
    @JsonProperty("Australia/Currie") AUSTRALIA_CURRIE(String.valueOf("Australia/Currie")),
    @JsonProperty("Australia/Darwin") AUSTRALIA_DARWIN(String.valueOf("Australia/Darwin")),
    @JsonProperty("Australia/Eucla") AUSTRALIA_EUCLA(String.valueOf("Australia/Eucla")),
    @JsonProperty("Australia/Hobart") AUSTRALIA_HOBART(String.valueOf("Australia/Hobart")),
    @JsonProperty("Australia/Lindeman") AUSTRALIA_LINDEMAN(String.valueOf("Australia/Lindeman")),
    @JsonProperty("Australia/Lord_Howe") AUSTRALIA_LORD_HOWE(String.valueOf("Australia/Lord_Howe")),
    @JsonProperty("Australia/Melbourne") AUSTRALIA_MELBOURNE(String.valueOf("Australia/Melbourne")),
    @JsonProperty("Australia/Perth") AUSTRALIA_PERTH(String.valueOf("Australia/Perth")),
    @JsonProperty("Australia/Sydney") AUSTRALIA_SYDNEY(String.valueOf("Australia/Sydney")),
    @JsonProperty("CET") CET(String.valueOf("CET")),
    @JsonProperty("CST6CDT") CST6CDT(String.valueOf("CST6CDT")),
    @JsonProperty("EET") EET(String.valueOf("EET")),
    @JsonProperty("EST") EST(String.valueOf("EST")),
    @JsonProperty("EST5EDT") EST5EDT(String.valueOf("EST5EDT")),
    @JsonProperty("Etc/GMT") ETC_GMT(String.valueOf("Etc/GMT")),
    @JsonProperty("Etc/GMT+1") ETC_GMT_1(String.valueOf("Etc/GMT+1")),
    @JsonProperty("Etc/GMT+10") ETC_GMT_10(String.valueOf("Etc/GMT+10")),
    @JsonProperty("Etc/GMT+11") ETC_GMT_11(String.valueOf("Etc/GMT+11")),
    @JsonProperty("Etc/GMT+12") ETC_GMT_12(String.valueOf("Etc/GMT+12")),
    @JsonProperty("Etc/GMT+2") ETC_GMT_2(String.valueOf("Etc/GMT+2")),
    @JsonProperty("Etc/GMT+3") ETC_GMT_3(String.valueOf("Etc/GMT+3")),
    @JsonProperty("Etc/GMT+4") ETC_GMT_4(String.valueOf("Etc/GMT+4")),
    @JsonProperty("Etc/GMT+5") ETC_GMT_5(String.valueOf("Etc/GMT+5")),
    @JsonProperty("Etc/GMT+6") ETC_GMT_6(String.valueOf("Etc/GMT+6")),
    @JsonProperty("Etc/GMT+7") ETC_GMT_7(String.valueOf("Etc/GMT+7")),
    @JsonProperty("Etc/GMT+8") ETC_GMT_8(String.valueOf("Etc/GMT+8")),
    @JsonProperty("Etc/GMT+9") ETC_GMT_9(String.valueOf("Etc/GMT+9")),
    @JsonProperty("Etc/GMT-1") ETC_GMT_1(String.valueOf("Etc/GMT-1")),
    @JsonProperty("Etc/GMT-10") ETC_GMT_10(String.valueOf("Etc/GMT-10")),
    @JsonProperty("Etc/GMT-11") ETC_GMT_11(String.valueOf("Etc/GMT-11")),
    @JsonProperty("Etc/GMT-12") ETC_GMT_12(String.valueOf("Etc/GMT-12")),
    @JsonProperty("Etc/GMT-13") ETC_GMT_13(String.valueOf("Etc/GMT-13")),
    @JsonProperty("Etc/GMT-14") ETC_GMT_14(String.valueOf("Etc/GMT-14")),
    @JsonProperty("Etc/GMT-2") ETC_GMT_2(String.valueOf("Etc/GMT-2")),
    @JsonProperty("Etc/GMT-3") ETC_GMT_3(String.valueOf("Etc/GMT-3")),
    @JsonProperty("Etc/GMT-4") ETC_GMT_4(String.valueOf("Etc/GMT-4")),
    @JsonProperty("Etc/GMT-5") ETC_GMT_5(String.valueOf("Etc/GMT-5")),
    @JsonProperty("Etc/GMT-6") ETC_GMT_6(String.valueOf("Etc/GMT-6")),
    @JsonProperty("Etc/GMT-7") ETC_GMT_7(String.valueOf("Etc/GMT-7")),
    @JsonProperty("Etc/GMT-8") ETC_GMT_8(String.valueOf("Etc/GMT-8")),
    @JsonProperty("Etc/GMT-9") ETC_GMT_9(String.valueOf("Etc/GMT-9")),
    @JsonProperty("Etc/UTC") ETC_UTC(String.valueOf("Etc/UTC")),
    @JsonProperty("Europe/Amsterdam") EUROPE_AMSTERDAM(String.valueOf("Europe/Amsterdam")),
    @JsonProperty("Europe/Andorra") EUROPE_ANDORRA(String.valueOf("Europe/Andorra")),
    @JsonProperty("Europe/Astrakhan") EUROPE_ASTRAKHAN(String.valueOf("Europe/Astrakhan")),
    @JsonProperty("Europe/Athens") EUROPE_ATHENS(String.valueOf("Europe/Athens")),
    @JsonProperty("Europe/Belgrade") EUROPE_BELGRADE(String.valueOf("Europe/Belgrade")),
    @JsonProperty("Europe/Berlin") EUROPE_BERLIN(String.valueOf("Europe/Berlin")),
    @JsonProperty("Europe/Brussels") EUROPE_BRUSSELS(String.valueOf("Europe/Brussels")),
    @JsonProperty("Europe/Bucharest") EUROPE_BUCHAREST(String.valueOf("Europe/Bucharest")),
    @JsonProperty("Europe/Budapest") EUROPE_BUDAPEST(String.valueOf("Europe/Budapest")),
    @JsonProperty("Europe/Chisinau") EUROPE_CHISINAU(String.valueOf("Europe/Chisinau")),
    @JsonProperty("Europe/Copenhagen") EUROPE_COPENHAGEN(String.valueOf("Europe/Copenhagen")),
    @JsonProperty("Europe/Dublin") EUROPE_DUBLIN(String.valueOf("Europe/Dublin")),
    @JsonProperty("Europe/Gibraltar") EUROPE_GIBRALTAR(String.valueOf("Europe/Gibraltar")),
    @JsonProperty("Europe/Helsinki") EUROPE_HELSINKI(String.valueOf("Europe/Helsinki")),
    @JsonProperty("Europe/Istanbul") EUROPE_ISTANBUL(String.valueOf("Europe/Istanbul")),
    @JsonProperty("Europe/Kaliningrad") EUROPE_KALININGRAD(String.valueOf("Europe/Kaliningrad")),
    @JsonProperty("Europe/Kiev") EUROPE_KIEV(String.valueOf("Europe/Kiev")),
    @JsonProperty("Europe/Kirov") EUROPE_KIROV(String.valueOf("Europe/Kirov")),
    @JsonProperty("Europe/Lisbon") EUROPE_LISBON(String.valueOf("Europe/Lisbon")),
    @JsonProperty("Europe/London") EUROPE_LONDON(String.valueOf("Europe/London")),
    @JsonProperty("Europe/Luxembourg") EUROPE_LUXEMBOURG(String.valueOf("Europe/Luxembourg")),
    @JsonProperty("Europe/Madrid") EUROPE_MADRID(String.valueOf("Europe/Madrid")),
    @JsonProperty("Europe/Malta") EUROPE_MALTA(String.valueOf("Europe/Malta")),
    @JsonProperty("Europe/Minsk") EUROPE_MINSK(String.valueOf("Europe/Minsk")),
    @JsonProperty("Europe/Monaco") EUROPE_MONACO(String.valueOf("Europe/Monaco")),
    @JsonProperty("Europe/Moscow") EUROPE_MOSCOW(String.valueOf("Europe/Moscow")),
    @JsonProperty("Europe/Oslo") EUROPE_OSLO(String.valueOf("Europe/Oslo")),
    @JsonProperty("Europe/Paris") EUROPE_PARIS(String.valueOf("Europe/Paris")),
    @JsonProperty("Europe/Prague") EUROPE_PRAGUE(String.valueOf("Europe/Prague")),
    @JsonProperty("Europe/Riga") EUROPE_RIGA(String.valueOf("Europe/Riga")),
    @JsonProperty("Europe/Rome") EUROPE_ROME(String.valueOf("Europe/Rome")),
    @JsonProperty("Europe/Samara") EUROPE_SAMARA(String.valueOf("Europe/Samara")),
    @JsonProperty("Europe/Saratov") EUROPE_SARATOV(String.valueOf("Europe/Saratov")),
    @JsonProperty("Europe/Simferopol") EUROPE_SIMFEROPOL(String.valueOf("Europe/Simferopol")),
    @JsonProperty("Europe/Sofia") EUROPE_SOFIA(String.valueOf("Europe/Sofia")),
    @JsonProperty("Europe/Stockholm") EUROPE_STOCKHOLM(String.valueOf("Europe/Stockholm")),
    @JsonProperty("Europe/Tallinn") EUROPE_TALLINN(String.valueOf("Europe/Tallinn")),
    @JsonProperty("Europe/Tirane") EUROPE_TIRANE(String.valueOf("Europe/Tirane")),
    @JsonProperty("Europe/Ulyanovsk") EUROPE_ULYANOVSK(String.valueOf("Europe/Ulyanovsk")),
    @JsonProperty("Europe/Uzhgorod") EUROPE_UZHGOROD(String.valueOf("Europe/Uzhgorod")),
    @JsonProperty("Europe/Vienna") EUROPE_VIENNA(String.valueOf("Europe/Vienna")),
    @JsonProperty("Europe/Vilnius") EUROPE_VILNIUS(String.valueOf("Europe/Vilnius")),
    @JsonProperty("Europe/Volgograd") EUROPE_VOLGOGRAD(String.valueOf("Europe/Volgograd")),
    @JsonProperty("Europe/Warsaw") EUROPE_WARSAW(String.valueOf("Europe/Warsaw")),
    @JsonProperty("Europe/Zaporozhye") EUROPE_ZAPOROZHYE(String.valueOf("Europe/Zaporozhye")),
    @JsonProperty("Europe/Zurich") EUROPE_ZURICH(String.valueOf("Europe/Zurich")),
    @JsonProperty("HST") HST(String.valueOf("HST")),
    @JsonProperty("Indian/Chagos") INDIAN_CHAGOS(String.valueOf("Indian/Chagos")),
    @JsonProperty("Indian/Christmas") INDIAN_CHRISTMAS(String.valueOf("Indian/Christmas")),
    @JsonProperty("Indian/Cocos") INDIAN_COCOS(String.valueOf("Indian/Cocos")),
    @JsonProperty("Indian/Kerguelen") INDIAN_KERGUELEN(String.valueOf("Indian/Kerguelen")),
    @JsonProperty("Indian/Mahe") INDIAN_MAHE(String.valueOf("Indian/Mahe")),
    @JsonProperty("Indian/Maldives") INDIAN_MALDIVES(String.valueOf("Indian/Maldives")),
    @JsonProperty("Indian/Mauritius") INDIAN_MAURITIUS(String.valueOf("Indian/Mauritius")),
    @JsonProperty("Indian/Reunion") INDIAN_REUNION(String.valueOf("Indian/Reunion")),
    @JsonProperty("MET") MET(String.valueOf("MET")),
    @JsonProperty("MST") MST(String.valueOf("MST")),
    @JsonProperty("MST7MDT") MST7MDT(String.valueOf("MST7MDT")),
    @JsonProperty("PST8PDT") PST8PDT(String.valueOf("PST8PDT")),
    @JsonProperty("Pacific/Apia") PACIFIC_APIA(String.valueOf("Pacific/Apia")),
    @JsonProperty("Pacific/Auckland") PACIFIC_AUCKLAND(String.valueOf("Pacific/Auckland")),
    @JsonProperty("Pacific/Bougainville") PACIFIC_BOUGAINVILLE(String.valueOf("Pacific/Bougainville")),
    @JsonProperty("Pacific/Chatham") PACIFIC_CHATHAM(String.valueOf("Pacific/Chatham")),
    @JsonProperty("Pacific/Chuuk") PACIFIC_CHUUK(String.valueOf("Pacific/Chuuk")),
    @JsonProperty("Pacific/Easter") PACIFIC_EASTER(String.valueOf("Pacific/Easter")),
    @JsonProperty("Pacific/Efate") PACIFIC_EFATE(String.valueOf("Pacific/Efate")),
    @JsonProperty("Pacific/Enderbury") PACIFIC_ENDERBURY(String.valueOf("Pacific/Enderbury")),
    @JsonProperty("Pacific/Fakaofo") PACIFIC_FAKAOFO(String.valueOf("Pacific/Fakaofo")),
    @JsonProperty("Pacific/Fiji") PACIFIC_FIJI(String.valueOf("Pacific/Fiji")),
    @JsonProperty("Pacific/Funafuti") PACIFIC_FUNAFUTI(String.valueOf("Pacific/Funafuti")),
    @JsonProperty("Pacific/Galapagos") PACIFIC_GALAPAGOS(String.valueOf("Pacific/Galapagos")),
    @JsonProperty("Pacific/Gambier") PACIFIC_GAMBIER(String.valueOf("Pacific/Gambier")),
    @JsonProperty("Pacific/Guadalcanal") PACIFIC_GUADALCANAL(String.valueOf("Pacific/Guadalcanal")),
    @JsonProperty("Pacific/Guam") PACIFIC_GUAM(String.valueOf("Pacific/Guam")),
    @JsonProperty("Pacific/Honolulu") PACIFIC_HONOLULU(String.valueOf("Pacific/Honolulu")),
    @JsonProperty("Pacific/Kiritimati") PACIFIC_KIRITIMATI(String.valueOf("Pacific/Kiritimati")),
    @JsonProperty("Pacific/Kosrae") PACIFIC_KOSRAE(String.valueOf("Pacific/Kosrae")),
    @JsonProperty("Pacific/Kwajalein") PACIFIC_KWAJALEIN(String.valueOf("Pacific/Kwajalein")),
    @JsonProperty("Pacific/Majuro") PACIFIC_MAJURO(String.valueOf("Pacific/Majuro")),
    @JsonProperty("Pacific/Marquesas") PACIFIC_MARQUESAS(String.valueOf("Pacific/Marquesas")),
    @JsonProperty("Pacific/Nauru") PACIFIC_NAURU(String.valueOf("Pacific/Nauru")),
    @JsonProperty("Pacific/Niue") PACIFIC_NIUE(String.valueOf("Pacific/Niue")),
    @JsonProperty("Pacific/Norfolk") PACIFIC_NORFOLK(String.valueOf("Pacific/Norfolk")),
    @JsonProperty("Pacific/Noumea") PACIFIC_NOUMEA(String.valueOf("Pacific/Noumea")),
    @JsonProperty("Pacific/Pago_Pago") PACIFIC_PAGO_PAGO(String.valueOf("Pacific/Pago_Pago")),
    @JsonProperty("Pacific/Palau") PACIFIC_PALAU(String.valueOf("Pacific/Palau")),
    @JsonProperty("Pacific/Pitcairn") PACIFIC_PITCAIRN(String.valueOf("Pacific/Pitcairn")),
    @JsonProperty("Pacific/Pohnpei") PACIFIC_POHNPEI(String.valueOf("Pacific/Pohnpei")),
    @JsonProperty("Pacific/Port_Moresby") PACIFIC_PORT_MORESBY(String.valueOf("Pacific/Port_Moresby")),
    @JsonProperty("Pacific/Rarotonga") PACIFIC_RAROTONGA(String.valueOf("Pacific/Rarotonga")),
    @JsonProperty("Pacific/Tahiti") PACIFIC_TAHITI(String.valueOf("Pacific/Tahiti")),
    @JsonProperty("Pacific/Tarawa") PACIFIC_TARAWA(String.valueOf("Pacific/Tarawa")),
    @JsonProperty("Pacific/Tongatapu") PACIFIC_TONGATAPU(String.valueOf("Pacific/Tongatapu")),
    @JsonProperty("Pacific/Wake") PACIFIC_WAKE(String.valueOf("Pacific/Wake")),
    @JsonProperty("Pacific/Wallis") PACIFIC_WALLIS(String.valueOf("Pacific/Wallis")),
    @JsonProperty("WET") WET(String.valueOf("WET")),
    @JsonProperty("null") NULL(String.valueOf("null"));

    private String value;

    TimezoneEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static TimezoneEnum fromValue(String value) {
        for (TimezoneEnum b : TimezoneEnum.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        return null;
    }
}

 /**
  * The timezone considered for the processing schedule time.
  */
  @ApiModelProperty(required = true, value = "The timezone considered for the processing schedule time.")
  private TimezoneEnum timezone;
 /**
  * A time in format HH:MM with leading 0 (zero)
  * @return time
  */
  @JsonProperty("time")
  @NotNull
 @Pattern(regexp="^(0[0-9]|1[0-9]|2[0-3]):[0-5][0-9]$")  public String getTime() {
    return time;
  }

  /**
   * Sets the <code>time</code> property.
   */
 public void setTime(String time) {
    this.time = time;
  }

  /**
   * Sets the <code>time</code> property.
   */
  public CatalogsFeedProcessingSchedule time(String time) {
    this.time = time;
    return this;
  }

 /**
  * The timezone considered for the processing schedule time.
  * @return timezone
  */
  @JsonProperty("timezone")
  @NotNull
  public String getTimezone() {
    return timezone == null ? null : timezone.value();
  }

  /**
   * Sets the <code>timezone</code> property.
   */
 public void setTimezone(TimezoneEnum timezone) {
    this.timezone = timezone;
  }

  /**
   * Sets the <code>timezone</code> property.
   */
  public CatalogsFeedProcessingSchedule timezone(TimezoneEnum timezone) {
    this.timezone = timezone;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedProcessingSchedule {\n");
    
    sb.append("    time: ").append(toIndentedString(time)).append("\n");
    sb.append("    timezone: ").append(toIndentedString(timezone)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

