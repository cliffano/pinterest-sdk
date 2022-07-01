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


import localVarRequest from 'request';
import http from 'http';

/* tslint:disable:no-unused-locals */
import { AnalyticsMetricsResponse } from '../model/analyticsMetricsResponse';
import { Pin } from '../model/pin';

import { ObjectSerializer, Authentication, VoidAuth, Interceptor } from '../model/models';
import { HttpBasicAuth, HttpBearerAuth, ApiKeyAuth, OAuth } from '../model/models';

import { HttpError, RequestFile } from './apis';

let defaultBasePath = 'https://api.pinterest.com/v5';

// ===============================================
// This file is autogenerated - Please do not edit
// ===============================================

export enum PinsApiApiKeys {
}

export class PinsApi {
    protected _basePath = defaultBasePath;
    protected _defaultHeaders : any = {};
    protected _useQuerystring : boolean = false;

    protected authentications = {
        'default': <Authentication>new VoidAuth(),
        'basic': new HttpBasicAuth(),
        'pinterest_oauth2': new OAuth(),
    }

    protected interceptors: Interceptor[] = [];

    constructor(basePath?: string);
    constructor(username: string, password: string, basePath?: string);
    constructor(basePathOrUsername: string, password?: string, basePath?: string) {
        if (password) {
            this.username = basePathOrUsername;
            this.password = password
            if (basePath) {
                this.basePath = basePath;
            }
        } else {
            if (basePathOrUsername) {
                this.basePath = basePathOrUsername
            }
        }
    }

    set useQuerystring(value: boolean) {
        this._useQuerystring = value;
    }

    set basePath(basePath: string) {
        this._basePath = basePath;
    }

    set defaultHeaders(defaultHeaders: any) {
        this._defaultHeaders = defaultHeaders;
    }

    get defaultHeaders() {
        return this._defaultHeaders;
    }

    get basePath() {
        return this._basePath;
    }

    public setDefaultAuthentication(auth: Authentication) {
        this.authentications.default = auth;
    }

    public setApiKey(key: PinsApiApiKeys, value: string) {
        (this.authentications as any)[PinsApiApiKeys[key]].apiKey = value;
    }

    set username(username: string) {
        this.authentications.basic.username = username;
    }

    set password(password: string) {
        this.authentications.basic.password = password;
    }

    set accessToken(token: string) {
        this.authentications.pinterest_oauth2.accessToken = token;
    }

    public addInterceptor(interceptor: Interceptor) {
        this.interceptors.push(interceptor);
    }

    /**
     * Get analytics for a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\"https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\">List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
     * @summary Get Pin analytics
     * @param pinId Unique identifier of a Pin.
     * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
     * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
     * @param metricTypes Pin metric types to get data for, default is all.
     * @param appTypes Apps or devices to get data for, default is all.
     * @param splitField How to split the data into groups. Not including this param means data won\&#39;t be split.
     * @param adAccountId Unique identifier of an ad account.
     */
    public async pinsAnalytics (pinId: string, startDate: string, endDate: string, metricTypes: Array<'IMPRESSION' | 'SAVE' | 'PIN_CLICK' | 'OUTBOUND_CLICK' | 'VIDEO_MRC_VIEW' | 'VIDEO_AVG_WATCH_TIME' | 'VIDEO_V50_WATCH_TIME' | 'QUARTILE_95_PERCENT_VIEW'>, appTypes?: 'ALL' | 'MOBILE' | 'TABLET' | 'WEB', splitField?: 'NO_SPLIT' | 'APP_TYPE', adAccountId?: string, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.IncomingMessage; body: { [key: string]: AnalyticsMetricsResponse; };  }> {
        const localVarPath = this.basePath + '/pins/{pin_id}/analytics'
            .replace('{' + 'pin_id' + '}', encodeURIComponent(String(pinId)));
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this._defaultHeaders);
        const produces = ['application/json'];
        // give precedence to 'application/json'
        if (produces.indexOf('application/json') >= 0) {
            localVarHeaderParams.Accept = 'application/json';
        } else {
            localVarHeaderParams.Accept = produces.join(',');
        }
        let localVarFormParams: any = {};

        // verify required parameter 'pinId' is not null or undefined
        if (pinId === null || pinId === undefined) {
            throw new Error('Required parameter pinId was null or undefined when calling pinsAnalytics.');
        }

        // verify required parameter 'startDate' is not null or undefined
        if (startDate === null || startDate === undefined) {
            throw new Error('Required parameter startDate was null or undefined when calling pinsAnalytics.');
        }

        // verify required parameter 'endDate' is not null or undefined
        if (endDate === null || endDate === undefined) {
            throw new Error('Required parameter endDate was null or undefined when calling pinsAnalytics.');
        }

        // verify required parameter 'metricTypes' is not null or undefined
        if (metricTypes === null || metricTypes === undefined) {
            throw new Error('Required parameter metricTypes was null or undefined when calling pinsAnalytics.');
        }

