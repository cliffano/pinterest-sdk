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

import * as models from './models';

/**
 * Currency Codes from ISO 4217.
 */
    /**
    * Currency Codes from ISO 4217.
    */
export enum NullableCurrency {
    Aed = <any> 'AED',
    Afn = <any> 'AFN',
    All = <any> 'ALL',
    Amd = <any> 'AMD',
    Ang = <any> 'ANG',
    Aoa = <any> 'AOA',
    Ars = <any> 'ARS',
    Aud = <any> 'AUD',
    Awg = <any> 'AWG',
    Azn = <any> 'AZN',
    Bam = <any> 'BAM',
    Bbd = <any> 'BBD',
    Bdt = <any> 'BDT',
    Bgn = <any> 'BGN',
    Bhd = <any> 'BHD',
    Bif = <any> 'BIF',
    Bmd = <any> 'BMD',
    Bnd = <any> 'BND',
    Bob = <any> 'BOB',
    Brl = <any> 'BRL',
    Bsd = <any> 'BSD',
    Btn = <any> 'BTN',
    Bwp = <any> 'BWP',
    Byn = <any> 'BYN',
    Byr = <any> 'BYR',
    Bzd = <any> 'BZD',
    Cad = <any> 'CAD',
    Cdf = <any> 'CDF',
    Chf = <any> 'CHF',
    Clp = <any> 'CLP',
    Cny = <any> 'CNY',
    Cop = <any> 'COP',
    Crc = <any> 'CRC',
    Cuc = <any> 'CUC',
    Cup = <any> 'CUP',
    Cve = <any> 'CVE',
    Czk = <any> 'CZK',
    Djf = <any> 'DJF',
    Dkk = <any> 'DKK',
    Dop = <any> 'DOP',
    Dzd = <any> 'DZD',
    Egp = <any> 'EGP',
    Ern = <any> 'ERN',
    Etb = <any> 'ETB',
    Eur = <any> 'EUR',
    Fjd = <any> 'FJD',
    Fkp = <any> 'FKP',
    Gbp = <any> 'GBP',
    Gel = <any> 'GEL',
    Ggp = <any> 'GGP',
    Ghs = <any> 'GHS',
    Gip = <any> 'GIP',
    Gmd = <any> 'GMD',
    Gnf = <any> 'GNF',
    Gtq = <any> 'GTQ',
    Gyd = <any> 'GYD',
    Hkd = <any> 'HKD',
    Hnl = <any> 'HNL',
    Hrk = <any> 'HRK',
    Htg = <any> 'HTG',
    Huf = <any> 'HUF',
    Idr = <any> 'IDR',
    Ils = <any> 'ILS',
    Imp = <any> 'IMP',
    Inr = <any> 'INR',
    Iqd = <any> 'IQD',
    Irr = <any> 'IRR',
    Isk = <any> 'ISK',
    Jep = <any> 'JEP',
    Jmd = <any> 'JMD',
    Jod = <any> 'JOD',
    Jpy = <any> 'JPY',
    Kes = <any> 'KES',
    Kgs = <any> 'KGS',
    Khr = <any> 'KHR',
    Kmf = <any> 'KMF',
    Kpw = <any> 'KPW',
    Krw = <any> 'KRW',
    Kwd = <any> 'KWD',
    Kyd = <any> 'KYD',
    Kzt = <any> 'KZT',
    Lak = <any> 'LAK',
    Lbp = <any> 'LBP',
    Lkr = <any> 'LKR',
    Lrd = <any> 'LRD',
    Lsl = <any> 'LSL',
    Lyd = <any> 'LYD',
    Mad = <any> 'MAD',
    Mdl = <any> 'MDL',
    Mga = <any> 'MGA',
    Mkd = <any> 'MKD',
    Mmk = <any> 'MMK',
    Mnt = <any> 'MNT',
    Mop = <any> 'MOP',
    Mro = <any> 'MRO',
    Mur = <any> 'MUR',
    Mvr = <any> 'MVR',
    Mwk = <any> 'MWK',
    Mxn = <any> 'MXN',
    Myr = <any> 'MYR',
    Mzn = <any> 'MZN',
    Nad = <any> 'NAD',
    Ngn = <any> 'NGN',
    Nio = <any> 'NIO',
    Nok = <any> 'NOK',
    Npr = <any> 'NPR',
    Nzd = <any> 'NZD',
    Omr = <any> 'OMR',
    Pab = <any> 'PAB',
    Pen = <any> 'PEN',
    Pgk = <any> 'PGK',
    Php = <any> 'PHP',
    Pkr = <any> 'PKR',
    Pln = <any> 'PLN',
    Pyg = <any> 'PYG',
    Qar = <any> 'QAR',
    Ron = <any> 'RON',
    Rsd = <any> 'RSD',
    Rub = <any> 'RUB',
    Rwf = <any> 'RWF',
    Sar = <any> 'SAR',
    Sbd = <any> 'SBD',
    Scr = <any> 'SCR',
    Sdg = <any> 'SDG',
    Sek = <any> 'SEK',
    Sgd = <any> 'SGD',
    Shp = <any> 'SHP',
    Sll = <any> 'SLL',
    Sos = <any> 'SOS',
    Spl = <any> 'SPL',
    Srd = <any> 'SRD',
    Std = <any> 'STD',
    Svc = <any> 'SVC',
    Syp = <any> 'SYP',
    Szl = <any> 'SZL',
    Thb = <any> 'THB',
    Tjs = <any> 'TJS',
    Tmt = <any> 'TMT',
    Tnd = <any> 'TND',
    Top = <any> 'TOP',
    Try = <any> 'TRY',
    Ttd = <any> 'TTD',
    Tvd = <any> 'TVD',
    Twd = <any> 'TWD',
    Tzs = <any> 'TZS',
    Uah = <any> 'UAH',
    Ugx = <any> 'UGX',
    Usd = <any> 'USD',
    Uyu = <any> 'UYU',
    Uzs = <any> 'UZS',
    Vef = <any> 'VEF',
    Vnd = <any> 'VND',
    Vuv = <any> 'VUV',
    Wst = <any> 'WST',
    Xaf = <any> 'XAF',
    Xcd = <any> 'XCD',
    Xdr = <any> 'XDR',
    Xof = <any> 'XOF',
    Xpf = <any> 'XPF',
    Yer = <any> 'YER',
    Zar = <any> 'ZAR',
    Zmw = <any> 'ZMW',
    Zwd = <any> 'ZWD',
    Null = <any> 'null'
}
