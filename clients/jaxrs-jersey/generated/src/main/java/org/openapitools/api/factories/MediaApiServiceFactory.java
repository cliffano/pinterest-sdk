package org.openapitools.api.factories;

import org.openapitools.api.MediaApiService;
import org.openapitools.api.impl.MediaApiServiceImpl;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class MediaApiServiceFactory {
    private static final MediaApiService service = new MediaApiServiceImpl();

    public static MediaApiService getMediaApi() {
        return service;
    }
}
