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
public class PinsApi extends RouteBuilder {

    @Override
    public void configure() throws Exception {
        

        /**
        GET /pins/{pin_id}/analytics : Get Pin analytics
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("boards:read","See your public boards, including group boards you join")
                        .withScope("pins:read","See your public Pins")
                
            .endSecurityDefinition()
            .get("/pins/{pin_id}/analytics")
                .description("Get Pin analytics")
                .id("pinsAnalyticsApi")
                .produces("application/json")
                .param()
                    .name("pinId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of a Pin.")
                .endParam()
                .param()
                    .name("startDate")
                    .type(RestParamType.query)
                    .required(true)
                    .description("Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.")
                .endParam()
                .param()
                    .name("endDate")
                    .type(RestParamType.query)
                    .required(true)
                    .description("Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.")
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
                    .required(true)
                    .description("Pin metric types to get data for, default is all.")
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
                .to("direct:pinsAnalytics");
        

        /**
        POST /pins : Create Pin
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("boards:read","See your public boards, including group boards you join")
                        .withScope("boards:write","Create, update, or delete your public boards")
                        .withScope("pins:read","See your public Pins")
                        .withScope("pins:write","Create, update, or delete your public Pins")
                
            .endSecurityDefinition()
            .post("/pins")
                .description("Create Pin")
                .id("pinsCreateApi")
                .produces("application/json")
                .outType(Pin.class)
                .consumes("application/json")
                .type(PinCreate.class)
                
                .param()
                    .name("adAccountId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("pinCreate")
                    .type(RestParamType.body)
                    .required(true)
                    .description("Create a new Pin.")
                .endParam()
                .to("direct:pinsCreate");
        

        /**
        DELETE /pins/{pin_id} : Delete Pin
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("boards:read","See your public boards, including group boards you join")
                        .withScope("boards:write","Create, update, or delete your public boards")
                        .withScope("pins:read","See your public Pins")
                        .withScope("pins:write","Create, update, or delete your public Pins")
                
            .endSecurityDefinition()
            .delete("/pins/{pin_id}")
                .description("Delete Pin")
                .id("pinsDeleteApi")
                .produces("application/json")
                .outType(Void.class)
                .param()
                    .name("pinId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of a Pin.")
                .endParam()
                .param()
                    .name("adAccountId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .to("direct:pinsDelete");
        

        /**
        GET /pins/{pin_id} : Get Pin
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("boards:read","See your public boards, including group boards you join")
                        .withScope("pins:read","See your public Pins")
                
            .endSecurityDefinition()
            .get("/pins/{pin_id}")
                .description("Get Pin")
                .id("pinsGetApi")
                .produces("application/json")
                .outType(Pin.class)
                .param()
                    .name("pinId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of a Pin.")
                .endParam()
                .param()
                    .name("pinMetrics")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before <code>2023-03-20</code> lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.")
                .endParam()
                .param()
                    .name("adAccountId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .to("direct:pinsGet");
        

        /**
        GET /pins : List Pins
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("boards:read","See your public boards, including group boards you join")
                        .withScope("pins:read","See your public Pins")
                
            .endSecurityDefinition()
            .get("/pins")
                .description("List Pins")
                .id("pinsListApi")
                .produces("application/json")
                .outType(PinsList200Response.class)
                .param()
                    .name("bookmark")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Cursor used to fetch the next page of items")
                .endParam()
                .param()
                    .name("pageSize")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.")
                .endParam()
                .param()
                    .name("pinFilter")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Pin filter.")
                .endParam()
                .param()
                    .name("includeProtectedPins")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Specify if return pins from protected boards")
                .endParam()
                .param()
                    .name("pinType")
                    .type(RestParamType.query)
                    .required(false)
                    .description("The type of pins to return, currently only enabled for private pins")
                .endParam()
                .param()
                    .name("creativeTypes")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Pin creative types filter. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.")
                .endParam()
                .param()
                    .name("adAccountId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("pinMetrics")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before <code>2023-03-20</code> lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.")
                .endParam()
                .to("direct:pinsList");
        

        /**
        POST /pins/{pin_id}/save : Save Pin
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("boards:read","See your public boards, including group boards you join")
                        .withScope("boards:write","Create, update, or delete your public boards")
                        .withScope("pins:read","See your public Pins")
                        .withScope("pins:write","Create, update, or delete your public Pins")
                
            .endSecurityDefinition()
            .post("/pins/{pin_id}/save")
                .description("Save Pin")
                .id("pinsSaveApi")
                .produces("application/json")
                .outType(Pin.class)
                .consumes("application/json")
                .type(PinsSaveRequest.class)
                
                .param()
                    .name("pinId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of a Pin.")
                .endParam()
                .param()
                    .name("adAccountId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("pinsSaveRequest")
                    .type(RestParamType.body)
                    .required(true)
                    .description("Request object used to save an existing pin")
                .endParam()
                .to("direct:pinsSave");
        

        /**
        PATCH /pins/{pin_id} : Update Pin
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("boards:read","See your public boards, including group boards you join")
                        .withScope("boards:write","Create, update, or delete your public boards")
                        .withScope("pins:read","See your public Pins")
                        .withScope("pins:write","Create, update, or delete your public Pins")
                
            .endSecurityDefinition()
            .patch("/pins/{pin_id}")
                .description("Update Pin")
                .id("pinsUpdateApi")
                .produces("application/json")
                .outType(Pin.class)
                .consumes("application/json")
                .type(PinUpdate.class)
                
                .param()
                    .name("pinId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of a Pin.")
                .endParam()
                .param()
                    .name("adAccountId")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("pinUpdate")
                    .type(RestParamType.body)
                    .required(true)
                .endParam()
                .to("direct:pinsUpdate");
        
    }
}