        if (startDate !== undefined) {
            localVarQueryParameters['start_date'] = ObjectSerializer.serialize(startDate, "string");
        }

        if (endDate !== undefined) {
            localVarQueryParameters['end_date'] = ObjectSerializer.serialize(endDate, "string");
        }

        if (appTypes !== undefined) {
            localVarQueryParameters['app_types'] = ObjectSerializer.serialize(appTypes, "'ALL' | 'MOBILE' | 'TABLET' | 'WEB'");
        }

        if (metricTypes !== undefined) {
            localVarQueryParameters['metric_types'] = ObjectSerializer.serialize(metricTypes, "Array<'IMPRESSION' | 'SAVE' | 'PIN_CLICK' | 'OUTBOUND_CLICK' | 'VIDEO_MRC_VIEW' | 'VIDEO_AVG_WATCH_TIME' | 'VIDEO_V50_WATCH_TIME' | 'QUARTILE_95_PERCENT_VIEW'>");
        }

        if (splitField !== undefined) {
            localVarQueryParameters['split_field'] = ObjectSerializer.serialize(splitField, "'NO_SPLIT' | 'APP_TYPE'");
        }

        if (adAccountId !== undefined) {
            localVarQueryParameters['ad_account_id'] = ObjectSerializer.serialize(adAccountId, "string");
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'GET',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
        };

        let authenticationPromise = Promise.resolve();
        if (this.authentications.pinterest_oauth2.accessToken) {
            authenticationPromise = authenticationPromise.then(() => this.authentications.pinterest_oauth2.applyToRequest(localVarRequestOptions));
        }
        authenticationPromise = authenticationPromise.then(() => this.authentications.default.applyToRequest(localVarRequestOptions));

        let interceptorPromise = authenticationPromise;
        for (const interceptor of this.interceptors) {
            interceptorPromise = interceptorPromise.then(() => interceptor(localVarRequestOptions));
        }

