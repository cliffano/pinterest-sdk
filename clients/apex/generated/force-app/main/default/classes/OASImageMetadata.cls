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
 * OASImageMetadata
 */
public class OASImageMetadata implements OAS.MappedProperties {
    /**
     * Get itemType
     * @return itemType
     */
    public String itemType { get; set; }

    /**
     * Get title
     * @return title
     */
    public String title { get; set; }

    /**
     * Get description
     * @return description
     */
    public String description { get; set; }

    /**
     * Get link
     * @return link
     */
    public String link { get; set; }

    /**
     * Get images
     * @return images
     */
    public OASImageMetadataImages images { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'item_type' => 'itemType'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASImageMetadata getExample() {
        OASImageMetadata imageMetadata = new OASImageMetadata();
          imageMetadata.itemType = '';
          imageMetadata.title = '';
          imageMetadata.description = '';
          imageMetadata.link = '';
          imageMetadata.images = OASImageMetadataImages.getExample();
        return imageMetadata;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASImageMetadata) {           
            OASImageMetadata imageMetadata = (OASImageMetadata) obj;
            return this.itemType == imageMetadata.itemType
                && this.title == imageMetadata.title
                && this.description == imageMetadata.description
                && this.link == imageMetadata.link
                && this.images == imageMetadata.images;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (itemType == null ? 0 : System.hashCode(itemType));
        hashCode = (17 * hashCode) + (title == null ? 0 : System.hashCode(title));
        hashCode = (17 * hashCode) + (description == null ? 0 : System.hashCode(description));
        hashCode = (17 * hashCode) + (link == null ? 0 : System.hashCode(link));
        hashCode = (17 * hashCode) + (images == null ? 0 : System.hashCode(images));
        return hashCode;
    }
}
