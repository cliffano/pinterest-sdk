/**
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (5.4.0).
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
public class UserAccountApi extends RouteBuilder {

    @Override
    public void configure() throws Exception {
        

        /**
        GET /user_account/analytics : Get user account analytics
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("user_accounts:read","See your user accounts")
                
            .endSecurityDefinition()
            .get("/user_account/analytics")
                .description("Get user account analytics")
                .id("userAccountAnalyticsApi")
                .produces("application/json")
                .param()
                    .name("startDate")
                    .type(RestParamType.query)
                    .required(true)
                    .description("Metric report start date (UTC). Format: YYYY-MM-DD")
                .endParam()
                .param()
                    .name("endDate")
                    .type(RestParamType.query)
                    .required(true)
                    .description("Metric report end date (UTC). Format: YYYY-MM-DD")
                .endParam()
                .param()
                    .name("fromClaimedContent")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Filter on Pins that match your claimed domain.")
                .endParam()
                .param()
                    .name("pinFormat")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Pin formats to get data for, default is all.")
                .endParam()
                .param()
                    .name("appTypes")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Apps or devices to get data for, default is all.")
                .endParam()
                .param()
                    .name("metricTypes")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Metric types to get data for, default is all. ")
                .endParam()
                .param()
                    .name("splitField")
                    .type(RestParamType.query)
                    .required(false)
                    .description("How to split the data into groups. Not including this param means data won't be split.")
                .endParam()
                .param()
                    .name("adAccountId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .to("direct:userAccountAnalytics");
        

        /**
        GET /user_account : Get user account
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("user_accounts:read","See your user accounts")
                
            .endSecurityDefinition()
            .get("/user_account")
                .description("Get user account")
                .id("userAccountGetApi")
                .produces("application/json")
                .outType(Account.class)
                .param()
                    .name("adAccountId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .to("direct:userAccountGet");
        
    }
}