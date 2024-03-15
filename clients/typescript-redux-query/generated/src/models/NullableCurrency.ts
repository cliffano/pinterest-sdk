// tslint:disable
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
 * Currency Codes from ISO 4217.
 * @export
 * @enum {string}
 */
export enum NullableCurrency {
    Aed = 'AED',
    Afn = 'AFN',
    All = 'ALL',
    Amd = 'AMD',
    Ang = 'ANG',
    Aoa = 'AOA',
    Ars = 'ARS',
    Aud = 'AUD',
    Awg = 'AWG',
    Azn = 'AZN',
    Bam = 'BAM',
    Bbd = 'BBD',
    Bdt = 'BDT',
    Bgn = 'BGN',
    Bhd = 'BHD',
    Bif = 'BIF',
    Bmd = 'BMD',
    Bnd = 'BND',
    Bob = 'BOB',
    Brl = 'BRL',
    Bsd = 'BSD',
    Btn = 'BTN',
    Bwp = 'BWP',
    Byn = 'BYN',
    Byr = 'BYR',
    Bzd = 'BZD',
    Cad = 'CAD',
    Cdf = 'CDF',
    Chf = 'CHF',
    Clp = 'CLP',
    Cny = 'CNY',
    Cop = 'COP',
    Crc = 'CRC',
    Cuc = 'CUC',
    Cup = 'CUP',
    Cve = 'CVE',
    Czk = 'CZK',
    Djf = 'DJF',
    Dkk = 'DKK',
    Dop = 'DOP',
    Dzd = 'DZD',
    Egp = 'EGP',
    Ern = 'ERN',
    Etb = 'ETB',
    Eur = 'EUR',
    Fjd = 'FJD',
    Fkp = 'FKP',
    Gbp = 'GBP',
    Gel = 'GEL',
    Ggp = 'GGP',
    Ghs = 'GHS',
    Gip = 'GIP',
    Gmd = 'GMD',
    Gnf = 'GNF',
    Gtq = 'GTQ',
    Gyd = 'GYD',
    Hkd = 'HKD',
    Hnl = 'HNL',
    Hrk = 'HRK',
    Htg = 'HTG',
    Huf = 'HUF',
    Idr = 'IDR',
    Ils = 'ILS',
    Imp = 'IMP',
    Inr = 'INR',
    Iqd = 'IQD',
    Irr = 'IRR',
    Isk = 'ISK',
    Jep = 'JEP',
    Jmd = 'JMD',
    Jod = 'JOD',
    Jpy = 'JPY',
    Kes = 'KES',
    Kgs = 'KGS',
    Khr = 'KHR',
    Kmf = 'KMF',
    Kpw = 'KPW',
    Krw = 'KRW',
    Kwd = 'KWD',
    Kyd = 'KYD',
    Kzt = 'KZT',
    Lak = 'LAK',
    Lbp = 'LBP',
    Lkr = 'LKR',
    Lrd = 'LRD',
    Lsl = 'LSL',
    Lyd = 'LYD',
    Mad = 'MAD',
    Mdl = 'MDL',
    Mga = 'MGA',
    Mkd = 'MKD',
    Mmk = 'MMK',
    Mnt = 'MNT',
    Mop = 'MOP',
    Mro = 'MRO',
    Mur = 'MUR',
    Mvr = 'MVR',
    Mwk = 'MWK',
    Mxn = 'MXN',
    Myr = 'MYR',
    Mzn = 'MZN',
    Nad = 'NAD',
    Ngn = 'NGN',
    Nio = 'NIO',
    Nok = 'NOK',
    Npr = 'NPR',
    Nzd = 'NZD',
    Omr = 'OMR',
    Pab = 'PAB',
    Pen = 'PEN',
    Pgk = 'PGK',
    Php = 'PHP',
    Pkr = 'PKR',
    Pln = 'PLN',
    Pyg = 'PYG',
    Qar = 'QAR',
    Ron = 'RON',
    Rsd = 'RSD',
    Rub = 'RUB',
    Rwf = 'RWF',
    Sar = 'SAR',
    Sbd = 'SBD',
    Scr = 'SCR',
    Sdg = 'SDG',
    Sek = 'SEK',
    Sgd = 'SGD',
    Shp = 'SHP',
    Sll = 'SLL',
    Sos = 'SOS',
    Spl = 'SPL',
    Srd = 'SRD',
    Std = 'STD',
    Svc = 'SVC',
    Syp = 'SYP',
    Szl = 'SZL',
    Thb = 'THB',
    Tjs = 'TJS',
    Tmt = 'TMT',
    Tnd = 'TND',
    Top = 'TOP',
    Try = 'TRY',
    Ttd = 'TTD',
    Tvd = 'TVD',
    Twd = 'TWD',
    Tzs = 'TZS',
    Uah = 'UAH',
    Ugx = 'UGX',
    Usd = 'USD',
    Uyu = 'UYU',
    Uzs = 'UZS',
    Vef = 'VEF',
    Vnd = 'VND',
    Vuv = 'VUV',
    Wst = 'WST',
    Xaf = 'XAF',
    Xcd = 'XCD',
    Xdr = 'XDR',
    Xof = 'XOF',
    Xpf = 'XPF',
    Yer = 'YER',
    Zar = 'ZAR',
    Zmw = 'ZMW',
    Zwd = 'ZWD',
    Null = 'null'
}

export function NullableCurrencyFromJSON(json: any): NullableCurrency {
    return json as NullableCurrency;
}

export function NullableCurrencyToJSON(value?: NullableCurrency): any {
    return value as any;
}

