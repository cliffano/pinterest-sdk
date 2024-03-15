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
public class LeadAdsApi extends RouteBuilder {

    @Override
    public void configure() throws Exception {
        

        /**
        DELETE /ad_accounts/{ad_account_id}/leads/subscriptions/{subscription_id} : Delete lead ads subscription
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:write","Create, update, or delete ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .delete("/ad_accounts/{ad_account_id}/leads/subscriptions/{subscription_id}")
                .description("Delete lead ads subscription")
                .id("adAccountsSubscriptionsDelByIdApi")
                .produces("application/json")
                .outType(Void.class)
                .param()
                    .name("adAccountId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("subscriptionId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of a subscription.")
                .endParam()
                .to("direct:adAccountsSubscriptionsDelById");
        

        /**
        GET /ad_accounts/{ad_account_id}/leads/subscriptions/{subscription_id} : Get lead ads subscription
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/ad_accounts/{ad_account_id}/leads/subscriptions/{subscription_id}")
                .description("Get lead ads subscription")
                .id("adAccountsSubscriptionsGetByIdApi")
                .produces("application/json")
                .outType(AdAccountGetSubscriptionResponse.class)
                .param()
                    .name("adAccountId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("subscriptionId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of a subscription.")
                .endParam()
                .to("direct:adAccountsSubscriptionsGetById");
        

        /**
        GET /ad_accounts/{ad_account_id}/leads/subscriptions : Get lead ads subscriptions
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:read","See all of your advertising data, including ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .get("/ad_accounts/{ad_account_id}/leads/subscriptions")
                .description("Get lead ads subscriptions")
                .id("adAccountsSubscriptionsGetListApi")
                .produces("application/json")
                .outType(AdAccountsSubscriptionsGetList200Response.class)
                .param()
                    .name("adAccountId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("pageSize")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.")
                .endParam()
                .param()
                    .name("bookmark")
                    .type(RestParamType.query)
                    .required(false)
                    .description("Cursor used to fetch the next page of items")
                .endParam()
                .to("direct:adAccountsSubscriptionsGetList");
        

        /**
        POST /ad_accounts/{ad_account_id}/leads/subscriptions : Create lead ads subscription
        **/
        rest()
            .securityDefinitions()
                .oauth2("pinterest_oauth2")
                    .flow("accessCode")
                    .tokenUrl("https://api.pinterest.com/v5/oauth/token")
                    .authorizationUrl("https://www.pinterest.com/oauth/")
                        .withScope("ads:write","Create, update, or delete ads, ad groups, campaigns etc.")
                
            .endSecurityDefinition()
            .post("/ad_accounts/{ad_account_id}/leads/subscriptions")
                .description("Create lead ads subscription")
                .id("adAccountsSubscriptionsPostApi")
                .produces("application/json")
                .outType(AdAccountCreateSubscriptionResponse.class)
                .consumes("application/json")
                .type(AdAccountCreateSubscriptionRequest.class)
                
                .param()
                    .name("adAccountId")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Unique identifier of an ad account.")
                .endParam()
                .param()
                    .name("adAccountCreateSubscriptionRequest")
                    .type(RestParamType.body)
                    .required(true)
                    .description("Subscription to create.")
                .endParam()
                .to("direct:adAccountsSubscriptionsPost");
        
    }
}