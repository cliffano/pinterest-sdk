// tslint:disable
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

import { Observable } from 'rxjs';
import { BaseAPI, HttpHeaders, HttpQuery, throwIfNullOrUndefined, encodeURI, OperationOpts, RawAjaxResponse } from '../runtime';
import {
    Board,
    BoardSection,
    BoardUpdate,
    Paginated,
} from '../models';

export interface BoardSectionsCreateRequest {
    boardId: string;
    boardSection: BoardSection;
}

export interface BoardSectionsDeleteRequest {
    boardId: string;
    sectionId: string;
}

export interface BoardSectionsListRequest {
    boardId: string;
    bookmark?: string;
    pageSize?: number;
}

export interface BoardSectionsListPinsRequest {
    boardId: string;
    sectionId: string;
    bookmark?: string;
    pageSize?: number;
}

export interface BoardSectionsUpdateRequest {
    boardId: string;
    sectionId: string;
    boardSection: BoardSection;
}

export interface BoardsCreateRequest {
    board: Board;
}

export interface BoardsDeleteRequest {
    boardId: string;
}

export interface BoardsGetRequest {
    boardId: string;
}

export interface BoardsListRequest {
    bookmark?: string;
    pageSize?: number;
    privacy?: BoardsListPrivacyEnum;
}

export interface BoardsListPinsRequest {
    boardId: string;
    bookmark?: string;
    pageSize?: number;
}

export interface BoardsUpdateRequest {
    boardId: string;
    boardUpdate: BoardUpdate;
}

/**
 * no description
 */
export class BoardsApi extends BaseAPI {

    /**
     * Create a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Create board section
     */
    boardSectionsCreate({ boardId, boardSection }: BoardSectionsCreateRequest): Observable<BoardSection>
    boardSectionsCreate({ boardId, boardSection }: BoardSectionsCreateRequest, opts?: OperationOpts): Observable<RawAjaxResponse<BoardSection>>
    boardSectionsCreate({ boardId, boardSection }: BoardSectionsCreateRequest, opts?: OperationOpts): Observable<BoardSection | RawAjaxResponse<BoardSection>> {
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

        return this.request<BoardSection>({
            url: '/boards/{board_id}/sections'.replace('{board_id}', encodeURI(boardId)),
            method: 'POST',
            headers,
            body: boardSection,
        }, opts?.responseOpts);
    };

    /**
     * Delete a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Delete board section
     */
    boardSectionsDelete({ boardId, sectionId }: BoardSectionsDeleteRequest): Observable<void>
    boardSectionsDelete({ boardId, sectionId }: BoardSectionsDeleteRequest, opts?: OperationOpts): Observable<void | RawAjaxResponse<void>>
    boardSectionsDelete({ boardId, sectionId }: BoardSectionsDeleteRequest, opts?: OperationOpts): Observable<void | RawAjaxResponse<void>> {
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

        return this.request<void>({
            url: '/boards/{board_id}/sections/{section_id}'.replace('{board_id}', encodeURI(boardId)).replace('{section_id}', encodeURI(sectionId)),
            method: 'DELETE',
            headers,
        }, opts?.responseOpts);
    };

