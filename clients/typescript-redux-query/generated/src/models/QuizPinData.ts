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

import { exists, mapValues } from '../runtime';
import {
    QuizPinQuestion,
    QuizPinQuestionFromJSON,
    QuizPinQuestionToJSON,
    QuizPinResult,
    QuizPinResultFromJSON,
    QuizPinResultToJSON,
} from './';

/**
 * This field includes all quiz data including questions, options, and results.
 * @export
 * @interface QuizPinData
 */
export interface QuizPinData  {
    /**
     * 
     * @type {Array<QuizPinQuestion>}
     * @memberof QuizPinData
     */
    questions?: Array<QuizPinQuestion>;
    /**
     * 
     * @type {Array<QuizPinResult>}
     * @memberof QuizPinData
     */
    results?: Array<QuizPinResult>;
}

export function QuizPinDataFromJSON(json: any): QuizPinData {
    return {
        'questions': !exists(json, 'questions') ? undefined : (json['questions'] as Array<any>).map(QuizPinQuestionFromJSON),
        'results': !exists(json, 'results') ? undefined : (json['results'] as Array<any>).map(QuizPinResultFromJSON),
    };
}

export function QuizPinDataToJSON(value?: QuizPinData): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'questions': value.questions === undefined ? undefined : (value.questions as Array<any>).map(QuizPinQuestionToJSON),
        'results': value.results === undefined ? undefined : (value.results as Array<any>).map(QuizPinResultToJSON),
    };
}

