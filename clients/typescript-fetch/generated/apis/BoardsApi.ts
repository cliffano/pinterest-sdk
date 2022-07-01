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


import * as runtime from '../runtime';
import {
    Board,
    BoardFromJSON,
    BoardToJSON,
    BoardSection,
    BoardSectionFromJSON,
    BoardSectionToJSON,
    BoardUpdate,
    BoardUpdateFromJSON,
    BoardUpdateToJSON,
    Paginated,
    PaginatedFromJSON,
    PaginatedToJSON,
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
 * 
 */
export class BoardsApi extends runtime.BaseAPI {

    /**
     * Create a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Create board section
     */
    async boardSectionsCreateRaw(requestParameters: BoardSectionsCreateRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<BoardSection>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardSectionsCreate.');
        }

        if (requestParameters.boardSection === null || requestParameters.boardSection === undefined) {
            throw new runtime.RequiredError('boardSection','Required parameter requestParameters.boardSection was null or undefined when calling boardSectionsCreate.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read", "boards:write"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}/sections`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))),
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: BoardSectionToJSON(requestParameters.boardSection),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => BoardSectionFromJSON(jsonValue));
    }

    /**
     * Create a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Create board section
     */
    async boardSectionsCreate(requestParameters: BoardSectionsCreateRequest, initOverrides?: RequestInit): Promise<BoardSection> {
        const response = await this.boardSectionsCreateRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Delete a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Delete board section
     */
    async boardSectionsDeleteRaw(requestParameters: BoardSectionsDeleteRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<void>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardSectionsDelete.');
        }

        if (requestParameters.sectionId === null || requestParameters.sectionId === undefined) {
            throw new runtime.RequiredError('sectionId','Required parameter requestParameters.sectionId was null or undefined when calling boardSectionsDelete.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read", "boards:write"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}/sections/{section_id}`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))).replace(`{${"section_id"}}`, encodeURIComponent(String(requestParameters.sectionId))),
            method: 'DELETE',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.VoidApiResponse(response);
    }

    /**
     * Delete a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Delete board section
     */
    async boardSectionsDelete(requestParameters: BoardSectionsDeleteRequest, initOverrides?: RequestInit): Promise<void> {
        await this.boardSectionsDeleteRaw(requestParameters, initOverrides);
    }

    /**
     * Get a list of all board sections from a board owned by the \"operation user_account\" - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List board sections
     */
    async boardSectionsListRaw(requestParameters: BoardSectionsListRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<Paginated & object>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardSectionsList.');
        }

        const queryParameters: any = {};

        if (requestParameters.bookmark !== undefined) {
            queryParameters['bookmark'] = requestParameters.bookmark;
        }

        if (requestParameters.pageSize !== undefined) {
            queryParameters['page_size'] = requestParameters.pageSize;
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}/sections`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => Paginated &amp; objectFromJSON(jsonValue));
    }

    /**
     * Get a list of all board sections from a board owned by the \"operation user_account\" - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List board sections
     */
    async boardSectionsList(requestParameters: BoardSectionsListRequest, initOverrides?: RequestInit): Promise<Paginated & object> {
        const response = await this.boardSectionsListRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get a list of the Pins on a board section of a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List Pins on board section
     */
    async boardSectionsListPinsRaw(requestParameters: BoardSectionsListPinsRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<Paginated & object>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardSectionsListPins.');
        }

        if (requestParameters.sectionId === null || requestParameters.sectionId === undefined) {
            throw new runtime.RequiredError('sectionId','Required parameter requestParameters.sectionId was null or undefined when calling boardSectionsListPins.');
        }

        const queryParameters: any = {};

        if (requestParameters.bookmark !== undefined) {
            queryParameters['bookmark'] = requestParameters.bookmark;
        }

        if (requestParameters.pageSize !== undefined) {
            queryParameters['page_size'] = requestParameters.pageSize;
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read", "pins:read"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}/sections/{section_id}/pins`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))).replace(`{${"section_id"}}`, encodeURIComponent(String(requestParameters.sectionId))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => Paginated &amp; objectFromJSON(jsonValue));
    }

    /**
     * Get a list of the Pins on a board section of a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List Pins on board section
     */
    async boardSectionsListPins(requestParameters: BoardSectionsListPinsRequest, initOverrides?: RequestInit): Promise<Paginated & object> {
        const response = await this.boardSectionsListPinsRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Update a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Update board section
     */
    async boardSectionsUpdateRaw(requestParameters: BoardSectionsUpdateRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<BoardSection>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardSectionsUpdate.');
        }

        if (requestParameters.sectionId === null || requestParameters.sectionId === undefined) {
            throw new runtime.RequiredError('sectionId','Required parameter requestParameters.sectionId was null or undefined when calling boardSectionsUpdate.');
        }

        if (requestParameters.boardSection === null || requestParameters.boardSection === undefined) {
            throw new runtime.RequiredError('boardSection','Required parameter requestParameters.boardSection was null or undefined when calling boardSectionsUpdate.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read", "boards:write"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}/sections/{section_id}`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))).replace(`{${"section_id"}}`, encodeURIComponent(String(requestParameters.sectionId))),
            method: 'PATCH',
            headers: headerParameters,
            query: queryParameters,
            body: BoardSectionToJSON(requestParameters.boardSection),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => BoardSectionFromJSON(jsonValue));
    }

    /**
     * Update a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Update board section
     */
    async boardSectionsUpdate(requestParameters: BoardSectionsUpdateRequest, initOverrides?: RequestInit): Promise<BoardSection> {
        const response = await this.boardSectionsUpdateRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Create a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Create board
     */
    async boardsCreateRaw(requestParameters: BoardsCreateRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<Board>> {
        if (requestParameters.board === null || requestParameters.board === undefined) {
            throw new runtime.RequiredError('board','Required parameter requestParameters.board was null or undefined when calling boardsCreate.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read", "boards:write"]);
        }

        const response = await this.request({
            path: `/boards`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: BoardToJSON(requestParameters.board),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => BoardFromJSON(jsonValue));
    }

    /**
     * Create a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Create board
     */
    async boardsCreate(requestParameters: BoardsCreateRequest, initOverrides?: RequestInit): Promise<Board> {
        const response = await this.boardsCreateRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Delete a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Delete board
     */
    async boardsDeleteRaw(requestParameters: BoardsDeleteRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<void>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardsDelete.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read", "boards:write"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))),
            method: 'DELETE',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.VoidApiResponse(response);
    }

    /**
     * Delete a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * Delete board
     */
    async boardsDelete(requestParameters: BoardsDeleteRequest, initOverrides?: RequestInit): Promise<void> {
        await this.boardsDeleteRaw(requestParameters, initOverrides);
    }

    /**
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Get board
     */
    async boardsGetRaw(requestParameters: BoardsGetRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<Board>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardsGet.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => BoardFromJSON(jsonValue));
    }

    /**
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * Get board
     */
    async boardsGet(requestParameters: BoardsGetRequest, initOverrides?: RequestInit): Promise<Board> {
        const response = await this.boardsGetRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get a list of the boards owned by the \"operation user_account\" + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     * List boards
     */
    async boardsListRaw(requestParameters: BoardsListRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<Paginated & object>> {
        const queryParameters: any = {};

        if (requestParameters.bookmark !== undefined) {
            queryParameters['bookmark'] = requestParameters.bookmark;
        }

        if (requestParameters.pageSize !== undefined) {
            queryParameters['page_size'] = requestParameters.pageSize;
        }

        if (requestParameters.privacy !== undefined) {
            queryParameters['privacy'] = requestParameters.privacy;
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read"]);
        }

        const response = await this.request({
            path: `/boards`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => Paginated &amp; objectFromJSON(jsonValue));
    }

    /**
     * Get a list of the boards owned by the \"operation user_account\" + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     * List boards
     */
    async boardsList(requestParameters: BoardsListRequest = {}, initOverrides?: RequestInit): Promise<Paginated & object> {
        const response = await this.boardsListRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get a list of the Pins on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List Pins on board
     */
    async boardsListPinsRaw(requestParameters: BoardsListPinsRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<Paginated & object>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardsListPins.');
        }

        const queryParameters: any = {};

        if (requestParameters.bookmark !== undefined) {
            queryParameters['bookmark'] = requestParameters.bookmark;
        }

        if (requestParameters.pageSize !== undefined) {
            queryParameters['page_size'] = requestParameters.pageSize;
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read", "pins:read"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}/pins`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => Paginated &amp; objectFromJSON(jsonValue));
    }

    /**
     * Get a list of the Pins on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * List Pins on board
     */
    async boardsListPins(requestParameters: BoardsListPinsRequest, initOverrides?: RequestInit): Promise<Paginated & object> {
        const response = await this.boardsListPinsRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Update a board owned by the \"operating user_account\".
     * Update board
     */
    async boardsUpdateRaw(requestParameters: BoardsUpdateRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<Board>> {
        if (requestParameters.boardId === null || requestParameters.boardId === undefined) {
            throw new runtime.RequiredError('boardId','Required parameter requestParameters.boardId was null or undefined when calling boardsUpdate.');
        }

        if (requestParameters.boardUpdate === null || requestParameters.boardUpdate === undefined) {
            throw new runtime.RequiredError('boardUpdate','Required parameter requestParameters.boardUpdate was null or undefined when calling boardsUpdate.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["boards:read", "boards:write"]);
        }

        const response = await this.request({
            path: `/boards/{board_id}`.replace(`{${"board_id"}}`, encodeURIComponent(String(requestParameters.boardId))),
            method: 'PATCH',
            headers: headerParameters,
            query: queryParameters,
            body: BoardUpdateToJSON(requestParameters.boardUpdate),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => BoardFromJSON(jsonValue));
    }

    /**
     * Update a board owned by the \"operating user_account\".
     * Update board
     */
    async boardsUpdate(requestParameters: BoardsUpdateRequest, initOverrides?: RequestInit): Promise<Board> {
        const response = await this.boardsUpdateRaw(requestParameters, initOverrides);
        return await response.value();
    }

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
