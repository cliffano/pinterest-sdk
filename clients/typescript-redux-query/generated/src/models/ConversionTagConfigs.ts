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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface ConversionTagConfigs
 */
export interface ConversionTagConfigs  {
    /**
     * Whether Automatic Enhanced Match email is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
     * @type {boolean}
     * @memberof ConversionTagConfigs
     */
    aemEnabled?: boolean;
    /**
     * Metadata ingestion frequency.
     * @type {number}
     * @memberof ConversionTagConfigs
     */
    mdFrequency?: number;
    /**
     * Whether Automatic Enhanced Match name is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
     * @type {boolean}
     * @memberof ConversionTagConfigs
     */
    aemFnlnEnabled?: boolean;
    /**
     * Whether Automatic Enhanced Match phone is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
     * @type {boolean}
     * @memberof ConversionTagConfigs
     */
    aemPhEnabled?: boolean;
    /**
     * Whether Automatic Enhanced Match gender is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
     * @type {boolean}
     * @memberof ConversionTagConfigs
     */
    aemGeEnabled?: boolean;
    /**
     * Whether Automatic Enhanced Match birthdate is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
     * @type {boolean}
     * @memberof ConversionTagConfigs
     */
    aemDbEnabled?: boolean;
    /**
     * Whether Automatic Enhanced Match location is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
     * @type {boolean}
     * @memberof ConversionTagConfigs
     */
    aemLocEnabled?: boolean;
}

export function ConversionTagConfigsFromJSON(json: any): ConversionTagConfigs {
    return {
        'aemEnabled': !exists(json, 'aem_enabled') ? undefined : json['aem_enabled'],
        'mdFrequency': !exists(json, 'md_frequency') ? undefined : json['md_frequency'],
        'aemFnlnEnabled': !exists(json, 'aem_fnln_enabled') ? undefined : json['aem_fnln_enabled'],
        'aemPhEnabled': !exists(json, 'aem_ph_enabled') ? undefined : json['aem_ph_enabled'],
        'aemGeEnabled': !exists(json, 'aem_ge_enabled') ? undefined : json['aem_ge_enabled'],
        'aemDbEnabled': !exists(json, 'aem_db_enabled') ? undefined : json['aem_db_enabled'],
        'aemLocEnabled': !exists(json, 'aem_loc_enabled') ? undefined : json['aem_loc_enabled'],
    };
}

export function ConversionTagConfigsToJSON(value?: ConversionTagConfigs): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'aem_enabled': value.aemEnabled,
        'md_frequency': value.mdFrequency,
        'aem_fnln_enabled': value.aemFnlnEnabled,
        'aem_ph_enabled': value.aemPhEnabled,
        'aem_ge_enabled': value.aemGeEnabled,
        'aem_db_enabled': value.aemDbEnabled,
        'aem_loc_enabled': value.aemLocEnabled,
    };
}


