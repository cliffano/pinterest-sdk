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

import { Inject, Injectable, Optional } from '@nestjs/common';
import { HttpService } from '@nestjs/axios';
import { AxiosResponse } from 'axios';
import { Observable } from 'rxjs';
import { MediaList200Response } from '../model/mediaList200Response';
import { MediaUpload } from '../model/mediaUpload';
import { MediaUploadDetails } from '../model/mediaUploadDetails';
import { MediaUploadRequest } from '../model/mediaUploadRequest';
import { Configuration } from '../configuration';


@Injectable()
export class MediaService {

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
     * Register media upload
     * Register your intent to upload media  The response includes all of the information needed to upload the media to Pinterest.  To upload the media, make an HTTP POST request (using &lt;tt&gt;curl&lt;/tt&gt;, for example) to &lt;tt&gt;upload_url&lt;/tt&gt; using the &lt;tt&gt;Content-Type&lt;/tt&gt; header value. Send the media file\&#39;s contents as the request\&#39;s &lt;tt&gt;file&lt;/tt&gt; parameter and also include all of the parameters from &lt;tt&gt;upload_parameters&lt;/tt&gt;.  &lt;strong&gt;&lt;a href&#x3D;\&#39;/docs/content/content-creation/#Creating%20video%20Pins\&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
     * @param mediaUploadRequest Create a media upload request
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public mediaCreate(mediaUploadRequest: MediaUploadRequest, ): Observable<AxiosResponse<MediaUpload>>;
    public mediaCreate(mediaUploadRequest: MediaUploadRequest, ): Observable<any> {

        if (mediaUploadRequest === null || mediaUploadRequest === undefined) {
            throw new Error('Required parameter mediaUploadRequest was null or undefined when calling mediaCreate.');
        }

        let headers = {...this.defaultHeaders};

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
        return this.httpClient.post<MediaUpload>(`${this.basePath}/media`,
            mediaUploadRequest,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Get media upload details
     * Get details for a registered media upload, including its current status.  &lt;strong&gt;&lt;a href&#x3D;\&#39;/docs/content/content-creation/#Creating%20video%20Pins\&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
     * @param mediaId Media identifier
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public mediaGet(mediaId: string, ): Observable<AxiosResponse<MediaUploadDetails>>;
    public mediaGet(mediaId: string, ): Observable<any> {

        if (mediaId === null || mediaId === undefined) {
            throw new Error('Required parameter mediaId was null or undefined when calling mediaGet.');
        }

        let headers = {...this.defaultHeaders};

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
        return this.httpClient.get<MediaUploadDetails>(`${this.basePath}/media/${encodeURIComponent(String(media_id))}`,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * List media uploads
     * List media uploads filtered by given parameters.  &lt;strong&gt;&lt;a href&#x3D;\&#39;/docs/content/content-creation/#Creating%20video%20Pins\&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public mediaList(bookmark?: string, pageSize?: number, ): Observable<AxiosResponse<MediaList200Response>>;
    public mediaList(bookmark?: string, pageSize?: number, ): Observable<any> {



        let queryParameters = new URLSearchParams();
        if (bookmark !== undefined && bookmark !== null) {
            queryParameters.append('bookmark', <any>bookmark);
        }
        if (pageSize !== undefined && pageSize !== null) {
            queryParameters.append('page_size', <any>pageSize);
        }

        let headers = {...this.defaultHeaders};

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
        return this.httpClient.get<MediaList200Response>(`${this.basePath}/media`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
}
