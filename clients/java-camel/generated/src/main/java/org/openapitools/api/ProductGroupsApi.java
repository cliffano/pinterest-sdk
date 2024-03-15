/**
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (7.4.0).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.api;

import org.apache.camel.builder.RouteBuilder;
import org.apache.camel.model.rest.RestParamType;
import org.springframework.stereotype.Component;
import org.openapitools.model.*;
import org.apache.camel.model.rest.RestBindingMode;
import org.apache.camel.LoggingLevel;

@Component
public class ProductGroupsApi extends RouteBuilder {

    @Override
    public void configure() throws Exception {
        

        /**
        GET /ad_accounts/{ad_account_id}/product_groups/catalogs : Get catalog product groups
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:write","Create, update, or delete ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/ad_accounts/{ad_account_id}/product_groups/catalogs")
                .description("Get catalog product groups")
                .id("adAccountsCatalogsProductGroupsListApi")
                .produces("application/json")
                .outType(AdAccountsCatalogsProductGroupsList200Response.class)
                .param()
                    .name("adAccountId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("feedProfileId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("The feed profile id whose catalog product groups we want to return.")
                .endParam()
                .to("direct:adAccountsCatalogsProductGroupsList");
        
    }
}
