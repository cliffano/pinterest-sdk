/*
 * Ad_groups_list_200_response.h
 *
 * 
 */

#ifndef _Ad_groups_list_200_response_H_
#define _Ad_groups_list_200_response_H_


#include <string>
#include "AdGroupResponse.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Ad_groups_list_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	Ad_groups_list_200_response();
	Ad_groups_list_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Ad_groups_list_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<AdGroupResponse> getItems();

	/*! \brief Set 
	 */
	void setItems(std::list <AdGroupResponse> items);
	/*! \brief Get 
	 */
	std::string getBookmark();

	/*! \brief Set 
	 */
	void setBookmark(std::string  bookmark);

private:
	std::list <AdGroupResponse>items;
	std::string bookmark;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Ad_groups_list_200_response_H_ */
