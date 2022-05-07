/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


/**
 * Currency Codes from ISO 4217.
 */
export type NullableCurrency = 'AED' | 'AFN' | 'ALL' | 'AMD' | 'ANG' | 'AOA' | 'ARS' | 'AUD' | 'AWG' | 'AZN' | 'BAM' | 'BBD' | 'BDT' | 'BGN' | 'BHD' | 'BIF' | 'BMD' | 'BND' | 'BOB' | 'BRL' | 'BSD' | 'BTN' | 'BWP' | 'BYN' | 'BYR' | 'BZD' | 'CAD' | 'CDF' | 'CHF' | 'CLP' | 'CNY' | 'COP' | 'CRC' | 'CUC' | 'CUP' | 'CVE' | 'CZK' | 'DJF' | 'DKK' | 'DOP' | 'DZD' | 'EGP' | 'ERN' | 'ETB' | 'EUR' | 'FJD' | 'FKP' | 'GBP' | 'GEL' | 'GGP' | 'GHS' | 'GIP' | 'GMD' | 'GNF' | 'GTQ' | 'GYD' | 'HKD' | 'HNL' | 'HRK' | 'HTG' | 'HUF' | 'IDR' | 'ILS' | 'IMP' | 'INR' | 'IQD' | 'IRR' | 'ISK' | 'JEP' | 'JMD' | 'JOD' | 'JPY' | 'KES' | 'KGS' | 'KHR' | 'KMF' | 'KPW' | 'KRW' | 'KWD' | 'KYD' | 'KZT' | 'LAK' | 'LBP' | 'LKR' | 'LRD' | 'LSL' | 'LYD' | 'MAD' | 'MDL' | 'MGA' | 'MKD' | 'MMK' | 'MNT' | 'MOP' | 'MRO' | 'MUR' | 'MVR' | 'MWK' | 'MXN' | 'MYR' | 'MZN' | 'NAD' | 'NGN' | 'NIO' | 'NOK' | 'NPR' | 'NZD' | 'OMR' | 'PAB' | 'PEN' | 'PGK' | 'PHP' | 'PKR' | 'PLN' | 'PYG' | 'QAR' | 'RON' | 'RSD' | 'RUB' | 'RWF' | 'SAR' | 'SBD' | 'SCR' | 'SDG' | 'SEK' | 'SGD' | 'SHP' | 'SLL' | 'SOS' | 'SPL' | 'SRD' | 'STD' | 'SVC' | 'SYP' | 'SZL' | 'THB' | 'TJS' | 'TMT' | 'TND' | 'TOP' | 'TRY' | 'TTD' | 'TVD' | 'TWD' | 'TZS' | 'UAH' | 'UGX' | 'USD' | 'UYU' | 'UZS' | 'VEF' | 'VND' | 'VUV' | 'WST' | 'XAF' | 'XCD' | 'XDR' | 'XOF' | 'XPF' | 'YER' | 'ZAR' | 'ZMW' | 'ZWD' | 'null';

