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
 * Schema for log sent from an integration application.
 */
public class OASIntegrationLog implements OAS.MappedProperties {
    /**
     * Timestamp in milliseconds of when the log was executed at the client.
     * @return clientTimestamp
     */
    public Integer clientTimestamp { get; set; }

    /**
     * Log event type
     */
    public enum EventTypeEnum {
        APP,
        API
    }

    /**
     * Log event type
     * @return eventType
     */
    public EventTypeEnum eventType { get; set; }

    /**
     * Log level type
     */
    public enum LogLevelEnum {
        INFO,
        WARN,
        ERROR
    }

    /**
     * Log level type
     * @return logLevel
     */
    public LogLevelEnum logLevel { get; set; }

    /**
     * Get externalBusinessId
     * @return externalBusinessId
     */
    public String externalBusinessId { get; set; }

    /**
     * Get advertiserId
     * @return advertiserId
     */
    public String advertiserId { get; set; }

    /**
     * Get merchantId
     * @return merchantId
     */
    public String merchantId { get; set; }

    /**
     * Get tagId
     * @return tagId
     */
    public String tagId { get; set; }

    /**
     * Get feedProfileId
     * @return feedProfileId
     */
    public String feedProfileId { get; set; }

    /**
     * Explanation of the event that occured.
     * @return message
     */
    public String message { get; set; }

    /**
     * Version number of the integration application.
     * @return appVersionNumber
     */
    public String appVersionNumber { get; set; }

    /**
     * Version number of the platform the integration application is running on.
     * @return platformVersionNumber
     */
    public String platformVersionNumber { get; set; }

    /**
     * Get error
     * @return error
     */
    public OASIntegrationLogClientError error { get; set; }

    /**
     * Get request
     * @return request
     */
    public OASIntegrationLogClientRequest request { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'client_timestamp' => 'clientTimestamp',
        'event_type' => 'eventType',
        'log_level' => 'logLevel',
        'external_business_id' => 'externalBusinessId',
        'advertiser_id' => 'advertiserId',
        'merchant_id' => 'merchantId',
        'tag_id' => 'tagId',
        'feed_profile_id' => 'feedProfileId',
        'app_version_number' => 'appVersionNumber',
        'platform_version_number' => 'platformVersionNumber'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASIntegrationLog getExample() {
        OASIntegrationLog integrationLog = new OASIntegrationLog();
          integrationLog.clientTimestamp = 0;
          integrationLog.eventType = EventTypeEnum.APP;
          integrationLog.logLevel = LogLevelEnum.INFO;
          integrationLog.externalBusinessId = '';
          integrationLog.advertiserId = '';
          integrationLog.merchantId = '';
          integrationLog.tagId = '';
          integrationLog.feedProfileId = '';
          integrationLog.message = '';
          integrationLog.appVersionNumber = '';
          integrationLog.platformVersionNumber = '';
          integrationLog.error = OASIntegrationLogClientError.getExample();
          integrationLog.request = OASIntegrationLogClientRequest.getExample();
        return integrationLog;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASIntegrationLog) {           
            OASIntegrationLog integrationLog = (OASIntegrationLog) obj;
            return this.clientTimestamp == integrationLog.clientTimestamp
                && this.eventType == integrationLog.eventType
                && this.logLevel == integrationLog.logLevel
                && this.externalBusinessId == integrationLog.externalBusinessId
                && this.advertiserId == integrationLog.advertiserId
                && this.merchantId == integrationLog.merchantId
                && this.tagId == integrationLog.tagId
                && this.feedProfileId == integrationLog.feedProfileId
                && this.message == integrationLog.message
                && this.appVersionNumber == integrationLog.appVersionNumber
                && this.platformVersionNumber == integrationLog.platformVersionNumber
                && this.error == integrationLog.error
                && this.request == integrationLog.request;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (clientTimestamp == null ? 0 : System.hashCode(clientTimestamp));
        hashCode = (17 * hashCode) + (eventType == null ? 0 : System.hashCode(eventType));
        hashCode = (17 * hashCode) + (logLevel == null ? 0 : System.hashCode(logLevel));
        hashCode = (17 * hashCode) + (externalBusinessId == null ? 0 : System.hashCode(externalBusinessId));
        hashCode = (17 * hashCode) + (advertiserId == null ? 0 : System.hashCode(advertiserId));
        hashCode = (17 * hashCode) + (merchantId == null ? 0 : System.hashCode(merchantId));
        hashCode = (17 * hashCode) + (tagId == null ? 0 : System.hashCode(tagId));
        hashCode = (17 * hashCode) + (feedProfileId == null ? 0 : System.hashCode(feedProfileId));
        hashCode = (17 * hashCode) + (message == null ? 0 : System.hashCode(message));
        hashCode = (17 * hashCode) + (appVersionNumber == null ? 0 : System.hashCode(appVersionNumber));
        hashCode = (17 * hashCode) + (platformVersionNumber == null ? 0 : System.hashCode(platformVersionNumber));
        hashCode = (17 * hashCode) + (error == null ? 0 : System.hashCode(error));
        hashCode = (17 * hashCode) + (request == null ? 0 : System.hashCode(request));
        return hashCode;
    }
}
