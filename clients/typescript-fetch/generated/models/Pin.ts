/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
import {
    BoardOwner,
    BoardOwnerFromJSON,
    BoardOwnerFromJSONTyped,
    BoardOwnerToJSON,
} from './BoardOwner';
import {
    PinMedia,
    PinMediaFromJSON,
    PinMediaFromJSONTyped,
    PinMediaToJSON,
} from './PinMedia';
import {
    PinMediaSource,
    PinMediaSourceFromJSON,
    PinMediaSourceFromJSONTyped,
    PinMediaSourceToJSON,
} from './PinMediaSource';

/**
 * Pin
 * @export
 * @interface Pin
 */
export interface Pin {
    /**
     * 
     * @type {string}
     * @memberof Pin
     */
    readonly id?: string;
    /**
     * 
     * @type {Date}
     * @memberof Pin
     */
    readonly createdAt?: Date;
    /**
     * 
     * @type {string}
     * @memberof Pin
     */
    link?: string | null;
    /**
     * 
     * @type {string}
     * @memberof Pin
     */
    title?: string | null;
    /**
     * 
     * @type {string}
     * @memberof Pin
     */
    description?: string | null;
    /**
     * 
     * @type {string}
     * @memberof Pin
     */
    altText?: string | null;
    /**
     * The board to which this Pin belongs.
     * @type {string}
     * @memberof Pin
     */
    boardId?: string;
    /**
     * The board section to which this Pin belongs.
     * @type {string}
     * @memberof Pin
     */
    boardSectionId?: string | null;
    /**
     * 
     * @type {BoardOwner}
     * @memberof Pin
     */
    readonly boardOwner?: BoardOwner;
    /**
     * 
     * @type {PinMedia}
     * @memberof Pin
     */
    readonly media?: PinMedia;
    /**
     * 
     * @type {PinMediaSource}
     * @memberof Pin
     */
    mediaSource?: PinMediaSource;
}

export function PinFromJSON(json: any): Pin {
    return PinFromJSONTyped(json, false);
}

export function PinFromJSONTyped(json: any, ignoreDiscriminator: boolean): Pin {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'id': !exists(json, 'id') ? undefined : json['id'],
        'createdAt': !exists(json, 'created_at') ? undefined : (new Date(json['created_at'])),
        'link': !exists(json, 'link') ? undefined : json['link'],
        'title': !exists(json, 'title') ? undefined : json['title'],
        'description': !exists(json, 'description') ? undefined : json['description'],
        'altText': !exists(json, 'alt_text') ? undefined : json['alt_text'],
        'boardId': !exists(json, 'board_id') ? undefined : json['board_id'],
        'boardSectionId': !exists(json, 'board_section_id') ? undefined : json['board_section_id'],
        'boardOwner': !exists(json, 'board_owner') ? undefined : (mapValues(json['board_owner'], FromJSON)),
        'media': !exists(json, 'media') ? undefined : (mapValues(json['media'], FromJSON)),
        'mediaSource': !exists(json, 'media_source') ? undefined : (mapValues(json['media_source'], FromJSON)),
    };
}

export function PinToJSON(value?: Pin | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'link': value.link,
        'title': value.title,
        'description': value.description,
        'alt_text': value.altText,
        'board_id': value.boardId,
        'board_section_id': value.boardSectionId,
        'media_source': value.mediaSource === undefined ? undefined : (mapValues(value.mediaSource, ToJSON)),
    };
}

