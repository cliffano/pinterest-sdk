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

import type { Observable } from 'rxjs';
import type { AjaxResponse } from 'rxjs/ajax';
import { BaseAPI, throwIfNullOrUndefined, encodeURI } from '../runtime';
import type { OperationOpts, HttpHeaders, HttpQuery } from '../runtime';
import type {
    Board,
    BoardSection,
    BoardSectionsList200Response,
    BoardUpdate,
    BoardsList200Response,
    BoardsListPins200Response,
} from '../models';

export interface BoardSectionsCreateRequest {
    boardId: string;
    boardSection: BoardSection;
    adAccountId?: string;
}

export interface BoardSectionsDeleteRequest {
    boardId: string;
    sectionId: string;
    adAccountId?: string;
}

export interface BoardSectionsListRequest {
    boardId: string;
    adAccountId?: string;
    bookmark?: string;
    pageSize?: number;
}

export interface BoardSectionsListPinsRequest {
    boardId: string;
    sectionId: string;
    adAccountId?: string;
    bookmark?: string;
    pageSize?: number;
}

export interface BoardSectionsUpdateRequest {
    boardId: string;
    sectionId: string;
    boardSection: BoardSection;
    adAccountId?: string;
}

export interface BoardsCreateRequest {
    board: Board;
    adAccountId?: string;
}

export interface BoardsDeleteRequest {
    boardId: string;
    adAccountId?: string;
}

export interface BoardsGetRequest {
    boardId: string;
    adAccountId?: string;
}

export interface BoardsListRequest {
    adAccountId?: string;
    bookmark?: string;
    pageSize?: number;
    privacy?: BoardsListPrivacyEnum;
}

export interface BoardsListPinsRequest {
    boardId: string;
    bookmark?: string;
    pageSize?: number;
    creativeTypes?: Array<BoardsListPinsCreativeTypesEnum>;
    adAccountId?: string;
    pinMetrics?: boolean;
}

export interface BoardsUpdateRequest {
    boardId: string;
    boardUpdate: BoardUpdate;
    adAccountId?: string;
}

/**
 * no description
 */
export class BoardsApi extends BaseAPI {

    /**
     * Create a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Create board section
     */
    boardSectionsCreate({ boardId, boardSection, adAccountId }: BoardSectionsCreateRequest): Observable<BoardSection>
    boardSectionsCreate({ boardId, boardSection, adAccountId }: BoardSectionsCreateRequest, opts?: OperationOpts): Observable<AjaxResponse<BoardSection>>
    boardSectionsCreate({ boardId, boardSection, adAccountId }: BoardSectionsCreateRequest, opts?: OperationOpts): Observable<BoardSection | AjaxResponse<BoardSection>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardSectionsCreate');
        throwIfNullOrUndefined(boardSection, 'boardSection', 'boardSectionsCreate');

