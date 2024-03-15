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
 * Multiple images urls-based media source
 */
public class OASPinMediaSourceImagesURL implements OAS.MappedProperties {
    /**
     * Gets or Sets sourceType
     */
    public enum SourceTypeEnum {
        MULTIPLE_IMAGE_URLS
    }

    /**
     * Get sourceType
     * @return sourceType
     */
    public SourceTypeEnum sourceType { get; set; }

    /**
     * Array with image objects.
     * @return items
     */
    public List<OASPinMediaSourceImagesURLItemsInner> items { get; set; }

    /**
     * Get index
     * minimum: 0
     * @return index
     */
    public Integer index { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'source_type' => 'sourceType'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public OASPinMediaSourceImagesURL() {
        items = new List<OASPinMediaSourceImagesURLItemsInner>();
    }

    public static OASPinMediaSourceImagesURL getExample() {
        OASPinMediaSourceImagesURL pinMediaSourceImagesURL = new OASPinMediaSourceImagesURL();
          pinMediaSourceImagesURL.sourceType = SourceTypeEnum.MULTIPLE_IMAGE_URLS;
          pinMediaSourceImagesURL.items = new List<OASPinMediaSourceImagesURLItemsInner>{OASPinMediaSourceImagesURLItemsInner.getExample()};
          pinMediaSourceImagesURL.index = 0;
        return pinMediaSourceImagesURL;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASPinMediaSourceImagesURL) {           
            OASPinMediaSourceImagesURL pinMediaSourceImagesURL = (OASPinMediaSourceImagesURL) obj;
            return this.sourceType == pinMediaSourceImagesURL.sourceType
                && this.items == pinMediaSourceImagesURL.items
                && this.index == pinMediaSourceImagesURL.index;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (sourceType == null ? 0 : System.hashCode(sourceType));
        hashCode = (17 * hashCode) + (items == null ? 0 : System.hashCode(items));
        hashCode = (17 * hashCode) + (index == null ? 0 : System.hashCode(index));
        return hashCode;
    }
}
