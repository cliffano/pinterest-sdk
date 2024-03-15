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
 * Campaign objective type. If set as one of [\"AWARENESS\", \"CONSIDERATION\", \"WEB_CONVERSION\", \"CATALOG_SALES\"] the campaign is considered as a Campaign Budget Optimization (CBO) campaign, meaning budget needs to be set at the campaign level rather than at the ad group level. [\"WEB_SESSIONS\"] in BETA. For update, only draft campaigns may update objective type.
 */
export type ObjectiveType = 'AWARENESS' | 'CONSIDERATION' | 'VIDEO_VIEW' | 'WEB_CONVERSION' | 'CATALOG_SALES' | 'WEB_SESSIONS';

export const ObjectiveType = {
    Awareness: 'AWARENESS' as ObjectiveType,
    Consideration: 'CONSIDERATION' as ObjectiveType,
    VideoView: 'VIDEO_VIEW' as ObjectiveType,
    WebConversion: 'WEB_CONVERSION' as ObjectiveType,
    CatalogSales: 'CATALOG_SALES' as ObjectiveType,
    WebSessions: 'WEB_SESSIONS' as ObjectiveType
};

