/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASCatalogsFeedProcessingResult
 */
public class OASCatalogsFeedProcessingResult implements OASCatalogsDbItem, OASCatalogsFeedProcessingResultField, OAS.MappedProperties {
    /**
     * Get createdAt
     * @return createdAt
     */
    public Datetime createdAt { get; set; }

    /**
     * Get id
     * @return id
     */
    public String id { get; set; }

    /**
     * Get updatedAt
     * @return updatedAt
     */
    public Datetime updatedAt { get; set; }

    /**
     * Get ingestionDetails
     * @return ingestionDetails
     */
    public OASCatalogsFeedIngestionDetails ingestionDetails { get; set; }

    /**
     * Get status
     * @return status
     */
    public OASCatalogsFeedProcessingStatus status { get; set; }

    /**
     * Get productCounts
     * @return productCounts
     */
    public OASCatalogsFeedProductCounts productCounts { get; set; }

    /**
     * Get validationDetails
     * @return validationDetails
     */
    public OASCatalogsFeedValidationDetails validationDetails { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'created_at' => 'createdAt',
        'updated_at' => 'updatedAt',
        'ingestion_details' => 'ingestionDetails',
        'product_counts' => 'productCounts',
        'validation_details' => 'validationDetails'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'created_at' => 'createdAt',
        'updated_at' => 'updatedAt',
        'ingestion_details' => 'ingestionDetails',
        'product_counts' => 'productCounts',
        'validation_details' => 'validationDetails'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'created_at' => 'createdAt',
        'updated_at' => 'updatedAt',
        'ingestion_details' => 'ingestionDetails',
        'product_counts' => 'productCounts',
        'validation_details' => 'validationDetails'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'created_at' => 'createdAt',
        'updated_at' => 'updatedAt',
        'ingestion_details' => 'ingestionDetails',
        'product_counts' => 'productCounts',
        'validation_details' => 'validationDetails'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'created_at' => 'createdAt',
        'updated_at' => 'updatedAt',
        'ingestion_details' => 'ingestionDetails',
        'product_counts' => 'productCounts',
        'validation_details' => 'validationDetails'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASCatalogsFeedProcessingResult getExample() {
        OASCatalogsFeedProcessingResult catalogsFeedProcessingResult = new OASCatalogsFeedProcessingResult();
          catalogsFeedProcessingResult.createdAt = Datetime.newInstanceGmt(2022, 3, 14, 15, 15, 22);
          catalogsFeedProcessingResult.id = '';
          catalogsFeedProcessingResult.updatedAt = Datetime.newInstanceGmt(2022, 3, 14, 15, 16, 34);
          catalogsFeedProcessingResult.ingestionDetails = OASCatalogsFeedIngestionDetails.getExample();
          catalogsFeedProcessingResult.status = OASCatalogsFeedProcessingStatus.getExample();
          catalogsFeedProcessingResult.productCounts = OASCatalogsFeedProductCounts.getExample();
          catalogsFeedProcessingResult.validationDetails = OASCatalogsFeedValidationDetails.getExample();
        return catalogsFeedProcessingResult;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASCatalogsFeedProcessingResult) {           
            OASCatalogsFeedProcessingResult catalogsFeedProcessingResult = (OASCatalogsFeedProcessingResult) obj;
            return this.createdAt == catalogsFeedProcessingResult.createdAt
                && this.id == catalogsFeedProcessingResult.id
                && this.updatedAt == catalogsFeedProcessingResult.updatedAt
                && this.ingestionDetails == catalogsFeedProcessingResult.ingestionDetails
                && this.status == catalogsFeedProcessingResult.status
                && this.productCounts == catalogsFeedProcessingResult.productCounts
                && this.validationDetails == catalogsFeedProcessingResult.validationDetails;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (createdAt == null ? 0 : System.hashCode(createdAt));
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (updatedAt == null ? 0 : System.hashCode(updatedAt));
        hashCode = (17 * hashCode) + (ingestionDetails == null ? 0 : System.hashCode(ingestionDetails));
        hashCode = (17 * hashCode) + (status == null ? 0 : System.hashCode(status));
        hashCode = (17 * hashCode) + (productCounts == null ? 0 : System.hashCode(productCounts));
        hashCode = (17 * hashCode) + (validationDetails == null ? 0 : System.hashCode(validationDetails));
        return hashCode;
    }
}
