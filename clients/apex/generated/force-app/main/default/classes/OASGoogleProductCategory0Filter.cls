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
 * OASGoogleProductCategory0Filter
 */
public class OASGoogleProductCategory0Filter implements OAS.MappedProperties {
    /**
     * Get goOGLEPRODUCTCATEGORY0
     * @return goOGLEPRODUCTCATEGORY0
     */
    public OASCatalogsProductGroupMultipleStrin goOGLEPRODUCTCATEGORY0 { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'GOOGLE_PRODUCT_CATEGORY_0' => 'goOGLEPRODUCTCATEGORY0'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASGoogleProductCategory0Filter getExample() {
        OASGoogleProductCategory0Filter googleProductCategory0Filter = new OASGoogleProductCategory0Filter();
          googleProductCategory0Filter.goOGLEPRODUCTCATEGORY0 = null;
        return googleProductCategory0Filter;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASGoogleProductCategory0Filter) {           
            OASGoogleProductCategory0Filter googleProductCategory0Filter = (OASGoogleProductCategory0Filter) obj;
            return this.goOGLEPRODUCTCATEGORY0 == googleProductCategory0Filter.goOGLEPRODUCTCATEGORY0;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (goOGLEPRODUCTCATEGORY0 == null ? 0 : System.hashCode(goOGLEPRODUCTCATEGORY0));
        return hashCode;
    }
}
