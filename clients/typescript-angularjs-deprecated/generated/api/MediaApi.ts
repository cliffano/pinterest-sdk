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

export class MediaApi {
    protected basePath = 'https://api.pinterest.com/v5';
    public defaultHeaders : any = {};

    static $inject: string[] = ['$http', '$httpParamSerializer', 'basePath'];

    constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
        if (basePath !== undefined) {
            this.basePath = basePath;
        }
    }

    /**
     * Register your intent to upload media  The response includes all of the information needed to upload the media to Pinterest.  To upload the media, make an HTTP POST request (using <tt>curl</tt>, for example) to <tt>upload_url</tt> using the <tt>Content-Type</tt> header value. Send the media file\'s contents as the request\'s <tt>file</tt> parameter and also include all of the parameters from <tt>upload_parameters</tt>.  <strong><a href=\'/docs/solutions/content-apps/#creatingvideopins\'>Learn more</a></strong> about video Pin creation.
     * @summary Register media upload
     * @param mediaUploadRequest Create a media upload request
     */
    public mediaCreate (mediaUploadRequest: models.MediaUploadRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.MediaUpload> {
        const localVarPath = this.basePath + '/media';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'mediaUploadRequest' is not null or undefined
        if (mediaUploadRequest === null || mediaUploadRequest === undefined) {
            throw new Error('Required parameter mediaUploadRequest was null or undefined when calling mediaCreate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: mediaUploadRequest,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Get details for a registered media upload, including its current status.  <strong><a href=\'/docs/solutions/content-apps/#creatingvideopins\'>Learn more</a></strong> about video Pin creation.
     * @summary Get media upload details
     * @param mediaId Media identifier
     */
    public mediaGet (mediaId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.MediaUploadDetails> {
        const localVarPath = this.basePath + '/media/{media_id}'
            .replace('{' + 'media_id' + '}', encodeURIComponent(String(mediaId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'mediaId' is not null or undefined
        if (mediaId === null || mediaId === undefined) {
            throw new Error('Required parameter mediaId was null or undefined when calling mediaGet.');
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
     * List media uploads filtered by given parameters.  <strong><a href=\'/docs/solutions/content-apps/#creatingvideopins\'>Learn more</a></strong> about video Pin creation.
     * @summary List media uploads
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     */
    public mediaList (bookmark?: string, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.models.Paginated & object> {
        const localVarPath = this.basePath + '/media';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
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
}