        const headers: HttpHeaders = {
            'Content-Type': 'application/json',
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'boards:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<BoardSection>({
            url: '/boards/{board_id}/sections'.replace('{board_id}', encodeURI(boardId)),
            method: 'POST',
            headers,
            query,
            body: boardSection,
        }, opts?.responseOpts);
    };

    /**
     * Delete a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Delete board section
     */
    boardSectionsDelete({ boardId, sectionId, adAccountId }: BoardSectionsDeleteRequest): Observable<void>
    boardSectionsDelete({ boardId, sectionId, adAccountId }: BoardSectionsDeleteRequest, opts?: OperationOpts): Observable<void | AjaxResponse<void>>
    boardSectionsDelete({ boardId, sectionId, adAccountId }: BoardSectionsDeleteRequest, opts?: OperationOpts): Observable<void | AjaxResponse<void>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardSectionsDelete');
        throwIfNullOrUndefined(sectionId, 'sectionId', 'boardSectionsDelete');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'boards:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<void>({
            url: '/boards/{board_id}/sections/{section_id}'.replace('{board_id}', encodeURI(boardId)).replace('{section_id}', encodeURI(sectionId)),
            method: 'DELETE',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get a list of all board sections from a board owned by the \"operation user_account\" - or a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * List board sections
     */
    boardSectionsList({ boardId, adAccountId, bookmark, pageSize }: BoardSectionsListRequest): Observable<BoardSectionsList200Response>
    boardSectionsList({ boardId, adAccountId, bookmark, pageSize }: BoardSectionsListRequest, opts?: OperationOpts): Observable<AjaxResponse<BoardSectionsList200Response>>
    boardSectionsList({ boardId, adAccountId, bookmark, pageSize }: BoardSectionsListRequest, opts?: OperationOpts): Observable<BoardSectionsList200Response | AjaxResponse<BoardSectionsList200Response>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardSectionsList');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }
        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (pageSize != null) { query['page_size'] = pageSize; }

        return this.request<BoardSectionsList200Response>({
            url: '/boards/{board_id}/sections'.replace('{board_id}', encodeURI(boardId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get a list of the Pins on a board section of a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * List Pins on board section
     */
    boardSectionsListPins({ boardId, sectionId, adAccountId, bookmark, pageSize }: BoardSectionsListPinsRequest): Observable<BoardsListPins200Response>
    boardSectionsListPins({ boardId, sectionId, adAccountId, bookmark, pageSize }: BoardSectionsListPinsRequest, opts?: OperationOpts): Observable<AjaxResponse<BoardsListPins200Response>>
    boardSectionsListPins({ boardId, sectionId, adAccountId, bookmark, pageSize }: BoardSectionsListPinsRequest, opts?: OperationOpts): Observable<BoardsListPins200Response | AjaxResponse<BoardsListPins200Response>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardSectionsListPins');
        throwIfNullOrUndefined(sectionId, 'sectionId', 'boardSectionsListPins');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'pins:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }
        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (pageSize != null) { query['page_size'] = pageSize; }

        return this.request<BoardsListPins200Response>({
            url: '/boards/{board_id}/sections/{section_id}/pins'.replace('{board_id}', encodeURI(boardId)).replace('{section_id}', encodeURI(sectionId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Update a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Update board section
     */
    boardSectionsUpdate({ boardId, sectionId, boardSection, adAccountId }: BoardSectionsUpdateRequest): Observable<BoardSection>
    boardSectionsUpdate({ boardId, sectionId, boardSection, adAccountId }: BoardSectionsUpdateRequest, opts?: OperationOpts): Observable<AjaxResponse<BoardSection>>
    boardSectionsUpdate({ boardId, sectionId, boardSection, adAccountId }: BoardSectionsUpdateRequest, opts?: OperationOpts): Observable<BoardSection | AjaxResponse<BoardSection>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardSectionsUpdate');
        throwIfNullOrUndefined(sectionId, 'sectionId', 'boardSectionsUpdate');
        throwIfNullOrUndefined(boardSection, 'boardSection', 'boardSectionsUpdate');

        const headers: HttpHeaders = {
            'Content-Type': 'application/json',
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'boards:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<BoardSection>({
            url: '/boards/{board_id}/sections/{section_id}'.replace('{board_id}', encodeURI(boardId)).replace('{section_id}', encodeURI(sectionId)),
            method: 'PATCH',
            headers,
            query,
            body: boardSection,
        }, opts?.responseOpts);
    };

    /**
     * Create a board owned by the \"operation user_account\". Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Create board
     */
    boardsCreate({ board, adAccountId }: BoardsCreateRequest): Observable<Board>
    boardsCreate({ board, adAccountId }: BoardsCreateRequest, opts?: OperationOpts): Observable<AjaxResponse<Board>>
    boardsCreate({ board, adAccountId }: BoardsCreateRequest, opts?: OperationOpts): Observable<Board | AjaxResponse<Board>> {
        throwIfNullOrUndefined(board, 'board', 'boardsCreate');

        const headers: HttpHeaders = {
            'Content-Type': 'application/json',
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'boards:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<Board>({
            url: '/boards',
            method: 'POST',
            headers,
            query,
            body: board,
        }, opts?.responseOpts);
    };

    /**
     * Delete a board owned by the \"operation user_account\". - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Delete board
     */
    boardsDelete({ boardId, adAccountId }: BoardsDeleteRequest): Observable<void>
    boardsDelete({ boardId, adAccountId }: BoardsDeleteRequest, opts?: OperationOpts): Observable<void | AjaxResponse<void>>
    boardsDelete({ boardId, adAccountId }: BoardsDeleteRequest, opts?: OperationOpts): Observable<void | AjaxResponse<void>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardsDelete');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'boards:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<void>({
            url: '/boards/{board_id}'.replace('{board_id}', encodeURI(boardId)),
            method: 'DELETE',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Get board
     */
    boardsGet({ boardId, adAccountId }: BoardsGetRequest): Observable<Board>
    boardsGet({ boardId, adAccountId }: BoardsGetRequest, opts?: OperationOpts): Observable<AjaxResponse<Board>>
    boardsGet({ boardId, adAccountId }: BoardsGetRequest, opts?: OperationOpts): Observable<Board | AjaxResponse<Board>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardsGet');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<Board>({
            url: '/boards/{board_id}'.replace('{board_id}', encodeURI(boardId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get a list of the boards owned by the \"operation user_account\" + group boards where this account is a collaborator Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     * List boards
     */
    boardsList({ adAccountId, bookmark, pageSize, privacy }: BoardsListRequest): Observable<BoardsList200Response>
    boardsList({ adAccountId, bookmark, pageSize, privacy }: BoardsListRequest, opts?: OperationOpts): Observable<AjaxResponse<BoardsList200Response>>
    boardsList({ adAccountId, bookmark, pageSize, privacy }: BoardsListRequest, opts?: OperationOpts): Observable<BoardsList200Response | AjaxResponse<BoardsList200Response>> {

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }
        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (pageSize != null) { query['page_size'] = pageSize; }
        if (privacy != null) { query['privacy'] = privacy; }

        return this.request<BoardsList200Response>({
            url: '/boards',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get a list of the Pins on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * List Pins on board
     */
    boardsListPins({ boardId, bookmark, pageSize, creativeTypes, adAccountId, pinMetrics }: BoardsListPinsRequest): Observable<BoardsListPins200Response>
    boardsListPins({ boardId, bookmark, pageSize, creativeTypes, adAccountId, pinMetrics }: BoardsListPinsRequest, opts?: OperationOpts): Observable<AjaxResponse<BoardsListPins200Response>>
    boardsListPins({ boardId, bookmark, pageSize, creativeTypes, adAccountId, pinMetrics }: BoardsListPinsRequest, opts?: OperationOpts): Observable<BoardsListPins200Response | AjaxResponse<BoardsListPins200Response>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardsListPins');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'pins:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (pageSize != null) { query['page_size'] = pageSize; }
        if (creativeTypes != null) { query['creative_types'] = creativeTypes; }
        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }
        if (pinMetrics != null) { query['pin_metrics'] = pinMetrics; }

        return this.request<BoardsListPins200Response>({
            url: '/boards/{board_id}/pins'.replace('{board_id}', encodeURI(boardId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Update a board owned by the \"operating user_account\". - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Update board
     */
    boardsUpdate({ boardId, boardUpdate, adAccountId }: BoardsUpdateRequest): Observable<Board>
    boardsUpdate({ boardId, boardUpdate, adAccountId }: BoardsUpdateRequest, opts?: OperationOpts): Observable<AjaxResponse<Board>>
    boardsUpdate({ boardId, boardUpdate, adAccountId }: BoardsUpdateRequest, opts?: OperationOpts): Observable<Board | AjaxResponse<Board>> {
        throwIfNullOrUndefined(boardId, 'boardId', 'boardsUpdate');
        throwIfNullOrUndefined(boardUpdate, 'boardUpdate', 'boardsUpdate');

        const headers: HttpHeaders = {
            'Content-Type': 'application/json',
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'boards:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<Board>({
            url: '/boards/{board_id}'.replace('{board_id}', encodeURI(boardId)),
            method: 'PATCH',
            headers,
            query,
            body: boardUpdate,
        }, opts?.responseOpts);
    };

}

/**
 * @export
 * @enum {string}
 */
export enum BoardsListPrivacyEnum {
    All = 'ALL',
    Protected = 'PROTECTED',
    Public = 'PUBLIC',
    Secret = 'SECRET',
    PublicAndSecret = 'PUBLIC_AND_SECRET'
}
/**
 * @export
 * @enum {string}
 */
export enum BoardsListPinsCreativeTypesEnum {
    Regular = 'REGULAR',
    Video = 'VIDEO',
    Shopping = 'SHOPPING',
    Carousel = 'CAROUSEL',
    MaxVideo = 'MAX_VIDEO',
    ShopThePin = 'SHOP_THE_PIN',
    Collection = 'COLLECTION',
    Idea = 'IDEA'
}
