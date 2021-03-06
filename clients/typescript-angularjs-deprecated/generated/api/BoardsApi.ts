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

import * as models from '../model/models';

/* tslint:disable:no-unused-variable member-ordering */

export class BoardsApi {
    protected basePath = 'https://api.pinterest.com/v5';
    public defaultHeaders : any = {};

    static $inject: string[] = ['$http', '$httpParamSerializer', 'basePath'];

    constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
        if (basePath !== undefined) {
            this.basePath = basePath;
        }
    }

    /**
     * Create a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @summary Create board section
     * @param boardId Unique identifier of a board.
     * @param boardSection Create a board section.
     */
    public boardSectionsCreate (boardId: string, boardSection: models.BoardSection, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.BoardSection> {
        const localVarPath = this.basePath + '/boards/{board_id}/sections'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsCreate.');
        }

        // verify required parameter 'boardSection' is not null or undefined
        if (boardSection === null || boardSection === undefined) {
            throw new Error('Required parameter boardSection was null or undefined when calling boardSectionsCreate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: boardSection,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Delete a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @summary Delete board section
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     */
    public boardSectionsDelete (boardId: string, sectionId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/boards/{board_id}/sections/{section_id}'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)))
            .replace('{' + 'section_id' + '}', encodeURIComponent(String(sectionId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsDelete.');
        }

        // verify required parameter 'sectionId' is not null or undefined
        if (sectionId === null || sectionId === undefined) {
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsDelete.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'DELETE',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Get a list of all board sections from a board owned by the \"operation user_account\" - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @summary List board sections
     * @param boardId Unique identifier of a board.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     */
    public boardSectionsList (boardId: string, bookmark?: string, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.models.Paginated & object> {
        const localVarPath = this.basePath + '/boards/{board_id}/sections'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsList.');
        }

        if (bookmark !== undefined) {
            queryParameters['bookmark'] = bookmark;
        }

        if (pageSize !== undefined) {
            queryParameters['page_size'] = pageSize;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Get a list of the Pins on a board section of a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @summary List Pins on board section
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     */
    public boardSectionsListPins (boardId: string, sectionId: string, bookmark?: string, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.models.Paginated & object> {
        const localVarPath = this.basePath + '/boards/{board_id}/sections/{section_id}/pins'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)))
            .replace('{' + 'section_id' + '}', encodeURIComponent(String(sectionId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsListPins.');
        }

        // verify required parameter 'sectionId' is not null or undefined
        if (sectionId === null || sectionId === undefined) {
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsListPins.');
        }

        if (bookmark !== undefined) {
            queryParameters['bookmark'] = bookmark;
        }

        if (pageSize !== undefined) {
            queryParameters['page_size'] = pageSize;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Update a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @summary Update board section
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     * @param boardSection Update a board section.
     */
    public boardSectionsUpdate (boardId: string, sectionId: string, boardSection: models.BoardSection, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.BoardSection> {
        const localVarPath = this.basePath + '/boards/{board_id}/sections/{section_id}'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)))
            .replace('{' + 'section_id' + '}', encodeURIComponent(String(sectionId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsUpdate.');
        }

        // verify required parameter 'sectionId' is not null or undefined
        if (sectionId === null || sectionId === undefined) {
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsUpdate.');
        }

        // verify required parameter 'boardSection' is not null or undefined
        if (boardSection === null || boardSection === undefined) {
            throw new Error('Required parameter boardSection was null or undefined when calling boardSectionsUpdate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'PATCH',
            url: localVarPath,
            data: boardSection,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Create a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * @summary Create board
     * @param board Create a board using a single board json object.
     */
    public boardsCreate (board: models.Board, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.Board> {
        const localVarPath = this.basePath + '/boards';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'board' is not null or undefined
        if (board === null || board === undefined) {
            throw new Error('Required parameter board was null or undefined when calling boardsCreate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: board,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Delete a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
     * @summary Delete board
     * @param boardId Unique identifier of a board.
     */
    public boardsDelete (boardId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/boards/{board_id}'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardsDelete.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'DELETE',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @summary Get board
     * @param boardId Unique identifier of a board.
     */
    public boardsGet (boardId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.Board> {
        const localVarPath = this.basePath + '/boards/{board_id}'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardsGet.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Get a list of the boards owned by the \"operation user_account\" + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     * @summary List boards
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param privacy Privacy setting for a board.
     */
    public boardsList (bookmark?: string, pageSize?: number, privacy?: 'PUBLIC' | 'PROTECTED' | 'SECRET', extraHttpRequestParams?: any ) : ng.IHttpPromise<models.models.Paginated & object> {
        const localVarPath = this.basePath + '/boards';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        if (bookmark !== undefined) {
            queryParameters['bookmark'] = bookmark;
        }

        if (pageSize !== undefined) {
            queryParameters['page_size'] = pageSize;
        }

        if (privacy !== undefined) {
            queryParameters['privacy'] = privacy;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Get a list of the Pins on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @summary List Pins on board
     * @param boardId Unique identifier of a board.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     */
    public boardsListPins (boardId: string, bookmark?: string, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.models.Paginated & object> {
        const localVarPath = this.basePath + '/boards/{board_id}/pins'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardsListPins.');
        }

        if (bookmark !== undefined) {
            queryParameters['bookmark'] = bookmark;
        }

        if (pageSize !== undefined) {
            queryParameters['page_size'] = pageSize;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Update a board owned by the \"operating user_account\".
     * @summary Update board
     * @param boardId Unique identifier of a board.
     * @param boardUpdate Update a board.
     */
    public boardsUpdate (boardId: string, boardUpdate: models.BoardUpdate, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.Board> {
        const localVarPath = this.basePath + '/boards/{board_id}'
            .replace('{' + 'board_id' + '}', encodeURIComponent(String(boardId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'boardId' is not null or undefined
        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardsUpdate.');
        }

        // verify required parameter 'boardUpdate' is not null or undefined
        if (boardUpdate === null || boardUpdate === undefined) {
            throw new Error('Required parameter boardUpdate was null or undefined when calling boardsUpdate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'PATCH',
            url: localVarPath,
            data: boardUpdate,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
}
