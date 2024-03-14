/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "pistache/endpoint.h"
#include "pistache/http.h"
#include "pistache/router.h"
#ifdef __linux__
#include <vector>
#include <signal.h>
#include <unistd.h>
#endif

#include "ApiBase.h"

#include "AdAccountsApiImpl.h"
#include "AdGroupsApiImpl.h"
#include "AdsApiImpl.h"
#include "AudiencesApiImpl.h"
#include "BoardsApiImpl.h"
#include "BulkApiImpl.h"
#include "CampaignsApiImpl.h"
#include "CatalogsApiImpl.h"
#include "ConversionEventsApiImpl.h"
#include "CustomerListsApiImpl.h"
#include "KeywordsApiImpl.h"
#include "MediaApiImpl.h"
#include "OauthApiImpl.h"
#include "PinsApiImpl.h"
#include "ProductGroupPromotionsApiImpl.h"
#include "ResourcesApiImpl.h"
#include "TermsApiImpl.h"
#include "TermsOfServiceApiImpl.h"
#include "UserAccountApiImpl.h"

#define PISTACHE_SERVER_THREADS     2
#define PISTACHE_SERVER_MAX_REQUEST_SIZE 32768
#define PISTACHE_SERVER_MAX_RESPONSE_SIZE 32768

static Pistache::Http::Endpoint *httpEndpoint;
#ifdef __linux__
static void sigHandler [[noreturn]] (int sig){
    switch(sig){
        case SIGINT:
        case SIGQUIT:
        case SIGTERM:
        case SIGHUP:
        default:
            httpEndpoint->shutdown();
            break;
    }
    exit(0);
}

static void setUpUnixSignals(std::vector<int> quitSignals) {
    sigset_t blocking_mask;
    sigemptyset(&blocking_mask);
    for (auto sig : quitSignals)
        sigaddset(&blocking_mask, sig);

    struct sigaction sa;
    sa.sa_handler = sigHandler;
    sa.sa_mask    = blocking_mask;
    sa.sa_flags   = 0;

    for (auto sig : quitSignals)
        sigaction(sig, &sa, nullptr);
}
#endif

using namespace org::openapitools::server::api;

int main() {
#ifdef __linux__
    std::vector<int> sigs{SIGQUIT, SIGINT, SIGTERM, SIGHUP};
    setUpUnixSignals(sigs);
#endif
    Pistache::Address addr(Pistache::Ipv4::any(), Pistache::Port(8080));

    httpEndpoint = new Pistache::Http::Endpoint((addr));
    auto router = std::make_shared<Pistache::Rest::Router>();

    auto opts = Pistache::Http::Endpoint::options()
        .threads(PISTACHE_SERVER_THREADS);
    opts.flags(Pistache::Tcp::Options::ReuseAddr);
    opts.maxRequestSize(PISTACHE_SERVER_MAX_REQUEST_SIZE);
    opts.maxResponseSize(PISTACHE_SERVER_MAX_RESPONSE_SIZE);
    httpEndpoint->init(opts);

    auto apiImpls = std::vector<std::shared_ptr<ApiBase>>();
    
    apiImpls.push_back(std::make_shared<AdAccountsApiImpl>(router));
    apiImpls.push_back(std::make_shared<AdGroupsApiImpl>(router));
    apiImpls.push_back(std::make_shared<AdsApiImpl>(router));
    apiImpls.push_back(std::make_shared<AudiencesApiImpl>(router));
    apiImpls.push_back(std::make_shared<BoardsApiImpl>(router));
    apiImpls.push_back(std::make_shared<BulkApiImpl>(router));
    apiImpls.push_back(std::make_shared<CampaignsApiImpl>(router));
    apiImpls.push_back(std::make_shared<CatalogsApiImpl>(router));
    apiImpls.push_back(std::make_shared<ConversionEventsApiImpl>(router));
    apiImpls.push_back(std::make_shared<CustomerListsApiImpl>(router));
    apiImpls.push_back(std::make_shared<KeywordsApiImpl>(router));
    apiImpls.push_back(std::make_shared<MediaApiImpl>(router));
    apiImpls.push_back(std::make_shared<OauthApiImpl>(router));
    apiImpls.push_back(std::make_shared<PinsApiImpl>(router));
    apiImpls.push_back(std::make_shared<ProductGroupPromotionsApiImpl>(router));
    apiImpls.push_back(std::make_shared<ResourcesApiImpl>(router));
    apiImpls.push_back(std::make_shared<TermsApiImpl>(router));
    apiImpls.push_back(std::make_shared<TermsOfServiceApiImpl>(router));
    apiImpls.push_back(std::make_shared<UserAccountApiImpl>(router));

    for (auto api : apiImpls) {
        api->init();
    }

    httpEndpoint->setHandler(router->handler());
    httpEndpoint->serve();

    httpEndpoint->shutdown();
}