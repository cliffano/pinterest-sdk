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
 * Ad entities to get in bulk request.
 */
public class OASBulkDownloadRequest implements OAS.MappedProperties {
    /**
     * All entity types specified will be downloaded. Fewer types result in faster downloads.
     * @return entityTypes
     */
    public List<OASBulkEntityType> entityTypes { get; set; }

    /**
     * All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded.
     * @return entityIds
     */
    public List<String> entityIds { get; set; }

    /**
     * Unix UTC timestamp to retrieve all entities that have changed since this time.
     * @return updatedSince
     */
    public String updatedSince { get; set; }

    /**
     * Get campaignFilter
     * @return campaignFilter
     */
    public OASBulkDownloadRequestCampaignFilter campaignFilter { get; set; }

    /**
     * Get outputFormat
     * @return outputFormat
     */
    public OASBulkOutputFormat outputFormat { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entity_types' => 'entityTypes',
        'entity_ids' => 'entityIds',
        'updated_since' => 'updatedSince',
        'campaign_filter' => 'campaignFilter',
        'output_format' => 'outputFormat'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entity_types' => 'entityTypes',
        'entity_ids' => 'entityIds',
        'updated_since' => 'updatedSince',
        'campaign_filter' => 'campaignFilter',
        'output_format' => 'outputFormat'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entity_types' => 'entityTypes',
        'entity_ids' => 'entityIds',
        'updated_since' => 'updatedSince',
        'campaign_filter' => 'campaignFilter',
        'output_format' => 'outputFormat'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entity_types' => 'entityTypes',
        'entity_ids' => 'entityIds',
        'updated_since' => 'updatedSince',
        'campaign_filter' => 'campaignFilter',
        'output_format' => 'outputFormat'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entity_types' => 'entityTypes',
        'entity_ids' => 'entityIds',
        'updated_since' => 'updatedSince',
        'campaign_filter' => 'campaignFilter',
        'output_format' => 'outputFormat'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public OASBulkDownloadRequest() {
        entityTypes = new List<OASBulkEntityType>();
        entityIds = new List<String>();
        outputFormat = 'JSON';
    }

    public static OASBulkDownloadRequest getExample() {
        OASBulkDownloadRequest bulkDownloadRequest = new OASBulkDownloadRequest();
          bulkDownloadRequest.entityTypes = new List<OASBulkEntityType>{''};
          bulkDownloadRequest.entityIds = new List<String>{''};
          bulkDownloadRequest.updatedSince = '1622848072';
          bulkDownloadRequest.campaignFilter = OASBulkDownloadRequestCampaignFilter.getExample();
          bulkDownloadRequest.outputFormat = OASBulkOutputFormat.getExample();
        return bulkDownloadRequest;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASBulkDownloadRequest) {           
            OASBulkDownloadRequest bulkDownloadRequest = (OASBulkDownloadRequest) obj;
            return this.entityTypes == bulkDownloadRequest.entityTypes
                && this.entityIds == bulkDownloadRequest.entityIds
                && this.updatedSince == bulkDownloadRequest.updatedSince
                && this.campaignFilter == bulkDownloadRequest.campaignFilter
                && this.outputFormat == bulkDownloadRequest.outputFormat;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (entityTypes == null ? 0 : System.hashCode(entityTypes));
        hashCode = (17 * hashCode) + (entityIds == null ? 0 : System.hashCode(entityIds));
        hashCode = (17 * hashCode) + (updatedSince == null ? 0 : System.hashCode(updatedSince));
        hashCode = (17 * hashCode) + (campaignFilter == null ? 0 : System.hashCode(campaignFilter));
        hashCode = (17 * hashCode) + (outputFormat == null ? 0 : System.hashCode(outputFormat));
        return hashCode;
    }
}
