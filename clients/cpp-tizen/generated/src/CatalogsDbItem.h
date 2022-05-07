/*
 * CatalogsDbItem.h
 *
 * 
 */

#ifndef _CatalogsDbItem_H_
#define _CatalogsDbItem_H_


#include <string>
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

class CatalogsDbItem : public Object {
public:
	/*! \brief Constructor.
	 */
	CatalogsDbItem();
	CatalogsDbItem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CatalogsDbItem();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCreatedAt();

	/*! \brief Set 
	 */
	void setCreatedAt(std::string  created_at);
	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::string getUpdatedAt();

	/*! \brief Set 
	 */
	void setUpdatedAt(std::string  updated_at);

private:
	std::string created_at;
	std::string id;
	std::string updated_at;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CatalogsDbItem_H_ */
