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


/**
 * System error details included in the log sent by the client.
 */
export interface IntegrationLogClientError { 
    /**
     * Original cause of the error.
     */
    cause?: string;
    /**
     * Column number in the line of the file that raised the error.
     */
    column_number?: number;
    /**
     * Filename where the error happened.
     */
    file_name?: string;
    /**
     * Line number where the error happened.
     */
    line_number?: number;
    /**
     * Human-readable description of the error.
     */
    message?: string;
    /**
     * More detail about the message.
     */
    message_detail?: string;
    /**
     * Filename where the error happened.
     */
    name?: string;
    /**
     * Integer that specifies the error code.
     */
    number?: number;
    /**
     * Stack trace of where the error happened.
     */
    stack_trace?: string;
}