    /**
     * Get a list of all board sections from a board owned by the \"operation user_account\" - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List board sections
     */
    boardSectionsList({ boardId, bookmark, pageSize }: BoardSectionsListRequest): Observable<Paginated & object>
    boardSectionsList({ boardId, bookmark, pageSize }: BoardSectionsListRequest, opts?: OperationOpts): Observable<RawAjaxResponse<Paginated & object>>
    boardSectionsList({ boardId, bookmark, pageSize }: BoardSectionsListRequest, opts?: OperationOpts): Observable<Paginated & object | RawAjaxResponse<Paginated & object>> {
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

        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (pageSize != null) { query['page_size'] = pageSize; }

        return this.request<Paginated & object>({
            url: '/boards/{board_id}/sections'.replace('{board_id}', encodeURI(boardId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get a list of the Pins on a board section of a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List Pins on board section
     */
    boardSectionsListPins({ boardId, sectionId, bookmark, pageSize }: BoardSectionsListPinsRequest): Observable<Paginated & object>
    boardSectionsListPins({ boardId, sectionId, bookmark, pageSize }: BoardSectionsListPinsRequest, opts?: OperationOpts): Observable<RawAjaxResponse<Paginated & object>>
    boardSectionsListPins({ boardId, sectionId, bookmark, pageSize }: BoardSectionsListPinsRequest, opts?: OperationOpts): Observable<Paginated & object | RawAjaxResponse<Paginated & object>> {
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

        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (pageSize != null) { query['page_size'] = pageSize; }

        return this.request<Paginated & object>({
            url: '/boards/{board_id}/sections/{section_id}/pins'.replace('{board_id}', encodeURI(boardId)).replace('{section_id}', encodeURI(sectionId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Update a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Update board section
     */
    boardSectionsUpdate({ boardId, sectionId, boardSection }: BoardSectionsUpdateRequest): Observable<BoardSection>
    boardSectionsUpdate({ boardId, sectionId, boardSection }: BoardSectionsUpdateRequest, opts?: OperationOpts): Observable<RawAjaxResponse<BoardSection>>
    boardSectionsUpdate({ boardId, sectionId, boardSection }: BoardSectionsUpdateRequest, opts?: OperationOpts): Observable<BoardSection | RawAjaxResponse<BoardSection>> {
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

        return this.request<BoardSection>({
            url: '/boards/{board_id}/sections/{section_id}'.replace('{board_id}', encodeURI(boardId)).replace('{section_id}', encodeURI(sectionId)),
            method: 'PATCH',
            headers,
            body: boardSection,
        }, opts?.responseOpts);
    };

    /**
     * Create a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Create board
     */
    boardsCreate({ board }: BoardsCreateRequest): Observable<Board>
    boardsCreate({ board }: BoardsCreateRequest, opts?: OperationOpts): Observable<RawAjaxResponse<Board>>
    boardsCreate({ board }: BoardsCreateRequest, opts?: OperationOpts): Observable<Board | RawAjaxResponse<Board>> {
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

        return this.request<Board>({
            url: '/boards',
            method: 'POST',
            headers,
            body: board,
        }, opts?.responseOpts);
    };

    /**
     * Delete a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Delete board
     */
    boardsDelete({ boardId }: BoardsDeleteRequest): Observable<void>
    boardsDelete({ boardId }: BoardsDeleteRequest, opts?: OperationOpts): Observable<void | RawAjaxResponse<void>>
    boardsDelete({ boardId }: BoardsDeleteRequest, opts?: OperationOpts): Observable<void | RawAjaxResponse<void>> {
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

        return this.request<void>({
            url: '/boards/{board_id}'.replace('{board_id}', encodeURI(boardId)),
            method: 'DELETE',
            headers,
        }, opts?.responseOpts);
    };

    /**
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Get board
     */
    boardsGet({ boardId }: BoardsGetRequest): Observable<Board>
    boardsGet({ boardId }: BoardsGetRequest, opts?: OperationOpts): Observable<RawAjaxResponse<Board>>
    boardsGet({ boardId }: BoardsGetRequest, opts?: OperationOpts): Observable<Board | RawAjaxResponse<Board>> {
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

        return this.request<Board>({
            url: '/boards/{board_id}'.replace('{board_id}', encodeURI(boardId)),
            method: 'GET',
            headers,
        }, opts?.responseOpts);
    };

    /**
     * Get a list of the boards owned by the \"operation user_account\" + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     * List boards
     */
    boardsList({ bookmark, pageSize, privacy }: BoardsListRequest): Observable<Paginated & object>
    boardsList({ bookmark, pageSize, privacy }: BoardsListRequest, opts?: OperationOpts): Observable<RawAjaxResponse<Paginated & object>>
    boardsList({ bookmark, pageSize, privacy }: BoardsListRequest, opts?: OperationOpts): Observable<Paginated & object | RawAjaxResponse<Paginated & object>> {

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

        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (pageSize != null) { query['page_size'] = pageSize; }
        if (privacy != null) { query['privacy'] = privacy; }

        return this.request<Paginated & object>({
            url: '/boards',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get a list of the Pins on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List Pins on board
     */
    boardsListPins({ boardId, bookmark, pageSize }: BoardsListPinsRequest): Observable<Paginated & object>
    boardsListPins({ boardId, bookmark, pageSize }: BoardsListPinsRequest, opts?: OperationOpts): Observable<RawAjaxResponse<Paginated & object>>
    boardsListPins({ boardId, bookmark, pageSize }: BoardsListPinsRequest, opts?: OperationOpts): Observable<Paginated & object | RawAjaxResponse<Paginated & object>> {
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

        return this.request<Paginated & object>({
            url: '/boards/{board_id}/pins'.replace('{board_id}', encodeURI(boardId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Update a board owned by the \"operating user_account\".
     * Update board
     */
    boardsUpdate({ boardId, boardUpdate }: BoardsUpdateRequest): Observable<Board>
    boardsUpdate({ boardId, boardUpdate }: BoardsUpdateRequest, opts?: OperationOpts): Observable<RawAjaxResponse<Board>>
    boardsUpdate({ boardId, boardUpdate }: BoardsUpdateRequest, opts?: OperationOpts): Observable<Board | RawAjaxResponse<Board>> {
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

        return this.request<Board>({
            url: '/boards/{board_id}'.replace('{board_id}', encodeURI(boardId)),
            method: 'PATCH',
            headers,
            body: boardUpdate,
        }, opts?.responseOpts);
    };

}

/**
 * @export
 * @enum {string}
 */
export enum BoardsListPrivacyEnum {
    Public = 'PUBLIC',
    Protected = 'PROTECTED',
    Secret = 'SECRET'
}