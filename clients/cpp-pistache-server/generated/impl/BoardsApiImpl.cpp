/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "BoardsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

BoardsApiImpl::BoardsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : BoardsApi(rtr)
{
}

void BoardsApiImpl::board_sections_create(const std::string &boardId, const BoardSection &boardSection, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::board_sections_delete(const std::string &boardId, const std::string &sectionId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::board_sections_list(const std::string &boardId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::board_sections_list_pins(const std::string &boardId, const std::string &sectionId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::board_sections_update(const std::string &boardId, const std::string &sectionId, const BoardSection &boardSection, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::boards_create(const Board &board, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::boards_delete(const std::string &boardId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::boards_get(const std::string &boardId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::boards_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &privacy, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::boards_list_pins(const std::string &boardId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void BoardsApiImpl::boards_update(const std::string &boardId, const BoardUpdate &boardUpdate, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

