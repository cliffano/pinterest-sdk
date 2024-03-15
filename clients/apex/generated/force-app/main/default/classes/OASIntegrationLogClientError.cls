/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * System error details included in the log sent by the client.
 */
public class OASIntegrationLogClientError implements OAS.MappedProperties {
    /**
     * Original cause of the error.
     * @return cause
     */
    public String cause { get; set; }

    /**
     * Column number in the line of the file that raised the error.
     * @return columnNumber
     */
    public Integer columnNumber { get; set; }

    /**
     * Filename where the error happened.
     * @return fileName
     */
    public String fileName { get; set; }

    /**
     * Line number where the error happened.
     * @return lineNumber
     */
    public Integer lineNumber { get; set; }

    /**
     * Human-readable description of the error.
     * @return message
     */
    public String message { get; set; }

    /**
     * More detail about the message.
     * @return messageDetail
     */
    public String messageDetail { get; set; }

    /**
     * Filename where the error happened.
     * @return name
     */
    public String name { get; set; }

    /**
     * Integer that specifies the error code.
     * @return r_number
     */
    public Integer r_number { get; set; }

    /**
     * Stack trace of where the error happened.
     * @return stackTrace
     */
    public String stackTrace { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'column_number' => 'columnNumber',
        'file_name' => 'fileName',
        'line_number' => 'lineNumber',
        'message_detail' => 'messageDetail',
        'number' => 'r_number',
        'stack_trace' => 'stackTrace'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'column_number' => 'columnNumber',
        'file_name' => 'fileName',
        'line_number' => 'lineNumber',
        'message_detail' => 'messageDetail',
        'number' => 'r_number',
        'stack_trace' => 'stackTrace'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'column_number' => 'columnNumber',
        'file_name' => 'fileName',
        'line_number' => 'lineNumber',
        'message_detail' => 'messageDetail',
        'number' => 'r_number',
        'stack_trace' => 'stackTrace'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'column_number' => 'columnNumber',
        'file_name' => 'fileName',
        'line_number' => 'lineNumber',
        'message_detail' => 'messageDetail',
        'number' => 'r_number',
        'stack_trace' => 'stackTrace'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'column_number' => 'columnNumber',
        'file_name' => 'fileName',
        'line_number' => 'lineNumber',
        'message_detail' => 'messageDetail',
        'number' => 'r_number',
        'stack_trace' => 'stackTrace'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'column_number' => 'columnNumber',
        'file_name' => 'fileName',
        'line_number' => 'lineNumber',
        'message_detail' => 'messageDetail',
        'number' => 'r_number',
        'stack_trace' => 'stackTrace'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASIntegrationLogClientError getExample() {
        OASIntegrationLogClientError integrationLogClientError = new OASIntegrationLogClientError();
          integrationLogClientError.cause = '';
          integrationLogClientError.columnNumber = 0;
          integrationLogClientError.fileName = '';
          integrationLogClientError.lineNumber = 0;
          integrationLogClientError.message = '';
          integrationLogClientError.messageDetail = '';
          integrationLogClientError.name = '';
          integrationLogClientError.r_number = 0;
          integrationLogClientError.stackTrace = '';
        return integrationLogClientError;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASIntegrationLogClientError) {           
            OASIntegrationLogClientError integrationLogClientError = (OASIntegrationLogClientError) obj;
            return this.cause == integrationLogClientError.cause
                && this.columnNumber == integrationLogClientError.columnNumber
                && this.fileName == integrationLogClientError.fileName
                && this.lineNumber == integrationLogClientError.lineNumber
                && this.message == integrationLogClientError.message
                && this.messageDetail == integrationLogClientError.messageDetail
                && this.name == integrationLogClientError.name
                && this.r_number == integrationLogClientError.r_number
                && this.stackTrace == integrationLogClientError.stackTrace;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (cause == null ? 0 : System.hashCode(cause));
        hashCode = (17 * hashCode) + (columnNumber == null ? 0 : System.hashCode(columnNumber));
        hashCode = (17 * hashCode) + (fileName == null ? 0 : System.hashCode(fileName));
        hashCode = (17 * hashCode) + (lineNumber == null ? 0 : System.hashCode(lineNumber));
        hashCode = (17 * hashCode) + (message == null ? 0 : System.hashCode(message));
        hashCode = (17 * hashCode) + (messageDetail == null ? 0 : System.hashCode(messageDetail));
        hashCode = (17 * hashCode) + (name == null ? 0 : System.hashCode(name));
        hashCode = (17 * hashCode) + (r_number == null ? 0 : System.hashCode(r_number));
        hashCode = (17 * hashCode) + (stackTrace == null ? 0 : System.hashCode(stackTrace));
        return hashCode;
    }
}
