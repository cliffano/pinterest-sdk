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
public class ResourcesApi extends RouteBuilder {

    @Override
    public void configure() throws Exception {
        

        /**
        GET /resources/ad_account_countries : Get ad accounts countries
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/resources/ad_account_countries")
                .description("Get ad accounts countries")
                .id("adAccountCountriesGetApi")
                .produces("application/json")
                .outType(AdAccountsCountryResponse.class)
                .to("direct:adAccountCountriesGet");
        

        /**
        GET /resources/delivery_metrics : Get available metrics&#39; definitions
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                        .withScope("pins:read","See your public Pins")
                        .withScope("user_accounts:read","See your user accounts and followers")
                
            .endSecurityDefinition()
            .get("/resources/delivery_metrics")
                .description("Get available metrics' definitions")
                .id("deliveryMetricsGetApi")
                .produces("application/json")
                .outType(DeliveryMetricsResponse.class)
                .param()
                    .name("reportType")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Report type.")
                .endParam()
                .to("direct:deliveryMetricsGet");
        

        /**
        GET /resources/targeting/interests/{interest_id} : Get interest details
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/resources/targeting/interests/{interest_id}")
                .description("Get interest details")
                .id("interestTargetingOptionsGetApi")
                .produces("application/json")
                .outType(SingleInterestTargetingOptionResponse.class)
                .param()
                    .name("interestId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of an interest.")
                .endParam()
                .to("direct:interestTargetingOptionsGet");
        

        /**
        GET /resources/lead_form_questions : Get lead form questions
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/resources/lead_form_questions")
                .description("Get lead form questions")
                .id("leadFormQuestionsGetApi")
                .produces("application/json")
                .outType(Void.class)
                .to("direct:leadFormQuestionsGet");
        

        /**
        GET /resources/metrics_ready_state : Get metrics ready state
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/resources/metrics_ready_state")
                .description("Get metrics ready state")
                .id("metricsReadyStateGetApi")
                .produces("application/json")
                .outType(BookClosedResponse.class)
                .param()
                    .name("date")
                    .type(RestParamType.query)
                    .required(true)
                    .description("Analytics reports request date (UTC). Format: YYYY-MM-DD")
                .endParam()
                .to("direct:metricsReadyStateGet");
        

        /**
        GET /resources/targeting/{targeting_type} : Get targeting options
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/resources/targeting/{targeting_type}")
                .description("Get targeting options")
                .id("targetingOptionsGetApi")
                .produces("application/json")
                .outType(Object[].class)
                .param()
                    .name("targetingType")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Public targeting type.")
                .endParam()
                .param()
                    .name("clientId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Client ID.")
                .endParam()
                .param()
                    .name("oauthSignature")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Oauth signature")
                .endParam()
                .param()
                    .name("timestamp")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Timestamp")
                .endParam()
                .to("direct:targetingOptionsGet");
        
    }
}