export const NullableCurrency = {
    Aed: 'AED' as NullableCurrency,
    Afn: 'AFN' as NullableCurrency,
    All: 'ALL' as NullableCurrency,
    Amd: 'AMD' as NullableCurrency,
    Ang: 'ANG' as NullableCurrency,
    Aoa: 'AOA' as NullableCurrency,
    Ars: 'ARS' as NullableCurrency,
    Aud: 'AUD' as NullableCurrency,
    Awg: 'AWG' as NullableCurrency,
    Azn: 'AZN' as NullableCurrency,
    Bam: 'BAM' as NullableCurrency,
    Bbd: 'BBD' as NullableCurrency,
    Bdt: 'BDT' as NullableCurrency,
    Bgn: 'BGN' as NullableCurrency,
    Bhd: 'BHD' as NullableCurrency,
    Bif: 'BIF' as NullableCurrency,
    Bmd: 'BMD' as NullableCurrency,
    Bnd: 'BND' as NullableCurrency,
    Bob: 'BOB' as NullableCurrency,
    Brl: 'BRL' as NullableCurrency,
    Bsd: 'BSD' as NullableCurrency,
    Btn: 'BTN' as NullableCurrency,
    Bwp: 'BWP' as NullableCurrency,
    Byn: 'BYN' as NullableCurrency,
    Byr: 'BYR' as NullableCurrency,
    Bzd: 'BZD' as NullableCurrency,
    Cad: 'CAD' as NullableCurrency,
    Cdf: 'CDF' as NullableCurrency,
    Chf: 'CHF' as NullableCurrency,
    Clp: 'CLP' as NullableCurrency,
    Cny: 'CNY' as NullableCurrency,
    Cop: 'COP' as NullableCurrency,
    Crc: 'CRC' as NullableCurrency,
    Cuc: 'CUC' as NullableCurrency,
    Cup: 'CUP' as NullableCurrency,
    Cve: 'CVE' as NullableCurrency,
    Czk: 'CZK' as NullableCurrency,
    Djf: 'DJF' as NullableCurrency,
    Dkk: 'DKK' as NullableCurrency,
    Dop: 'DOP' as NullableCurrency,
    Dzd: 'DZD' as NullableCurrency,
    Egp: 'EGP' as NullableCurrency,
    Ern: 'ERN' as NullableCurrency,
    Etb: 'ETB' as NullableCurrency,
    Eur: 'EUR' as NullableCurrency,
    Fjd: 'FJD' as NullableCurrency,
    Fkp: 'FKP' as NullableCurrency,
    Gbp: 'GBP' as NullableCurrency,
    Gel: 'GEL' as NullableCurrency,
    Ggp: 'GGP' as NullableCurrency,
    Ghs: 'GHS' as NullableCurrency,
    Gip: 'GIP' as NullableCurrency,
    Gmd: 'GMD' as NullableCurrency,
    Gnf: 'GNF' as NullableCurrency,
    Gtq: 'GTQ' as NullableCurrency,
    Gyd: 'GYD' as NullableCurrency,
    Hkd: 'HKD' as NullableCurrency,
    Hnl: 'HNL' as NullableCurrency,
    Hrk: 'HRK' as NullableCurrency,
    Htg: 'HTG' as NullableCurrency,
    Huf: 'HUF' as NullableCurrency,
    Idr: 'IDR' as NullableCurrency,
    Ils: 'ILS' as NullableCurrency,
    Imp: 'IMP' as NullableCurrency,
    Inr: 'INR' as NullableCurrency,
    Iqd: 'IQD' as NullableCurrency,
    Irr: 'IRR' as NullableCurrency,
    Isk: 'ISK' as NullableCurrency,
    Jep: 'JEP' as NullableCurrency,
    Jmd: 'JMD' as NullableCurrency,
    Jod: 'JOD' as NullableCurrency,
    Jpy: 'JPY' as NullableCurrency,
    Kes: 'KES' as NullableCurrency,
    Kgs: 'KGS' as NullableCurrency,
    Khr: 'KHR' as NullableCurrency,
    Kmf: 'KMF' as NullableCurrency,
    Kpw: 'KPW' as NullableCurrency,
    Krw: 'KRW' as NullableCurrency,
    Kwd: 'KWD' as NullableCurrency,
    Kyd: 'KYD' as NullableCurrency,
    Kzt: 'KZT' as NullableCurrency,
    Lak: 'LAK' as NullableCurrency,
    Lbp: 'LBP' as NullableCurrency,
    Lkr: 'LKR' as NullableCurrency,
    Lrd: 'LRD' as NullableCurrency,
    Lsl: 'LSL' as NullableCurrency,
    Lyd: 'LYD' as NullableCurrency,
    Mad: 'MAD' as NullableCurrency,
    Mdl: 'MDL' as NullableCurrency,
    Mga: 'MGA' as NullableCurrency,
    Mkd: 'MKD' as NullableCurrency,
    Mmk: 'MMK' as NullableCurrency,
    Mnt: 'MNT' as NullableCurrency,
    Mop: 'MOP' as NullableCurrency,
    Mro: 'MRO' as NullableCurrency,
    Mur: 'MUR' as NullableCurrency,
    Mvr: 'MVR' as NullableCurrency,
    Mwk: 'MWK' as NullableCurrency,
    Mxn: 'MXN' as NullableCurrency,
    Myr: 'MYR' as NullableCurrency,
    Mzn: 'MZN' as NullableCurrency,
    Nad: 'NAD' as NullableCurrency,
    Ngn: 'NGN' as NullableCurrency,
    Nio: 'NIO' as NullableCurrency,
    Nok: 'NOK' as NullableCurrency,
    Npr: 'NPR' as NullableCurrency,
    Nzd: 'NZD' as NullableCurrency,
    Omr: 'OMR' as NullableCurrency,
    Pab: 'PAB' as NullableCurrency,
    Pen: 'PEN' as NullableCurrency,
    Pgk: 'PGK' as NullableCurrency,
    Php: 'PHP' as NullableCurrency,
    Pkr: 'PKR' as NullableCurrency,
    Pln: 'PLN' as NullableCurrency,
    Pyg: 'PYG' as NullableCurrency,
    Qar: 'QAR' as NullableCurrency,
    Ron: 'RON' as NullableCurrency,
    Rsd: 'RSD' as NullableCurrency,
    Rub: 'RUB' as NullableCurrency,
    Rwf: 'RWF' as NullableCurrency,
    Sar: 'SAR' as NullableCurrency,
    Sbd: 'SBD' as NullableCurrency,
    Scr: 'SCR' as NullableCurrency,
    Sdg: 'SDG' as NullableCurrency,
    Sek: 'SEK' as NullableCurrency,
    Sgd: 'SGD' as NullableCurrency,
    Shp: 'SHP' as NullableCurrency,
    Sll: 'SLL' as NullableCurrency,
    Sos: 'SOS' as NullableCurrency,
    Spl: 'SPL' as NullableCurrency,
    Srd: 'SRD' as NullableCurrency,
    Std: 'STD' as NullableCurrency,
    Svc: 'SVC' as NullableCurrency,
    Syp: 'SYP' as NullableCurrency,
    Szl: 'SZL' as NullableCurrency,
    Thb: 'THB' as NullableCurrency,
    Tjs: 'TJS' as NullableCurrency,
    Tmt: 'TMT' as NullableCurrency,
    Tnd: 'TND' as NullableCurrency,
    Top: 'TOP' as NullableCurrency,
    Try: 'TRY' as NullableCurrency,
    Ttd: 'TTD' as NullableCurrency,
    Tvd: 'TVD' as NullableCurrency,
    Twd: 'TWD' as NullableCurrency,
    Tzs: 'TZS' as NullableCurrency,
    Uah: 'UAH' as NullableCurrency,
    Ugx: 'UGX' as NullableCurrency,
    Usd: 'USD' as NullableCurrency,
    Uyu: 'UYU' as NullableCurrency,
    Uzs: 'UZS' as NullableCurrency,
    Vef: 'VEF' as NullableCurrency,
    Vnd: 'VND' as NullableCurrency,
    Vuv: 'VUV' as NullableCurrency,
    Wst: 'WST' as NullableCurrency,
    Xaf: 'XAF' as NullableCurrency,
    Xcd: 'XCD' as NullableCurrency,
    Xdr: 'XDR' as NullableCurrency,
    Xof: 'XOF' as NullableCurrency,
    Xpf: 'XPF' as NullableCurrency,
    Yer: 'YER' as NullableCurrency,
    Zar: 'ZAR' as NullableCurrency,
    Zmw: 'ZMW' as NullableCurrency,
    Zwd: 'ZWD' as NullableCurrency,
    Null: 'null' as NullableCurrency
}
