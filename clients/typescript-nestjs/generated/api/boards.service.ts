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
/* tslint:disable:no-unused-variable member-ordering */

import { HttpService, Inject, Injectable, Optional } from '@nestjs/common';
import { AxiosResponse } from 'axios';
import { Observable } from 'rxjs';
import { Board } from '../model/board';
import { BoardSection } from '../model/boardSection';
import { BoardUpdate } from '../model/boardUpdate';
import { Paginated } from '../model/paginated';
import { Configuration } from '../configuration';


@Injectable()
export class BoardsService {

    protected basePath = 'https://api.pinterest.com/v5';
    public defaultHeaders: Record<string,string> = {};
    public configuration = new Configuration();

    constructor(protected httpClient: HttpService, @Optional() configuration: Configuration) {
        this.configuration = configuration || this.configuration;
        this.basePath = configuration?.basePath || this.basePath;
    }

    /**
     * @param consumes string[] mime-types
     * @return true: consumes contains 'multipart/form-data', false: otherwise
     */
    private canConsumeForm(consumes: string[]): boolean {
        const form = 'multipart/form-data';
        return consumes.includes(form);
    }

    /**
     * Create board section
     * Create a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param boardSection Create a board section.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardSectionsCreate(boardId: string, boardSection: BoardSection, ): Observable<AxiosResponse<BoardSection>>;
    public boardSectionsCreate(boardId: string, boardSection: BoardSection, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsCreate.');
        }

        if (boardSection === null || boardSection === undefined) {
            throw new Error('Required parameter boardSection was null or undefined when calling boardSectionsCreate.');
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
            'application/json'
        ];
        const httpContentTypeSelected: string | undefined = this.configuration.selectHeaderContentType(consumes);
        if (httpContentTypeSelected != undefined) {
            headers['Content-Type'] = httpContentTypeSelected;
        }
        return this.httpClient.post<BoardSection>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}/sections`,
            boardSection,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Delete board section
     * Delete a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardSectionsDelete(boardId: string, sectionId: string, ): Observable<AxiosResponse<any>>;
    public boardSectionsDelete(boardId: string, sectionId: string, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsDelete.');
        }

        if (sectionId === null || sectionId === undefined) {
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsDelete.');
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.delete<any>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}/sections/${encodeURIComponent(String(section_id))}`,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * List board sections
     * Get a list of all board sections from a board owned by the \&quot;operation user_account\&quot; - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardSectionsList(boardId: string, bookmark?: string, pageSize?: number, ): Observable<AxiosResponse<Paginated & object>>;
    public boardSectionsList(boardId: string, bookmark?: string, pageSize?: number, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsList.');
        }



        let queryParameters = {};
        if (bookmark !== undefined && bookmark !== null) {
            queryParameters['bookmark'] = <any>bookmark;
        }
        if (pageSize !== undefined && pageSize !== null) {
            queryParameters['page_size'] = <any>pageSize;
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.get<Paginated & object>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}/sections`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * List Pins on board section
     * Get a list of the Pins on a board section of a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardSectionsListPins(boardId: string, sectionId: string, bookmark?: string, pageSize?: number, ): Observable<AxiosResponse<Paginated & object>>;
    public boardSectionsListPins(boardId: string, sectionId: string, bookmark?: string, pageSize?: number, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsListPins.');
        }

        if (sectionId === null || sectionId === undefined) {
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsListPins.');
        }



        let queryParameters = {};
        if (bookmark !== undefined && bookmark !== null) {
            queryParameters['bookmark'] = <any>bookmark;
        }
        if (pageSize !== undefined && pageSize !== null) {
            queryParameters['page_size'] = <any>pageSize;
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.get<Paginated & object>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}/sections/${encodeURIComponent(String(section_id))}/pins`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Update board section
     * Update a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     * @param boardSection Update a board section.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardSectionsUpdate(boardId: string, sectionId: string, boardSection: BoardSection, ): Observable<AxiosResponse<BoardSection>>;
    public boardSectionsUpdate(boardId: string, sectionId: string, boardSection: BoardSection, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsUpdate.');
        }

        if (sectionId === null || sectionId === undefined) {
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsUpdate.');
        }

        if (boardSection === null || boardSection === undefined) {
            throw new Error('Required parameter boardSection was null or undefined when calling boardSectionsUpdate.');
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
            'application/json'
        ];
        const httpContentTypeSelected: string | undefined = this.configuration.selectHeaderContentType(consumes);
        if (httpContentTypeSelected != undefined) {
            headers['Content-Type'] = httpContentTypeSelected;
        }
        return this.httpClient.patch<BoardSection>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}/sections/${encodeURIComponent(String(section_id))}`,
            boardSection,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Create board
     * Create a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param board Create a board using a single board json object.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardsCreate(board: Board, ): Observable<AxiosResponse<Board>>;
    public boardsCreate(board: Board, ): Observable<any> {

        if (board === null || board === undefined) {
            throw new Error('Required parameter board was null or undefined when calling boardsCreate.');
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
            'application/json'
        ];
        const httpContentTypeSelected: string | undefined = this.configuration.selectHeaderContentType(consumes);
        if (httpContentTypeSelected != undefined) {
            headers['Content-Type'] = httpContentTypeSelected;
        }
        return this.httpClient.post<Board>(`${this.basePath}/boards`,
            board,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Delete board
     * Delete a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardsDelete(boardId: string, ): Observable<AxiosResponse<any>>;
    public boardsDelete(boardId: string, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardsDelete.');
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.delete<any>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}`,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Get board
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardsGet(boardId: string, ): Observable<AxiosResponse<Board>>;
    public boardsGet(boardId: string, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardsGet.');
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.get<Board>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}`,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * List boards
     * Get a list of the boards owned by the \&quot;operation user_account\&quot; + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param privacy Privacy setting for a board.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardsList(bookmark?: string, pageSize?: number, privacy?: 'PUBLIC' | 'PROTECTED' | 'SECRET', ): Observable<AxiosResponse<Paginated & object>>;
    public boardsList(bookmark?: string, pageSize?: number, privacy?: 'PUBLIC' | 'PROTECTED' | 'SECRET', ): Observable<any> {




        let queryParameters = {};
        if (bookmark !== undefined && bookmark !== null) {
            queryParameters['bookmark'] = <any>bookmark;
        }
        if (pageSize !== undefined && pageSize !== null) {
            queryParameters['page_size'] = <any>pageSize;
        }
        if (privacy !== undefined && privacy !== null) {
            queryParameters['privacy'] = <any>privacy;
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.get<Paginated & object>(`${this.basePath}/boards`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * List Pins on board
     * Get a list of the Pins on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardsListPins(boardId: string, bookmark?: string, pageSize?: number, ): Observable<AxiosResponse<Paginated & object>>;
    public boardsListPins(boardId: string, bookmark?: string, pageSize?: number, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardsListPins.');
        }



        let queryParameters = {};
        if (bookmark !== undefined && bookmark !== null) {
            queryParameters['bookmark'] = <any>bookmark;
        }
        if (pageSize !== undefined && pageSize !== null) {
            queryParameters['page_size'] = <any>pageSize;
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.get<Paginated & object>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}/pins`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Update board
     * Update a board owned by the \&quot;operating user_account\&quot;.
     * @param boardId Unique identifier of a board.
     * @param boardUpdate Update a board.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public boardsUpdate(boardId: string, boardUpdate: BoardUpdate, ): Observable<AxiosResponse<Board>>;
    public boardsUpdate(boardId: string, boardUpdate: BoardUpdate, ): Observable<any> {

        if (boardId === null || boardId === undefined) {
            throw new Error('Required parameter boardId was null or undefined when calling boardsUpdate.');
        }

        if (boardUpdate === null || boardUpdate === undefined) {
            throw new Error('Required parameter boardUpdate was null or undefined when calling boardsUpdate.');
        }

        let headers = this.defaultHeaders;

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
            'application/json'
        ];
        const httpContentTypeSelected: string | undefined = this.configuration.selectHeaderContentType(consumes);
        if (httpContentTypeSelected != undefined) {
            headers['Content-Type'] = httpContentTypeSelected;
        }
        return this.httpClient.patch<Board>(`${this.basePath}/boards/${encodeURIComponent(String(board_id))}`,
            boardUpdate,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
}
