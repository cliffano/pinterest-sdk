/* tslint:disable */
/* eslint-disable */
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
 * Currency Codes from ISO 4217
 * @export
 * @enum {string}
 */
export enum Currency {
    Unk = 'UNK',
    Usd = 'USD',
    Gbp = 'GBP',
    Cad = 'CAD',
    Eur = 'EUR',
    Aud = 'AUD',
    Nzd = 'NZD',
    Sek = 'SEK',
    Ils = 'ILS',
    Chf = 'CHF',
    Hkd = 'HKD',
    Jpy = 'JPY',
    Sgd = 'SGD',
    Krw = 'KRW',
    Nok = 'NOK',
    Dkk = 'DKK',
    Pln = 'PLN',
    Ron = 'RON',
    Huf = 'HUF',
    Czk = 'CZK',
    Brl = 'BRL',
    Mxn = 'MXN',
    Ars = 'ARS',
    Clp = 'CLP',
    Cop = 'COP'
}

export function CurrencyFromJSON(json: any): Currency {
    return CurrencyFromJSONTyped(json, false);
}

export function CurrencyFromJSONTyped(json: any, ignoreDiscriminator: boolean): Currency {
    return json as Currency;
}

export function CurrencyToJSON(value?: Currency | null): any {
    return value as any;
}

