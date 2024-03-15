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
public class AudienceInsightsApi extends RouteBuilder {

    @Override
    public void configure() throws Exception {
        

        /**
        GET /ad_accounts/{ad_account_id}/audience_insights : Get audience insights
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/ad_accounts/{ad_account_id}/audience_insights")
                .description("Get audience insights")
                .id("audienceInsightsGetApi")
                .produces("application/json")
                .outType(AudienceInsightsResponse.class)
                .param()
                    .name("adAccountId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("audienceInsightType")
                    .type(RestParamType.query)
                    .required(true)
                    .description("Type of audience insights.")
                .endParam()
                .to("direct:audienceInsightsGet");
        

        /**
        GET /ad_accounts/{ad_account_id}/insights/audiences : Get audience insights scope and type
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/ad_accounts/{ad_account_id}/insights/audiences")
                .description("Get audience insights scope and type")
                .id("audienceInsightsScopeAndTypeGetApi")
                .produces("application/json")
                .outType(AudienceDefinitionResponse.class)
                .param()
                    .name("adAccountId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .to("direct:audienceInsightsScopeAndTypeGet");
        
    }
}
