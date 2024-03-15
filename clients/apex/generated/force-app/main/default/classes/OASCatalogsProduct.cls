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
 * OASCatalogsProduct
 */
public class OASCatalogsProduct {
    /**
     * Get metadata
     * @return metadata
     */
    public OASCatalogsProductMetadata metadata { get; set; }

    /**
     * Get pin
     * @return pin
     */
    public OASPin pin { get; set; }

    public static OASCatalogsProduct getExample() {
        OASCatalogsProduct catalogsProduct = new OASCatalogsProduct();
          catalogsProduct.metadata = OASCatalogsProductMetadata.getExample();
          catalogsProduct.pin = OASPin.getExample();
        return catalogsProduct;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASCatalogsProduct) {           
            OASCatalogsProduct catalogsProduct = (OASCatalogsProduct) obj;
            return this.metadata == catalogsProduct.metadata
                && this.pin == catalogsProduct.pin;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (metadata == null ? 0 : System.hashCode(metadata));
        hashCode = (17 * hashCode) + (pin == null ? 0 : System.hashCode(pin));
        return hashCode;
    }
}