        return interceptorPromise.then(() => {
            if (Object.keys(localVarFormParams).length) {
                if (localVarUseFormData) {
                    (<any>localVarRequestOptions).formData = localVarFormParams;
                } else {
                    localVarRequestOptions.form = localVarFormParams;
                }
            }
            return new Promise<{ response: http.IncomingMessage; body: { [key: string]: AnalyticsMetricsResponse; };  }>((resolve, reject) => {
                localVarRequest(localVarRequestOptions, (error, response, body) => {
                    if (error) {
                        reject(error);
                    } else {
                        if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                            body = ObjectSerializer.deserialize(body, "{ [key: string]: AnalyticsMetricsResponse; }");
                            resolve({ response: response, body: body });
                        } else {
                            reject(new HttpError(response, body, response.statusCode));
                        }
                    }
                });
            });
        });
    }
    /**
     * Create a Pin on a board or board section owned by the \"operation user_account\".  Note: If the current \"operation user_account\" (defined by the access token) has access to another user\'s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account\'s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id=12345&...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called \'curated content\', please use our <a href=\'/docs/add-ons/save-button\'>Save button</a> instead. For more tips on creating fresh content for Pinterest, review our <a href=\'/docs/solutions/content-apps\'>Content App Solutions Guide</a>.  <strong><a href=\'/docs/solutions/content-apps/#creatingvideopins\'>Learn more</a></strong> about video Pin creation.
     * @summary Create Pin
     * @param pin Create a new Pin.
     */
    public async pinsCreate (pin: Pin, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.IncomingMessage; body: Pin;  }> {
        const localVarPath = this.basePath + '/pins';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this._defaultHeaders);
        const produces = ['application/json'];
        // give precedence to 'application/json'
        if (produces.indexOf('application/json') >= 0) {
            localVarHeaderParams.Accept = 'application/json';
        } else {
            localVarHeaderParams.Accept = produces.join(',');
        }
        let localVarFormParams: any = {};

        // verify required parameter 'pin' is not null or undefined
        if (pin === null || pin === undefined) {
            throw new Error('Required parameter pin was null or undefined when calling pinsCreate.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(pin, "Pin")
        };

        let authenticationPromise = Promise.resolve();
        if (this.authentications.pinterest_oauth2.accessToken) {
            authenticationPromise = authenticationPromise.then(() => this.authentications.pinterest_oauth2.applyToRequest(localVarRequestOptions));
        }
        authenticationPromise = authenticationPromise.then(() => this.authentications.default.applyToRequest(localVarRequestOptions));

        let interceptorPromise = authenticationPromise;
        for (const interceptor of this.interceptors) {
            interceptorPromise = interceptorPromise.then(() => interceptor(localVarRequestOptions));
        }

        return interceptorPromise.then(() => {
            if (Object.keys(localVarFormParams).length) {
                if (localVarUseFormData) {
                    (<any>localVarRequestOptions).formData = localVarFormParams;
                } else {
                    localVarRequestOptions.form = localVarFormParams;
                }
            }
            return new Promise<{ response: http.IncomingMessage; body: Pin;  }>((resolve, reject) => {
                localVarRequest(localVarRequestOptions, (error, response, body) => {
                    if (error) {
                        reject(error);
                    } else {
                        if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                            body = ObjectSerializer.deserialize(body, "Pin");
                            resolve({ response: response, body: body });
                        } else {
                            reject(new HttpError(response, body, response.statusCode));
                        }
                    }
                });
            });
        });
    }
    /**
     * Delete a Pins owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
     * @summary Delete Pin
     * @param pinId Unique identifier of a Pin.
     */
    public async pinsDelete (pinId: string, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.IncomingMessage; body?: any;  }> {
        const localVarPath = this.basePath + '/pins/{pin_id}'
            .replace('{' + 'pin_id' + '}', encodeURIComponent(String(pinId)));
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this._defaultHeaders);
        const produces = ['application/json'];
        // give precedence to 'application/json'
        if (produces.indexOf('application/json') >= 0) {
            localVarHeaderParams.Accept = 'application/json';
        } else {
            localVarHeaderParams.Accept = produces.join(',');
        }
        let localVarFormParams: any = {};

        // verify required parameter 'pinId' is not null or undefined
        if (pinId === null || pinId === undefined) {
            throw new Error('Required parameter pinId was null or undefined when calling pinsDelete.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'DELETE',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
        };

        let authenticationPromise = Promise.resolve();
        if (this.authentications.pinterest_oauth2.accessToken) {
            authenticationPromise = authenticationPromise.then(() => this.authentications.pinterest_oauth2.applyToRequest(localVarRequestOptions));
        }
        authenticationPromise = authenticationPromise.then(() => this.authentications.default.applyToRequest(localVarRequestOptions));

        let interceptorPromise = authenticationPromise;
        for (const interceptor of this.interceptors) {
            interceptorPromise = interceptorPromise.then(() => interceptor(localVarRequestOptions));
        }

        return interceptorPromise.then(() => {
            if (Object.keys(localVarFormParams).length) {
                if (localVarUseFormData) {
                    (<any>localVarRequestOptions).formData = localVarFormParams;
                } else {
                    localVarRequestOptions.form = localVarFormParams;
                }
            }
            return new Promise<{ response: http.IncomingMessage; body?: any;  }>((resolve, reject) => {
                localVarRequest(localVarRequestOptions, (error, response, body) => {
                    if (error) {
                        reject(error);
                    } else {
                        if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                            resolve({ response: response, body: body });
                        } else {
                            reject(new HttpError(response, body, response.statusCode));
                        }
                    }
                });
            });
        });
    }
    /**
     * Get a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\'/docs/api/v5/#operation/ad_accounts/list\'>List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
     * @summary Get Pin
     * @param pinId Unique identifier of a Pin.
     * @param adAccountId Unique identifier of an ad account.
     */
    public async pinsGet (pinId: string, adAccountId?: string, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.IncomingMessage; body: Pin;  }> {
        const localVarPath = this.basePath + '/pins/{pin_id}'
            .replace('{' + 'pin_id' + '}', encodeURIComponent(String(pinId)));
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this._defaultHeaders);
        const produces = ['application/json'];
        // give precedence to 'application/json'
        if (produces.indexOf('application/json') >= 0) {
            localVarHeaderParams.Accept = 'application/json';
        } else {
            localVarHeaderParams.Accept = produces.join(',');
        }
        let localVarFormParams: any = {};

        // verify required parameter 'pinId' is not null or undefined
        if (pinId === null || pinId === undefined) {
            throw new Error('Required parameter pinId was null or undefined when calling pinsGet.');
        }

        if (adAccountId !== undefined) {
            localVarQueryParameters['ad_account_id'] = ObjectSerializer.serialize(adAccountId, "string");
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'GET',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
        };

        let authenticationPromise = Promise.resolve();
        if (this.authentications.pinterest_oauth2.accessToken) {
            authenticationPromise = authenticationPromise.then(() => this.authentications.pinterest_oauth2.applyToRequest(localVarRequestOptions));
        }
        authenticationPromise = authenticationPromise.then(() => this.authentications.default.applyToRequest(localVarRequestOptions));

        let interceptorPromise = authenticationPromise;
        for (const interceptor of this.interceptors) {
            interceptorPromise = interceptorPromise.then(() => interceptor(localVarRequestOptions));
        }

        return interceptorPromise.then(() => {
            if (Object.keys(localVarFormParams).length) {
                if (localVarUseFormData) {
                    (<any>localVarRequestOptions).formData = localVarFormParams;
                } else {
                    localVarRequestOptions.form = localVarFormParams;
                }
            }
            return new Promise<{ response: http.IncomingMessage; body: Pin;  }>((resolve, reject) => {
                localVarRequest(localVarRequestOptions, (error, response, body) => {
                    if (error) {
                        reject(error);
                    } else {
                        if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                            body = ObjectSerializer.deserialize(body, "Pin");
                            resolve({ response: response, body: body });
                        } else {
                            reject(new HttpError(response, body, response.statusCode));
                        }
                    }
                });
            });
        });
    }
}
