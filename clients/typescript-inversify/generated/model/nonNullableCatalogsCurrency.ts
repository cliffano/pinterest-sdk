/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


/**
 * Currency Codes from ISO 4217.
 */
export type NonNullableCatalogsCurrency = 'AED' | 'AFN' | 'ALL' | 'AMD' | 'ANG' | 'AOA' | 'ARS' | 'AUD' | 'AWG' | 'AZN' | 'BAM' | 'BBD' | 'BDT' | 'BGN' | 'BHD' | 'BIF' | 'BMD' | 'BND' | 'BOB' | 'BRL' | 'BSD' | 'BTN' | 'BWP' | 'BYN' | 'BYR' | 'BZD' | 'CAD' | 'CDF' | 'CHF' | 'CLP' | 'CNY' | 'COP' | 'CRC' | 'CUC' | 'CUP' | 'CVE' | 'CZK' | 'DJF' | 'DKK' | 'DOP' | 'DZD' | 'EGP' | 'ERN' | 'ETB' | 'EUR' | 'FJD' | 'FKP' | 'GBP' | 'GEL' | 'GGP' | 'GHS' | 'GIP' | 'GMD' | 'GNF' | 'GTQ' | 'GYD' | 'HKD' | 'HNL' | 'HRK' | 'HTG' | 'HUF' | 'IDR' | 'ILS' | 'IMP' | 'INR' | 'IQD' | 'IRR' | 'ISK' | 'JEP' | 'JMD' | 'JOD' | 'JPY' | 'KES' | 'KGS' | 'KHR' | 'KMF' | 'KPW' | 'KRW' | 'KWD' | 'KYD' | 'KZT' | 'LAK' | 'LBP' | 'LKR' | 'LRD' | 'LSL' | 'LYD' | 'MAD' | 'MDL' | 'MGA' | 'MKD' | 'MMK' | 'MNT' | 'MOP' | 'MRO' | 'MUR' | 'MVR' | 'MWK' | 'MXN' | 'MYR' | 'MZN' | 'NAD' | 'NGN' | 'NIO' | 'NOK' | 'NPR' | 'NZD' | 'OMR' | 'PAB' | 'PEN' | 'PGK' | 'PHP' | 'PKR' | 'PLN' | 'PYG' | 'QAR' | 'RON' | 'RSD' | 'RUB' | 'RWF' | 'SAR' | 'SBD' | 'SCR' | 'SDG' | 'SEK' | 'SGD' | 'SHP' | 'SLL' | 'SOS' | 'SPL' | 'SRD' | 'STD' | 'SVC' | 'SYP' | 'SZL' | 'THB' | 'TJS' | 'TMT' | 'TND' | 'TOP' | 'TRY' | 'TTD' | 'TVD' | 'TWD' | 'TZS' | 'UAH' | 'UGX' | 'USD' | 'UYU' | 'UZS' | 'VEF' | 'VND' | 'VUV' | 'WST' | 'XAF' | 'XCD' | 'XDR' | 'XOF' | 'XPF' | 'YER' | 'ZAR' | 'ZMW' | 'ZWD';

