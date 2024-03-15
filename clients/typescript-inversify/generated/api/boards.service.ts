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
/* tslint:disable:no-unused-variable member-ordering */

import { Observable } from 'rxjs/Observable';

import { map } from 'rxjs/operators';
import IHttpClient from '../IHttpClient';
import { inject, injectable } from 'inversify';
import { IAPIConfiguration } from '../IAPIConfiguration';
import { Headers } from '../Headers';
import HttpResponse from '../HttpResponse';

import { Board } from '../model/board';
import { BoardSection } from '../model/boardSection';
import { BoardSectionsList200Response } from '../model/boardSectionsList200Response';
import { BoardUpdate } from '../model/boardUpdate';
import { BoardsList200Response } from '../model/boardsList200Response';
import { BoardsListPins200Response } from '../model/boardsListPins200Response';

import { COLLECTION_FORMATS }  from '../variables';



@injectable()
export class BoardsService {
    private basePath: string = 'https://api.pinterest.com/v5';

    constructor(@inject('IApiHttpClient') private httpClient: IHttpClient,
        @inject('IAPIConfiguration') private APIConfiguration: IAPIConfiguration ) {
        if(this.APIConfiguration.basePath)
            this.basePath = this.APIConfiguration.basePath;
    }

    /**
     * Create board section
     * Create a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param boardSection Create a board section.
     * @param adAccountId Unique identifier of an ad account.
     
     */
    public boardSectionsCreate(boardId: string, boardSection: BoardSection, adAccountId?: string, observe?: 'body', headers?: Headers): Observable<BoardSection>;
    public boardSectionsCreate(boardId: string, boardSection: BoardSection, adAccountId?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<BoardSection>>;
    public boardSectionsCreate(boardId: string, boardSection: BoardSection, adAccountId?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsCreate.');
        }

        if (boardSection === null || boardSection === undefined){
            throw new Error('Required parameter boardSection was null or undefined when calling boardSectionsCreate.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';
        headers['Content-Type'] = 'application/json';

        const response: Observable<HttpResponse<BoardSection>> = this.httpClient.post(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}/sections?${queryParameters.join('&')}`, boardSection , headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <BoardSection>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Delete board section
     * Delete a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     * @param adAccountId Unique identifier of an ad account.
     
     */
    public boardSectionsDelete(boardId: string, sectionId: string, adAccountId?: string, observe?: 'body', headers?: Headers): Observable<any>;
    public boardSectionsDelete(boardId: string, sectionId: string, adAccountId?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<any>>;
    public boardSectionsDelete(boardId: string, sectionId: string, adAccountId?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsDelete.');
        }

        if (sectionId === null || sectionId === undefined){
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsDelete.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<any>> = this.httpClient.delete(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}/sections/${encodeURIComponent(String(sectionId))}?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <any>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * List board sections
     * Get a list of all board sections from a board owned by the \&quot;operation user_account\&quot; - or a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param adAccountId Unique identifier of an ad account.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     
     */
    public boardSectionsList(boardId: string, adAccountId?: string, bookmark?: string, pageSize?: number, observe?: 'body', headers?: Headers): Observable<BoardSectionsList200Response>;
    public boardSectionsList(boardId: string, adAccountId?: string, bookmark?: string, pageSize?: number, observe?: 'response', headers?: Headers): Observable<HttpResponse<BoardSectionsList200Response>>;
    public boardSectionsList(boardId: string, adAccountId?: string, bookmark?: string, pageSize?: number, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsList.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }
        if (bookmark !== undefined) {
            queryParameters.push('bookmark='+encodeURIComponent(String(bookmark)));
        }
        if (pageSize !== undefined) {
            queryParameters.push('pageSize='+encodeURIComponent(String(pageSize)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<BoardSectionsList200Response>> = this.httpClient.get(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}/sections?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <BoardSectionsList200Response>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * List Pins on board section
     * Get a list of the Pins on a board section of a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     * @param adAccountId Unique identifier of an ad account.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     
     */
    public boardSectionsListPins(boardId: string, sectionId: string, adAccountId?: string, bookmark?: string, pageSize?: number, observe?: 'body', headers?: Headers): Observable<BoardsListPins200Response>;
    public boardSectionsListPins(boardId: string, sectionId: string, adAccountId?: string, bookmark?: string, pageSize?: number, observe?: 'response', headers?: Headers): Observable<HttpResponse<BoardsListPins200Response>>;
    public boardSectionsListPins(boardId: string, sectionId: string, adAccountId?: string, bookmark?: string, pageSize?: number, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsListPins.');
        }

        if (sectionId === null || sectionId === undefined){
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsListPins.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }
        if (bookmark !== undefined) {
            queryParameters.push('bookmark='+encodeURIComponent(String(bookmark)));
        }
        if (pageSize !== undefined) {
            queryParameters.push('pageSize='+encodeURIComponent(String(pageSize)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<BoardsListPins200Response>> = this.httpClient.get(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}/sections/${encodeURIComponent(String(sectionId))}/pins?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <BoardsListPins200Response>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Update board section
     * Update a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param sectionId Unique identifier of a board section.
     * @param boardSection Update a board section.
     * @param adAccountId Unique identifier of an ad account.
     
     */
    public boardSectionsUpdate(boardId: string, sectionId: string, boardSection: BoardSection, adAccountId?: string, observe?: 'body', headers?: Headers): Observable<BoardSection>;
    public boardSectionsUpdate(boardId: string, sectionId: string, boardSection: BoardSection, adAccountId?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<BoardSection>>;
    public boardSectionsUpdate(boardId: string, sectionId: string, boardSection: BoardSection, adAccountId?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardSectionsUpdate.');
        }

        if (sectionId === null || sectionId === undefined){
            throw new Error('Required parameter sectionId was null or undefined when calling boardSectionsUpdate.');
        }

        if (boardSection === null || boardSection === undefined){
            throw new Error('Required parameter boardSection was null or undefined when calling boardSectionsUpdate.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';
        headers['Content-Type'] = 'application/json';

        const response: Observable<HttpResponse<BoardSection>> = this.httpClient.patch(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}/sections/${encodeURIComponent(String(sectionId))}?${queryParameters.join('&')}`, boardSection , headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <BoardSection>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Create board
     * Create a board owned by the \&quot;operation user_account\&quot;. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param board Create a board using a single board json object.
     * @param adAccountId Unique identifier of an ad account.
     
     */
    public boardsCreate(board: Board, adAccountId?: string, observe?: 'body', headers?: Headers): Observable<Board>;
    public boardsCreate(board: Board, adAccountId?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<Board>>;
    public boardsCreate(board: Board, adAccountId?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (board === null || board === undefined){
            throw new Error('Required parameter board was null or undefined when calling boardsCreate.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';
        headers['Content-Type'] = 'application/json';

        const response: Observable<HttpResponse<Board>> = this.httpClient.post(`${this.basePath}/boards?${queryParameters.join('&')}`, board , headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <Board>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Delete board
     * Delete a board owned by the \&quot;operation user_account\&quot;. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param adAccountId Unique identifier of an ad account.
     
     */
    public boardsDelete(boardId: string, adAccountId?: string, observe?: 'body', headers?: Headers): Observable<any>;
    public boardsDelete(boardId: string, adAccountId?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<any>>;
    public boardsDelete(boardId: string, adAccountId?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardsDelete.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<any>> = this.httpClient.delete(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <any>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Get board
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param adAccountId Unique identifier of an ad account.
     
     */
    public boardsGet(boardId: string, adAccountId?: string, observe?: 'body', headers?: Headers): Observable<Board>;
    public boardsGet(boardId: string, adAccountId?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<Board>>;
    public boardsGet(boardId: string, adAccountId?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardsGet.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<Board>> = this.httpClient.get(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <Board>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * List boards
     * Get a list of the boards owned by the \&quot;operation user_account\&quot; + group boards where this account is a collaborator Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     * @param adAccountId Unique identifier of an ad account.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param privacy Privacy setting for a board.
     
     */
    public boardsList(adAccountId?: string, bookmark?: string, pageSize?: number, privacy?: 'ALL' | 'PROTECTED' | 'PUBLIC' | 'SECRET' | 'PUBLIC_AND_SECRET', observe?: 'body', headers?: Headers): Observable<BoardsList200Response>;
    public boardsList(adAccountId?: string, bookmark?: string, pageSize?: number, privacy?: 'ALL' | 'PROTECTED' | 'PUBLIC' | 'SECRET' | 'PUBLIC_AND_SECRET', observe?: 'response', headers?: Headers): Observable<HttpResponse<BoardsList200Response>>;
    public boardsList(adAccountId?: string, bookmark?: string, pageSize?: number, privacy?: 'ALL' | 'PROTECTED' | 'PUBLIC' | 'SECRET' | 'PUBLIC_AND_SECRET', observe: any = 'body', headers: Headers = {}): Observable<any> {
        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }
        if (bookmark !== undefined) {
            queryParameters.push('bookmark='+encodeURIComponent(String(bookmark)));
        }
        if (pageSize !== undefined) {
            queryParameters.push('pageSize='+encodeURIComponent(String(pageSize)));
        }
        if (privacy !== undefined) {
            queryParameters.push('privacy='+encodeURIComponent(String(privacy)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<BoardsList200Response>> = this.httpClient.get(`${this.basePath}/boards?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <BoardsList200Response>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * List Pins on board
     * Get a list of the Pins on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param creativeTypes Pin creative types filter. &lt;/p&gt;&lt;strong&gt;Note:&lt;/strong&gt; SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
     * @param adAccountId Unique identifier of an ad account.
     * @param pinMetrics Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before &lt;code&gt;2023-03-20&lt;/code&gt; lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.
     
     */
    public boardsListPins(boardId: string, bookmark?: string, pageSize?: number, creativeTypes?: Array<'REGULAR' | 'VIDEO' | 'SHOPPING' | 'CAROUSEL' | 'MAX_VIDEO' | 'SHOP_THE_PIN' | 'COLLECTION' | 'IDEA'>, adAccountId?: string, pinMetrics?: boolean, observe?: 'body', headers?: Headers): Observable<BoardsListPins200Response>;
    public boardsListPins(boardId: string, bookmark?: string, pageSize?: number, creativeTypes?: Array<'REGULAR' | 'VIDEO' | 'SHOPPING' | 'CAROUSEL' | 'MAX_VIDEO' | 'SHOP_THE_PIN' | 'COLLECTION' | 'IDEA'>, adAccountId?: string, pinMetrics?: boolean, observe?: 'response', headers?: Headers): Observable<HttpResponse<BoardsListPins200Response>>;
    public boardsListPins(boardId: string, bookmark?: string, pageSize?: number, creativeTypes?: Array<'REGULAR' | 'VIDEO' | 'SHOPPING' | 'CAROUSEL' | 'MAX_VIDEO' | 'SHOP_THE_PIN' | 'COLLECTION' | 'IDEA'>, adAccountId?: string, pinMetrics?: boolean, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardsListPins.');
        }

        let queryParameters: string[] = [];
        if (bookmark !== undefined) {
            queryParameters.push('bookmark='+encodeURIComponent(String(bookmark)));
        }
        if (pageSize !== undefined) {
            queryParameters.push('pageSize='+encodeURIComponent(String(pageSize)));
        }
        if (creativeTypes) {
            creativeTypes.forEach((element) => {
                queryParameters.push('creativeTypes='+encodeURIComponent(String(element)));
            })
        }
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }
        if (pinMetrics !== undefined) {
            queryParameters.push('pinMetrics='+encodeURIComponent(String(pinMetrics)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<BoardsListPins200Response>> = this.httpClient.get(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}/pins?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <BoardsListPins200Response>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Update board
     * Update a board owned by the \&quot;operating user_account\&quot;. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     * @param boardId Unique identifier of a board.
     * @param boardUpdate Update a board.
     * @param adAccountId Unique identifier of an ad account.
     
     */
    public boardsUpdate(boardId: string, boardUpdate: BoardUpdate, adAccountId?: string, observe?: 'body', headers?: Headers): Observable<Board>;
    public boardsUpdate(boardId: string, boardUpdate: BoardUpdate, adAccountId?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<Board>>;
    public boardsUpdate(boardId: string, boardUpdate: BoardUpdate, adAccountId?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (boardId === null || boardId === undefined){
            throw new Error('Required parameter boardId was null or undefined when calling boardsUpdate.');
        }

        if (boardUpdate === null || boardUpdate === undefined){
            throw new Error('Required parameter boardUpdate was null or undefined when calling boardsUpdate.');
        }

        let queryParameters: string[] = [];
        if (adAccountId !== undefined) {
            queryParameters.push('adAccountId='+encodeURIComponent(String(adAccountId)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';
        headers['Content-Type'] = 'application/json';

        const response: Observable<HttpResponse<Board>> = this.httpClient.patch(`${this.basePath}/boards/${encodeURIComponent(String(boardId))}?${queryParameters.join('&')}`, boardUpdate , headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <Board>(httpResponse.response))
               );
        }
        return response;
    }

}
