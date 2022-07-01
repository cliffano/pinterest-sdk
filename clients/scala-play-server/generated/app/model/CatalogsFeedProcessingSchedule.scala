package model

import play.api.libs.json._

/**
  * Optional daily processing schedule. Use this to configure the preferred time for processing a feed (otherwise random).
  * @param time A time in format HH:MM with leading 0 (zero)
  * @param timezone The timezone considered for the processing schedule time.
  * @param additionalProperties Any additional properties this model may have.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-07-01T12:06:32.599878Z[Etc/UTC]")
case class CatalogsFeedProcessingSchedule(
  time: String,
  timezone: CatalogsFeedProcessingSchedule.Timezone.Value
  additionalProperties: 
)

object CatalogsFeedProcessingSchedule {
  implicit lazy val catalogsFeedProcessingScheduleJsonFormat: Format[CatalogsFeedProcessingSchedule] = {
    val realJsonFormat = Json.format[CatalogsFeedProcessingSchedule]
    val declaredPropNames = Set("time", "timezone")
    
    Format(
      Reads {
        case JsObject(xs) =>
          val declaredProps = xs.filterKeys(declaredPropNames)
          val additionalProps = JsObject(xs -- declaredPropNames)
          val restructuredProps = declaredProps + ("additionalProperties" -> additionalProps)
          val newObj = JsObject(restructuredProps)
          realJsonFormat.reads(newObj)
        case _ =>
          JsError("error.expected.jsobject")
      },
      Writes { catalogsFeedProcessingSchedule =>
        val jsObj = realJsonFormat.writes(catalogsFeedProcessingSchedule)
        val additionalProps = jsObj.value("additionalProperties").as[JsObject]
        val declaredProps = jsObj - "additionalProperties"
        val newObj = declaredProps ++ additionalProps
        newObj
      }
    )
  }

  // noinspection TypeAnnotation
  object Timezone extends Enumeration {
    val AfricaAbidjan = Value("Africa/Abidjan")
    val AfricaAccra = Value("Africa/Accra")
    val AfricaAlgiers = Value("Africa/Algiers")
    val AfricaBissau = Value("Africa/Bissau")
    val AfricaCairo = Value("Africa/Cairo")
    val AfricaCasablanca = Value("Africa/Casablanca")
    val AfricaCeuta = Value("Africa/Ceuta")
    val AfricaElAaiun = Value("Africa/El_Aaiun")
    val AfricaJohannesburg = Value("Africa/Johannesburg")
    val AfricaJuba = Value("Africa/Juba")
    val AfricaKhartoum = Value("Africa/Khartoum")
    val AfricaLagos = Value("Africa/Lagos")
    val AfricaMaputo = Value("Africa/Maputo")
    val AfricaMonrovia = Value("Africa/Monrovia")
    val AfricaNairobi = Value("Africa/Nairobi")
    val AfricaNdjamena = Value("Africa/Ndjamena")
    val AfricaSaoTome = Value("Africa/Sao_Tome")
    val AfricaTripoli = Value("Africa/Tripoli")
    val AfricaTunis = Value("Africa/Tunis")
    val AfricaWindhoek = Value("Africa/Windhoek")
    val AmericaAdak = Value("America/Adak")
    val AmericaAnchorage = Value("America/Anchorage")
    val AmericaAraguaina = Value("America/Araguaina")
    val AmericaArgentinaBuenosAires = Value("America/Argentina/Buenos_Aires")
    val AmericaArgentinaCatamarca = Value("America/Argentina/Catamarca")
    val AmericaArgentinaCordoba = Value("America/Argentina/Cordoba")
    val AmericaArgentinaJujuy = Value("America/Argentina/Jujuy")
    val AmericaArgentinaLaRioja = Value("America/Argentina/La_Rioja")
    val AmericaArgentinaMendoza = Value("America/Argentina/Mendoza")
    val AmericaArgentinaRioGallegos = Value("America/Argentina/Rio_Gallegos")
    val AmericaArgentinaSalta = Value("America/Argentina/Salta")
    val AmericaArgentinaSanJuan = Value("America/Argentina/San_Juan")
    val AmericaArgentinaSanLuis = Value("America/Argentina/San_Luis")
    val AmericaArgentinaTucuman = Value("America/Argentina/Tucuman")
    val AmericaArgentinaUshuaia = Value("America/Argentina/Ushuaia")
    val AmericaAsuncion = Value("America/Asuncion")
    val AmericaAtikokan = Value("America/Atikokan")
    val AmericaBahia = Value("America/Bahia")
    val AmericaBahiaBanderas = Value("America/Bahia_Banderas")
    val AmericaBarbados = Value("America/Barbados")
    val AmericaBelem = Value("America/Belem")
    val AmericaBelize = Value("America/Belize")
    val AmericaBlancSablon = Value("America/Blanc-Sablon")
    val AmericaBoaVista = Value("America/Boa_Vista")
    val AmericaBogota = Value("America/Bogota")
    val AmericaBoise = Value("America/Boise")
    val AmericaCambridgeBay = Value("America/Cambridge_Bay")
    val AmericaCampoGrande = Value("America/Campo_Grande")
    val AmericaCancun = Value("America/Cancun")
    val AmericaCaracas = Value("America/Caracas")
    val AmericaCayenne = Value("America/Cayenne")
    val AmericaChicago = Value("America/Chicago")
    val AmericaChihuahua = Value("America/Chihuahua")
    val AmericaCostaRica = Value("America/Costa_Rica")
    val AmericaCreston = Value("America/Creston")
    val AmericaCuiaba = Value("America/Cuiaba")
    val AmericaCuracao = Value("America/Curacao")
    val AmericaDanmarkshavn = Value("America/Danmarkshavn")
    val AmericaDawson = Value("America/Dawson")
    val AmericaDawsonCreek = Value("America/Dawson_Creek")
    val AmericaDenver = Value("America/Denver")
    val AmericaDetroit = Value("America/Detroit")
    val AmericaEdmonton = Value("America/Edmonton")
    val AmericaEirunepe = Value("America/Eirunepe")
    val AmericaElSalvador = Value("America/El_Salvador")
    val AmericaFortNelson = Value("America/Fort_Nelson")
    val AmericaFortaleza = Value("America/Fortaleza")
    val AmericaGlaceBay = Value("America/Glace_Bay")
    val AmericaGooseBay = Value("America/Goose_Bay")
    val AmericaGrandTurk = Value("America/Grand_Turk")
    val AmericaGuatemala = Value("America/Guatemala")
    val AmericaGuayaquil = Value("America/Guayaquil")
    val AmericaGuyana = Value("America/Guyana")
    val AmericaHalifax = Value("America/Halifax")
    val AmericaHavana = Value("America/Havana")
    val AmericaHermosillo = Value("America/Hermosillo")
    val AmericaIndianaIndianapolis = Value("America/Indiana/Indianapolis")
    val AmericaIndianaKnox = Value("America/Indiana/Knox")
    val AmericaIndianaMarengo = Value("America/Indiana/Marengo")
    val AmericaIndianaPetersburg = Value("America/Indiana/Petersburg")
    val AmericaIndianaTellCity = Value("America/Indiana/Tell_City")
    val AmericaIndianaVevay = Value("America/Indiana/Vevay")
    val AmericaIndianaVincennes = Value("America/Indiana/Vincennes")
    val AmericaIndianaWinamac = Value("America/Indiana/Winamac")
    val AmericaInuvik = Value("America/Inuvik")
    val AmericaIqaluit = Value("America/Iqaluit")
    val AmericaJamaica = Value("America/Jamaica")
    val AmericaJuneau = Value("America/Juneau")
    val AmericaKentuckyLouisville = Value("America/Kentucky/Louisville")
    val AmericaKentuckyMonticello = Value("America/Kentucky/Monticello")
    val AmericaLaPaz = Value("America/La_Paz")
    val AmericaLima = Value("America/Lima")
    val AmericaLosAngeles = Value("America/Los_Angeles")
    val AmericaMaceio = Value("America/Maceio")
    val AmericaManagua = Value("America/Managua")
    val AmericaManaus = Value("America/Manaus")
    val AmericaMartinique = Value("America/Martinique")
    val AmericaMatamoros = Value("America/Matamoros")
    val AmericaMazatlan = Value("America/Mazatlan")
    val AmericaMenominee = Value("America/Menominee")
    val AmericaMerida = Value("America/Merida")
    val AmericaMetlakatla = Value("America/Metlakatla")
    val AmericaMexicoCity = Value("America/Mexico_City")
    val AmericaMiquelon = Value("America/Miquelon")
    val AmericaMoncton = Value("America/Moncton")
    val AmericaMonterrey = Value("America/Monterrey")
    val AmericaMontevideo = Value("America/Montevideo")
    val AmericaNassau = Value("America/Nassau")
    val AmericaNewYork = Value("America/New_York")
    val AmericaNipigon = Value("America/Nipigon")
    val AmericaNome = Value("America/Nome")
    val AmericaNoronha = Value("America/Noronha")
    val AmericaNorthDakotaBeulah = Value("America/North_Dakota/Beulah")
    val AmericaNorthDakotaCenter = Value("America/North_Dakota/Center")
    val AmericaNorthDakotaNewSalem = Value("America/North_Dakota/New_Salem")
    val AmericaNuuk = Value("America/Nuuk")
    val AmericaOjinaga = Value("America/Ojinaga")
    val AmericaPanama = Value("America/Panama")
    val AmericaPangnirtung = Value("America/Pangnirtung")
    val AmericaParamaribo = Value("America/Paramaribo")
    val AmericaPhoenix = Value("America/Phoenix")
    val AmericaPortAuPrince = Value("America/Port-au-Prince")
    val AmericaPortOfSpain = Value("America/Port_of_Spain")
    val AmericaPortoVelho = Value("America/Porto_Velho")
    val AmericaPuertoRico = Value("America/Puerto_Rico")
    val AmericaPuntaArenas = Value("America/Punta_Arenas")
    val AmericaRainyRiver = Value("America/Rainy_River")
    val AmericaRankinInlet = Value("America/Rankin_Inlet")
    val AmericaRecife = Value("America/Recife")
    val AmericaRegina = Value("America/Regina")
    val AmericaResolute = Value("America/Resolute")
    val AmericaRioBranco = Value("America/Rio_Branco")
    val AmericaSantarem = Value("America/Santarem")
    val AmericaSantiago = Value("America/Santiago")
    val AmericaSantoDomingo = Value("America/Santo_Domingo")
    val AmericaSaoPaulo = Value("America/Sao_Paulo")
    val AmericaScoresbysund = Value("America/Scoresbysund")
    val AmericaSitka = Value("America/Sitka")
    val AmericaStJohns = Value("America/St_Johns")
    val AmericaSwiftCurrent = Value("America/Swift_Current")
    val AmericaTegucigalpa = Value("America/Tegucigalpa")
    val AmericaThule = Value("America/Thule")
    val AmericaThunderBay = Value("America/Thunder_Bay")
    val AmericaTijuana = Value("America/Tijuana")
    val AmericaToronto = Value("America/Toronto")
    val AmericaVancouver = Value("America/Vancouver")
    val AmericaWhitehorse = Value("America/Whitehorse")
    val AmericaWinnipeg = Value("America/Winnipeg")
    val AmericaYakutat = Value("America/Yakutat")
    val AmericaYellowknife = Value("America/Yellowknife")
    val AntarcticaCasey = Value("Antarctica/Casey")
    val AntarcticaDavis = Value("Antarctica/Davis")
    val AntarcticaDumontDUrville = Value("Antarctica/DumontDUrville")
    val AntarcticaMacquarie = Value("Antarctica/Macquarie")
    val AntarcticaMawson = Value("Antarctica/Mawson")
    val AntarcticaPalmer = Value("Antarctica/Palmer")
    val AntarcticaRothera = Value("Antarctica/Rothera")
    val AntarcticaSyowa = Value("Antarctica/Syowa")
    val AntarcticaTroll = Value("Antarctica/Troll")
    val AntarcticaVostok = Value("Antarctica/Vostok")
    val AsiaAlmaty = Value("Asia/Almaty")
    val AsiaAmman = Value("Asia/Amman")
    val AsiaAnadyr = Value("Asia/Anadyr")
    val AsiaAqtau = Value("Asia/Aqtau")
    val AsiaAqtobe = Value("Asia/Aqtobe")
    val AsiaAshgabat = Value("Asia/Ashgabat")
    val AsiaAtyrau = Value("Asia/Atyrau")
    val AsiaBaghdad = Value("Asia/Baghdad")
    val AsiaBaku = Value("Asia/Baku")
    val AsiaBangkok = Value("Asia/Bangkok")
    val AsiaBarnaul = Value("Asia/Barnaul")
    val AsiaBeirut = Value("Asia/Beirut")
    val AsiaBishkek = Value("Asia/Bishkek")
    val AsiaBrunei = Value("Asia/Brunei")
    val AsiaChita = Value("Asia/Chita")
    val AsiaChoibalsan = Value("Asia/Choibalsan")
    val AsiaColombo = Value("Asia/Colombo")
    val AsiaDamascus = Value("Asia/Damascus")
    val AsiaDhaka = Value("Asia/Dhaka")
    val AsiaDili = Value("Asia/Dili")
    val AsiaDubai = Value("Asia/Dubai")
    val AsiaDushanbe = Value("Asia/Dushanbe")
    val AsiaFamagusta = Value("Asia/Famagusta")
    val AsiaGaza = Value("Asia/Gaza")
    val AsiaHebron = Value("Asia/Hebron")
    val AsiaHoChiMinh = Value("Asia/Ho_Chi_Minh")
    val AsiaHongKong = Value("Asia/Hong_Kong")
    val AsiaHovd = Value("Asia/Hovd")
    val AsiaIrkutsk = Value("Asia/Irkutsk")
    val AsiaJakarta = Value("Asia/Jakarta")
    val AsiaJayapura = Value("Asia/Jayapura")
    val AsiaJerusalem = Value("Asia/Jerusalem")
    val AsiaKabul = Value("Asia/Kabul")
    val AsiaKamchatka = Value("Asia/Kamchatka")
    val AsiaKarachi = Value("Asia/Karachi")
    val AsiaKathmandu = Value("Asia/Kathmandu")
    val AsiaKhandyga = Value("Asia/Khandyga")
    val AsiaKolkata = Value("Asia/Kolkata")
    val AsiaKrasnoyarsk = Value("Asia/Krasnoyarsk")
    val AsiaKualaLumpur = Value("Asia/Kuala_Lumpur")
    val AsiaKuching = Value("Asia/Kuching")
    val AsiaMacau = Value("Asia/Macau")
    val AsiaMagadan = Value("Asia/Magadan")
    val AsiaMakassar = Value("Asia/Makassar")
    val AsiaManila = Value("Asia/Manila")
    val AsiaNicosia = Value("Asia/Nicosia")
    val AsiaNovokuznetsk = Value("Asia/Novokuznetsk")
    val AsiaNovosibirsk = Value("Asia/Novosibirsk")
    val AsiaOmsk = Value("Asia/Omsk")
    val AsiaOral = Value("Asia/Oral")
    val AsiaPontianak = Value("Asia/Pontianak")
    val AsiaPyongyang = Value("Asia/Pyongyang")
    val AsiaQatar = Value("Asia/Qatar")
    val AsiaQostanay = Value("Asia/Qostanay")
    val AsiaQyzylorda = Value("Asia/Qyzylorda")
    val AsiaRiyadh = Value("Asia/Riyadh")
    val AsiaSakhalin = Value("Asia/Sakhalin")
    val AsiaSamarkand = Value("Asia/Samarkand")
    val AsiaSeoul = Value("Asia/Seoul")
    val AsiaShanghai = Value("Asia/Shanghai")
    val AsiaSingapore = Value("Asia/Singapore")
    val AsiaSrednekolymsk = Value("Asia/Srednekolymsk")
    val AsiaTaipei = Value("Asia/Taipei")
    val AsiaTashkent = Value("Asia/Tashkent")
    val AsiaTbilisi = Value("Asia/Tbilisi")
    val AsiaTehran = Value("Asia/Tehran")
    val AsiaThimphu = Value("Asia/Thimphu")
    val AsiaTokyo = Value("Asia/Tokyo")
    val AsiaTomsk = Value("Asia/Tomsk")
    val AsiaUlaanbaatar = Value("Asia/Ulaanbaatar")
    val AsiaUrumqi = Value("Asia/Urumqi")
    val AsiaUstNera = Value("Asia/Ust-Nera")
    val AsiaVladivostok = Value("Asia/Vladivostok")
    val AsiaYakutsk = Value("Asia/Yakutsk")
    val AsiaYangon = Value("Asia/Yangon")
    val AsiaYekaterinburg = Value("Asia/Yekaterinburg")
    val AsiaYerevan = Value("Asia/Yerevan")
    val AtlanticAzores = Value("Atlantic/Azores")
    val AtlanticBermuda = Value("Atlantic/Bermuda")
    val AtlanticCanary = Value("Atlantic/Canary")
    val AtlanticCapeVerde = Value("Atlantic/Cape_Verde")
    val AtlanticFaroe = Value("Atlantic/Faroe")
    val AtlanticMadeira = Value("Atlantic/Madeira")
    val AtlanticReykjavik = Value("Atlantic/Reykjavik")
    val AtlanticSouthGeorgia = Value("Atlantic/South_Georgia")
    val AtlanticStanley = Value("Atlantic/Stanley")
    val AustraliaAdelaide = Value("Australia/Adelaide")
    val AustraliaBrisbane = Value("Australia/Brisbane")
    val AustraliaBrokenHill = Value("Australia/Broken_Hill")
    val AustraliaCurrie = Value("Australia/Currie")
    val AustraliaDarwin = Value("Australia/Darwin")
    val AustraliaEucla = Value("Australia/Eucla")
    val AustraliaHobart = Value("Australia/Hobart")
    val AustraliaLindeman = Value("Australia/Lindeman")
    val AustraliaLordHowe = Value("Australia/Lord_Howe")
    val AustraliaMelbourne = Value("Australia/Melbourne")
    val AustraliaPerth = Value("Australia/Perth")
    val AustraliaSydney = Value("Australia/Sydney")
    val CET = Value("CET")
    val CST6CDT = Value("CST6CDT")
    val EET = Value("EET")
    val EST = Value("EST")
    val EST5EDT = Value("EST5EDT")
    val EtcGMT = Value("Etc/GMT")
    val EtcGMT1 = Value("Etc/GMT+1")
    val EtcGMT10 = Value("Etc/GMT+10")
    val EtcGMT11 = Value("Etc/GMT+11")
    val EtcGMT12 = Value("Etc/GMT+12")
    val EtcGMT2 = Value("Etc/GMT+2")
    val EtcGMT3 = Value("Etc/GMT+3")
    val EtcGMT4 = Value("Etc/GMT+4")
    val EtcGMT5 = Value("Etc/GMT+5")
    val EtcGMT6 = Value("Etc/GMT+6")
    val EtcGMT7 = Value("Etc/GMT+7")
    val EtcGMT8 = Value("Etc/GMT+8")
    val EtcGMT9 = Value("Etc/GMT+9")
    val EtcGMT1 = Value("Etc/GMT-1")
    val EtcGMT10 = Value("Etc/GMT-10")
    val EtcGMT11 = Value("Etc/GMT-11")
    val EtcGMT12 = Value("Etc/GMT-12")
    val EtcGMT13 = Value("Etc/GMT-13")
    val EtcGMT14 = Value("Etc/GMT-14")
    val EtcGMT2 = Value("Etc/GMT-2")
    val EtcGMT3 = Value("Etc/GMT-3")
    val EtcGMT4 = Value("Etc/GMT-4")
    val EtcGMT5 = Value("Etc/GMT-5")
    val EtcGMT6 = Value("Etc/GMT-6")
    val EtcGMT7 = Value("Etc/GMT-7")
    val EtcGMT8 = Value("Etc/GMT-8")
    val EtcGMT9 = Value("Etc/GMT-9")
    val EtcUTC = Value("Etc/UTC")
    val EuropeAmsterdam = Value("Europe/Amsterdam")
    val EuropeAndorra = Value("Europe/Andorra")
    val EuropeAstrakhan = Value("Europe/Astrakhan")
    val EuropeAthens = Value("Europe/Athens")
    val EuropeBelgrade = Value("Europe/Belgrade")
    val EuropeBerlin = Value("Europe/Berlin")
    val EuropeBrussels = Value("Europe/Brussels")
    val EuropeBucharest = Value("Europe/Bucharest")
    val EuropeBudapest = Value("Europe/Budapest")
    val EuropeChisinau = Value("Europe/Chisinau")
    val EuropeCopenhagen = Value("Europe/Copenhagen")
    val EuropeDublin = Value("Europe/Dublin")
    val EuropeGibraltar = Value("Europe/Gibraltar")
    val EuropeHelsinki = Value("Europe/Helsinki")
    val EuropeIstanbul = Value("Europe/Istanbul")
    val EuropeKaliningrad = Value("Europe/Kaliningrad")
    val EuropeKiev = Value("Europe/Kiev")
    val EuropeKirov = Value("Europe/Kirov")
    val EuropeLisbon = Value("Europe/Lisbon")
    val EuropeLondon = Value("Europe/London")
    val EuropeLuxembourg = Value("Europe/Luxembourg")
    val EuropeMadrid = Value("Europe/Madrid")
    val EuropeMalta = Value("Europe/Malta")
    val EuropeMinsk = Value("Europe/Minsk")
    val EuropeMonaco = Value("Europe/Monaco")
    val EuropeMoscow = Value("Europe/Moscow")
    val EuropeOslo = Value("Europe/Oslo")
    val EuropeParis = Value("Europe/Paris")
    val EuropePrague = Value("Europe/Prague")
    val EuropeRiga = Value("Europe/Riga")
    val EuropeRome = Value("Europe/Rome")
    val EuropeSamara = Value("Europe/Samara")
    val EuropeSaratov = Value("Europe/Saratov")
    val EuropeSimferopol = Value("Europe/Simferopol")
    val EuropeSofia = Value("Europe/Sofia")
    val EuropeStockholm = Value("Europe/Stockholm")
    val EuropeTallinn = Value("Europe/Tallinn")
    val EuropeTirane = Value("Europe/Tirane")
    val EuropeUlyanovsk = Value("Europe/Ulyanovsk")
    val EuropeUzhgorod = Value("Europe/Uzhgorod")
    val EuropeVienna = Value("Europe/Vienna")
    val EuropeVilnius = Value("Europe/Vilnius")
    val EuropeVolgograd = Value("Europe/Volgograd")
    val EuropeWarsaw = Value("Europe/Warsaw")
    val EuropeZaporozhye = Value("Europe/Zaporozhye")
    val EuropeZurich = Value("Europe/Zurich")
    val HST = Value("HST")
    val IndianChagos = Value("Indian/Chagos")
    val IndianChristmas = Value("Indian/Christmas")
    val IndianCocos = Value("Indian/Cocos")
    val IndianKerguelen = Value("Indian/Kerguelen")
    val IndianMahe = Value("Indian/Mahe")
    val IndianMaldives = Value("Indian/Maldives")
    val IndianMauritius = Value("Indian/Mauritius")
    val IndianReunion = Value("Indian/Reunion")
    val MET = Value("MET")
    val MST = Value("MST")
    val MST7MDT = Value("MST7MDT")
    val PST8PDT = Value("PST8PDT")
    val PacificApia = Value("Pacific/Apia")
    val PacificAuckland = Value("Pacific/Auckland")
    val PacificBougainville = Value("Pacific/Bougainville")
    val PacificChatham = Value("Pacific/Chatham")
    val PacificChuuk = Value("Pacific/Chuuk")
    val PacificEaster = Value("Pacific/Easter")
    val PacificEfate = Value("Pacific/Efate")
    val PacificEnderbury = Value("Pacific/Enderbury")
    val PacificFakaofo = Value("Pacific/Fakaofo")
    val PacificFiji = Value("Pacific/Fiji")
    val PacificFunafuti = Value("Pacific/Funafuti")
    val PacificGalapagos = Value("Pacific/Galapagos")
    val PacificGambier = Value("Pacific/Gambier")
    val PacificGuadalcanal = Value("Pacific/Guadalcanal")
    val PacificGuam = Value("Pacific/Guam")
    val PacificHonolulu = Value("Pacific/Honolulu")
    val PacificKiritimati = Value("Pacific/Kiritimati")
    val PacificKosrae = Value("Pacific/Kosrae")
    val PacificKwajalein = Value("Pacific/Kwajalein")
    val PacificMajuro = Value("Pacific/Majuro")
    val PacificMarquesas = Value("Pacific/Marquesas")
    val PacificNauru = Value("Pacific/Nauru")
    val PacificNiue = Value("Pacific/Niue")
    val PacificNorfolk = Value("Pacific/Norfolk")
    val PacificNoumea = Value("Pacific/Noumea")
    val PacificPagoPago = Value("Pacific/Pago_Pago")
    val PacificPalau = Value("Pacific/Palau")
    val PacificPitcairn = Value("Pacific/Pitcairn")
    val PacificPohnpei = Value("Pacific/Pohnpei")
    val PacificPortMoresby = Value("Pacific/Port_Moresby")
    val PacificRarotonga = Value("Pacific/Rarotonga")
    val PacificTahiti = Value("Pacific/Tahiti")
    val PacificTarawa = Value("Pacific/Tarawa")
    val PacificTongatapu = Value("Pacific/Tongatapu")
    val PacificWake = Value("Pacific/Wake")
    val PacificWallis = Value("Pacific/Wallis")
    val WET = Value("WET")
    val Null = Value("null")

    type Timezone = Value
    implicit lazy val TimezoneJsonFormat: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[this.type])
  }
}