export const NonNullableCatalogsCurrency = {
    Aed: 'AED' as NonNullableCatalogsCurrency,
    Afn: 'AFN' as NonNullableCatalogsCurrency,
    All: 'ALL' as NonNullableCatalogsCurrency,
    Amd: 'AMD' as NonNullableCatalogsCurrency,
    Ang: 'ANG' as NonNullableCatalogsCurrency,
    Aoa: 'AOA' as NonNullableCatalogsCurrency,
    Ars: 'ARS' as NonNullableCatalogsCurrency,
    Aud: 'AUD' as NonNullableCatalogsCurrency,
    Awg: 'AWG' as NonNullableCatalogsCurrency,
    Azn: 'AZN' as NonNullableCatalogsCurrency,
    Bam: 'BAM' as NonNullableCatalogsCurrency,
    Bbd: 'BBD' as NonNullableCatalogsCurrency,
    Bdt: 'BDT' as NonNullableCatalogsCurrency,
    Bgn: 'BGN' as NonNullableCatalogsCurrency,
    Bhd: 'BHD' as NonNullableCatalogsCurrency,
    Bif: 'BIF' as NonNullableCatalogsCurrency,
    Bmd: 'BMD' as NonNullableCatalogsCurrency,
    Bnd: 'BND' as NonNullableCatalogsCurrency,
    Bob: 'BOB' as NonNullableCatalogsCurrency,
    Brl: 'BRL' as NonNullableCatalogsCurrency,
    Bsd: 'BSD' as NonNullableCatalogsCurrency,
    Btn: 'BTN' as NonNullableCatalogsCurrency,
    Bwp: 'BWP' as NonNullableCatalogsCurrency,
    Byn: 'BYN' as NonNullableCatalogsCurrency,
    Byr: 'BYR' as NonNullableCatalogsCurrency,
    Bzd: 'BZD' as NonNullableCatalogsCurrency,
    Cad: 'CAD' as NonNullableCatalogsCurrency,
    Cdf: 'CDF' as NonNullableCatalogsCurrency,
    Chf: 'CHF' as NonNullableCatalogsCurrency,
    Clp: 'CLP' as NonNullableCatalogsCurrency,
    Cny: 'CNY' as NonNullableCatalogsCurrency,
    Cop: 'COP' as NonNullableCatalogsCurrency,
    Crc: 'CRC' as NonNullableCatalogsCurrency,
    Cuc: 'CUC' as NonNullableCatalogsCurrency,
    Cup: 'CUP' as NonNullableCatalogsCurrency,
    Cve: 'CVE' as NonNullableCatalogsCurrency,
    Czk: 'CZK' as NonNullableCatalogsCurrency,
    Djf: 'DJF' as NonNullableCatalogsCurrency,
    Dkk: 'DKK' as NonNullableCatalogsCurrency,
    Dop: 'DOP' as NonNullableCatalogsCurrency,
    Dzd: 'DZD' as NonNullableCatalogsCurrency,
    Egp: 'EGP' as NonNullableCatalogsCurrency,
    Ern: 'ERN' as NonNullableCatalogsCurrency,
    Etb: 'ETB' as NonNullableCatalogsCurrency,
    Eur: 'EUR' as NonNullableCatalogsCurrency,
    Fjd: 'FJD' as NonNullableCatalogsCurrency,
    Fkp: 'FKP' as NonNullableCatalogsCurrency,
    Gbp: 'GBP' as NonNullableCatalogsCurrency,
    Gel: 'GEL' as NonNullableCatalogsCurrency,
    Ggp: 'GGP' as NonNullableCatalogsCurrency,
    Ghs: 'GHS' as NonNullableCatalogsCurrency,
    Gip: 'GIP' as NonNullableCatalogsCurrency,
    Gmd: 'GMD' as NonNullableCatalogsCurrency,
    Gnf: 'GNF' as NonNullableCatalogsCurrency,
    Gtq: 'GTQ' as NonNullableCatalogsCurrency,
    Gyd: 'GYD' as NonNullableCatalogsCurrency,
    Hkd: 'HKD' as NonNullableCatalogsCurrency,
    Hnl: 'HNL' as NonNullableCatalogsCurrency,
    Hrk: 'HRK' as NonNullableCatalogsCurrency,
    Htg: 'HTG' as NonNullableCatalogsCurrency,
    Huf: 'HUF' as NonNullableCatalogsCurrency,
    Idr: 'IDR' as NonNullableCatalogsCurrency,
    Ils: 'ILS' as NonNullableCatalogsCurrency,
    Imp: 'IMP' as NonNullableCatalogsCurrency,
    Inr: 'INR' as NonNullableCatalogsCurrency,
    Iqd: 'IQD' as NonNullableCatalogsCurrency,
    Irr: 'IRR' as NonNullableCatalogsCurrency,
    Isk: 'ISK' as NonNullableCatalogsCurrency,
    Jep: 'JEP' as NonNullableCatalogsCurrency,
    Jmd: 'JMD' as NonNullableCatalogsCurrency,
    Jod: 'JOD' as NonNullableCatalogsCurrency,
    Jpy: 'JPY' as NonNullableCatalogsCurrency,
    Kes: 'KES' as NonNullableCatalogsCurrency,
    Kgs: 'KGS' as NonNullableCatalogsCurrency,
    Khr: 'KHR' as NonNullableCatalogsCurrency,
    Kmf: 'KMF' as NonNullableCatalogsCurrency,
    Kpw: 'KPW' as NonNullableCatalogsCurrency,
    Krw: 'KRW' as NonNullableCatalogsCurrency,
    Kwd: 'KWD' as NonNullableCatalogsCurrency,
    Kyd: 'KYD' as NonNullableCatalogsCurrency,
    Kzt: 'KZT' as NonNullableCatalogsCurrency,
    Lak: 'LAK' as NonNullableCatalogsCurrency,
    Lbp: 'LBP' as NonNullableCatalogsCurrency,
    Lkr: 'LKR' as NonNullableCatalogsCurrency,
    Lrd: 'LRD' as NonNullableCatalogsCurrency,
    Lsl: 'LSL' as NonNullableCatalogsCurrency,
    Lyd: 'LYD' as NonNullableCatalogsCurrency,
    Mad: 'MAD' as NonNullableCatalogsCurrency,
    Mdl: 'MDL' as NonNullableCatalogsCurrency,
    Mga: 'MGA' as NonNullableCatalogsCurrency,
    Mkd: 'MKD' as NonNullableCatalogsCurrency,
    Mmk: 'MMK' as NonNullableCatalogsCurrency,
    Mnt: 'MNT' as NonNullableCatalogsCurrency,
    Mop: 'MOP' as NonNullableCatalogsCurrency,
    Mro: 'MRO' as NonNullableCatalogsCurrency,
    Mur: 'MUR' as NonNullableCatalogsCurrency,
    Mvr: 'MVR' as NonNullableCatalogsCurrency,
    Mwk: 'MWK' as NonNullableCatalogsCurrency,
    Mxn: 'MXN' as NonNullableCatalogsCurrency,
    Myr: 'MYR' as NonNullableCatalogsCurrency,
    Mzn: 'MZN' as NonNullableCatalogsCurrency,
    Nad: 'NAD' as NonNullableCatalogsCurrency,
    Ngn: 'NGN' as NonNullableCatalogsCurrency,
    Nio: 'NIO' as NonNullableCatalogsCurrency,
    Nok: 'NOK' as NonNullableCatalogsCurrency,
    Npr: 'NPR' as NonNullableCatalogsCurrency,
    Nzd: 'NZD' as NonNullableCatalogsCurrency,
    Omr: 'OMR' as NonNullableCatalogsCurrency,
    Pab: 'PAB' as NonNullableCatalogsCurrency,
    Pen: 'PEN' as NonNullableCatalogsCurrency,
    Pgk: 'PGK' as NonNullableCatalogsCurrency,
    Php: 'PHP' as NonNullableCatalogsCurrency,
    Pkr: 'PKR' as NonNullableCatalogsCurrency,
    Pln: 'PLN' as NonNullableCatalogsCurrency,
    Pyg: 'PYG' as NonNullableCatalogsCurrency,
    Qar: 'QAR' as NonNullableCatalogsCurrency,
    Ron: 'RON' as NonNullableCatalogsCurrency,
    Rsd: 'RSD' as NonNullableCatalogsCurrency,
    Rub: 'RUB' as NonNullableCatalogsCurrency,
    Rwf: 'RWF' as NonNullableCatalogsCurrency,
    Sar: 'SAR' as NonNullableCatalogsCurrency,
    Sbd: 'SBD' as NonNullableCatalogsCurrency,
    Scr: 'SCR' as NonNullableCatalogsCurrency,
    Sdg: 'SDG' as NonNullableCatalogsCurrency,
    Sek: 'SEK' as NonNullableCatalogsCurrency,
    Sgd: 'SGD' as NonNullableCatalogsCurrency,
    Shp: 'SHP' as NonNullableCatalogsCurrency,
    Sll: 'SLL' as NonNullableCatalogsCurrency,
    Sos: 'SOS' as NonNullableCatalogsCurrency,
    Spl: 'SPL' as NonNullableCatalogsCurrency,
    Srd: 'SRD' as NonNullableCatalogsCurrency,
    Std: 'STD' as NonNullableCatalogsCurrency,
    Svc: 'SVC' as NonNullableCatalogsCurrency,
    Syp: 'SYP' as NonNullableCatalogsCurrency,
    Szl: 'SZL' as NonNullableCatalogsCurrency,
    Thb: 'THB' as NonNullableCatalogsCurrency,
    Tjs: 'TJS' as NonNullableCatalogsCurrency,
    Tmt: 'TMT' as NonNullableCatalogsCurrency,
    Tnd: 'TND' as NonNullableCatalogsCurrency,
    Top: 'TOP' as NonNullableCatalogsCurrency,
    Try: 'TRY' as NonNullableCatalogsCurrency,
    Ttd: 'TTD' as NonNullableCatalogsCurrency,
    Tvd: 'TVD' as NonNullableCatalogsCurrency,
    Twd: 'TWD' as NonNullableCatalogsCurrency,
    Tzs: 'TZS' as NonNullableCatalogsCurrency,
    Uah: 'UAH' as NonNullableCatalogsCurrency,
    Ugx: 'UGX' as NonNullableCatalogsCurrency,
    Usd: 'USD' as NonNullableCatalogsCurrency,
    Uyu: 'UYU' as NonNullableCatalogsCurrency,
    Uzs: 'UZS' as NonNullableCatalogsCurrency,
    Vef: 'VEF' as NonNullableCatalogsCurrency,
    Vnd: 'VND' as NonNullableCatalogsCurrency,
    Vuv: 'VUV' as NonNullableCatalogsCurrency,
    Wst: 'WST' as NonNullableCatalogsCurrency,
    Xaf: 'XAF' as NonNullableCatalogsCurrency,
    Xcd: 'XCD' as NonNullableCatalogsCurrency,
    Xdr: 'XDR' as NonNullableCatalogsCurrency,
    Xof: 'XOF' as NonNullableCatalogsCurrency,
    Xpf: 'XPF' as NonNullableCatalogsCurrency,
    Yer: 'YER' as NonNullableCatalogsCurrency,
    Zar: 'ZAR' as NonNullableCatalogsCurrency,
    Zmw: 'ZMW' as NonNullableCatalogsCurrency,
    Zwd: 'ZWD' as NonNullableCatalogsCurrency
}
