/*
 * Products_by_product_group_filter_list_200_response_allOf.h
 *
 * 
 */

#ifndef _Products_by_product_group_filter_list_200_response_allOf_H_
#define _Products_by_product_group_filter_list_200_response_allOf_H_


#include <string>
#include "CatalogsProduct.h"
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

class Products_by_product_group_filter_list_200_response_allOf : public Object {
public:
	/*! \brief Constructor.
	 */
	Products_by_product_group_filter_list_200_response_allOf();
	Products_by_product_group_filter_list_200_response_allOf(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Products_by_product_group_filter_list_200_response_allOf();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Pins
	 */
	std::list<CatalogsProduct> getItems();

	/*! \brief Set Pins
	 */
	void setItems(std::list <CatalogsProduct> items);

private:
	std::list <CatalogsProduct>items;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Products_by_product_group_filter_list_200_response_allOf_H_ */