/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import com.fasterxml.jackson.annotation.JsonTypeName;
import org.openapitools.model.CatalogsLocale;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * The locale used within a feed for product descriptions.
 */
@Schema(name = "CatalogsFeedsCreateRequest_default_locale", description = "The locale used within a feed for product descriptions.")
@JsonPropertyOrder({
})
@JsonTypeName("CatalogsFeedsCreateRequest_default_locale")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsFeedsCreateRequestDefaultLocale {
    public CatalogsFeedsCreateRequestDefaultLocale() {
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode() {
        return Objects.hash();
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsFeedsCreateRequestDefaultLocale {\n");
        sb.append("}");
        return sb.toString();
    }

    /**
     * Convert the given object to string with each line indented by 4 spaces
     * (except the first line).
     */
    private String toIndentedString(Object o) {
        if (o == null) {
            return "null";
        }
        return o.toString().replace("\n", "\n    ");
    }

}

