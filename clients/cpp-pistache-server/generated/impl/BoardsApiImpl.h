/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* BoardsApiImpl.h
*
* 
*/

#ifndef BOARDS_API_IMPL_H_
#define BOARDS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <BoardsApi.h>


#include "Board.h"
#include "BoardSection.h"
#include "BoardUpdate.h"
#include "Error.h"
#include "Object.h"
#include "Paginated.h"
#include <string>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class BoardsApiImpl : public org::openapitools::server::api::BoardsApi {
public:
    explicit BoardsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~BoardsApiImpl() override = default;

    void board_sections_create(const std::string &boardId, const BoardSection &boardSection, Pistache::Http::ResponseWriter &response);
    void board_sections_delete(const std::string &boardId, const std::string &sectionId, Pistache::Http::ResponseWriter &response);
    void board_sections_list(const std::string &boardId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response);
    void board_sections_list_pins(const std::string &boardId, const std::string &sectionId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response);
    void board_sections_update(const std::string &boardId, const std::string &sectionId, const BoardSection &boardSection, Pistache::Http::ResponseWriter &response);
    void boards_create(const Board &board, Pistache::Http::ResponseWriter &response);
    void boards_delete(const std::string &boardId, Pistache::Http::ResponseWriter &response);
    void boards_get(const std::string &boardId, Pistache::Http::ResponseWriter &response);
    void boards_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &privacy, Pistache::Http::ResponseWriter &response);
    void boards_list_pins(const std::string &boardId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response);
    void boards_update(const std::string &boardId, const BoardUpdate &boardUpdate, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
